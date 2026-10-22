/* verilator lint_off UNUSEDSIGNAL */

/*
写verilog / SV之前, 要画好硬件框图: 组合逻辑块  寄存器  IP核  连线

硬件描述部分: 变量定义(wire reg logic)   连线   时序逻辑块  组合逻辑和组合逻辑块

UVM部分

// ⭐  打⭐标注的都是cpu的 流控制 信号, 流控制信号固定使用寄存器, 用时序逻辑赋值
*/

/*
SRAM	              0x0f00_0000~0x0fff_ffff     0x0f000000~0x0f001fff (8KB)
MROM	              0x2000_0000~0x2000_0fff

UART16550	          0x1000_0000~0x1000_0fff

Flash	              0x3000_0000~0x3fff_ffff     0x3000_0000 ~ 0x30ff_ffff (16MB)
SPI master	          0x1000_1000~0x1000_1fff

PSRAM	              0x8000_0000~0x9fff_ffff
SDRAM	              0xa000_0000~0xbfff_ffff

GPIO	              0x1000_2000~0x1000_200f

CLINT	              0x0200_0000~0x0200_ffff

PS2	                  0x1001_1000~0x1001_1007
VGA	                  0x2100_0000~0x211f_ffff
ChipLink MMIO	      0x4000_0000~0x7fff_ffff
ChipLink MEM	      0xc000_0000~0xffff_ffff




⭐: 实现流水线处理器

先把npc拆成5级流水, 中间加握手信号     IF | ID | EX | LS | (EX2)WB

结构冒险: 寄存器读只有 EX 用, 寄存器写只有 WB 用, 不会冲突
        存储器, IF 和 LS 的同时访问读通道会有结构冒险, Xbar采用LSU优先 (至于更复杂的调度策略先留着)

数据冒险: RAW 
    寄存器RAW[WB]: 存下还没写的寄存器, 每次读寄存器都遍历, 如果有还没写完(发生RAW)就阻塞  (只要把 in.ready 和 out.valid 置为无效即可)

    存储器RAW: 现在只有EX会写, 而且暂时不考虑自修改代码, 先默认 IF 不会 fetch 的指令是不会被修改的, 不存在存储器 RAW

控制冒险:
    选择最简单的分支预测

    冲刷操作:
    -> 清理控制信号                例如, 通过将valid置为无效, 可以将大部分部件正在执行的指令直接冲刷掉.
    -> 等待并消除影响控制信号的因素
    -> 确认推测正确后再更新状态量        寄存器堆, 更新CSR, 写内存, 访问外设


*/

