//-----------------------------------------------------------------
//                    SDRAM Controller (AXI4)
//                           V1.0
//                     Ultra-Embedded.com
//                     Copyright 2015-2019
//
//                 Email: admin@ultra-embedded.com
//
//                         License: GPL
// If you would like a version with a more permissive license for
// use in closed source commercial applications please contact me
// for details.
//-----------------------------------------------------------------
//
// This file is open source HDL; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public
// License along with this file; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//-----------------------------------------------------------------

//-----------------------------------------------------------------
//                          Generated File
//-----------------------------------------------------------------

/*
⭐: sdram 控制器(sac) 说明:

上层软件给到一个l/s指令之后, 由apb传递过来

sac自动启动状态机, 按照固定的流程占用若干周期自动完成和 SDRAM 的一次交互操作, 其中包含 precharge, refresh等若干操作
其中发送给 SDRAM 的控制信号均由 sac 根据流程(状态机)自动产生


一般来说, 对于实现协议的代码, RTFSC的时候, 应当先理解 外部控制信号和反馈信号, 内部控制信号 的意义
然后看这些信号(主要是内部控制信号)的控制逻辑
最后再去看状态机
*/

module sdram_axi_core
(
    // Inputs
     input           clk_i
    ,input           rst_i
    ,input  [  3:0]  inport_wr_i
    ,input           inport_rd_i
    ,input  [  7:0]  inport_len_i
    ,input  [ 31:0]  inport_addr_i
    ,input  [ 31:0]  inport_write_data_i
    ,input  [ 31:0]  sdram_data_input_i  //

    // Outputs
    ,output          inport_accept_o
    ,output          inport_ack_o
    ,output          inport_error_o
    ,output [ 31:0]  inport_read_data_o

    ,output          sdram_clk_o
    ,output          sdram_cke_o
    ,output          sdram_cs_o
    ,output          sdram_ras_o
    ,output          sdram_cas_o
    ,output          sdram_we_o
    ,output [  3:0]  sdram_dqm_o   //
    ,output [ 12:0]  sdram_addr_o
    ,output [  1:0]  sdram_ba_o
    ,output [ 31:0]  sdram_data_output_o   //
    ,output          sdram_data_out_en_o

    ,output          sdram_sel_o
);



//-----------------------------------------------------------------
// Key Params
//-----------------------------------------------------------------
parameter SDRAM_MHZ              = 50;
parameter SDRAM_ADDR_W           = 25;          // 每对颗粒用到的最高地址位(行地址最高位); 字扩展再往上 1 位是片选
parameter SDRAM_COL_W            = 9;           // 列地址宽度 512 列; 位扩展后一个列地址 = 一个 32 位字
parameter SDRAM_READ_LATENCY     = 2;           // 设置的读延迟

//-----------------------------------------------------------------
// Defines / Local params
//-----------------------------------------------------------------
localparam SDRAM_BANK_W          = 2;
localparam SDRAM_DQM_W           = 4;       // 位扩展: 32 位 = 2 片 x 2 Byte, 每片 2 个 DQM
localparam SDRAM_BANKS           = 2 ** SDRAM_BANK_W;     // 一共 4 个 bank

localparam SDRAM_ROW_W           = 13;      // 行地址宽度, 颗粒固定 8192 行

/*
⭐ 字节地址的位划分:   27位, 128MB 地址空间
    [26]      sel              (字扩展片选, 选哪一对颗粒)
    [25:13]   row   (13)  -> A[12:0]
    [12:11]   bank  ( 2)  -> BA[1:0]
    [10: 2]   col   ( 9)  -> A[8:0]          ⭐: 2-10 这 9 位作为列地址, 一个列地址直接代表一个word(4个字节), 而不是传统的一个地址一个字节
    [ 1: 0]   字内字节偏移                     ⭐: 就是原访存地址的后两位直接废掉, 这里我们不用, 也同时实现4字节对齐
                                                 后两位在 dpm, 读的时候有所体现
*/
localparam SDRAM_COL_LSB         = 2;
localparam SDRAM_BANK_LSB        = SDRAM_COL_LSB + SDRAM_COL_W;      // 11
localparam SDRAM_ROW_LSB         = SDRAM_BANK_LSB + SDRAM_BANK_W;    // 13
localparam SDRAM_SEL_BIT         = SDRAM_ADDR_W + 1;                 // 26

