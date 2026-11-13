/* verilator lint_off UNUSEDSIGNAL */

`ifndef WB_Q_LEN
`define WB_Q_LEN 3
`endif

module ysyx_26040135(
    
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

    function automatic [`WB_Q_LEN*6-1:0] wb_q_enqueue;
        input [5:0] new_data;
        input [`WB_Q_LEN*6-1:0] queue;

        reg [`WB_Q_LEN*6-1:0] result;
        reg found;
        integer i;

        begin
            result = queue;
            found = 1'b0;

            for (i = 0; i < `WB_Q_LEN; i = i + 1) begin
                if (!found && (queue[(i*6) +: 6] == 6'b0)) begin
                    result[(i*6) +: 6] = new_data;
                    found = 1'b1;
                end
            end

            wb_q_enqueue = result;
        end
    endfunction
    wire __ebreak_end;

    // Plain Verilog AXI signal bundles instead of SystemVerilog interface/modport.
    wire [31:0] bus_ifu_araddr, bus_ifu_awaddr, bus_ifu_wdata, bus_ifu_rdata;
    wire        bus_ifu_arvalid, bus_ifu_arready, bus_ifu_rvalid, bus_ifu_rready, bus_ifu_rlast;
    wire        bus_ifu_awvalid, bus_ifu_awready, bus_ifu_wvalid, bus_ifu_wready, bus_ifu_wlast, bus_ifu_bvalid, bus_ifu_bready;
    wire [3:0]  bus_ifu_arid, bus_ifu_rid, bus_ifu_awid, bus_ifu_wstrb, bus_ifu_bid;
    wire [7:0]  bus_ifu_arlen, bus_ifu_awlen;
    wire [2:0]  bus_ifu_arsize, bus_ifu_awsize;
    wire [1:0]  bus_ifu_arburst, bus_ifu_awburst, bus_ifu_rresp, bus_ifu_bresp;

    wire [31:0] bus_lsu_araddr, bus_lsu_awaddr, bus_lsu_wdata, bus_lsu_rdata;
    wire        bus_lsu_arvalid, bus_lsu_arready, bus_lsu_rvalid, bus_lsu_rready, bus_lsu_rlast;
    wire        bus_lsu_awvalid, bus_lsu_awready, bus_lsu_wvalid, bus_lsu_wready, bus_lsu_wlast, bus_lsu_bvalid, bus_lsu_bready;
    wire [3:0]  bus_lsu_arid, bus_lsu_rid, bus_lsu_awid, bus_lsu_wstrb, bus_lsu_bid;
    wire [7:0]  bus_lsu_arlen, bus_lsu_awlen;
    wire [2:0]  bus_lsu_arsize, bus_lsu_awsize;
    wire [1:0]  bus_lsu_arburst, bus_lsu_awburst, bus_lsu_rresp, bus_lsu_bresp;

    wire [31:0] bus_icache_araddr, bus_icache_awaddr, bus_icache_wdata, bus_icache_rdata;
    wire        bus_icache_arvalid, bus_icache_arready, bus_icache_rvalid, bus_icache_rready, bus_icache_rlast;
    wire        bus_icache_awvalid, bus_icache_awready, bus_icache_wvalid, bus_icache_wready, bus_icache_wlast, bus_icache_bvalid, bus_icache_bready;
    wire [3:0]  bus_icache_arid, bus_icache_rid, bus_icache_awid, bus_icache_wstrb, bus_icache_bid;
    wire [7:0]  bus_icache_arlen, bus_icache_awlen;
    wire [2:0]  bus_icache_arsize, bus_icache_awsize;
    wire [1:0]  bus_icache_arburst, bus_icache_awburst, bus_icache_rresp, bus_icache_bresp;

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


// 流水线控制功能型寄存器

    reg [(`WB_Q_LEN*6)-1:0] wb_q;    // write back queue   编码 xxxxx(写入的寄存器) x(rd的来源l/s)   这里留4个空, 认为最多不会超过4个在途rd

