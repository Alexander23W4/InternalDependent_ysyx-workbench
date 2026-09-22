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
SRAM	              0x0f00_0000~0x0fff_ffff     0x0f000000~0x0f001fff (8KB)
MROM	              0x2000_0000~0x2000_0fff

UART16550	          0x1000_0000~0x1000_0fff

Flash	              0x3000_0000~0x3fff_ffff     0x3000_0000 ~ 0x30ff_ffff (16MB)
SPI master	          0x1000_1000~0x1000_1fff

PSRAM	              0x8000_0000~0x9fff_ffff
SDRAM	              0xa000_0000~0xbfff_ffff

GPIO	              0x1000_2000~0x1000_200f

CLINT	              0x0200_0000~0x0200_ffff

⭐
PS2	                  0x1001_1000~0x1001_1007
VGA	                  0x2100_0000~0x211f_ffff
ChipLink MMIO	      0x4000_0000~0x7fff_ffff
ChipLink MEM	      0xc000_0000~0xffff_ffff


⭐: 
可以用来自由计算的内存区间 - 堆区
堆区需要分配在可写的内存区间, 因此可以分配在SRAM中

程序 "入口" - main(const char *args)
main()函数由AM上的程序提供, 但我们需要考虑整个运行时环境的入口, 即需要将程序链接到MROM的地址空间, 并保证TRM的第一条指令与NPC复位后的PC值一致

"退出"程序的方式 - halt()
ysyxSoC不支持"关机"等功能, 为方便起见, 可借助ebreak指令让仿真环境结束仿真

打印字符 - putch()
可通过ysyxSoC中的UART16550进行输出

由于NPC复位后从MROM开始执行, 而MROM不支持写入操作, 因此我们需要额外注意:
程序中不能包含对全局变量的写入操作
栈区需要分配在可写的SRAM中为ysyxSoC添加AM运行时环境

添加一个riscv32e-ysyxsoc的新AM, 并按照上述方式提供TRM的API. 
添加后, 将cpu-tests中的dummy测试编译到riscv32e-ysyxsoc, 并尝试在ysyxSoC的仿真环境中运行它.

