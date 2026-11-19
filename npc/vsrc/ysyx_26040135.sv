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

流水线存在以下三种冒险, 为了避免冒险, 就会造成阻塞, 降低流水线的效率

结构冒险: 寄存器读只有 EX 用, 寄存器写只有 WB 用, 不会冲突
        存储器, IF 和 LS 的同时访问读通道会有结构冒险, Xbar采用IFU优先 (至于更复杂的调度策略先留着)

数据冒险: RAW 
    寄存器RAW[WB]: 存下还没写的寄存器, 每次读寄存器都遍历, 如果有还没写完(发生RAW)就阻塞  (只要把 in.ready 和 out.valid 置为无效即可)

    存储器RAW: 现在只有EX会写, 而且暂时不考虑自修改代码, 先默认 IF 不会 fetch 的指令是不会被修改的, 不存在存储器 RAW

控制冒险:
    选择最简单的分支预测

    冲刷操作:
    -> 清理控制信号                例如, 通过将valid置为无效, 可以将大部分部件正在执行的指令直接冲刷掉.
    -> 等待并消除影响控制信号的因素
    -> 确认推测正确后再更新状态量        寄存器堆, 更新CSR, 写内存, 访问外设


⭐:
流水线的目的就是为了降低P
为了降低C, 必须要拆分长组合路径, 在中间加reg

流水线的性能瓶颈就是在于  两种指令: 访存 和 跳转 
    io前后依赖带来的强制串行 & ram的有限带宽和处理速度慢    
    访存问题带来的阻塞, 具体表现为IFU & LSU 阻塞其他级, 使得其他级空闲, 没有充分工作来降低P

    跳转的问题就是分支预测带来的flush时间

我能想到的解决方案有:
-> 优化分支预测算法
静态分支预测     dsa核可以根据应用场景的统计规律设置统计上最优的分支预测算法
动态分支预测

-> 减少访存时间:
减少访存  
分散访存(不要连续访存)[编译器]   
使用cache

-> 不要让访存阻塞其他级
旁路bypass     现在已经实现
乱序多发射      如果一个指令因为各种原因被阻塞(io依赖, 访存..), 那么先进行后面的指令   (乱序可以尝试下, 多发射需要多个功能部件, 面积不允许)
尽可能把存在io依赖的多个指令放得最开[编译器]

*/

/*
先明确流片的面积和时序要求    23000(25000)um2   
    [yzh的参考设计在添加icache后面积为22730, 同时频率可以达到1081MHz, 运行microbench显示的Total time为4.49s.]


B5现阶段实际优化方案:

⭐ Cache:
    替换算法, block, set, set-associative, 大小, 预取


⭐(必须实现) 错误处理, 比如bresp != 2'b00, 怎么处理    (纯硬件)  
这个讲义里面要求实现了, 要是通过修改mret到当前阶段pc, 并且修改mcause来实现, 并对现有残余进行冲刷.

指令可能会在推测执行时抛出异常, 但如果推测错误, 那实际上这条指令不应该被执行, 所抛出的异常也不应该被处理. 
现在推测执行只有可能是IFU, IFU对应的异常有0和1
如果IFU握手提交了这个instr, 那么这个instr肯定是有效的, 这时如果他出现exception, 再报错

因此, 在异常处理过程中需要更新处理器状态的操作, 都需要等到确认推测正确后, 才能真正进行, 包括写入mepc, mcause, 跳转到mtvec所指示的位置等.

当下实现这些:
异常号	异常描述	最早产生的部件
0	Instruction address misaligned	IFU    @
1	Instruction access fault	IFU      @
2	Illegal Instruction	IDU   @
4	Load address misaligned	LSU
5	Load access fault	LSU
6	Store/AMO address misaligned	LSU
7	Store/AMO access fault	LSU
11	Environment call from M-mode	IDU  @


优化RTL的写法, verilog的省A & PW的方法
避免优先级mux



权衡一下面积, 看要不要去掉bypass(DHS)
*/