// 流水线级间连接

    wire sw_avail;
    wire sw_addr;

    ysyx_26040135_AXI_ICACHE icache (
        .bus_araddr(bus_ifu_araddr), .bus_arvalid(bus_ifu_arvalid), .bus_arready(bus_ifu_arready),
        .bus_arid(bus_ifu_arid), .bus_arlen(bus_ifu_arlen), .bus_arsize(bus_ifu_arsize), .bus_arburst(bus_ifu_arburst),
        .bus_rdata(bus_ifu_rdata), .bus_rresp(bus_ifu_rresp), .bus_rvalid(bus_ifu_rvalid), .bus_rready(bus_ifu_rready),
        .bus_rid(bus_ifu_rid), .bus_rlast(bus_ifu_rlast),
        .bus_awaddr(bus_ifu_awaddr), .bus_awvalid(bus_ifu_awvalid), .bus_awready(bus_ifu_awready),
        .bus_awid(bus_ifu_awid), .bus_awlen(bus_ifu_awlen), .bus_awsize(bus_ifu_awsize), .bus_awburst(bus_ifu_awburst),
        .bus_wdata(bus_ifu_wdata), .bus_wstrb(bus_ifu_wstrb), .bus_wvalid(bus_ifu_wvalid), .bus_wlast(bus_ifu_wlast),
        .bus_wready(bus_ifu_wready), .bus_bid(bus_ifu_bid), .bus_bresp(bus_ifu_bresp), .bus_bvalid(bus_ifu_bvalid),
        .bus_bready(bus_ifu_bready),
        .mbus_araddr(bus_icache_araddr), .mbus_arvalid(bus_icache_arvalid), .mbus_arready(bus_icache_arready),
        .mbus_arid(bus_icache_arid), .mbus_arlen(bus_icache_arlen), .mbus_arsize(bus_icache_arsize), .mbus_arburst(bus_icache_arburst),
        .mbus_rdata(bus_icache_rdata), .mbus_rresp(bus_icache_rresp), .mbus_rvalid(bus_icache_rvalid), .mbus_rready(bus_icache_rready),
        .mbus_rid(bus_icache_rid), .mbus_rlast(bus_icache_rlast),
        .mbus_awaddr(bus_icache_awaddr), .mbus_awvalid(bus_icache_awvalid), .mbus_awready(bus_icache_awready),
        .mbus_awid(bus_icache_awid), .mbus_awlen(bus_icache_awlen), .mbus_awsize(bus_icache_awsize), .mbus_awburst(bus_icache_awburst),
        .mbus_wdata(bus_icache_wdata), .mbus_wstrb(bus_icache_wstrb), .mbus_wvalid(bus_icache_wvalid), .mbus_wlast(bus_icache_wlast),
        .mbus_wready(bus_icache_wready), .mbus_bid(bus_icache_bid), .mbus_bresp(bus_icache_bresp), .mbus_bvalid(bus_icache_bvalid),
        .mbus_bready(bus_icache_bready),
        .clock(clock),
        .reset(reset),

        .sw_addr(sw_addr),
        .sw_avail(sw_avail)
    );

    ysyx_26040135_AXI_IFU ifu (
        .bus_araddr(bus_ifu_araddr), .bus_arvalid(bus_ifu_arvalid), .bus_arready(bus_ifu_arready),
        .bus_arid(bus_ifu_arid), .bus_arlen(bus_ifu_arlen), .bus_arsize(bus_ifu_arsize), .bus_arburst(bus_ifu_arburst),
        .bus_rdata(bus_ifu_rdata), .bus_rresp(bus_ifu_rresp), .bus_rvalid(bus_ifu_rvalid), .bus_rready(bus_ifu_rready),
        .bus_rid(bus_ifu_rid), .bus_rlast(bus_ifu_rlast),
        .bus_awaddr(bus_ifu_awaddr), .bus_awvalid(bus_ifu_awvalid), .bus_awready(bus_ifu_awready),
        .bus_awid(bus_ifu_awid), .bus_awlen(bus_ifu_awlen), .bus_awsize(bus_ifu_awsize), .bus_awburst(bus_ifu_awburst),
        .bus_wdata(bus_ifu_wdata), .bus_wstrb(bus_ifu_wstrb), .bus_wvalid(bus_ifu_wvalid), .bus_wlast(bus_ifu_wlast),
        .bus_wready(bus_ifu_wready), .bus_bid(bus_ifu_bid), .bus_bresp(bus_ifu_bresp), .bus_bvalid(bus_ifu_bvalid),
        .bus_bready(bus_ifu_bready),
        .clock(clock),
        .reset(reset),
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
    wire exu_new_wbt;
    wire [5:0] exu_new_wbd;


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
        .in_valid(valid_de), .in_ready(ready_de),
        .out_valid_lsu(valid_el), .out_valid_wbu(valid_ew),
        .out_ready_lsu(ready_el), .out_ready_wbu(ready_ew),
        .io(io), .io_type(io_type), .read_is_u(read_is_u),
        .rd_out(rd_out), .lsu_wdata(lsu_wdata), .lsu_addr(lsu_addr),
        .ic_wb_wdata(ic_wb_wdata), .rs1_out(rs1_out), .rs2_out(rs2_out),
        .flush(flush), .pc_flush(pc_flush),
        .ebreak_end(__ebreak_end),
        .wb_q(wb_q), .exu_new_wbd(exu_new_wbd), .exu_new_wbt(exu_new_wbt)

    );

    ysyx_26040135_dbg_register #(5, 32) GPR (
        .clock(clock),
        .reset(reset),
        .wen(wen), // WB
        .raddr1(rs1_out),  // EX
        .raddr2(rs2_out), // EX
        .waddr(rd_wbu), // WB
        .wdata(wdata_wbu), // WB

        .rdata1(rdata1),  // EX
        .rdata2(rdata2)   // EX
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
    wire lsu_blockf;


    ysyx_26040135_AXI_LSU lsu (
        .bus_araddr(bus_lsu_araddr), .bus_arvalid(bus_lsu_arvalid), .bus_arready(bus_lsu_arready),
        .bus_arid(bus_lsu_arid), .bus_arlen(bus_lsu_arlen), .bus_arsize(bus_lsu_arsize), .bus_arburst(bus_lsu_arburst),
        .bus_rdata(bus_lsu_rdata), .bus_rresp(bus_lsu_rresp), .bus_rvalid(bus_lsu_rvalid), .bus_rready(bus_lsu_rready),
        .bus_rid(bus_lsu_rid), .bus_rlast(bus_lsu_rlast),
        .bus_awaddr(bus_lsu_awaddr), .bus_awvalid(bus_lsu_awvalid), .bus_awready(bus_lsu_awready),
        .bus_awid(bus_lsu_awid), .bus_awlen(bus_lsu_awlen), .bus_awsize(bus_lsu_awsize), .bus_awburst(bus_lsu_awburst),
        .bus_wdata(bus_lsu_wdata), .bus_wstrb(bus_lsu_wstrb), .bus_wvalid(bus_lsu_wvalid), .bus_wlast(bus_lsu_wlast),
        .bus_wready(bus_lsu_wready), .bus_bid(bus_lsu_bid), .bus_bresp(bus_lsu_bresp), .bus_bvalid(bus_lsu_bvalid),
        .bus_bready(bus_lsu_bready),
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

        .wdata(wdata_lw),
        .rd_out_lsu(rd_lsu),
        .lsu_blockf(lsu_blockf),

        .sw_addr(sw_addr),
        .sw_avail(sw_avail),
        .flush(lsu_flush)
    );

    wire valid_lw, ready_lw;
    wire [31:0] wdata_lw;
    wire [4:0] rd_lsu;
    wire wbu_blockf;
    wire lsu_flush;


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

        .wbu_blockf(wbu_blockf),

        .wen(wen),
        .rd(rd_wbu),
        .wdata(wdata_wbu),

        .wb_q(wb_q),
        .exu_new_wbd(exu_new_wbd),
        .exu_new_wbt(exu_new_wbt),
        .flush(lsu_flush),
        .wb_q_update(wb_q_update)
    );

    wire [4:0] rd_release;
    wire wen;
    wire [4:0] rd_wbu;
    wire [31:0] wdata_wbu;
    wire [(`WB_Q_LEN*6)-1:0] wb_q_update;

/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/

// ⭐: BUS 总线相关
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
        .ifu_s_araddr(bus_icache_araddr), .ifu_s_arvalid(bus_icache_arvalid), .ifu_s_arready(bus_icache_arready),
        .ifu_s_arid(bus_icache_arid), .ifu_s_arlen(bus_icache_arlen), .ifu_s_arsize(bus_icache_arsize), .ifu_s_arburst(bus_icache_arburst),
        .ifu_s_rdata(bus_icache_rdata), .ifu_s_rresp(bus_icache_rresp), .ifu_s_rvalid(bus_icache_rvalid), .ifu_s_rready(bus_icache_rready),
        .ifu_s_rid(bus_icache_rid), .ifu_s_rlast(bus_icache_rlast),
        .ifu_s_awaddr(bus_icache_awaddr), .ifu_s_awvalid(bus_icache_awvalid), .ifu_s_awready(bus_icache_awready),
        .ifu_s_awid(bus_icache_awid), .ifu_s_awlen(bus_icache_awlen), .ifu_s_awsize(bus_icache_awsize), .ifu_s_awburst(bus_icache_awburst),
        .ifu_s_wdata(bus_icache_wdata), .ifu_s_wstrb(bus_icache_wstrb), .ifu_s_wvalid(bus_icache_wvalid), .ifu_s_wlast(bus_icache_wlast),
        .ifu_s_wready(bus_icache_wready), .ifu_s_bid(bus_icache_bid), .ifu_s_bresp(bus_icache_bresp), .ifu_s_bvalid(bus_icache_bvalid),
        .ifu_s_bready(bus_icache_bready),
        .lsu_s_araddr(bus_lsu_araddr), .lsu_s_arvalid(bus_lsu_arvalid), .lsu_s_arready(bus_lsu_arready),
        .lsu_s_arid(bus_lsu_arid), .lsu_s_arlen(bus_lsu_arlen), .lsu_s_arsize(bus_lsu_arsize), .lsu_s_arburst(bus_lsu_arburst),
        .lsu_s_rdata(bus_lsu_rdata), .lsu_s_rresp(bus_lsu_rresp), .lsu_s_rvalid(bus_lsu_rvalid), .lsu_s_rready(bus_lsu_rready),
        .lsu_s_rid(bus_lsu_rid), .lsu_s_rlast(bus_lsu_rlast),
        .lsu_s_awaddr(bus_lsu_awaddr), .lsu_s_awvalid(bus_lsu_awvalid), .lsu_s_awready(bus_lsu_awready),
        .lsu_s_awid(bus_lsu_awid), .lsu_s_awlen(bus_lsu_awlen), .lsu_s_awsize(bus_lsu_awsize), .lsu_s_awburst(bus_lsu_awburst),
        .lsu_s_wdata(bus_lsu_wdata), .lsu_s_wstrb(bus_lsu_wstrb), .lsu_s_wvalid(bus_lsu_wvalid), .lsu_s_wlast(bus_lsu_wlast),
        .lsu_s_wready(bus_lsu_wready), .lsu_s_bid(bus_lsu_bid), .lsu_s_bresp(bus_lsu_bresp), .lsu_s_bvalid(bus_lsu_bvalid),
        .lsu_s_bready(bus_lsu_bready),
        .m_m_araddr(bus_master_araddr), .m_m_arvalid(bus_master_arvalid), .m_m_arready(bus_master_arready),
        .m_m_arid(bus_master_arid), .m_m_arlen(bus_master_arlen), .m_m_arsize(bus_master_arsize), .m_m_arburst(bus_master_arburst),
        .m_m_rdata(bus_master_rdata), .m_m_rresp(bus_master_rresp), .m_m_rvalid(bus_master_rvalid), .m_m_rready(bus_master_rready),
        .m_m_rid(bus_master_rid), .m_m_rlast(bus_master_rlast),
        .m_m_awaddr(bus_master_awaddr), .m_m_awvalid(bus_master_awvalid), .m_m_awready(bus_master_awready),
        .m_m_awid(bus_master_awid), .m_m_awlen(bus_master_awlen), .m_m_awsize(bus_master_awsize), .m_m_awburst(bus_master_awburst),
        .m_m_wdata(bus_master_wdata), .m_m_wstrb(bus_master_wstrb), .m_m_wvalid(bus_master_wvalid), .m_m_wlast(bus_master_wlast),
        .m_m_wready(bus_master_wready), .m_m_bid(bus_master_bid), .m_m_bresp(bus_master_bresp), .m_m_bvalid(bus_master_bvalid),
        .m_m_bready(bus_master_bready),
        .clint_m_araddr(bus_clint_araddr), .clint_m_arvalid(bus_clint_arvalid), .clint_m_arready(bus_clint_arready),
        .clint_m_arid(bus_clint_arid), .clint_m_arlen(bus_clint_arlen), .clint_m_arsize(bus_clint_arsize), .clint_m_arburst(bus_clint_arburst),
        .clint_m_rdata(bus_clint_rdata), .clint_m_rresp(bus_clint_rresp), .clint_m_rvalid(bus_clint_rvalid), .clint_m_rready(bus_clint_rready),
        .clint_m_rid(bus_clint_rid), .clint_m_rlast(bus_clint_rlast),
        .clint_m_awaddr(bus_clint_awaddr), .clint_m_awvalid(bus_clint_awvalid), .clint_m_awready(bus_clint_awready),
        .clint_m_awid(bus_clint_awid), .clint_m_awlen(bus_clint_awlen), .clint_m_awsize(bus_clint_awsize), .clint_m_awburst(bus_clint_awburst),
        .clint_m_wdata(bus_clint_wdata), .clint_m_wstrb(bus_clint_wstrb), .clint_m_wvalid(bus_clint_wvalid), .clint_m_wlast(bus_clint_wlast),
        .clint_m_wready(bus_clint_wready), .clint_m_bid(bus_clint_bid), .clint_m_bresp(bus_clint_bresp), .clint_m_bvalid(bus_clint_bvalid),
        .clint_m_bready(bus_clint_bready)
    );

    ysyx_26040135_AXI_CLINT u_clint (
        .bus_araddr(bus_clint_araddr), .bus_arvalid(bus_clint_arvalid), .bus_arready(bus_clint_arready),
        .bus_arid(bus_clint_arid), .bus_arlen(bus_clint_arlen), .bus_arsize(bus_clint_arsize), .bus_arburst(bus_clint_arburst),
        .bus_rdata(bus_clint_rdata), .bus_rresp(bus_clint_rresp), .bus_rvalid(bus_clint_rvalid), .bus_rready(bus_clint_rready),
        .bus_rid(bus_clint_rid), .bus_rlast(bus_clint_rlast),
        .bus_awaddr(bus_clint_awaddr), .bus_awvalid(bus_clint_awvalid), .bus_awready(bus_clint_awready),
        .bus_awid(bus_clint_awid), .bus_awlen(bus_clint_awlen), .bus_awsize(bus_clint_awsize), .bus_awburst(bus_clint_awburst),
        .bus_wdata(bus_clint_wdata), .bus_wstrb(bus_clint_wstrb), .bus_wvalid(bus_clint_wvalid), .bus_wlast(bus_clint_wlast),
        .bus_wready(bus_clint_wready), .bus_bid(bus_clint_bid), .bus_bresp(bus_clint_bresp), .bus_bvalid(bus_clint_bvalid),
        .bus_bready(bus_clint_bready),
        .clock(clock),
        .reset(reset)
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
            wb_q <= 0;
        end else begin
            if(wen) begin
                wb_q <= wb_q_update;
            end else begin
                if(exu_new_wbt) begin
                    wb_q <= wb_q_enqueue(exu_new_wbd, wb_q);
                end
            end
        end
    end




endmodule


/* verilator lint_off UNUSEDSIGNAL */




