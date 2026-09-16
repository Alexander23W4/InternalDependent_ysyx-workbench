/*
	Copyright 2020 Efabless Corp.

	Author: Mohamed Shalan (mshalan@efabless.com)

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at:
	http://www.apache.org/licenses/LICENSE-2.0
	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/
/*
    QSPI PSRAM Controller

    Pseudostatic RAM (PSRAM) is DRAM combined with a self-refresh circuit.
    It appears externally as slower SRAM, albeit with a density/cost advantage
    over true SRAM, and without the access complexity of DRAM.

    The controller was designed after https://www.issi.com/WW/pdf/66-67WVS4M8ALL-BLL.pdf
    utilizing both EBh and 38h commands for reading and writting.
*/

/*
⭐ 这里在原来 QSPI 的基础上加了 QPI 模式:

    · 复位后, READER 先进 ENTER_QPI 状态, 用**基础 SPI**(命令也走 1 bit)发 35h,
      把颗粒切到 QPI 模式; 之后 qpi 拉高, READER/WRITER 都改用 QPI 格式通信。
    · 上层软件完全无感 —— 只是每笔访问少发几个 SCK。

    两种模式的相位(SCK 拍数, counter 就是第几拍):

                 命令         地址         dummy        数据(4字节)
      SPI (1-4-4) 0..7 (1bit)  8..13(4bit)  14..19(6)   读 20..27 / 写 14..21
      QPI (4-4-4) 0..1 (4bit)  2..7 (4bit)  8..13 (6)   读 14..21 / 写  8..15
                                               │
                    读命令 EBh 有 6 拍 dummy ──┘   写命令 38h 没有 dummy

    EBh 读: SPI 8+6+6+8 = 28 拍 -> QPI 2+6+6+8 = 22 拍
    38h 写: SPI 8+6+8   = 22 拍 -> QPI 2+6+8   = 16 拍
*/

`timescale              1ns/1ps
`default_nettype        none