localparam SDRAM_REFRESH_CNT     = 2 ** SDRAM_ROW_W;          // 8192行
localparam SDRAM_START_DELAY     = 100000 / (1000 / SDRAM_MHZ); // 设置初始化等待100uS, 算出来相当于5000个周期
localparam SDRAM_REFRESH_CYCLES  = (64000*SDRAM_MHZ) / SDRAM_REFRESH_CNT-1;  // 64ms内, 发出 8192 次refresh请求, 
                                                                            // SDRAM每次收到这个请求, 都要按照逻辑刷新一个row


// ⭐: SDRAM总容量: 8192 * 512 * 4 * 2(Byte) = 2^25 Bytes = 32 MB



localparam CMD_W             = 4;    // 控制指令宽度
localparam CMD_NOP           = 4'b0111;
localparam CMD_ACTIVE        = 4'b0011;
localparam CMD_READ          = 4'b0101;
localparam CMD_WRITE         = 4'b0100;
localparam CMD_TERMINATE     = 4'b0110;
localparam CMD_PRECHARGE     = 4'b0010;
localparam CMD_REFRESH       = 4'b0001;
localparam CMD_LOAD_MODE     = 4'b0000;

// Mode: Burst Length = 1, CAS=2 (位扩展后 32 位一次取回, 不需要突发)
/*
模式寄存器配置:
| 位       | 字段               |     值 | 含义               |
| ------- | ---------------- | ----: | -------------------- |
| A12:A10 | Reserved         | `000` | 保留，通常写 0         |
| A9      | Write Burst Mode |   `0` | Burst write          |   Programmed Burst Length (读和写均按 M[2:0] 编程的突发长度执行）
| A8:A7   | Operating Mode   |  `00` | Standard operation   |   
| A6:A4   | CAS Latency      | `010` | **CAS = 2**          |   CAS
| A3      | Burst Type       |   `0` | **Sequential**       |   突发类型 (Sequential; Interleaved)
| A2:A0   | Burst Length     | `000` | **Burst Length = 1** |   突发长度

*/
// 位扩展后一次就能取回 32 位, 不再需要突发传输, 所以 Burst Length = 1
localparam MODE_REG          = {3'b000,1'b0,2'b00,3'b010,1'b0,3'b000};

// SM states
localparam STATE_W           = 4;

localparam STATE_INIT        = 4'd0;

localparam STATE_DELAY       = 4'd1;

localparam STATE_IDLE        = 4'd2;

localparam STATE_ACTIVATE    = 4'd3;  // 激活 row

localparam STATE_READ        = 4'd4;
localparam STATE_READ_WAIT   = 4'd5;

localparam STATE_WRITE0      = 4'd6;
localparam STATE_WRITE1      = 4'd7;

localparam STATE_PRECHARGE   = 4'd8;  // 关闭 row
localparam STATE_REFRESH     = 4'd9;  



localparam AUTO_PRECHARGE    = 10;    // SDRAM 地址线 A10 用来控制 Auto Precharge。
localparam ALL_BANKS         = 10;

localparam SDRAM_DATA_W      = 32;    // 位扩展: DQ 数据总线 32 位 (2 片 x16)

localparam CYCLE_TIME_NS     = 1000 / SDRAM_MHZ;   // 20ns 一个周期

