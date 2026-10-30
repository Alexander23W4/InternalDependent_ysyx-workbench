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


⭐:
流水线的目的就是为了降低P来减少并行
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
乱序多发射      如果一个指令因为各种原因被阻塞(io依赖, 访存..), 那么先进行后面的指令
尽可能把存在io依赖的多个指令放得最开[编译器]


设置性能计数器: 
每一级的工作时长占比  被阻塞因素占比(EXU的 gpr依赖阻塞, 被LSU阻塞, 被WBU阻塞)
每种指令的产生比例
CPI(P)
*/

/*
lsu支持 sw 并行
cache的替换算法优化
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

/*
让流水线寄存器先跑起来, verilator先跑起来

通过形式化验证后, 我们的重点应该放在通过仿真和综合获取关键数据: 性能计数器(I,P), 面积, C(关键组合路径), 功耗

跑通所有tb, 并且弄好verilator仿真环境所有debug-infra + 波形debug醇熟

把rtl弄成可综合的, 然后看关键组合路径, 消减时钟频率

研究节省PAP的rtl写法

研究rocketchip的设计框图和rtl

阅读计算的本质, 重新精度ysyx代码和riscv开放架构设计之道, 重点注意gcc-flag, 每个flag对IPC的作用

形式化验证

读CAAQ
*/

/*
让lsu能够同时处理ls
*/

// 引出到verilator顶层的信号写在这里
    wire [32*32-1:0] dbg_reg;          cycleh, _mvendorid, _marchid; 
    wire [31:0] _pc;
    wire [31:0] _instr;
    
    wire _new_instr;

    wire [1:0]  __ifu_error;     
    wire        __ifu_master_validation_error;    
    wire [1:0]  __lsu_error;   

    wire __ebreak_end;




// 流水线控制功能型寄存器
    reg [1:0][31:0] iag;   // inaccessible_gprs[0/1]
    reg [1:0] iag_amt [31:0]; 

    reg [3:0][5:0] wb_q;    // write back queue   编码 xxxxx(写入的寄存器) x(rd的来源l/s)   这里留4个空, 认为最多不会超过4个在途rd

