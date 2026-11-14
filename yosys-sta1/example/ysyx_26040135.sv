
/*
npc的综合版本要做的几个优化:

去掉不必要的debug和仿真信号, 性能计数器等
仔细检查看有没有不一样, 和vsrc对比
确定有没有综合器错误优化
错误处理怎么办(访问不支持的地址等), 按理来说应该硬件触发exception handler, 如果弄不了, 那就只能卡死了, 然后手动重启
*/

module ysyx_26040135(
    
    input clock,
    input reset,
    input io_interrupt,   //

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

    wire [1:0]  __ifu_error;     
    wire        __ifu_master_validation_error;    
    wire [1:0]  __lsu_error;   

    wire __ebreak_end;

// 流水线级间连接

    wire sw_avail;
    wire [31:0] sw_addr;   

    ysyx_26040135_AXI_ICACHE icache (
        
        .fetch_valid(fetch_valid),
        .instr_valid(instr_valid),
        .instr(instr_icache),
        .fetch_error(fetch_error),
        .fetch_addr(fetch_addr),

        .mbus_araddr (bus_icache_araddr),
        .mbus_arid (bus_icache_arid),
        .mbus_arlen (bus_icache_arlen),
        .mbus_arsize (bus_icache_arsize),
        .mbus_arburst (bus_icache_arburst),
        .mbus_arvalid (bus_icache_arvalid),
        .mbus_arready (bus_icache_arready),
        .mbus_rdata (bus_icache_rdata),
        .mbus_rid (bus_icache_rid),
        .mbus_rresp (bus_icache_rresp),
        .mbus_rlast (bus_icache_rlast),
        .mbus_rvalid (bus_icache_rvalid),
        .mbus_rready (bus_icache_rready),
        .clock                          (clock),
        .reset                          (reset),

        .sw_addr                        (sw_addr),
        .sw_avail                       (sw_avail)
    );

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
        .pc_flush(pc_flush)
    ); 

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
        .rd(rd), .rs1(rs1), .rs2(rs2), .imm(imm)
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


ysyx_26040135_EXU exu (
    .clock(clock), .reset(reset), .pc(pc_d),
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

    .in_valid(valid_de), .in_ready(ready_de),
    .out_valid(valid_el),
    .out_ready(ready_el),

    .is_ls(is_ls),
    .io(io), .io_type(io_type), .read_is_u(read_is_u),
    .rd_out(rd_out), .lsu_wdata(lsu_wdata), .lsu_addr(lsu_addr),
    .ic_wb_wdata(ic_wb_wdata), .rs1_out(rs1_out), .rs2_out(rs2_out),
    .flush(flush), .pc_flush(pc_flush),

    .ebreak_end(__ebreak_end),

    .bypass_wdata_lsu(wdata_lw), .bypass_rd_lsu(rd_lsu), .lsu_bypass_data_valid(lsu_bypass_data_valid),
    .bypass_wdata_wbu(wdata_wbu), .bypass_rd_wbu(rd_wbu), .wbu_bypass_data_valid(wen)
);
    wire is_ls;
    wire lsu_bypass_data_valid;


    ysyx_26040135_dbg_register #(5, 32) GPR (
        .clock(clock),
        .reset(reset),
        .wen(wen), // WB
        .raddr1(rs1_out),  // EX
        .raddr2(rs2_out), // EX
        .waddr(rd_wbu), // WB
        .wdata(wdata_wbu), // WB

        .rdata1(rdata1),  // EX
        .rdata2(rdata2)  // EX
    );

    wire valid_el;
    wire ready_el;
    wire io;
    wire [1:0] io_type;
    wire read_is_u;
    wire [4:0] rd_out, rs1_out, rs2_out;
    wire [31:0] lsu_wdata, lsu_addr, ic_wb_wdata;
    wire [31:0] rdata1, rdata2;
    wire lsu_blockf;


    ysyx_26040135_AXI_LSU lsu (
        .bus_araddr (bus_lsu_araddr),
        .bus_arid (bus_lsu_arid),
        .bus_arlen (bus_lsu_arlen),
        .bus_arsize (bus_lsu_arsize),
        .bus_arburst (bus_lsu_arburst),
        .bus_arvalid (bus_lsu_arvalid),
        .bus_arready (bus_lsu_arready),
        .bus_rdata (bus_lsu_rdata),
        .bus_rid (bus_lsu_rid),
        .bus_rresp (bus_lsu_rresp),
        .bus_rlast (bus_lsu_rlast),
        .bus_rvalid (bus_lsu_rvalid),
        .bus_rready (bus_lsu_rready),
        .bus_awaddr (bus_lsu_awaddr),
        .bus_awid (bus_lsu_awid),
        .bus_awlen (bus_lsu_awlen),
        .bus_awsize (bus_lsu_awsize),
        .bus_awburst (bus_lsu_awburst),
        .bus_awvalid (bus_lsu_awvalid),
        .bus_awready (bus_lsu_awready),
        .bus_wdata (bus_lsu_wdata),
        .bus_wstrb (bus_lsu_wstrb),
        .bus_wlast (bus_lsu_wlast),
        .bus_wvalid (bus_lsu_wvalid),
        .bus_wready (bus_lsu_wready),
        .bus_bid (bus_lsu_bid),
        .bus_bresp (bus_lsu_bresp),
        .bus_bvalid (bus_lsu_bvalid),
        .bus_bready (bus_lsu_bready),
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

        .in_valid(valid_el),
        .in_ready(ready_el),
        .out_valid(valid_lw),
        .out_ready(ready_lw),

        .__error(__lsu_error),
        .wdata(wdata_lw),
        .rd_out(rd_lsu),
        .lsu_bypass_data_valid(lsu_bypass_data_valid),

        .lsu_blockf(lsu_blockf),

        .sw_addr(sw_addr),
        .sw_avail(sw_avail)
    );

    wire valid_lw, ready_lw;
    wire [31:0] wdata_lw;
    wire [4:0] rd_lsu;
    wire wbu_blockf;


    ysyx_26040135_WBU wbu (
        .clock(clock),
        .reset(reset),

        .in_valid(valid_lw),
        .in_ready(ready_lw),
        .rd(rd_lsu),
        .wdata(wdata_lw),

        .wbu_blockf(wbu_blockf),

        .wen(wen),
        .rd_wb(rd_wbu),
        .wdata_wb(wdata_wbu)
    );

    wire wen;
    wire [4:0] rd_wbu;
    wire [31:0] wdata_wbu;

