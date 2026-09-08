/* verilator lint_off UNUSEDSIGNAL */

/*
The CSR register address space in RISC-V is 12 bits, i.e., 4096 registers, but RISC-V has only defined over 300 CSRs; 
if we exclude performance counters and PMP (Physical Memory Protection) related CSRs, there are only 78 left; 
if we further only count M-mode CSRs, there are only 28; 
if we only consider the few CSRs necessary for running RT-Thread that were implemented in NEMU, there are less than 5 left. 
Therefore, there is no need for us to instantiate hundreds or even 4096 CSRs. 
Although this would only take up some memory for NEMU, it would result in significant area overhead for NPC. 
Specifically, we only need to instantiate the CSRs we need, then read and write them according to their addresses.


The CSRs that need to be implemented currently do not have any special side effects. Although the RISC-V manual describes various functions for mstatus, we don't need to use them at present. We just need to initialize them correctly to pass DiffTest.
Only a few CSR instructions will be used currently, but unlike general instructions, CSR instructions atomically read and write the same CSR register. Additionally, we can ignore the read and write attributes of each field in the CSRs for now (if you haven't heard of them, you need to carefully RTFM), including WPRI, WLRL, and WARL, which define the behavior when illegal values are written to CSR fields. The programs we are running currently do not depend on these behaviors, so we can temporarily skip implementing these read and write attributes.
Both ecall and mret will cause NPC to jump, which can be easily implemented by reusing the data path of the next address logic.
Currently, we only need to implement the ecall exception, which is a trap exception that NPC must respond to unconditionally. We just need to set mcause and mepc simultaneously, then jump to the exception entry stored in mtvec.
*/

/*
implement 5 CSRs     mstatus  mepc  mtvec  mcause mcycle

*/

/*
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(rd) = (rd == 0) ? R(rd) : isa_csr_read(imm), isa_csr_write(imm, src1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) | src1, rs1));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) & ~(src1), rs1));

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.mepc);   // mstatus to go 

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(0xb, s->pc)); 
*/


/*

实现后, 尝试通过内联汇编多次读出mcycle寄存器, 检查其值是否自动递增. 在内联汇编中可以使用伪指令csrr, 其对应的真实指令即为csrrs.

为了标识不同同学的NPC, 我们可以利用CSR中的标识寄存器. 具体地, RISC-V中定义了mvendorid和marchid这两个CSR, 我们可以利用它们存放一些标识信息. 
之后, 程序在运行时刻可以通过CSR指令将这些标识信息读到通用寄存器中, 并进一步打印这些信息.



mvendorid - 从中读出ysyx的ASCII码, 即0x79737978
marchid - 从中读出学号数字部分的十进制表示, 假设你的学号为ysyx_22068888, 若将读出的信息解释为整数, 则应为22068888, 即0x150be98

实现后, 可在TRM进入main()函数前, 通过内联汇编读出上述两个CSR的值, 然后通过printf()输出它们.
*/

/*
写verilog / SV之前, 要画好硬件框图: 组合逻辑块  寄存器  IP核  连线

硬件描述部分: 变量定义(wire reg logic)   连线   时序逻辑块  组合逻辑和组合逻辑块

UVM部分

// ⭐  打⭐标注的都是cpu的 流控制 信号, 流控制信号固定使用寄存器, 用时序逻辑赋值
*/

/*
⭐
CLINT	              0x0200_0000~0x0200_ffff
SRAM	              0x0f00_0000~0x0fff_ffff
UART16550	          0x1000_0000~0x1000_0fff
SPI master	          0x1000_1000~0x1000_1fff
GPIO	              0x1000_2000~0x1000_200f
PS2	                  0x1001_1000~0x1001_1007
MROM	              0x2000_0000~0x2000_0fff
VGA	                  0x2100_0000~0x211f_ffff
Flash	              0x3000_0000~0x3fff_ffff
ChipLink MMIO	      0x4000_0000~0x7fff_ffff
PSRAM	              0x8000_0000~0x9fff_ffff
SDRAM	              0xa000_0000~0xbfff_ffff
ChipLink MEM	      0xc000_0000~0xffff_ffff


⭐: cpu要改, 把Xbar 去掉, 并且把接入 ysyxSoc Xbar 的 AXI_master 接口 output引出去

大改npc:
对外引脚已经完成
2-1仲裁Xbar 已经完成

还剩下用dpic-import函数导出 几个信号    pc  CSR  GPR  Error_msgs
*/