/*
⭐ B阶段考核准备:

弄完最后一点点PPA优化, 还有exception handler

研究节省PAP的rtl写法, 优化rtl

做完讲义B-extra内容, 满足流片需求

熟读B阶段所有代码

强化debug工具


⭐ 后续:
研究rocketchip的设计框图和rtl

阅读计算的本质, 重新精度ysyx代码和riscv开放架构设计之道, 重点注意gcc-flag, 每个flag对IPC的作用
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


// 引出到verilator顶层的信号写在这里
    wire [32*16-1:0] dbg_reg;   
    wire [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid; 
    wire [31:0] _pc;
    wire [31:0] _instr;
    
    wire _new_instr;

    wire [1:0]  __ifu_error;     
    wire        __ifu_master_validation_error;    
    wire [1:0]  __lsu_error;   

    wire __ebreak_end;
    wire _wen;   // 用于确定difftest时机
    wire [31:0] _wbu_pc;

    assign _wen = wen;
    assign _wbu_pc = wbu_pc_out;

    wire _ifu_out_valid;
    wire _exu_in_ready;
    wire _exu_out_valid;
    wire _lsu_in_ready;
    wire _lsu_out_valid;
    wire _wbu_in_ready;

    assign _ifu_out_valid = valid_fd;
    assign _exu_in_ready = ready_de;
    assign _exu_out_valid = valid_el;
    assign _lsu_in_ready = ready_el;
    assign _lsu_out_valid = valid_lw;
    assign _wbu_in_ready = ready_lw;

// 流水线级间连接

    ysyx_26040135_AXI_ICACHE icache (
        .mbus(bus_icache.master),
        .clock(clock),
        .reset(reset),

        .fetch_valid(fetch_valid),
        .instr_valid(instr_valid),
        .instr(instr_icache),
        .fetch_error(fetch_error),
        .fetch_addr(fetch_addr),

        .icache_flush(icache_flush)
    );

    wire fetch_valid;
    wire instr_valid;
    wire [31:0] instr_icache;
    wire [1:0] fetch_error;
    wire [31:0] fetch_addr;
    wire icache_flush;
    wire lsu_exception;
    assign lsu_exception = lsu_exception_4 | lsu_exception_5 | lsu_exception_6 | lsu_exception_7;

    ysyx_26040135_AXI_IFU ifu (
        .clock(clock),
        .reset(reset),

        .fetch_valid(fetch_valid),
        .instr_valid(instr_valid),
        .instr(instr_icache),
        .fetch_error(fetch_error),
        .fetch_addr(fetch_addr),

        .__error(__ifu_error),
        .__master_validation_error(__ifu_master_validation_error),
        .out_instr(instr),
        .out_valid(valid_fd),
        .out_ready(ready_rd),
        .out_pc(pc),
        .flush(flush),
        .pc_flush(pc_flush),
        .ifu_work_cyc(ifu_work_cyc),
        .ifu_block_cyc(ifu_block_cyc),

        .cbi(compulsory_branch_instrs),
        .bt_valid(bt_valid),
        .b_pc(b_pc),
        .b_target(b_target),
        .taken(taken),

        .fence_i_flush(fence_i_flush),
        .icache_flush(icache_flush),

        .mtvec(mtvec),
        .ifu_exception_0(ifu_exception_0),
        .ifu_exception_1(ifu_exception_1),
        .ifu_exception_pc(ifu_exception_pc),

        .idu_instr_valid(idu_instr_valid),
        .idu_exception_2(idu_exception_2),

        .lsu_exception(lsu_exception)
    ); 

    wire bt_valid;
    wire [31:0] b_pc;
    wire [31:0] b_target;
    wire taken;
    wire        idu_instr_valid;      // IFU -> IDU: 给 IDU 的 instr 有效
    wire        idu_exception_2;      // IDU -> IFU/EXU: 非法指令(exception 2)
    wire [31:0] mtvec;          // EXU -> IFU: 异常入口
    wire        ifu_exception_0, ifu_exception_1;
    wire [31:0] ifu_exception_pc;

    wire [63:0] ifu_work_cyc, ifu_block_cyc;

    wire        flush;  
    wire [31:0] pc_flush;
    wire [31:0] pc;
    wire [31:0] instr;
    wire valid_fd;
    wire ready_rd;
    wire compulsory_branch_instrs = jalr | jal | ecall | mret;

    ysyx_26040135_IDU idu (
        .in_pc(pc), .in_instr(instr), .in_valid(valid_fd), .in_ready(ready_rd),
        .out_valid(valid_de), .out_ready(ready_de), .out_pc(pc_d),
        .addi(addi), .slti(slti), .sltiu(sltiu), .xori(xori), .ori(ori), .andi(andi), .slli(slli), .srli(srli), .srai(srai),
        .add(add), .sub(sub), .sll(sll), .slt(slt), .sltu(sltu), .xor_inst(xor_inst), .srl(srl), .sra(sra), .or_inst(or_inst), .and_inst(and_inst),
        .lb(lb), .lh(lh), .lw(lw), .lbu(lbu), .lhu(lhu), .sb(sb), .sh(sh), .sw(sw),
        .beq(beq), .bne(bne), .blt(blt), .bge(bge), .bltu(bltu), .bgeu(bgeu),
        .jal(jal), .jalr(jalr),
        .lui(lui), .auipc(auipc),
        .ebreak(ebreak), .ecall(ecall),
        .csrrw(csrrw), .csrrs(csrrs), .csrrc(csrrc), .mret(mret),
        .fence_i(fence_i),
        .rd(rd), .rs1(rs1), .rs2(rs2), .imm(imm),
        .out_instr(instr_de),
        .taken(taken),
        .taken_out(taken_de),

        .idu_instr_valid(idu_instr_valid),
        .idu_exception_2(idu_exception_2)
    );

    wire valid_de, ready_de;
    wire [31:0] pc_d;
    wire addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    wire add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    wire lb, lh, lw, lbu, lhu, sb, sh, sw;
    wire beq, bne, blt, bge, bltu, bgeu;
    wire jal, jalr;
    wire lui, auipc;
    wire ebreak, ecall, csrrw, csrrs, csrrc, mret, fence_i;
    wire [4:0] rd, rs1, rs2;
    wire [31:0] imm;
    wire [31:0] instr_de;
    wire taken_de;


ysyx_26040135_EXU exu (
    .clock(clock), .reset(reset), .pc(pc_d), .instr(instr_de),
    .rdata1(rdata1), .rdata2(rdata2), .imm(imm),
    .add(add), .addi(addi), .sub(sub), .lui(lui), .auipc(auipc),
    .and_inst(and_inst), .or_inst(or_inst), .xor_inst(xor_inst),
    .andi(andi), .ori(ori), .xori(xori),
    .sll(sll), .srl(srl), .sra(sra), .slli(slli), .srli(srli), .srai(srai),
    .slt(slt), .sltu(sltu), .slti(slti), .sltiu(sltiu),
    .jal(jal), .jalr(jalr),
    .lb(lb), .lh(lh), .lw(lw), .lbu(lbu), .lhu(lhu),
    .sb(sb), .sh(sh), .sw(sw),
    .beq(beq), .bne(bne), .blt(blt), .bge(bge), .bltu(bltu), .bgeu(bgeu),
    .ebreak(ebreak), .ecall(ecall), .mret(mret), .fence_i(fence_i),
    .csrrw(csrrw), .csrrs(csrrs), .csrrc(csrrc),

    .rd(rd), .rs1(rs1), .rs2(rs2),

    .lsu_blockf(lsu_blockf), .wbu_blockf(wbu_blockf),
    .wen(wen), .rd_wb(rd_wbu),

    ._mstatus(_mstatus), ._mtvec(_mtvec), ._mepc(_mepc), ._mcause(_mcause),
    ._mcycle(_mcycle), ._mcycleh(_mcycleh),
    ._mvendorid(_mvendorid), ._marchid(_marchid),
    ._pc(_pc), ._instr(_instr), ._new_instr(_new_instr),

    .in_valid(valid_de), .in_ready(ready_de),
    .out_valid(valid_el),
    .out_ready(ready_el),

    .is_ls(is_ls),
    .io(io), .io_type(io_type), .read_is_u(read_is_u),
    .rd_out(rd_out), .lsu_wdata(lsu_wdata), .lsu_addr(lsu_addr),
    .ic_wb_wdata(ic_wb_wdata), .rs1_out(rs1_out), .rs2_out(rs2_out),
    .flush(flush), .pc_flush(pc_flush),

    .exu_blockf_cyc(exu_blockf_cyc),
    .exu_blcokbl_cyc(exu_blcokbl_cyc),
    .exu_work_cyc(exu_work_cyc), .ebreak_end(__ebreak_end),

    .bypass_wdata_lsu(wdata_lw), .bypass_rd_lsu(rd_lsu), .lsu_bypass_data_valid(lsu_bypass_data_valid),
    .bypass_wdata_wbu(wdata_wbu), .bypass_rd_wbu(rd_wbu), .wbu_bypass_data_valid(wen),

    .ren(ren),

    .bt_valid(bt_valid),
    .b_pc(b_pc),
    .b_target(b_target),
    .taken(taken_de),

    .fence_i_flush(fence_i_flush),

    .mtvec_out(mtvec),
    .ifu_exception_pc(ifu_exception_pc),
    .ifu_exception_0(ifu_exception_0),
    .ifu_exception_1(ifu_exception_1),

    .idu_exception_2(idu_exception_2),

    .lsu_exception_4(lsu_exception_4),
    .lsu_exception_6(lsu_exception_6),
    .lsu_exception_5(lsu_exception_5),
    .lsu_exception_7(lsu_exception_7),
    .lsu_exception_pc(lsu_pc_out)
);
    wire [63:0] exu_blockf_cyc, exu_blcokbl_cyc, exu_work_cyc;
    wire is_ls;
    wire lsu_bypass_data_valid;
    wire ren;
    wire fence_i_flush;

    wire lsu_exception_4;
    wire lsu_exception_6;
    wire lsu_exception_5;
    wire lsu_exception_7;


    ysyx_26040135_dbg_register GPR(
        .clock(clock),
        .reset(reset),
        .wen(wen), // WB
        .ren(ren),
        .raddr1(rs1_out),  // EX
        .raddr2(rs2_out), // EX
        .waddr(rd_wbu), // WB
        .wdata(wdata_wbu), // WB

        .rdata1(rdata1),  // EX
        .rdata2(rdata2),  // EX
        .dbg_regs(dbg_reg)
    );

    wire valid_el;
    wire ready_el;
    wire io;
    wire [1:0] io_type;
    wire read_is_u;
    wire [4:0] rd_out, rs1_out, rs2_out;
    wire [31:0] lsu_wdata, lsu_addr, ic_wb_wdata;
    wire [31:0] rdata1, rdata2;
    wire [63:0] lsu_blockf_cyc, lsu_blcokb_cyc, lsu_work_cyc;
    wire lsu_blockf;


    ysyx_26040135_AXI_LSU lsu (
        .bus(bus_lsu.master),
        .clock(clock),
        .reset(reset),

        .is_ls(is_ls),
        .io(io),
        .io_type(io_type),
        .read_is_u(read_is_u),
        .rd(rd_out),
        .lsu_wdata(lsu_wdata),
        .lsu_addr(lsu_addr),
        .ic_wb_wdata(ic_wb_wdata),
        .pc_in(_pc),

        .in_valid(valid_el),
        .in_ready(ready_el),
        .out_valid(valid_lw),
        .out_ready(ready_lw),

        .__error(__lsu_error),
        .wdata(wdata_lw),
        .rd_out(rd_lsu),
        .lsu_bypass_data_valid(lsu_bypass_data_valid),
        .pc_out(lsu_pc_out),

        .lsu_blockf_cyc(lsu_blockf_cyc),
        .lsu_blcokb_cyc(lsu_blcokb_cyc),
        .lsu_work_cyc(lsu_work_cyc),
        .lsu_blockfs(lsu_blockf),

        .lsu_exception_4(lsu_exception_4),
        .lsu_exception_6(lsu_exception_6),
        .lsu_exception_5(lsu_exception_5),
        .lsu_exception_7(lsu_exception_7),
    );

    wire valid_lw, ready_lw;
    wire [31:0] wdata_lw;
    wire [4:0] rd_lsu;
    wire [63:0] wbu_blockf_cyc, wbu_work_cyc;
    wire wbu_blockf;
    wire [31:0] lsu_pc_out;


    ysyx_26040135_WBU wbu (
        .clock(clock),
        .reset(reset),

        .in_valid(valid_lw),
        .in_ready(ready_lw),
        .rd(rd_lsu),
        .wdata(wdata_lw),
        .pc_in(lsu_pc_out),

        .wbu_blockf_cyc(wbu_blockf_cyc),
        .wbu_work_cyc(wbu_work_cyc),
        .wbu_blockf(wbu_blockf),

        .wen(wen),
        .rd_wb(rd_wbu),
        .wdata_wb(wdata_wbu),
        .pc_out(wbu_pc_out)
    );

    wire wen;
    wire [4:0] rd_wbu;
    wire [31:0] wdata_wbu;
    wire [31:0] wbu_pc_out;

/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/

// ⭐: BUS 总线相关
    ysyx_26040135_AXI4 bus_lsu ();
    ysyx_26040135_AXI4 bus_master();
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



ysyx_26040135_AXI4_Xbar u_xbar (
    .clock   (clock),
    .reset   (reset),
    .ifu_s   (bus_icache.slave),
    .lsu_s   (bus_lsu.slave),
    .m_m     (bus_master.master),
    .clint_m (bus_clint.master)
);


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


    `include "vsrc/dpi-f.sv"

endmodule

/* verilator lint_off UNUSEDSIGNAL */