/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/

// ⭐: BUS 总线相关
    wire [31:0] bus_lsu_araddr, bus_lsu_awaddr, bus_lsu_wdata, bus_lsu_rdata;
    wire        bus_lsu_arvalid, bus_lsu_arready, bus_lsu_rvalid, bus_lsu_rready, bus_lsu_rlast;
    wire        bus_lsu_awvalid, bus_lsu_awready, bus_lsu_wvalid, bus_lsu_wready, bus_lsu_wlast, bus_lsu_bvalid, bus_lsu_bready;
    wire [3:0]  bus_lsu_arid, bus_lsu_rid, bus_lsu_awid, bus_lsu_wstrb, bus_lsu_bid;
    wire [7:0]  bus_lsu_arlen, bus_lsu_awlen;
    wire [2:0]  bus_lsu_arsize, bus_lsu_awsize;
    wire [1:0]  bus_lsu_arburst, bus_lsu_awburst, bus_lsu_rresp, bus_lsu_bresp;
    wire [31:0] bus_master_araddr, bus_master_awaddr, bus_master_wdata, bus_master_rdata;
    wire        bus_master_arvalid, bus_master_arready, bus_master_rvalid, bus_master_rready, bus_master_rlast;
    wire        bus_master_awvalid, bus_master_awready, bus_master_wvalid, bus_master_wready, bus_master_wlast, bus_master_bvalid, bus_master_bready;
    wire [3:0]  bus_master_arid, bus_master_rid, bus_master_awid, bus_master_wstrb, bus_master_bid;
    wire [7:0]  bus_master_arlen, bus_master_awlen;
    wire [2:0]  bus_master_arsize, bus_master_awsize;
    wire [1:0]  bus_master_arburst, bus_master_awburst, bus_master_rresp, bus_master_bresp;
    wire [31:0] bus_clint_araddr, bus_clint_awaddr, bus_clint_wdata, bus_clint_rdata;
    wire        bus_clint_arvalid, bus_clint_arready, bus_clint_rvalid, bus_clint_rready, bus_clint_rlast;
    wire        bus_clint_awvalid, bus_clint_awready, bus_clint_wvalid, bus_clint_wready, bus_clint_wlast, bus_clint_bvalid, bus_clint_bready;
    wire [3:0]  bus_clint_arid, bus_clint_rid, bus_clint_awid, bus_clint_wstrb, bus_clint_bid;
    wire [7:0]  bus_clint_arlen, bus_clint_awlen;
    wire [2:0]  bus_clint_arsize, bus_clint_awsize;
    wire [1:0]  bus_clint_arburst, bus_clint_awburst, bus_clint_rresp, bus_clint_bresp;

    wire        fetch_valid;
    wire        instr_valid;
    wire [31:0] instr_icache;
    wire [1:0]  fetch_error;
    wire [31:0] fetch_addr;

    wire [31:0] bus_icache_araddr, bus_icache_rdata;
    wire        bus_icache_arvalid, bus_icache_arready, bus_icache_rvalid, bus_icache_rready, bus_icache_rlast;
    wire [3:0]  bus_icache_arid, bus_icache_rid;
    wire [7:0]  bus_icache_arlen;
    wire [2:0]  bus_icache_arsize;
    wire [1:0]  bus_icache_arburst, bus_icache_rresp;

    assign io_master_awvalid = bus_master_awvalid;
    assign io_master_awid    = bus_master_awid;
    assign io_master_awaddr  = bus_master_awaddr;
    assign io_master_awlen   = bus_master_awlen;
    assign io_master_awsize  = bus_master_awsize;
    assign io_master_awburst = bus_master_awburst;

    assign bus_master_awready = io_master_awready;
    assign io_master_wvalid = bus_master_wvalid;
    assign io_master_wdata  = bus_master_wdata;
    assign io_master_wstrb  = bus_master_wstrb;
    assign io_master_wlast  = bus_master_wlast;


    assign bus_master_wready = io_master_wready;
    assign bus_master_bvalid = io_master_bvalid;
    assign bus_master_bid    = io_master_bid;
    assign bus_master_bresp  = io_master_bresp;


    assign io_master_bready = bus_master_bready;
    assign io_master_arvalid = bus_master_arvalid;
    assign io_master_arid    = bus_master_arid;
    assign io_master_araddr  = bus_master_araddr;
    assign io_master_arlen   = bus_master_arlen;
    assign io_master_arsize  = bus_master_arsize;
    assign io_master_arburst = bus_master_arburst;

    assign bus_master_arready = io_master_arready;
    assign bus_master_rvalid = io_master_rvalid;
    assign bus_master_rid    = io_master_rid;
    assign bus_master_rdata  = io_master_rdata;
    assign bus_master_rresp  = io_master_rresp;
    assign bus_master_rlast  = io_master_rlast;
    assign io_master_rready = bus_master_rready;