// SDRAM timing
localparam SDRAM_TRCD_CYCLES = (20 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;  // ACTIVATE 后, 等待 1 周期后才能发出 READ/WRITE 命令
localparam SDRAM_TRP_CYCLES  = (20 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;  // PRECHARGE 后, 等待 1 周期后才能发出 ACTIVATE 命令
localparam SDRAM_TRFC_CYCLES = (60 + (CYCLE_TIME_NS-1)) / CYCLE_TIME_NS;  // AUTO REFRESH 后, 等3周期才能发出 下一条命令

//-----------------------------------------------------------------
// External Interface   ⭐: 把外部的inport信号转化成内部使用的信号  (外部控制信号和反馈信号)
//-----------------------------------------------------------------
wire [ 31:0]  ram_addr_w       = inport_addr_i;  
wire [  3:0]  ram_wr_w         = inport_wr_i;    // 写请求, 对应4个Bytes
wire          ram_rd_w         = inport_rd_i;    // 读请求
wire          ram_accept_w;
wire [ 31:0]  ram_write_data_w = inport_write_data_i;
wire [ 31:0]  ram_read_data_w;
wire          ram_ack_w;

wire          ram_req_w = (ram_wr_w != 4'b0) | ram_rd_w;

assign inport_ack_o       = ram_ack_w;      // 读/写已经完成
assign inport_read_data_o = ram_read_data_w;
assign inport_error_o     = 1'b0;
assign inport_accept_o    = ram_accept_w;    // 读/写请求已被接受

//-----------------------------------------------------------------
// Registers / Wires       ⭐: 内部控制寄存器 和 控制信号
//-----------------------------------------------------------------

// Xilinx placement pragmas:
//synthesis attribute IOB of command_q is "TRUE"
//synthesis attribute IOB of addr_q is "TRUE"
//synthesis attribute IOB of dqm_q is "TRUE"
//synthesis attribute IOB of cke_q is "TRUE"
//synthesis attribute IOB of bank_q is "TRUE"
//synthesis attribute IOB of data_q is "TRUE"

reg [CMD_W-1:0]        command_q;   // CS#	RAS#	CAS#	WE#	  控制指令

/*
ACTIVE   → Row Address   行地址
READ     → Column Address  列地址
WRITE    → Column Address

PRECHARGE → A10 有特殊含义
LOAD MODE → Mode Register
*/
reg [SDRAM_ROW_W-1:0]  addr_q;

reg [SDRAM_DATA_W-1:0] data_q;
reg                    data_rd_en_q;   // data_rd_en_q = 1 代表 SDRAM 驱动 DQ, 反之则是 sac 驱动 DQ
reg [SDRAM_DQM_W-1:0]  dqm_q;    // DQM mask
reg                    cke_q;    // cke_q = 1 → SDRAM 正常接受时钟/命令  cke_q = 0 → SDRAM 进入相应的低功耗/暂停状态
reg [SDRAM_BANK_W-1:0] bank_q;   // 选择 bank

// Buffer half word during read and write commands
reg [SDRAM_DATA_W-1:0] data_buffer_q;   // 一次 CPU 访问需要两个 SDRAM 数据传输。这个负责暂存另一半
reg [SDRAM_DQM_W-1:0]  dqm_buffer_q;    // 对应的 DQM 也需要拆分并暂存

wire [SDRAM_DATA_W-1:0] sdram_data_in_w;

reg                    refresh_q;    // refresh

reg [SDRAM_BANKS-1:0]  row_open_q;    // 每一位表示对应 Bank 有没有打开 Row
// ⭐ 字扩展: 多存 1 位片选, 否则 0xa0000000 和 0xa2000000 的 row/bank/col 完全相同,
//    会被误判成"行命中"而跳过 ACTIVE, 读到另一对颗粒里的旧数据
reg [SDRAM_ROW_W:0]    active_row_q[0:SDRAM_BANKS-1];   // 每个 Bank 当前打开的 {片选, row}

reg  [STATE_W-1:0]     state_q;    // state
reg  [STATE_W-1:0]     next_state_r;  // next  (r代表 combinational logic)
reg  [STATE_W-1:0]     target_state_r;    // 完成当前这个时序操作/延时以后，最终想去哪个状态
reg  [STATE_W-1:0]     target_state_q;    // 把 target_state_r 存进寄存器
reg  [STATE_W-1:0]     delay_state_q;     // 进入 STATE_DELAY 之前，是什么状态触发了这个 delay

// Address bits
/*
注意, 地址来到这里之前都是访存地址的透传: 比如
0xa000200b = 1010 0000 0000 0000 0010 0000 0000 1011
到这里直接是分割原始的访存地址: 
row   = addr[24:12] = 0x0002
bank  = addr[11:10] = 0
word  = addr[9:2]   = 2
A[8:0]= 000000100  = 0x004      (A[0]=0)
*/
// ⭐ 字扩展: 用地址的第 26 位作为额外的片选, 选择哪一对(x32)颗粒
//    0 -> 第一对 0xa0000000~0xa3ffffff, 1 -> 第二对 0xa4000000~0xa7ffffff, 共 128MB
wire sdram_sel = ram_addr_w[SDRAM_SEL_BIT];

wire [SDRAM_ROW_W-1:0]  addr_col_w  = {{(SDRAM_ROW_W-SDRAM_COL_W){1'b0}}, ram_addr_w[SDRAM_COL_LSB+SDRAM_COL_W-1:SDRAM_COL_LSB]};   // A[8:0] = addr[10:2], 一列一个整字
wire [SDRAM_ROW_W-1:0]  addr_row_w  = ram_addr_w[SDRAM_ROW_LSB+SDRAM_ROW_W-1:SDRAM_ROW_LSB];        // addr[25:13]
wire [SDRAM_BANK_W-1:0] addr_bank_w = ram_addr_w[SDRAM_BANK_LSB+SDRAM_BANK_W-1:SDRAM_BANK_LSB];     // addr[12:11]

assign sdram_sel_o = sdram_sel;

//-----------------------------------------------------------------
// SDRAM State Machine
//-----------------------------------------------------------------
always @ *
begin
    next_state_r   = state_q;   // 默认保持原状态
    target_state_r = target_state_q;

    case (state_q)
    //-----------------------------------------
    // STATE_INIT
    //-----------------------------------------
    STATE_INIT :
    begin
        if (refresh_q)          // 刷新之后, 才进入 IDLE 预备状态
            next_state_r = STATE_IDLE;
    end
    //-----------------------------------------
    // STATE_IDLE
    //-----------------------------------------
    STATE_IDLE :  // 两种请求, 一种 refresh 请求, 一种 ram-req, 优先处理 refresh 
    begin
        // Pending refresh
        // Note: tRAS (open row time) cannot be exceeded due to periodic
        //        auto refreshes.
        if (refresh_q)
        begin
            // Close open rows, then refresh
            if (|row_open_q)
                next_state_r = STATE_PRECHARGE;   // 有行打开, 先 precharge 关闭这一行   (进行 refresh 和 读写 操作之前, 都需要 precharge)
            else
                next_state_r = STATE_REFRESH;

            target_state_r = STATE_REFRESH;   // ⭐
        end
        // Access request
        else if (ram_req_w)             // 如果不需要刷新, 若有 ram 操作请求, 则处理
        begin
            // Open row hit
            if (row_open_q[addr_bank_w] && {sdram_sel, addr_row_w} == active_row_q[addr_bank_w])  // 刚好就是现在打开的row
            begin
                if (!ram_rd_w)
                    next_state_r = STATE_WRITE0;
                else
                    next_state_r = STATE_READ;
            end
            // Row miss, close row, open new row
            else if (row_open_q[addr_bank_w])
            begin
                next_state_r   = STATE_PRECHARGE;   // 关掉当前的 row  (关闭->激活)

                if (!ram_rd_w)
                    target_state_r = STATE_WRITE0;
                else
                    target_state_r = STATE_READ;
            end
            // No open row, open row
            else
            begin
                next_state_r   = STATE_ACTIVATE;    // 激活所需的 row  (直接激活)

                if (!ram_rd_w)
                    target_state_r = STATE_WRITE0;
                else
                    target_state_r = STATE_READ;
            end
        end
    end
    //-----------------------------------------
    // STATE_ACTIVATE
    //-----------------------------------------
    STATE_ACTIVATE :   // 确定有读写请求, 但是对应的row没有激活, 激活 row 
    begin
        // Proceed to read or write state
        next_state_r = target_state_r;
    end
    //-----------------------------------------
    // STATE_READ
    //-----------------------------------------
    STATE_READ :
    begin
        next_state_r = STATE_READ_WAIT;
    end
    //-----------------------------------------
    // STATE_READ_WAIT
    //-----------------------------------------
    STATE_READ_WAIT :
    begin
        next_state_r = STATE_IDLE;

        // Another pending read request (with no refresh pending)
        if (!refresh_q && ram_req_w && ram_rd_w)
        begin
            // Open row hit ⭐
            if (row_open_q[addr_bank_w] && {sdram_sel, addr_row_w} == active_row_q[addr_bank_w])
                next_state_r = STATE_READ;
        end
    end
    //-----------------------------------------
    // STATE_WRITE0
    //-----------------------------------------
    STATE_WRITE0 :
    begin
        next_state_r = STATE_WRITE1;
    end
    //-----------------------------------------
    // STATE_WRITE1
    //-----------------------------------------
    STATE_WRITE1 :
    begin
        next_state_r = STATE_IDLE;

        // Another pending write request (with no refresh pending)
        if (!refresh_q && ram_req_w && (ram_wr_w != 4'b0))
        begin
            // Open row hit ⭐
            if (row_open_q[addr_bank_w] && {sdram_sel, addr_row_w} == active_row_q[addr_bank_w])
                next_state_r = STATE_WRITE0;
        end
    end
    //-----------------------------------------
    // STATE_PRECHARGE
    //-----------------------------------------
    STATE_PRECHARGE :
    begin
        // Closing row to perform refresh
        if (target_state_r == STATE_REFRESH)
            next_state_r = STATE_REFRESH;
        // Must be closing row to open another
        else
            next_state_r = STATE_ACTIVATE;
    end
    //-----------------------------------------
    // STATE_REFRESH
    //-----------------------------------------
    STATE_REFRESH :
    begin
        next_state_r = STATE_IDLE;
    end
    //-----------------------------------------
    // STATE_DELAY
    //-----------------------------------------
    STATE_DELAY :
    begin
        next_state_r = delay_state_q;
    end
    default:
        ;
   endcase
end

//-----------------------------------------------------------------
// Delays
//-----------------------------------------------------------------
localparam DELAY_W = 4;

reg [DELAY_W-1:0] delay_q;
reg [DELAY_W-1:0] delay_r;

/* verilator lint_off WIDTH */

always @ *
begin
    case (state_q)
    //-----------------------------------------
    // STATE_ACTIVATE
    //-----------------------------------------
    STATE_ACTIVATE :
    begin
        // tRCD (ACTIVATE -> READ / WRITE)
        delay_r = SDRAM_TRCD_CYCLES;
    end
    //-----------------------------------------
    // STATE_READ_WAIT
    //-----------------------------------------
    STATE_READ_WAIT :
    begin
        delay_r = SDRAM_READ_LATENCY;

        // Another pending read request (with no refresh pending)
        if (!refresh_q && ram_req_w && ram_rd_w)
        begin
            // Open row hit
            if (row_open_q[addr_bank_w] && {sdram_sel, addr_row_w} == active_row_q[addr_bank_w])
                delay_r = 4'd0;
        end
    end
    //-----------------------------------------
    // STATE_PRECHARGE
    //-----------------------------------------
    STATE_PRECHARGE :
    begin
        // tRP (PRECHARGE -> ACTIVATE)
        delay_r = SDRAM_TRP_CYCLES;
    end
    //-----------------------------------------
    // STATE_REFRESH
    //-----------------------------------------
    STATE_REFRESH :
    begin
        // tRFC
        delay_r = SDRAM_TRFC_CYCLES;
    end
    //-----------------------------------------
    // STATE_DELAY
    //-----------------------------------------
    STATE_DELAY:
    begin
        delay_r = delay_q - 4'd1;
    end
    //-----------------------------------------
    // Others
    //-----------------------------------------
    default:
    begin
        delay_r = {DELAY_W{1'b0}};
    end
    endcase
end
/* verilator lint_on WIDTH */

// Record target state
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    target_state_q   <= STATE_IDLE;
else
    target_state_q   <= target_state_r;

// Record delayed state
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    delay_state_q   <= STATE_IDLE;
// On entering into delay state, record intended next state
else if (state_q != STATE_DELAY && delay_r != {DELAY_W{1'b0}})
    delay_state_q   <= next_state_r;

// Update actual state
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    state_q   <= STATE_INIT;
// Delaying...
else if (delay_r != {DELAY_W{1'b0}})
    state_q   <= STATE_DELAY;
else
    state_q   <= next_state_r;

// Update delay flops
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    delay_q   <= {DELAY_W{1'b0}};
else
    delay_q   <= delay_r;

//-----------------------------------------------------------------
// Refresh counter
//-----------------------------------------------------------------
localparam REFRESH_CNT_W = 17;

reg [REFRESH_CNT_W-1:0] refresh_timer_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    refresh_timer_q <= SDRAM_START_DELAY + 100;
else if (refresh_timer_q == {REFRESH_CNT_W{1'b0}})
    refresh_timer_q <= SDRAM_REFRESH_CYCLES;
else
    refresh_timer_q <= refresh_timer_q - 1;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    refresh_q <= 1'b0;
else if (refresh_timer_q == {REFRESH_CNT_W{1'b0}})
    refresh_q <= 1'b1;
else if (state_q == STATE_REFRESH)
    refresh_q <= 1'b0;

//-----------------------------------------------------------------
// Input sampling
//-----------------------------------------------------------------

reg [SDRAM_DATA_W-1:0] sample_data0_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    sample_data0_q <= {SDRAM_DATA_W{1'b0}};
else
    sample_data0_q <= sdram_data_in_w;

reg [SDRAM_DATA_W-1:0] sample_data_q;
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    sample_data_q <= {SDRAM_DATA_W{1'b0}};
else
    sample_data_q <= sample_data0_q;

//-----------------------------------------------------------------
// Command Output
//-----------------------------------------------------------------
integer idx;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
begin
    command_q       <= CMD_NOP;
    data_q          <= {SDRAM_DATA_W{1'b0}};
    addr_q          <= {SDRAM_ROW_W{1'b0}};
    bank_q          <= {SDRAM_BANK_W{1'b0}};
    cke_q           <= 1'b0;
    dqm_q           <= {SDRAM_DQM_W{1'b0}};
    data_rd_en_q    <= 1'b1;
    dqm_buffer_q    <= {SDRAM_DQM_W{1'b0}};

    for (idx=0;idx<SDRAM_BANKS;idx=idx+1)
        active_row_q[idx] <= {(SDRAM_ROW_W+1){1'b0}};

    row_open_q      <= {SDRAM_BANKS{1'b0}};
end
else
begin
    case (state_q)
    //-----------------------------------------
    // STATE_IDLE / Default (delays)
    //-----------------------------------------
    default:
    begin
        // Default
        command_q    <= CMD_NOP;
        addr_q       <= {SDRAM_ROW_W{1'b0}};
        bank_q       <= {SDRAM_BANK_W{1'b0}};
        data_rd_en_q <= 1'b1;
    end
    //-----------------------------------------
    // STATE_INIT
    //-----------------------------------------
    STATE_INIT:
    begin
        // Assert CKE
        if (refresh_timer_q == 50)
        begin
            // Assert CKE after 100uS
            cke_q <= 1'b1;
        end
        // PRECHARGE
        else if (refresh_timer_q == 40)
        begin
            // Precharge all banks
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b1;
        end
        // 2 x REFRESH (with at least tREF wait)
        else if (refresh_timer_q == 20 || refresh_timer_q == 30)
        begin
            command_q <= CMD_REFRESH;
        end
        // Load mode register
        else if (refresh_timer_q == 10)
        begin
            command_q <= CMD_LOAD_MODE;
            addr_q    <= MODE_REG;
        end
        // Other cycles during init - just NOP
        else
        begin
            command_q   <= CMD_NOP;
            addr_q      <= {SDRAM_ROW_W{1'b0}};
            bank_q      <= {SDRAM_BANK_W{1'b0}};
        end
    end
    //-----------------------------------------
    // STATE_ACTIVATE
    //-----------------------------------------
    STATE_ACTIVATE :
    begin
        // Select a row and activate it
        command_q     <= CMD_ACTIVE;
        addr_q        <= addr_row_w;
        bank_q        <= addr_bank_w;

        active_row_q[addr_bank_w]  <= {sdram_sel, addr_row_w};
        row_open_q[addr_bank_w]    <= 1'b1;
    end
    //-----------------------------------------
    // STATE_PRECHARGE
    //-----------------------------------------
    STATE_PRECHARGE :
    begin
        // Precharge due to refresh, close all banks
        if (target_state_r == STATE_REFRESH)
        begin
            // Precharge all banks
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b1;
            row_open_q          <= {SDRAM_BANKS{1'b0}};
        end
        else
        begin
            // Precharge specific banks
            command_q           <= CMD_PRECHARGE;
            addr_q[ALL_BANKS]   <= 1'b0;
            bank_q              <= addr_bank_w;

            row_open_q[addr_bank_w] <= 1'b0;
        end
    end
    //-----------------------------------------
    // STATE_REFRESH
    //-----------------------------------------
    STATE_REFRESH :
    begin
        // Auto refresh
        command_q   <= CMD_REFRESH;
        addr_q      <= {SDRAM_ROW_W{1'b0}};
        bank_q      <= {SDRAM_BANK_W{1'b0}};
    end
    //-----------------------------------------
    // STATE_READ
    //-----------------------------------------
    STATE_READ :
    begin
        command_q   <= CMD_READ;
        addr_q      <= addr_col_w;
        bank_q      <= addr_bank_w;

        // Disable auto precharge (auto close of row)
        addr_q[AUTO_PRECHARGE]  <= 1'b0;

        // Read mask (all bytes in burst)
        dqm_q       <= {SDRAM_DQM_W{1'b0}};
    end
    //-----------------------------------------
    // STATE_WRITE0
    //-----------------------------------------
    STATE_WRITE0 :
    begin
        command_q       <= CMD_WRITE;
        addr_q          <= addr_col_w;
        bank_q          <= addr_bank_w;
        // 位扩展 + BL=1: 一条 WRITE 命令就送出完整的 32 位数据
        data_q          <= ram_write_data_w;

        // Disable auto precharge (auto close of row)
        addr_q[AUTO_PRECHARGE]  <= 1'b0;

        // Write mask: 4 个 DQM 各管一个 Byte
        dqm_q           <= ~ram_wr_w[3:0];
        dqm_buffer_q    <= {SDRAM_DQM_W{1'b1}};

        data_rd_en_q    <= 1'b0;
    end
    //-----------------------------------------
    // STATE_WRITE1
    //-----------------------------------------
    STATE_WRITE1 :
    begin
        // BL=1: 没有第二拍数据了, 这一拍只用来产生 ack
        command_q   <= CMD_NOP;
        data_q      <= {SDRAM_DATA_W{1'b0}};

        // 全部字节屏蔽, 保证这一拍不会写进颗粒
        dqm_q       <= {SDRAM_DQM_W{1'b1}};

        // Disable auto precharge (auto close of row)
        addr_q[AUTO_PRECHARGE]  <= 1'b0;
    end
    endcase
end





//-----------------------------------------------------------------
// Record read events
//-----------------------------------------------------------------
reg [SDRAM_READ_LATENCY+1:0]  rd_q;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    rd_q    <= {(SDRAM_READ_LATENCY+2){1'b0}};
else
    rd_q    <= {rd_q[SDRAM_READ_LATENCY:0], (state_q == STATE_READ)};



//-----------------------------------------------------------------
// Data Buffer
//-----------------------------------------------------------------

// 位扩展 + BL=1: 一次 CAS latency 之后 DQ 上就是完整的 32 位数据。
// 这里在 rd_q 命中时把采样值锁一拍, 正好和 ack_q 对齐。
always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    data_buffer_q <= {SDRAM_DATA_W{1'b0}};
else if (rd_q[SDRAM_READ_LATENCY+1])
    data_buffer_q <= sample_data_q;

// Read data output
assign ram_read_data_w = data_buffer_q;



//-----------------------------------------------------------------
// ACK
//-----------------------------------------------------------------
reg ack_q;

always @ (posedge clk_i or posedge rst_i)
if (rst_i)
    ack_q   <= 1'b0;
else
begin
    if (state_q == STATE_WRITE1)
        ack_q <= 1'b1;
    else if (rd_q[SDRAM_READ_LATENCY+1])
        ack_q <= 1'b1;
    else
        ack_q <= 1'b0;
end

assign ram_ack_w = ack_q;

// Accept command in READ or WRITE0 states
assign ram_accept_w = (state_q == STATE_READ || state_q == STATE_WRITE0);



//-----------------------------------------------------------------
// SDRAM I/O
//-----------------------------------------------------------------
assign sdram_clk_o           = ~clk_i;
assign sdram_data_out_en_o   = ~data_rd_en_q;
assign sdram_data_output_o   =  data_q;
assign sdram_data_in_w       = sdram_data_input_i;

assign sdram_cke_o  = cke_q;
assign sdram_cs_o   = command_q[3];
assign sdram_ras_o  = command_q[2];
assign sdram_cas_o  = command_q[1];
assign sdram_we_o   = command_q[0];
assign sdram_dqm_o  = dqm_q;
assign sdram_ba_o   = bank_q;
assign sdram_addr_o = addr_q;



//-----------------------------------------------------------------
// Simulation only
//-----------------------------------------------------------------
`ifdef verilator
reg [79:0] dbg_state;

always @ *
begin
    case (state_q)
    STATE_INIT        : dbg_state = "INIT";
    STATE_DELAY       : dbg_state = "DELAY";
    STATE_IDLE        : dbg_state = "IDLE";
    STATE_ACTIVATE    : dbg_state = "ACTIVATE";
    STATE_READ        : dbg_state = "READ";
    STATE_READ_WAIT   : dbg_state = "READ_WAIT";
    STATE_WRITE0      : dbg_state = "WRITE0";
    STATE_WRITE1      : dbg_state = "WRITE1";
    STATE_PRECHARGE   : dbg_state = "PRECHARGE";
    STATE_REFRESH     : dbg_state = "REFRESH";
    default           : dbg_state = "UNKNOWN";
    endcase
end
`endif


endmodule
