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

// ⭐: 把 wishbone 信号转化成 QSPI 信号

`timescale              1ns/1ps
`default_nettype        none

// Using EBH Command
module EF_PSRAM_CTRL_wb (
    // WB bus Interface
    input   wire        clk_i,
    input   wire        rst_i,
    input   wire [31:0] adr_i,
    input   wire [31:0] dat_i,
    output  wire [31:0] dat_o,
    input   wire [3:0]  sel_i,
    input   wire        cyc_i,
    input   wire        stb_i,
    output  wire        ack_o,
    input   wire        we_i,

    // External Interface to Quad I/O
    output  wire            sck,
    output  wire            ce_n,
    input   wire [3:0]      din,
    output  wire [3:0]      dout,
    output  wire [3:0]      douten
);

    localparam  ST_IDLE = 1'b0,
                ST_WAIT = 1'b1;

    wire        mr_sck;
    wire        mr_ce_n;
    wire [3:0]  mr_din;
    wire [3:0]  mr_dout;
    wire        mr_doe;

    wire        mw_sck;
    wire        mw_ce_n;
    wire [3:0]  mw_din;
    wire [3:0]  mw_dout;
    wire        mw_doe;

    // PSRAM Reader and Writer wires
    wire        mr_rd;
    wire        mr_done;
    wire        mw_wr;
    wire        mw_done;

    // ⭐ READER 复位后会先发 35h 把颗粒切到 QPI, 之后 WRITER 也要用 QPI 格式
    wire        qpi_mode;
    wire        mr_busy;

    //wire        doe;

    // WB Control Signals
    wire        wb_valid        =   cyc_i & stb_i;
    wire        wb_we           =   we_i & wb_valid;
    wire        wb_re           =   ~we_i & wb_valid;
    //wire[3:0]   wb_byte_sel     =   sel_i & {4{wb_we}};

    // ⭐ 进入 QPI 模式之前不接受任何事务.
    //    READER 复位后要先发 35h(不可被打断), 这时候如果放一笔事务进来, 引脚会被切到
    //    WRITER / 或者 mr_rd 抢跑, 把 35h 的时序打断, 颗粒就永远进不了 QPI 模式。
    //    上层不用管: pready 会一直压着, 等 qpi_mode 起来第一笔才开始跑。
    wire        allow_xfer = qpi_mode;

    // The FSM
    reg         state, nstate;
    always @ (posedge clk_i or posedge rst_i)
        if(rst_i)
            state <= ST_IDLE;
        else
            state <= nstate;

    always @* begin
        case(state)
            ST_IDLE :
                if(wb_valid && allow_xfer)
                    nstate = ST_WAIT;
                else
                    nstate = ST_IDLE;

            ST_WAIT :
                if((mw_done & wb_we) | (mr_done & wb_re))
                    nstate = ST_IDLE;
                else
                    nstate = ST_WAIT;
        endcase
    end

    wire [2:0]  size =  (sel_i == 4'b0001) ? 1 :
                        (sel_i == 4'b0010) ? 1 :
                        (sel_i == 4'b0100) ? 1 :
                        (sel_i == 4'b1000) ? 1 :
                        (sel_i == 4'b0011) ? 2 :
                        (sel_i == 4'b1100) ? 2 :
                        (sel_i == 4'b1111) ? 4 : 4;



    wire [7:0]  byte0 = (sel_i[0])          ? dat_i[7:0]   :
                        (sel_i[1] & size==1)? dat_i[15:8]  :
                        (sel_i[2] & size==1)? dat_i[23:16] :
                        (sel_i[3] & size==1)? dat_i[31:24] :
                        (sel_i[2] & size==2)? dat_i[23:16] :
                        dat_i[7:0];

    wire [7:0]  byte1 = (sel_i[1])          ? dat_i[15:8]  :
                        dat_i[31:24];

    wire [7:0]  byte2 = dat_i[23:16];

    wire [7:0]  byte3 = dat_i[31:24];

    wire [31:0] wdata = {byte3, byte2, byte1, byte0};

    /*
    wire [1:0]  waddr = (size==1 && sel_i[0]==1) ? 2'b00 :
                        (size==1 && sel_i[1]==1) ? 2'b01 :
                        (size==1 && sel_i[2]==1) ? 2'b10 :
                        (size==1 && sel_i[3]==1) ? 2'b11 :
                        (size==2 && sel_i[2]==1) ? 2'b10 :
                        2'b00;
                      */

    assign mr_rd    = ( (state==ST_IDLE ) & wb_re & allow_xfer );
    assign mw_wr    = ( (state==ST_IDLE ) & wb_we & allow_xfer );

    PSRAM_READER MR (
        .clk(clk_i),
        .rst_n(~rst_i),
        .addr({adr_i[23:2],2'b0}),    // 后24位, 默认4位对齐 (一次读取整字)
        .rd(mr_rd),
        //.size(size), Always read a word
        .size(3'd4),
        .done(mr_done),
        .line(dat_o),
        .sck(mr_sck),
        .ce_n(mr_ce_n),
        .din(mr_din),
        .dout(mr_dout),
        .douten(mr_doe),

        .qpi(qpi_mode),

        .busy(mr_busy)
    );

    PSRAM_WRITER MW (
        .clk(clk_i),
        .rst_n(~rst_i),
        .addr({adr_i[23:0]}),
        .wr(mw_wr),
        .size(size),
        .done(mw_done),
        .line(wdata),
        .sck(mw_sck),
        .ce_n(mw_ce_n),
        .din(mw_din),
        .dout(mw_dout),
        .douten(mw_doe),

        .qpi(qpi_mode)
    );

    // ⭐ 不能只按 wb_we 选引脚: READER 在发 35h 的时候如果来了一笔写请求,
    //    wb_we 已经是 1, 引脚会被切到还在 IDLE 的 WRITER 上, ce_n 一抬高就把
    //    颗粒的异步复位触发了, 35h 白发。所以 READER 忙的时候一律归 READER。
    wire use_mr = mr_busy | (~wb_we);

    assign sck     = use_mr ? mr_sck      : mw_sck;
    assign ce_n    = use_mr ? mr_ce_n     : mw_ce_n;
    assign dout    = use_mr ? mr_dout     : mw_dout;
    assign douten  = use_mr ? {4{mr_doe}} : {4{mw_doe}};

    assign mw_din = din;
    assign mr_din = din;
    assign ack_o = wb_we ? mw_done :mr_done ;
endmodule