ysyx_26040135_AXI4_Xbar u_xbar (
    .clock   (clock),
    .reset   (reset),
    .ifu_s_araddr (bus_icache_araddr),
    .ifu_s_arid (bus_icache_arid),
    .ifu_s_arlen (bus_icache_arlen),
    .ifu_s_arsize (bus_icache_arsize),
    .ifu_s_arburst (bus_icache_arburst),
    .ifu_s_arvalid (bus_icache_arvalid),
    .ifu_s_arready (bus_icache_arready),
    .ifu_s_rdata (bus_icache_rdata),
    .ifu_s_rid (bus_icache_rid),
    .ifu_s_rresp (bus_icache_rresp),
    .ifu_s_rlast (bus_icache_rlast),
    .ifu_s_rvalid (bus_icache_rvalid),
    .ifu_s_rready (bus_icache_rready),
    .lsu_s_araddr (bus_lsu_araddr),
    .lsu_s_arid (bus_lsu_arid),
    .lsu_s_arlen (bus_lsu_arlen),
    .lsu_s_arsize (bus_lsu_arsize),
    .lsu_s_arburst (bus_lsu_arburst),
    .lsu_s_arvalid (bus_lsu_arvalid),
    .lsu_s_arready (bus_lsu_arready),
    .lsu_s_rdata (bus_lsu_rdata),
    .lsu_s_rid (bus_lsu_rid),
    .lsu_s_rresp (bus_lsu_rresp),
    .lsu_s_rlast (bus_lsu_rlast),
    .lsu_s_rvalid (bus_lsu_rvalid),
    .lsu_s_rready (bus_lsu_rready),
    .lsu_s_awaddr (bus_lsu_awaddr),
    .lsu_s_awid (bus_lsu_awid),
    .lsu_s_awlen (bus_lsu_awlen),
    .lsu_s_awsize (bus_lsu_awsize),
    .lsu_s_awburst (bus_lsu_awburst),
    .lsu_s_awvalid (bus_lsu_awvalid),
    .lsu_s_awready (bus_lsu_awready),
    .lsu_s_wdata (bus_lsu_wdata),
    .lsu_s_wstrb (bus_lsu_wstrb),
    .lsu_s_wlast (bus_lsu_wlast),
    .lsu_s_wvalid (bus_lsu_wvalid),
    .lsu_s_wready (bus_lsu_wready),
    .lsu_s_bid (bus_lsu_bid),
    .lsu_s_bresp (bus_lsu_bresp),
    .lsu_s_bvalid (bus_lsu_bvalid),
    .lsu_s_bready (bus_lsu_bready),
    .m_m_araddr (bus_master_araddr),
    .m_m_arid (bus_master_arid),
    .m_m_arlen (bus_master_arlen),
    .m_m_arsize (bus_master_arsize),
    .m_m_arburst (bus_master_arburst),
    .m_m_arvalid (bus_master_arvalid),
    .m_m_arready (bus_master_arready),
    .m_m_rdata (bus_master_rdata),
    .m_m_rid (bus_master_rid),
    .m_m_rresp (bus_master_rresp),
    .m_m_rlast (bus_master_rlast),
    .m_m_rvalid (bus_master_rvalid),
    .m_m_rready (bus_master_rready),
    .m_m_awaddr (bus_master_awaddr),
    .m_m_awid (bus_master_awid),
    .m_m_awlen (bus_master_awlen),
    .m_m_awsize (bus_master_awsize),
    .m_m_awburst (bus_master_awburst),
    .m_m_awvalid (bus_master_awvalid),
    .m_m_awready (bus_master_awready),
    .m_m_wdata (bus_master_wdata),
    .m_m_wstrb (bus_master_wstrb),
    .m_m_wlast (bus_master_wlast),
    .m_m_wvalid (bus_master_wvalid),
    .m_m_wready (bus_master_wready),
    .m_m_bid (bus_master_bid),
    .m_m_bresp (bus_master_bresp),
    .m_m_bvalid (bus_master_bvalid),
    .m_m_bready (bus_master_bready),
    .clint_m_araddr (bus_clint_araddr),
    .clint_m_arid (bus_clint_arid),
    .clint_m_arlen (bus_clint_arlen),
    .clint_m_arsize (bus_clint_arsize),
    .clint_m_arburst (bus_clint_arburst),
    .clint_m_arvalid (bus_clint_arvalid),
    .clint_m_arready (bus_clint_arready),
    .clint_m_rdata (bus_clint_rdata),
    .clint_m_rid (bus_clint_rid),
    .clint_m_rresp (bus_clint_rresp),
    .clint_m_rlast (bus_clint_rlast),
    .clint_m_rvalid (bus_clint_rvalid),
    .clint_m_rready (bus_clint_rready),
    .clint_m_awaddr (bus_clint_awaddr),
    .clint_m_awid (bus_clint_awid),
    .clint_m_awlen (bus_clint_awlen),
    .clint_m_awsize (bus_clint_awsize),
    .clint_m_awburst (bus_clint_awburst),
    .clint_m_awvalid (bus_clint_awvalid),
    .clint_m_awready (bus_clint_awready),
    .clint_m_wdata (bus_clint_wdata),
    .clint_m_wstrb (bus_clint_wstrb),
    .clint_m_wlast (bus_clint_wlast),
    .clint_m_wvalid (bus_clint_wvalid),
    .clint_m_wready (bus_clint_wready),
    .clint_m_bid (bus_clint_bid),
    .clint_m_bresp (bus_clint_bresp),
    .clint_m_bvalid (bus_clint_bvalid),
    .clint_m_bready (bus_clint_bready)
);