module ysyx_26040135(
    
    // ⭐: 现在cpu的引脚已经完全符合要求
    input clock,
    input reset,
    input io_interrupt,   //


    output        auto_master_out_awvalid,
    input         auto_master_out_awready,
    output [3:0]  auto_master_out_awid,
    output [31:0] auto_master_out_awaddr,
    output [7:0]  auto_master_out_awlen,
    output [2:0]  auto_master_out_awsize,
    output [1:0]  auto_master_out_awburst,

    output        auto_master_out_wvalid,
    input         auto_master_out_wready,
    output [31:0] auto_master_out_wdata,
    output [3:0]  auto_master_out_wstrb,
    output        auto_master_out_wlast,

    input         auto_master_out_bvalid,
    output        auto_master_out_bready,
    input  [3:0]  auto_master_out_bid,
    input  [1:0]  auto_master_out_bresp,

    output        auto_master_out_arvalid,
    input         auto_master_out_arready,
    output [3:0]  auto_master_out_arid,
    output [31:0] auto_master_out_araddr,
    output [7:0]  auto_master_out_arlen,
    output [2:0]  auto_master_out_arsize,
    output [1:0]  auto_master_out_arburst,

    input         auto_master_out_rvalid,
    output        auto_master_out_rready,
    input  [3:0]  auto_master_out_rid,
    input  [31:0] auto_master_out_rdata,
    input  [1:0]  auto_master_out_rresp,
    input         auto_master_out_rlast,

    input         auto_slave_in_awvalid,
    output        auto_slave_in_awready,
    input  [3:0]  auto_slave_in_awid,
    input  [31:0] auto_slave_in_awaddr,
    input  [7:0]  auto_slave_in_awlen,
    input  [2:0]  auto_slave_in_awsize,
    input  [1:0]  auto_slave_in_awburst,

    input         auto_slave_in_wvalid,
    output        auto_slave_in_wready,
    input  [31:0] auto_slave_in_wdata,
    input  [3:0]  auto_slave_in_wstrb,
    input         auto_slave_in_wlast,

    output        auto_slave_in_bvalid,
    input         auto_slave_in_bready,
    output [3:0]  auto_slave_in_bid,
    output [1:0]  auto_slave_in_bresp,

    input         auto_slave_in_arvalid,
    output        auto_slave_in_arready,
    input  [3:0]  auto_slave_in_arid,
    input  [31:0] auto_slave_in_araddr,
    input  [7:0]  auto_slave_in_arlen,
    input  [2:0]  auto_slave_in_arsize,
    input  [1:0]  auto_slave_in_arburst,

    output        auto_slave_in_rvalid,
    input         auto_slave_in_rready,
    output [3:0]  auto_slave_in_rid,
    output [31:0] auto_slave_in_rdata,
    output [1:0]  auto_slave_in_rresp,
    output        auto_slave_in_rlast   

);
    logic [32*32-1:0] dbg_reg;   // ⭐⭐ 引出C
    logic [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid     // ⭐⭐ 引出C

    // logic [1:0] __ifu_error, __lsu_error,
    // logic __ifu_master_validation_error,

    `include "dpi_tasks.v"

    reg [31:0] pc;   // reg
    assign _pc = pc;   // ⭐⭐ 引出C

    reg [31:0] mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid;
    assign {_mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid} = {mstatus, mepc, mcause, mtvec, mcycle, mcycleh, mvendorid, marchid};

    
    // from decode
    logic addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    logic add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    logic lb, lh, lw, lbu, lhu, sb, sh, sw;
    logic beq, bne, blt, bge, bltu, bgeu;
    logic jal, jalr, lui, auipc;
    logic ebreak, ecall, mret, csrrw, csrrs, csrrc;

    logic [4:0] rd, rs1, rs2;
    logic [31:0] immI, immU, immS, immB, immJ, immCSR;

    // from alu
    logic [31:0] add_rst;     
    logic [31:0] csrw_rst;    
    logic [31:0] wdata, rdata1, rdata2;
    logic wen;

    logic [31:0] pc_next_dft;
    assign pc_next_dft = pc + 32'd4;


    ysyx_26040135_decode Decode(.*);

    logic __GPR_wvalid;  // ⭐

    ysyx_26040135_dbg_register #(5, 32) GPR (
        .clock(clock),
        .wen(wen),
        .raddr1(rs1),
        .raddr2(rs2),
        .waddr(rd),
        .wdata(wdata),
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
    ysyx_26040135_AXI4 xbar_out();



    logic [31:0] instr;

    logic        __ifu_instr_valid;
    logic [1:0]  __ifu_error;      // ⭐⭐ 引出C
    logic        __ifu_master_validation_error;    // ⭐⭐ 引出C
    logic        __pc_is_updated;    // ⭐⭐ 引出C, 代表一个周期结束  // 和pc被update的上升沿的下一个周期同一个周期, 将此拉高一个周期

    ysyx_26040135_AXI_IFU ifu (
        .bus                            (bus_ifu.master),              // AXI4_Lite.master 接口
        .clock                          (clock),
        .reset                          (reset),
        .__pc_is_updated                (__pc_is_updated),   
        .pc                             (pc),
        .rdata                          (instr),
        .__instr_valid                  (__ifu_instr_valid),   // @@-->
        .__error                        (__ifu_error),
        .__master_validation_error      (__ifu_master_validation_error)
    );




    logic [1:0]  __lsu_error;   // ⭐⭐ 引出C
    logic        __lsu_read_complete;   // cpu读到这个, 需要立刻拿走数据启动GPR操作
    logic        __lsu_write_complete;   // cpu读到这个, 需要立刻启动更新pc操作
    logic [31:0] lsu_rdata;

    logic __addr_ready;  // ⭐  // 这两个信号只持续一个周期 (在__ifu_instr_valid出来的瞬时拉高一个周期)
    logic __data_ready;  // ⭐

    logic __read = lb | lh | lw | lbu | lhu;
    logic __write = sb | sh | sw;

    ysyx_26040135_AXI_LSU lsu (
        .bus                 (bus_lsu.master),              
        .clock               (clock),
        .reset               (reset),
        .__read              (__read),
        .__write             (__write),
        .__sw                (sw),
        .__sh                (sh),
        .__sb                (sb),
        .__lw                (lw),
        .__lb                (lb),
        .__lbu               (lbu),
        .__lhu               (lhu),
        .__lh                (lh),
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
        .clock  (clock),
        .reset  (reset),
        .ifu_s  (bus_ifu.slave),  // Xbar 接收 IFU (使用 slave 接收)
        .lsu_s  (bus_lsu.slave),  // Xbar 接收 LSU (使用 slave 接收)
        .m_m    (xbar_out.master) // Xbar 输出合并后的 Master 接口
    );

    assign auto_master_out_awvalid  = xbar_out.master.awvalid;
    assign auto_master_out_awid     = xbar_out.master.awid;
    assign auto_master_out_awaddr   = xbar_out.master.awaddr;
    assign auto_master_out_awlen    = xbar_out.master.awlen;
    assign auto_master_out_awsize   = xbar_out.master.awsize;
    assign auto_master_out_awburst  = xbar_out.master.awburst;
    assign xbar_out.master.awready  = auto_master_out_awready;

    assign auto_master_out_wvalid   = xbar_out.master.wvalid;
    assign auto_master_out_wdata    = xbar_out.master.wdata;
    assign auto_master_out_wstrb    = xbar_out.master.wstrb;
    assign auto_master_out_wlast    = xbar_out.master.wlast;
    assign xbar_out.master.wready   = auto_master_out_wready;

    assign auto_master_out_bready   = xbar_out.master.bready;
    assign xbar_out.master.bvalid   = auto_master_out_bvalid;
    assign xbar_out.master.bid      = auto_master_out_bid;
    assign xbar_out.master.bresp    = auto_master_out_bresp;

    assign auto_master_out_arvalid  = xbar_out.master.arvalid;
    assign auto_master_out_arid     = xbar_out.master.arid;
    assign auto_master_out_araddr   = xbar_out.master.araddr;
    assign auto_master_out_arlen    = xbar_out.master.arlen;
    assign auto_master_out_arsize   = xbar_out.master.arsize;
    assign auto_master_out_arburst  = xbar_out.master.arburst;
    assign xbar_out.master.arready  = auto_master_out_arready;

    assign auto_master_out_rready   = xbar_out.master.rready;
    assign xbar_out.master.rvalid   = auto_master_out_rvalid;
    assign xbar_out.master.rid      = auto_master_out_rid;
    assign xbar_out.master.rdata    = auto_master_out_rdata;
    assign xbar_out.master.rresp    = auto_master_out_rresp;
    assign xbar_out.master.rlast    = auto_master_out_rlast;

    // cpu的slave输出引脚全部置0
    assign auto_slave_in_awready = 1'b0;
    assign auto_slave_in_wready  = 1'b0;
    assign auto_slave_in_bvalid  = 1'b0;
    assign auto_slave_in_bid     = 4'b0;
    assign auto_slave_in_bresp   = 2'b0;
    assign auto_slave_in_arready = 1'b0;
    assign auto_slave_in_rvalid  = 1'b0;
    assign auto_slave_in_rid     = 4'b0;
    assign auto_slave_in_rdata   = 32'b0;
    assign auto_slave_in_rresp   = 2'b0;
    assign auto_slave_in_rlast   = 1'b0;


/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/


    logic [31:0] lw_rst, lbu_rst, lhu_rst, lb_rst, lh_rst;

    lw_rst  = lsu_rdata;
    lbu_rst = {24'b0, lsu_rdata[7:0]};
    lhu_rst = {16'b0, lsu_rdata[15:0]};
    lb_rst  = {{25{lsu_rdata[7]}}, lsu_rdata[6:0]};
    lh_rst  = {{17{lsu_rdata[15]}}, lsu_rdata[14:0]};




    typedef enum [2:0]{ 
        FETCH, IO, UDGPR, UDPC
    } state_t;
    state_t state, next;


    always_comb begin : Stat_Machine
        next = state;
        case(state)
            FETCH: begin
                if(__ifu_instr_valid) begin
                    next = IO;
                end
            end
            IO: begin
                if(__lsu_read_complete) begin
                    next = UDGPR;
                end
                else if(__lsu_write_complete) begin
                    next = UDPC;
                end
            end
            GPR: begin    // 固定一周期
                next = UDPC;
            end
            UDPC: begin   // 固定一周期
                next = FETCH;
            end
        endcase 
    end




    // 主状态机时序逻辑
    always_ff @(posedge clock or posedge reset) begin
        if(reset) begin
            pc <= 32'h20000000;   // MROM 
            mstatus <= 32'h00001800;   
            mcause <= 0;
            mepc <= 0;
            mtvec <= 0;
            mcycle <= 0;
            mcycleh <= 0;
            mvendorid <= 32'h79737978;
            marchid <= 32'h18d6687;   // id: ysyx_26040135

            __pc_is_updated <= 1'b0;
            __GPR_wvalid <= 1'b0;
            __addr_ready <= 1'b0;
            __data_ready <= 1'b0;

            state <= FETCH;
        end
        else begin
            if(state == FETCH) begin
                __pc_is_updated <= 1'b0;
                if(__ifu_instr_valid) begin
                    __addr_ready <= 1'b1;
                    __data_ready <= 1'b1;
                end
            end

            if(state == IO) begin
                __addr_ready <= 1'b0;
                __data_ready <= 1'b0;
                if(__lsu_read_complete) begin
                    __GPR_wvalid <= 1'b1;
                end
            end

            if(state == UDGPR) begin
                __GPR_wvalid <= 1'b0;
            end


            if(state == UDPC) begin
                __pc_is_updated <= 1'b1;
                {mcycleh, mcycle} <= {mcycleh, mcycle} + 64'd1;
                // pc update
                if(jalr) begin
                    pc <= add_rst & ~32'h1;
                end
                else if(jal) begin
                    pc <= add_rst;
                end
                else if(blt) begin
                    pc <= ($signed(rdata1) < $signed(rdata2)) ? add_rst : pc_next_dft;
                end
                else if(beq) begin
                    pc <= (rdata1 == rdata2) ? add_rst : pc_next_dft;
                end
                else if(bne) begin
                    pc <= (rdata1 != rdata2) ? add_rst : pc_next_dft;
                end
                else if(bge) begin
                    pc <= ($signed(rdata1) >= $signed(rdata2)) ? add_rst : pc_next_dft;
                end
                else if(bltu) begin
                    pc <= (rdata1 < rdata2) ? add_rst : pc_next_dft;
                end
                else if(bgeu) begin
                    pc <= (rdata1 >= rdata2) ? add_rst : pc_next_dft;
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
    
    // 仅用来更新 CSR
    always_ff @(posedge clock or posedge reset) begin
        if((!reset) && state == UDPC) begin
            // privilege
            if(csrrw) begin
                case(immCSR)  // case CSR addr
                    32'h00000300: mstatus <= rdata1;
                    32'h00000305: mtvec <= rdata1;
                    32'h00000341: mepc <= rdata1;
                    32'h00000342: mcause <= rdata1;
                endcase
            end
            else if (|{{5{csrrs}} & rs1}) begin
                case(immCSR) 
                    32'h00000300: mstatus <= rdata1 | csrw_rst;
                    32'h00000305: mtvec <= rdata1 | csrw_rst;
                    32'h00000341: mepc <= rdata1 | csrw_rst;
                    32'h00000342: mcause <= rdata1 | csrw_rst;
                endcase
            end
            else if (|{{5{csrrc}} & rs1}) begin
                case(immCSR) 
                    32'h00000300: mstatus <= csrw_rst & (~rdata1);
                    32'h00000305: mtvec <= csrw_rst & (~rdata1);
                    32'h00000341: mepc <= csrw_rst & (~rdata1);
                    32'h00000342: mcause <= csrw_rst & (~rdata1);
                endcase
            end
        end
    end




endmodule
/* verilator lint_off UNUSEDSIGNAL */