module ysyx_26040135(
    
    // ⭐: 现在cpu的引脚已经完全符合要求
    input clock,
    input reset,
    input io_interrupt,   //

    // 这种 普通的port 不能直接连到 interface modport, 应该先练到通用的interface port, 再连到 modport
    output        io_master_awvalid,   
    input         io_master_awready,
    output [3:0]  io_master_awid,
    output [31:0] io_master_awaddr,
    output [7:0]  io_master_awlen,
    output [2:0]  io_master_awsize,
    output [1:0]  io_master_awburst,

    output        io_master_wvalid,
    input         io_master_wready,
    output [31:0] io_master_wdata,
    output [3:0]  io_master_wstrb,
    output        io_master_wlast,

    input         io_master_bvalid,
    output        io_master_bready,
    input  [3:0]  io_master_bid,
    input  [1:0]  io_master_bresp,

    output        io_master_arvalid,
    input         io_master_arready,
    output [3:0]  io_master_arid,
    output [31:0] io_master_araddr,
    output [7:0]  io_master_arlen,
    output [2:0]  io_master_arsize,
    output [1:0]  io_master_arburst,

    input         io_master_rvalid,
    output        io_master_rready,
    input  [3:0]  io_master_rid,
    input  [31:0] io_master_rdata,
    input  [1:0]  io_master_rresp,
    input         io_master_rlast,

    input         io_slave_awvalid,
    output        io_slave_awready,
    input  [3:0]  io_slave_awid,
    input  [31:0] io_slave_awaddr,
    input  [7:0]  io_slave_awlen,
    input  [2:0]  io_slave_awsize,
    input  [1:0]  io_slave_awburst,

    input         io_slave_wvalid,
    output        io_slave_wready,
    input  [31:0] io_slave_wdata,
    input  [3:0]  io_slave_wstrb,
    input         io_slave_wlast,

    output        io_slave_bvalid,
    input         io_slave_bready,
    output [3:0]  io_slave_bid,
    output [1:0]  io_slave_bresp,

    input         io_slave_arvalid,
    output        io_slave_arready,
    input  [3:0]  io_slave_arid,
    input  [31:0] io_slave_araddr,
    input  [7:0]  io_slave_arlen,
    input  [2:0]  io_slave_arsize,
    input  [1:0]  io_slave_arburst,

    output        io_slave_rvalid,
    input         io_slave_rready,
    output [3:0]  io_slave_rid,
    output [31:0] io_slave_rdata,
    output [1:0]  io_slave_rresp,
    output        io_slave_rlast

);

    logic [32*32-1:0] dbg_reg;   // ⭐⭐ 引出C
    logic [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid, _pc; // ⭐⭐ 引出C

    assign _pc = pc;   // ⭐⭐ 引出C
    assign {_mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid} = {mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid};
    
    logic [31:0] __instr;
    assign instr = __instr;



    reg [1:0][31:0] iag;   // inaccessible_gprs[0/1]
    reg [1:0] iag_amt [31:0]; 


    always @(posedge clock or posedge reset) begin
        if(reset) begin
            iag <= 0;
            iag_amt <= 0;
        end else begin
            if(rd_release != 0) begin   // 0是无效清理, 不为0说明是有效清零周期
                if(!(rd_release == rd_exu && (is_exu_rd | is_lsu_rd))) begin  // 如果这一拍rd_exu也有效, 那么什么都不操作

                    if(iag_amt[rd_release] == 2'b01) begin  // 1, 1
                        iag[0][rd_release] <= 1'b0;  
                        iag_amt[rd_release] <= 2'b00;

                    end else begin  // 1, 2

                        if(iag[1][rd_release] == 1'b0) begin   // 代表exu
                            iag[0][rd_release] <= 1'b0; 
                            iag_amt[rd_release] <= 2'b00;
                        end else begin
                            iag_amt[rd_release] <= 2'b01;
                        end
                    end
                    
                end
            end

            // 这里记录要写但是还没有写的rd, 如果是x0, 则不计入.  
            // 首先要判断是不是有效rd
            // 如果rd_release也有效, 那么写1, 1, 其余正常
            if((is_exu_rd | is_lsu_rd) && rd_exu != 0) begin
                iag[0][rd_exu] <= 1'b1;  
                if(rd_release != 0) begin   
                    iag_amt[rd_exu] <= 2'b01;
                end else begin
                    iag_amt[rd_exu] <= iag_amt[rd_exu] + 2'b01;
                end
                iag[1][rd_exu] <= is_exu_rd ? 1'b0 : 1'b1;
            end
        end
    end

    ysyx_26040135_decode Decode(.*);

    logic __GPR_wvalid;  // ⭐

    ysyx_26040135_dbg_register #(5, 32) GPR (
        .clock(clock),
        .reset(reset),
        .wen(wen), // WB
        .raddr1(rs1),  // ID
        .raddr2(rs2), // ID
        .waddr(rd), // WB
        .wdata(wdata), // WB

        .rdata1(rdata1),  
        .rdata2(rdata2),
        .dbg_regs(dbg_reg),
        .__GPR_wvalid(__GPR_wvalid)
    );

    ysyx_26040135_ALU alu_inst (.*);



/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/

// ⭐: BUS 总线相关
    ysyx_26040135_AXI4 bus_ifu ();
    ysyx_26040135_AXI4 bus_lsu ();
    ysyx_26040135_AXI4 bus_master ();
    ysyx_26040135_AXI4 bus_clint ();     // Xbar <-> CLINT (0x0200_0000~0x0200_ffff)
    ysyx_26040135_AXI4 bus_icache();

    assign io_master_awvalid = bus_master.awvalid;
    assign io_master_awid    = bus_master.awid;
    assign io_master_awaddr  = bus_master.awaddr;
    assign io_master_awlen   = bus_master.awlen;
    assign io_master_awsize  = bus_master.awsize;
    assign io_master_awburst = bus_master.awburst;

    assign bus_master.awready = io_master_awready;
    assign io_master_wvalid = bus_master.wvalid;
    assign io_master_wdata  = bus_master.wdata;
    assign io_master_wstrb  = bus_master.wstrb;
    assign io_master_wlast  = bus_master.wlast;


    assign bus_master.wready = io_master_wready;
    assign bus_master.bvalid = io_master_bvalid;
    assign bus_master.bid    = io_master_bid;
    assign bus_master.bresp  = io_master_bresp;


    assign io_master_bready = bus_master.bready;
    assign io_master_arvalid = bus_master.arvalid;
    assign io_master_arid    = bus_master.arid;
    assign io_master_araddr  = bus_master.araddr;
    assign io_master_arlen   = bus_master.arlen;
    assign io_master_arsize  = bus_master.arsize;
    assign io_master_arburst = bus_master.arburst;

    assign bus_master.arready = io_master_arready;
    assign bus_master.rvalid = io_master_rvalid;
    assign bus_master.rid    = io_master_rid;
    assign bus_master.rdata  = io_master_rdata;
    assign bus_master.rresp  = io_master_rresp;
    assign bus_master.rlast  = io_master_rlast;
    assign io_master_rready = bus_master.rready;



    logic        __ifu_instr_valid;   // IFU 性能计数器
    logic [1:0]  __ifu_error;      // ⭐⭐ 引出C
    logic        __ifu_master_validation_error;    // ⭐⭐ 引出C
    logic        __pc_is_updated;    // ⭐⭐ 引出C, 代表一个周期结束  // 和pc被update的上升沿的下一个周期同一个周期, 将此拉高一个周期

    ysyx_26040135_AXI_IFU ifu (
        .bus                            (bus_ifu.master),              // AXI4_Lite.master 接口
        .clock                          (clock),
        .reset                          (reset),
        .__pc_is_updated                (__pc_is_updated),   
        .pc                             (pc),
        .rdata                          (__instr),
        .__instr_valid                  (__ifu_instr_valid),   // @@-->
        .__error                        (__ifu_error),
        .__master_validation_error      (__ifu_master_validation_error)
    );

    logic [63:0] icache_hit_cnt;
    logic [63:0] icache_miss_cnt;
    logic [63:0] icache_hit_cycles;
    logic [63:0] icache_miss_cycles;

    logic __sw_avail;

    ysyx_26040135_AXI_ICACHE icache (
        .bus                            (bus_ifu.slave),
        .mbus                           (bus_icache.master),
        .clock                          (clock),
        .reset                          (reset),
        .icache_hit_cnt                 (icache_hit_cnt),
        .icache_miss_cnt                (icache_miss_cnt),
        .icache_hit_cycles              (icache_hit_cycles),
        .icache_miss_cycles             (icache_miss_cycles),
        .sw_addr                        (add_rst),
        .sw_avail                       (__sw_avail)
    );




    logic [1:0]  __lsu_error;   // ⭐⭐ 引出C
    logic        __lsu_read_complete;   // cpu读到这个, 需要立刻拿走数据启动GPR操作   // LSU 性能计数器
    logic        __lsu_write_complete;   // cpu读到这个, 需要立刻启动更新pc操作     // LSU 性能计数器
    logic [31:0] lsu_rdata;

    logic __addr_ready;  // ⭐  // 这两个信号只持续一个周期 (在__ifu_instr_valid出来的瞬时拉高一个周期)
    logic __data_ready;  // ⭐

    // ⭐ 注意: 这里必须用 assign 连续赋值. 写成 "logic __read = lb | ...;" 只是变量初值,
    //    只会在 t=0 求值一次(那时 lb..lhu 全为 0), 之后永远是 0 -> LSU 永远不会发起访存,
    //    所有 load/store 都会静默地拿到 0 / 什么也不做.
    logic __read, __write;
    assign __read  = lb | lh | lw | lbu | lhu;
    assign __write = sb | sh | sw;

    ysyx_26040135_AXI_LSU lsu (
        .bus                 (bus_lsu.master),              
        .clock               (clock),
        .reset               (reset),
        
        .__read              (__read),
        .__write             (__write),
        .__io_type           (__io_type),

        .__addr_ready        (__addr_ready),   

        .__data_ready        (__data_ready),  

        .addr                (add_rst),
        .wdata               (rdata2),
        
        .rdata               (lsu_rdata),
        .__error             (__lsu_error),
        .__read_complete     (__lsu_read_complete),   // @@-->
        .__write_complete    (__lsu_write_complete)   // @@-->
    );



ysyx_26040135_AXI4_Xbar u_xbar (
    .clock   (clock),
    .reset   (reset),
    .ifu_s   (bus_icache.slave),
    .lsu_s   (bus_lsu.slave),
    .m_m     (bus_master.master),
    .clint_m (bus_clint.master)
);

// ⭐ CLINT: mtime 每周期 +1, 只读, 接在 xbar 的 clint_m 上
//    (0x0200_0000 -> mtime[31:0], 0x0200_0004 -> mtime[63:32], 见 axi_clint.sv)
ysyx_26040135_AXI_CLINT u_clint (
    .bus   (bus_clint.slave),
    .clock (clock),
    .reset (reset)
);

    assign io_slave_awready = 1'b0;
    assign io_slave_wready  = 1'b0;
    assign io_slave_bvalid  = 1'b0;
    assign io_slave_bid     = 4'b0;
    assign io_slave_bresp   = 2'b0;
    assign io_slave_arready = 1'b0;
    assign io_slave_rvalid  = 1'b0;
    assign io_slave_rid     = 4'b0;
    assign io_slave_rdata   = 32'b0;
    assign io_slave_rresp   = 2'b0;
    assign io_slave_rlast   = 1'b0;


/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/



    always_ff @(posedge clock or posedge reset) begin

        else begin




            if(state == UDGPR) begin
                __GPR_wvalid <= 1'b0;
                __period_end <= 1'b1;
                jump_target  <= add_rst;   // ⭐ 赶在 GPR 写回生效之前锁存
            end


            if(state == UDPC) begin
                __pc_is_updated <= 1'b1;   // 这个信号作为了时钟边界, FETCH的组合逻辑不会触发
                __period_end <= 1'b0;
                __sw_avail <= 1'b0;
                // pc update
                if(jalr) begin
                    pc <= jump_target & ~32'h1;
                end
                else if(jal) begin
                    pc <= jump_target;
                end
                else if(blt) begin
                    pc <= ($signed(rdata1) < $signed(rdata2)) ? jump_target : pc_next_dft;
                end
                else if(beq) begin
                    pc <= (rdata1 == rdata2) ? jump_target : pc_next_dft;
                end
                else if(bne) begin
                    pc <= (rdata1 != rdata2) ? jump_target : pc_next_dft;
                end
                else if(bge) begin
                    pc <= ($signed(rdata1) >= $signed(rdata2)) ? jump_target : pc_next_dft;
                end
                else if(bltu) begin
                    pc <= (rdata1 < rdata2) ? jump_target : pc_next_dft;
                end
                else if(bgeu) begin
                    pc <= (rdata1 >= rdata2) ? jump_target : pc_next_dft;
                end

                // system
                else if(ecall) begin    //
                    mepc <= pc;
                    mcause <= 32'h0000000b;
                    pc <= mtvec;
                end
                else if(mret) begin     //
                    pc <= mepc;
                end
                else begin
                    pc <= pc_next_dft;
                end
            end
        end
    end
    














    `include "vsrc/dpi-f.sv"

endmodule
/* verilator lint_off UNUSEDSIGNAL */