ysyx_26040135_AXI_CLINT u_clint (
    .bus_araddr (bus_clint_araddr),
    .bus_arid (bus_clint_arid),
    .bus_arlen (bus_clint_arlen),
    .bus_arsize (bus_clint_arsize),
    .bus_arburst (bus_clint_arburst),
    .bus_arvalid (bus_clint_arvalid),
    .bus_arready (bus_clint_arready),
    .bus_rdata (bus_clint_rdata),
    .bus_rid (bus_clint_rid),
    .bus_rresp (bus_clint_rresp),
    .bus_rlast (bus_clint_rlast),
    .bus_rvalid (bus_clint_rvalid),
    .bus_rready (bus_clint_rready),
    .bus_awaddr (bus_clint_awaddr),
    .bus_awid (bus_clint_awid),
    .bus_awlen (bus_clint_awlen),
    .bus_awsize (bus_clint_awsize),
    .bus_awburst (bus_clint_awburst),
    .bus_awvalid (bus_clint_awvalid),
    .bus_awready (bus_clint_awready),
    .bus_wdata (bus_clint_wdata),
    .bus_wstrb (bus_clint_wstrb),
    .bus_wlast (bus_clint_wlast),
    .bus_wvalid (bus_clint_wvalid),
    .bus_wready (bus_clint_wready),
    .bus_bid (bus_clint_bid),
    .bus_bresp (bus_clint_bresp),
    .bus_bvalid (bus_clint_bvalid),
    .bus_bready (bus_clint_bready),
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



endmodule