// 流水线级间连接

    wire sw_avail;
    wire sw_addr;

    ysyx_26040135_AXI_ICACHE icache (
        .bus                            (bus_ifu.slave),
        .mbus                           (bus_icache.master),
        .clock                          (clock),
        .reset                          (reset),

        .sw_addr                        (sw_addr),
        .sw_avail                       (sw_avail)
    );

    ysyx_26040135_AXI_IFU ifu (
        .bus(bus_ifu.master),
        .clock(clock),
        .reset(reset),
        .__error(__ifu_error),
        .__master_validation_error(__ifu_master_validation_error),
        .out_instr(instr),
        .out_valid(valid_fd),
        .out_ready(ready_rd),
        .out_pc(pc),
        .flush(flush),
        .pc_flush(pc_flush),
        .ifu_work_cyc(ifu_work_cyc),
        .ifu_block_cyc(ifu_block_cyc)
    ); 

    wire [63:0] ifu_work_cyc, ifu_block_cyc;

    wire        flush;  
    wire [31:0] pc_flush;
    wire [31:0] pc;
    wire [31:0] instr;
    wire valid_fd;
    wire ready_rd;

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
        .out_instr(instr_de)
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
    .rd(rd), .rs1(rs1), .rs2(rs2), .iag(iag[0]),
    .lsu_blockf(lsu_blockf), .wbu_blockf(wbu_blockf),
    ._mstatus(_mstatus), ._mtvec(_mtvec), ._mepc(_mepc), ._mcause(_mcause),
    ._mcycle(_mcycle), ._mcycleh(_mcycleh),
    ._mvendorid(_mvendorid), ._marchid(_marchid),
    ._pc(_pc), ._instr(_instr), ._new_instr(_new_instr),
    .in_valid(valid_de), .in_ready(ready_de),
    .out_valid_lsu(valid_el), .out_valid_wbu(valid_ew),
    .out_ready_lsu(ready_el), .out_ready_wbu(ready_ew),
    .io(io), .io_type(io_type), .read_is_u(read_is_u),
    .rd_out(rd_out), .lsu_wdata(lsu_wdata), .lsu_addr(lsu_addr),
    .ic_wb_wdata(ic_wb_wdata), .rs1_out(rs1_out), .rs2_out(rs2_out),
    .is_exu_rd(is_exu_rd), .is_lsu_rd(is_lsu_rd), .rd_exu(rd_exu),
    .flush(flush), .pc_flush(pc_flush),
    .exu_blockf_cyc(exu_blockf_cyc),
    .exu_blcokbl_cyc(exu_blcokbl_cyc), .exu_blcokbw_cyc(exu_blcokbw_cyc),
    .exu_work_cyc(exu_work_cyc), .ebreak_end(__ebreak_end)
);
    wire [63:0] exu_blockf_cyc, exu_blcokbl_cyc, exu_blcokbw_cyc, exu_work_cyc;


    ysyx_26040135_dbg_register #(5, 32) GPR (
        .clock(clock),
        .reset(reset),
        .wen(wen), // WB
        .raddr1(rs1_out),  // EX
        .raddr2(rs1_out), // EX
        .waddr(rd_wbu), // WB
        .wdata(wdata_wbu), // WB

        .rdata1(rdata1),  // EX
        .rdata2(rdata2),  // EX
        .dbg_regs(dbg_reg)
    );

    wire valid_el, valid_ew;
    wire ready_el, ready_ew;
    wire io;
    wire [1:0] io_type;
    wire read_is_u;
    wire [4:0] rd_out, rs1_out, rs2_out;
    wire [31:0] lsu_wdata, lsu_addr, ic_wb_wdata;
    wire is_exu_rd, is_lsu_rd;
    wire [4:0] rd_exu;
    wire [31:0] rdata1, rdata2;
    wire [63:0] lsu_blockf_cyc, lsu_blcokb_cyc, lsu_work_cyc;
    wire lsu_blockf;


    ysyx_26040135_AXI_LSU lsu (
        .bus(bus_lsu.master),
        .clock(clock),
        .reset(reset),

        .io(io),
        .io_type(io_type),
        .read_is_u(read_is_u),
        .rd(rd_out),
        .lsu_wdata(lsu_wdata),
        .lsu_addr(lsu_addr),
        .ic_wb_wdata(ic_wb_wdata),

        .in_valid(valid_el),
        .in_ready(ready_el),
        .out_valid(valid_lw),
        .out_ready(ready_lw),

        .__error(__lsu_error),
        .wdata(wdata_lw),
        .rd_out_lsu(rd_lsu),
        .lsu_blockf_cyc(lsu_blockf_cyc),
        .lsu_blcokb_cyc(lsu_blcokb_cyc),
        .lsu_work_cyc(lsu_work_cyc),
        .lsu_blockf(lsu_blockf),

        .sw_addr(sw_addr),
        .sw_avail(sw_avail)
    );

    wire valid_lw, ready_lw;
    wire [31:0] wdata_lw;
    wire [4:0] rd_lsu;
    wire [63:0] wbu_blockf_cyc, wbu_work_cyc;
    wire wbu_blockf;


    ysyx_26040135_WBU wbu (
        .clock(clock),
        .reset(reset),

        .in_valid_exu(valid_ew),
        .in_ready_exu(ready_ew),
        .rd_exu(rd_out),
        .wdata_exu(ic_wb_wdata),

        .in_valid_lsu(valid_lw),
        .in_ready_lsu(ready_lw),
        .rd_lsu(rd_lsu),
        .wdata_lsu(wdata_lw),

        .rd_release(rd_release),
        .iag(iag[0]),
        .iag_type(iag[1]),
        .iag_amt(iag_amt),
        .wbu_blockf_cyc(wbu_blockf_cyc),
        .wbu_work_cyc(wbu_work_cyc),
        .wbu_blockf(wbu_blockf),

        .wen(wen),
        .rd(rd_wbu),
        .wdata(wdata_wbu)
    );

    wire [4:0] rd_release;
    wire wen;
    wire [4:0] rd_wbu;
    wire [31:0] wdata_wbu;

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


/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/
/*
需要顶层维护的流水线控制逻辑
*/

// 应对数字冒险的寄存器io前后依赖记录
    always @(posedge clock or posedge reset) begin
        if(reset) begin
            iag <= 0;
            iag_amt <= '{default: 2'b00};
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


    `include "vsrc/dpi-f.sv"

endmodule
/* verilator lint_off UNUSEDSIGNAL */