module PSRAM_READER (
    input   wire            clk,
    input   wire            rst_n,
    input   wire [23:0]     addr,
    input   wire            rd,    // ctr -> 开始 read
    input   wire [2:0]      size,
    output  wire            done,  // fed -> 结束 read
    output  wire [31:0]     line,

    output  reg             sck,
    output  reg             ce_n,
    input   wire [3:0]      din,
    output  wire [3:0]      dout,
    output  wire            douten,

    output  reg             qpi,   // 已经切到 QPI 模式(给 WRITER 用)
    output  wire            busy   // 正在忙(ENTER_QPI 或 READ): 此时 QSPI 引脚必须归 READER
);

    localparam  IDLE      = 2'd0,
                ENTER_QPI = 2'd1,
                READ      = 2'd2;

    wire [7:0]  CMD_EBH = 8'heb;
    wire [7:0]  CMD_QPI = 8'h35;   // 进入 QPI 模式的命令

    // ⭐ 状态有 3 个, 必须比 1 位宽(原来写成 1 位, ENTER_QPI 被截断成 IDLE 了)
    reg  [1:0]  state, nstate;
    reg  [7:0]  counter;
    reg  [23:0] saddr;
    reg  [7:0]  data [3:0];

    // ---------- 相位边界(由 qpi 决定) ----------
    wire [7:0] CMD_LAST    = qpi ? 8'd1  : 8'd7;
    wire [7:0] ADDR_FIRST  = qpi ? 8'd2  : 8'd8;
    wire [7:0] ADDR_LAST   = qpi ? 8'd7  : 8'd13;
    wire [7:0] DUMMY_LAST  = qpi ? 8'd13 : 8'd19;
    wire [7:0] DATA_FIRST  = qpi ? 8'd14 : 8'd20;
    wire [7:0] FINAL_COUNT = DATA_FIRST + size*2 - 1;   // size=4 时: QPI 21 / SPI 27

    // ⭐ ENTER_QPI 的结束条件要带上 sck: 状态机在 **sck 上升沿** 换拍, 如果只判
    //    counter==7, 状态会在最后一拍的高电平**开始**就回 IDLE, 于是 dout 掉出
    //    ENTER_QPI 分支, 命令的最后一位就发不出去了(35h 变成 34h)。
    //    加上 sck 让它在最后一拍的下降沿才结束。
    assign done = (state == ENTER_QPI) ? (counter == 8'd7 && sck)
                                       : (counter == FINAL_COUNT + 1);

    // ⭐ 注意要把最后一个 sck 高电平也算进 busy:
    //     READER 的 state 会在某一拍的 sck **上升沿** 回到 IDLE, 而那一拍的高电平还要
    //     给颗粒采最后一位; 如果这时 mr_busy 掉 0, EF_PSRAM_CTRL_wb 就会把 QSPI 引脚
    //     切到 WRITER, ce_n 被抬高 -> 颗粒异步复位, 最后一位直接丢掉(35h 会变成 34h)
    assign busy = (state != IDLE) || sck;

    // ---------- 命令拍 ----------
    // SPI: 每拍 1 bit, 只走 SIO0;  QPI: 每拍 4 bit
    wire [3:0] cmd_nib = qpi ? ((counter[0] == 1'b0) ? CMD_EBH[7:4] : CMD_EBH[3:0])
                             : {3'b0, CMD_EBH[7 - counter[2:0]]};

    // ---------- 地址拍: 两种模式都是每拍 4 bit ----------
    wire [7:0] addr_ph8 = counter - ADDR_FIRST;   // 0..5 (显式截位, 免得 lint 报 WIDTHTRUNC)
    wire [2:0] addr_ph  = addr_ph8[2:0];
    reg  [3:0] addr_nib;
    always @(*) begin
        case (addr_ph)
            3'd0:    addr_nib = saddr[23:20];
            3'd1:    addr_nib = saddr[19:16];
            3'd2:    addr_nib = saddr[15:12];
            3'd3:    addr_nib = saddr[11:8];
            3'd4:    addr_nib = saddr[7:4];
            default: addr_nib = saddr[3:0];
        endcase
    end

    // ---------- 输出 ----------
    assign dout = (state == ENTER_QPI)  ? {3'b0, CMD_QPI[7 - counter[2:0]]} :
                  (counter <= CMD_LAST) ? cmd_nib :
                  (counter <= ADDR_LAST)? addr_nib : 4'h0;

    // 命令 + 地址阶段由控制器驱动 dio; 之后(dummy 和读数据)放开
    assign douten = (state == ENTER_QPI) || (counter <= ADDR_LAST);

    // ---------- 采样返回数据 ----------
    // 数据阶段每 2 拍一个字节, 每拍 4 bit, 先高 nibble 后低 nibble
    wire [7:0] byte_cnt = counter[7:1] - (qpi ? 8'd7 : 8'd10);
    wire [1:0] byte_index = byte_cnt[1:0];

    always @ (posedge clk)
        if(counter >= DATA_FIRST && counter <= FINAL_COUNT)
            if(sck)
                data[byte_index] <= {data[byte_index][3:0], din};

    // ---------- 状态机 ----------
    always @(*)
        case (state)
            IDLE:      nstate = rd ? READ : IDLE;
            ENTER_QPI: nstate = (counter == 8'd7 && sck) ? IDLE : ENTER_QPI;
            READ:      nstate = done ? IDLE : READ;
            default:   nstate = IDLE;
        endcase

    always @ (posedge clk or negedge rst_n)
        if(!rst_n) begin
            state <= ENTER_QPI;     // 复位后第一件事就是发 35h 切 QPI
            qpi   <= 1'b0;
        end else begin
            state <= nstate;
            if(state == ENTER_QPI && counter == 8'd7 && sck) qpi <= 1'b1;
        end

// SCK: ce_n 有效时每拍翻转; 一旦回 IDLE 就立刻停住(否则收尾时会多吐半个脉冲,
//      颗粒会把它当成第 9 拍)
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            sck <= 1'b0;
        else if(state == IDLE)
            sck <= 1'b0;
        else if(~ce_n)
            sck <= ~ sck;

// CE_N: ENTER_QPI 和 READ 期间持续拉低
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            ce_n <= 1'b1;
        else if(state == ENTER_QPI || state == READ)
            ce_n <= 1'b0;
        else
            ce_n <= 1'b1;

// COUNTER: 跟随 sck 计数
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            counter <= 8'b0;
        else if(sck & ~done)
            counter <= counter + 1'b1;
        else if(state == IDLE)
            counter <= 8'b0;

// SADDR: 在 IDLE 那一拍锁存地址
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            saddr <= 24'b0;
        else if((state == IDLE) && rd)
            saddr <= addr;

    generate
        genvar i;
        for(i=0; i<4; i=i+1)
            assign line[i*8+7: i*8] = data[i];
    endgenerate

endmodule

// Using 38H Command
module PSRAM_WRITER (
    input   wire            clk,
    input   wire            rst_n,
    input   wire [23:0]     addr,
    input   wire [31: 0]    line,
    input   wire [2:0]      size,
    input   wire            wr,
    input   wire            qpi,   // ⭐ 来自 READER: 颗粒是否已经切到 QPI 模式
    output  wire            done,

    output  reg             sck,
    output  reg             ce_n,
    input   wire [3:0]      din,
    output  wire [3:0]      dout,
    output  wire            douten
);
    localparam  IDLE = 1'b0,
                WRITE = 1'b1;

    reg         state, nstate;
    reg [7:0]   counter;
    reg [23:0]  saddr;

    wire[7:0]   CMD_38H = 8'h38;

    // ---------- 相位边界 ----------
    // 写命令没有 dummy, 所以 QPI 下地址结束就直接进数据
    wire [7:0] CMD_LAST    = qpi ? 8'd1  : 8'd7;
    wire [7:0] ADDR_FIRST  = qpi ? 8'd2  : 8'd8;
    wire [7:0] ADDR_LAST   = qpi ? 8'd7  : 8'd13;
    wire [7:0] DATA_FIRST  = qpi ? 8'd8  : 8'd14;
    wire [7:0] FINAL_COUNT = DATA_FIRST + size*2 - 1;   // size=4 时: QPI 15 / SPI 21

    always @*
        case (state)
            IDLE:  if(wr) nstate = WRITE; else nstate = IDLE;
            WRITE: if(done) nstate = IDLE; else nstate = WRITE;
        endcase

    always @ (posedge clk or negedge rst_n)
        if(!rst_n) state <= IDLE;
        else state <= nstate;

    // Drive the Serial Clock (sck) @ clk/2
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            sck <= 1'b0;
        else if(~ce_n)
            sck <= ~ sck;
        else if(state == IDLE)
            sck <= 1'b0;

    // ce_n logic
    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            ce_n <= 1'b1;
        else if(state == WRITE)
            ce_n <= 1'b0;
        else
            ce_n <= 1'b1;

    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            counter <= 8'b0;
        else if(sck & ~done)
            counter <= counter + 1'b1;
        else if(state == IDLE)
            counter <= 8'b0;

    always @ (posedge clk or negedge rst_n)
        if(!rst_n)
            saddr <= 24'b0;
        else if((state == IDLE) && wr)
            saddr <= addr;

    // ---------- 命令拍 ----------
    wire [3:0] cmd_nib = qpi ? ((counter[0] == 1'b0) ? CMD_38H[7:4] : CMD_38H[3:0])
                             : {3'b0, CMD_38H[7 - counter[2:0]]};

    // ---------- 地址拍 ----------
    wire [7:0] addr_ph8 = counter - ADDR_FIRST;   // 0..5 (显式截位, 免得 lint 报 WIDTHTRUNC)
    wire [2:0] addr_ph  = addr_ph8[2:0];
    reg  [3:0] addr_nib;
    always @(*) begin
        case (addr_ph)
            3'd0:    addr_nib = saddr[23:20];
            3'd1:    addr_nib = saddr[19:16];
            3'd2:    addr_nib = saddr[15:12];
            3'd3:    addr_nib = saddr[11:8];
            3'd4:    addr_nib = saddr[7:4];
            default: addr_nib = saddr[3:0];
        endcase
    end

    // ---------- 数据拍: 每 2 拍一个字节, 先高 nibble ----------
    wire [7:0] dat_off8 = counter - DATA_FIRST;   // 0..7 (显式截位)
    wire [2:0] dat_off  = dat_off8[2:0];
    wire [1:0] dat_byte = dat_off[2:1];
    wire [3:0] dat_nib  = dat_off[0] ? line[{2'b0, dat_byte}*8 + 3 -: 4]   // 低 nibble
                                     : line[{2'b0, dat_byte}*8 + 7 -: 4];  // 高 nibble

    assign dout = (counter <= CMD_LAST)   ? cmd_nib  :
                  (counter <= ADDR_LAST)  ? addr_nib :
                  (counter <= FINAL_COUNT)? dat_nib  : 4'h0;

    assign douten = (~ce_n);

    assign done = (counter == FINAL_COUNT + 1);

endmodule