Hint: 为了完成这个任务, 你需要一些链接的知识. 如果你不熟悉, 可以参考"一生一芯"相关的视频和课件.

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

    // logic [1:0] __ifu_error, __lsu_error,
    // logic __ifu_master_validation_error,

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
    logic fence_i;

    logic [4:0] rd, rs1, rs2;
    logic [31:0] immI, immU, immS, immB, immJ, immCSR;

    // from alu
    logic [31:0] add_rst;     
    logic [31:0] csrw_rst;    
    logic [31:0] wdata, rdata1, rdata2;
    logic wen;

    logic [31:0] pc_next_dft;
    assign pc_next_dft = pc + 32'd4;

    // ⭐ 跳转/分支目标必须在 GPR 写回**生效之前**锁存下来.
    //    原因: jalr 的 add_rst = rs1 + imm, 而 rs1 可能就是 rd(典型的是 `jalr ra, off(ra)`,
    //    也就是距离太远、链接器没法松弛成 jal 的 `call`)。GPR 的写回在 UDGPR 那拍就生效了,
    //    等到 UDPC 再算 add_rst, rdata1 已经是写回后的新值 -> 跳转目标整体偏掉。
    logic [31:0] jump_target;


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

    logic event_alu;
    logic event_branch;
    logic event_load;
    logic event_store;
    logic event_jump;
    logic event_csr;
    logic event_system;

    logic [63:0] ifu_cycles;
    logic [63:0] lsu_cycles;
    logic [63:0] lsu_write_cycles;
    logic [63:0] lsu_read_cycles;


    logic ifu_hit_flash, ifu_hit_sram, ifu_hit_sdram, ifu_hit_other;
    logic lsu_hit_flash, lsu_hit_sram, lsu_hit_sdram, lsu_hit_other;

    assign ifu_hit_flash = (pc[31:28] == 4'h3);
    assign ifu_hit_sram  = (pc[31:24] == 8'h0f);
    assign ifu_hit_sdram = (pc[31:28] == 4'hA) || (pc[31:28] == 4'hB);
    assign ifu_hit_other = ~(ifu_hit_flash | ifu_hit_sram | ifu_hit_sdram);

    assign lsu_hit_flash = (add_rst[31:28] == 4'h3);
    assign lsu_hit_sram  = (add_rst[31:24] == 8'h0f);
    assign lsu_hit_sdram = (add_rst[31:28] == 4'hA) || (add_rst[31:28] == 4'hB);
    assign lsu_hit_other = ~(lsu_hit_flash | lsu_hit_sram | lsu_hit_sdram);

    logic [63:0] ifu_fetch_flash_cycles, ifu_fetch_sram_cycles, ifu_fetch_sdram_cycles, ifu_fetch_other_cycles;
    logic [63:0] lsu_read_flash_cycles,  lsu_read_sram_cycles,  lsu_read_sdram_cycles,  lsu_read_other_cycles;
    logic [63:0] lsu_write_flash_cycles, lsu_write_sram_cycles, lsu_write_sdram_cycles, lsu_write_other_cycles;

    logic [63:0] ifu_fetch_flash_count, ifu_fetch_sram_count, ifu_fetch_sdram_count, ifu_fetch_other_count;
    logic [63:0] lsu_read_flash_count,  lsu_read_sram_count,  lsu_read_sdram_count,  lsu_read_other_count;
    logic [63:0] lsu_write_flash_count, lsu_write_sram_count, lsu_write_sdram_count, lsu_write_other_count;

    logic [63:0] flash_cycles, sram_cycles, sdram_cycles, other_cycles;
    assign flash_cycles = ifu_fetch_flash_cycles + lsu_read_flash_cycles + lsu_write_flash_cycles;
    assign sram_cycles  = ifu_fetch_sram_cycles  + lsu_read_sram_cycles  + lsu_write_sram_cycles;
    assign sdram_cycles = ifu_fetch_sdram_cycles + lsu_read_sdram_cycles + lsu_write_sdram_cycles;
    assign other_cycles = ifu_fetch_other_cycles + lsu_read_other_cycles + lsu_write_other_cycles;


    assign event_alu = addi | slti | sltiu | xori | ori | andi | slli | srli | srai |
            add  | sub  | sll  | slt  | sltu  | xor_inst | srl | sra | or_inst | and_inst |
            lui  | auipc;

    assign event_branch = beq | bne | blt | bge | bltu | bgeu;

    assign event_load = lb | lh | lw | lbu | lhu;

    assign event_store = sb | sh | sw;

    assign event_jump = jal | jalr;

    assign event_csr = csrrw | csrrs | csrrc | mret;

    assign event_system = ebreak | ecall;

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


    logic [31:0] __instr;
    logic [31:0] instr;
    assign instr = __instr;

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

    ysyx_26040135_AXI_ICACHE icache (
        .bus                            (bus_ifu.slave),
        .mbus                           (bus_icache.master),
        .clock                          (clock),
        .reset                          (reset),
        .icache_hit_cnt                 (icache_hit_cnt),
        .icache_miss_cnt                (icache_miss_cnt),
        .icache_hit_cycles              (icache_hit_cycles),
        .icache_miss_cycles             (icache_miss_cycles)
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


    logic [31:0] lw_rst, lbu_rst, lhu_rst, lb_rst, lh_rst;

    // ⭐ 两个 slave 都是按"对齐字"返回数据的(MROM 的 DPI helper 读的是对齐字, SoC 里的
    //    SRAM/AXI4RAM 也是直接返回 Memory[addr[12:2]]), 不会按 addr[1:0] 把字节挪到对应
    //    通道上. 所以窄读的字节抽取必须由 CPU 自己做: 先按 addr[1:0] 右移再取低位.
    logic [31:0] lsu_rdata_shifted;
    assign lsu_rdata_shifted = lsu_rdata >> {add_rst[1:0], 3'b000};

    assign lw_rst  = lsu_rdata;
    assign lbu_rst = {24'b0, lsu_rdata_shifted[7:0]};
    assign lhu_rst = {16'b0, lsu_rdata_shifted[15:0]};
    assign lb_rst  = {{24{lsu_rdata_shifted[7]}}, lsu_rdata_shifted[7:0]};
    assign lh_rst  = {{16{lsu_rdata_shifted[15]}}, lsu_rdata_shifted[15:0]};




    typedef enum [1:0]{ 
        FETCH, IO, UDGPR, UDPC
    } state_t;
    state_t state, next;

    logic io;
    assign io = __read | __write;

    always_comb begin : State_Machine
        next = state;
        case(state)
            FETCH: begin
                if(__ifu_instr_valid) begin
                    next = IO;
                end
            end
            IO: begin
                if(io) begin
                    if(__lsu_read_complete) begin
                        next = UDGPR;
                    end
                    else if(__lsu_write_complete) begin
                        next = UDPC;
                    end
                end
                else begin
                    next = UDGPR;
                end
            end
            UDGPR: begin    // 固定一周期
                next = UDPC;
            end
            UDPC: begin     // 固定一周期
                next = FETCH;
            end
        endcase 
    end


    logic __period_end;

    // 主状态机时序逻辑
    always_ff @(posedge clock or posedge reset) begin
        if(reset) begin
            pc <= 32'h30000000;   // FLASH 
            mstatus <= 32'h00001800;   
            mcause <= 0;
            mepc <= 0;
            mtvec <= 0;
            mcycle <= 0;
            mcycleh <= 0;
            mvendorid <= 32'h79737978;
            marchid <= 32'h18d6687;   // id: ysyx_26040135

            __pc_is_updated <= 1'b1;
            __GPR_wvalid <= 1'b0;
            __addr_ready <= 1'b0;
            __data_ready <= 1'b0;

            __period_end <= 1'b0;

            ifu_cycles <= '0;
            lsu_cycles <= '0;
            lsu_write_cycles <= '0;
            lsu_read_cycles <= '0;

            ifu_fetch_flash_cycles <= '0;
            ifu_fetch_sram_cycles  <= '0;
            ifu_fetch_sdram_cycles <= '0;
            ifu_fetch_other_cycles <= '0;
            lsu_read_flash_cycles  <= '0;
            lsu_read_sram_cycles   <= '0;
            lsu_read_sdram_cycles  <= '0;
            lsu_read_other_cycles  <= '0;
            lsu_write_flash_cycles <= '0;
            lsu_write_sram_cycles  <= '0;
            lsu_write_sdram_cycles <= '0;
            lsu_write_other_cycles <= '0;

            ifu_fetch_flash_count <= '0;
            ifu_fetch_sram_count  <= '0;
            ifu_fetch_sdram_count <= '0;
            ifu_fetch_other_count <= '0;
            lsu_read_flash_count  <= '0;
            lsu_read_sram_count   <= '0;
            lsu_read_sdram_count  <= '0;
            lsu_read_other_count  <= '0;
            lsu_write_flash_count <= '0;
            lsu_write_sram_count  <= '0;
            lsu_write_sdram_count <= '0;
            lsu_write_other_count <= '0;

            state <= FETCH;
        end
        else begin
            {mcycleh, mcycle} <= {mcycleh, mcycle} + 64'd1;
            state <= next;
            
            perf_event(
                __ifu_instr_valid,
                __lsu_read_complete,
                __lsu_write_complete
            );

            if(state == FETCH) begin
                ifu_cycles <= ifu_cycles + 64'b1;
                if(ifu_hit_flash) ifu_fetch_flash_cycles <= ifu_fetch_flash_cycles + 64'b1;
                if(ifu_hit_sram)  ifu_fetch_sram_cycles  <= ifu_fetch_sram_cycles  + 64'b1;
                if(ifu_hit_sdram) ifu_fetch_sdram_cycles <= ifu_fetch_sdram_cycles + 64'b1;
                if(ifu_hit_other) ifu_fetch_other_cycles <= ifu_fetch_other_cycles + 64'b1;
                __pc_is_updated <= 1'b0;
                if(__ifu_instr_valid) begin
                    __addr_ready <= 1'b1;
                    __data_ready <= 1'b1;
                    if(ifu_hit_flash) ifu_fetch_flash_count <= ifu_fetch_flash_count + 64'b1;
                    if(ifu_hit_sram)  ifu_fetch_sram_count  <= ifu_fetch_sram_count  + 64'b1;
                    if(ifu_hit_sdram) ifu_fetch_sdram_count <= ifu_fetch_sdram_count + 64'b1;
                    if(ifu_hit_other) ifu_fetch_other_count <= ifu_fetch_other_count + 64'b1;
                    instr_type_event(
                        event_alu,
                        event_branch,
                        event_load,
                        event_store,
                        event_jump,
                        event_csr,
                        event_system
                    );
                end
            end

            if(state == IO) begin
                lsu_cycles <= lsu_cycles + 64'b1;
                if(__read) begin
                    lsu_read_cycles <= lsu_read_cycles + 64'b1;
                    if(lsu_hit_flash) lsu_read_flash_cycles <= lsu_read_flash_cycles + 64'b1;
                    if(lsu_hit_sram)  lsu_read_sram_cycles  <= lsu_read_sram_cycles  + 64'b1;
                    if(lsu_hit_sdram) lsu_read_sdram_cycles <= lsu_read_sdram_cycles + 64'b1;
                    if(lsu_hit_other) lsu_read_other_cycles <= lsu_read_other_cycles + 64'b1;
                end
                if(__write) begin
                    lsu_write_cycles <= lsu_write_cycles + 64'b1;
                    if(lsu_hit_flash) lsu_write_flash_cycles <= lsu_write_flash_cycles + 64'b1;
                    if(lsu_hit_sram)  lsu_write_sram_cycles  <= lsu_write_sram_cycles  + 64'b1;
                    if(lsu_hit_sdram) lsu_write_sdram_cycles <= lsu_write_sdram_cycles + 64'b1;
                    if(lsu_hit_other) lsu_write_other_cycles <= lsu_write_other_cycles + 64'b1;
                end
                // ⭐ 访问次数按"完成信号"记一次(perf_event 里也是这个时机)
                if(__lsu_read_complete) begin
                    if(lsu_hit_flash) lsu_read_flash_count <= lsu_read_flash_count + 64'b1;
                    if(lsu_hit_sram)  lsu_read_sram_count  <= lsu_read_sram_count  + 64'b1;
                    if(lsu_hit_sdram) lsu_read_sdram_count <= lsu_read_sdram_count + 64'b1;
                    if(lsu_hit_other) lsu_read_other_count <= lsu_read_other_count + 64'b1;
                end
                if(__lsu_write_complete) begin
                    if(lsu_hit_flash) lsu_write_flash_count <= lsu_write_flash_count + 64'b1;
                    if(lsu_hit_sram)  lsu_write_sram_count  <= lsu_write_sram_count  + 64'b1;
                    if(lsu_hit_sdram) lsu_write_sdram_count <= lsu_write_sdram_count + 64'b1;
                    if(lsu_hit_other) lsu_write_other_count <= lsu_write_other_count + 64'b1;
                end
                __addr_ready <= 1'b0;
                __data_ready <= 1'b0;
                if(__lsu_read_complete || !io) begin
                    __GPR_wvalid <= 1'b1;
                end
                if(io && __lsu_write_complete) begin
                    __period_end <= 1'b1;
                end
            end

            if(state == UDGPR) begin
                __GPR_wvalid <= 1'b0;
                __period_end <= 1'b1;
                jump_target  <= add_rst;   // ⭐ 赶在 GPR 写回生效之前锁存
            end


            if(state == UDPC) begin
                __pc_is_updated <= 1'b1;
                __period_end <= 1'b0;
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




    `include "vsrc/dpi-f.sv"

endmodule
/* verilator lint_off UNUSEDSIGNAL */




