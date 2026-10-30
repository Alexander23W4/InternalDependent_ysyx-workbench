/* verilator lint_off UNUSEDSIGNAL */

/*
assume 和 difftest的DUT
*/
`ifndef WB_Q_LEN
`define WB_Q_LEN 3
`endif

module dut_top(
    
    input clock,
    input reset,
    
    input logic [31:0][7:0] ram,  // 0-31   32-63
    output compare,
    output [1:0] jump,   
    output [32*32-1:0] dbg_reg,

    output _new_instr,
    output [31:0] _pc
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
                if (!found && (queue[i] == 6'b0)) begin
                    result[i*6 +: 6] = new_data;
                    found = 1'b1;
                end
            end

            wb_q_enqueue = result;
        end
    endfunction
    // ③ LS 地址必须落在 0x80000020~0x8000003f, 且严格对齐
    always @(*) begin
        if (1'b0) begin                 // TEMP
            assume(lsu_addr >= 32'h8000_0020 && lsu_addr <= 32'h8000_003f);
            case (io_type)
                2'b10: assume(lsu_addr[1:0] == 2'b00);   // lw / sw
                2'b01: assume(lsu_addr[0]   == 1'b0);    // lh / lhu / sh
                default: ;                               // lb / lbu / sb 无对齐要求
            endcase
        end
    end

    // ④ 取指地址(IFU 内部的 pc 寄存器, 不是 out_pc!)必须在指令窗口内, 且 4 字节对齐
    //    注意: dut_top 的 pc 是 IFU 的 out_pc, 复位后是 0, 不能拿它做 assume
    always @(*) if (1'b0) begin     // TEMP
        assume(ifu.pc >= 32'h8000_0000 && ifu.pc < 32'h8000_0020);
        assume(ifu.pc[1:0] == 2'b00);
    end

    // ⑤ 下一条 pc(跳转目标 / 顺序 pc+4)也不能跳出指令窗口
    //    注意: 只在 flush 有效(EXU 真的给出跳转)时才约束, 否则复位/空拍时 pc_flush 是垃圾, 会把整个 trace 变 UNSAT
    always @(*) if (1'b0) begin     // TEMP
        assume(pc_flush >= 32'h8000_0000 && pc_flush < 32'h8000_0020);
        assume(pc_flush[1:0] == 2'b00);
    end


    wire [31:0] _mstatus, _mepc, _mcause, _mtvec, _mcycle, _mcycleh, _mvendorid, _marchid; 
    wire [31:0] _instr;
    

    wire [1:0]  __ifu_error;     
    wire        __ifu_master_validation_error;    
    wire [1:0]  __lsu_error;   

    wire __ebreak_end;

// 流水线控制功能型寄存器
    reg [`WB_Q_LEN-1:0][5:0] wb_q;    // write back queue   编码 xxxxx(写入的寄存器) x(rd的来源l/s), 留4个空

// 流水线级间连接

    wire sw_avail;
    wire [31:0] sw_addr;


    ysyx_26040135_AXI_IFU ifu (
        .bus_araddr(ifu_araddr),
        .bus_arid(ifu_arid),
        .bus_arlen(ifu_arlen),
        .bus_arsize(ifu_arsize),
        .bus_arburst(ifu_arburst),
        .bus_arvalid(ifu_arvalid),
        .bus_arready(ifu_arready),
        .bus_rdata(ifu_rdata),
        .bus_rid(ifu_rid),
        .bus_rresp(ifu_rresp),
        .bus_rlast(ifu_rlast),
        .bus_rvalid(ifu_rvalid),
        .bus_rready(ifu_rready),
        .bus_awaddr(ifu_awaddr),
        .bus_awid(ifu_awid),
        .bus_awlen(ifu_awlen),
        .bus_awsize(ifu_awsize),
        .bus_awburst(ifu_awburst),
        .bus_awvalid(ifu_awvalid),
        .bus_awready(ifu_awready),
        .bus_wdata(ifu_wdata),
        .bus_wstrb(ifu_wstrb),
        .bus_wlast(ifu_wlast),
        .bus_wvalid(ifu_wvalid),
        .bus_wready(ifu_wready),
        .bus_bid(ifu_bid),
        .bus_bresp(ifu_bresp),
        .bus_bvalid(ifu_bvalid),
        .bus_bready(ifu_bready),
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
    .flush(flush), .pc_flush(pc_flush),
    .exu_blockf_cyc(exu_blockf_cyc),
    .exu_blcokbl_cyc(exu_blcokbl_cyc), .exu_blcokbw_cyc(exu_blcokbw_cyc),
    .exu_work_cyc(exu_work_cyc), .ebreak_end(__ebreak_end),
    .wb_q(wb_q), .exu_new_wbd(exu_new_wbd), .exu_new_wbt(exu_new_wbt)
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
    wire [31:0] rdata1, rdata2;
    wire [63:0] lsu_blockf_cyc, lsu_blcokb_cyc, lsu_work_cyc;
    wire lsu_blockf;


    ysyx_26040135_AXI_LSU lsu (
        .bus_araddr(lsbus_araddr),
        .bus_arid(lsbus_arid),
        .bus_arlen(lsbus_arlen),
        .bus_arsize(lsbus_arsize),
        .bus_arburst(lsbus_arburst),
        .bus_arvalid(lsbus_arvalid),
        .bus_arready(lsbus_arready),
        .bus_rdata(lsbus_rdata),
        .bus_rid(lsbus_rid),
        .bus_rresp(lsbus_rresp),
        .bus_rlast(lsbus_rlast),
        .bus_rvalid(lsbus_rvalid),
        .bus_rready(lsbus_rready),
        .bus_awaddr(lsbus_awaddr),
        .bus_awid(lsbus_awid),
        .bus_awlen(lsbus_awlen),
        .bus_awsize(lsbus_awsize),
        .bus_awburst(lsbus_awburst),
        .bus_awvalid(lsbus_awvalid),
        .bus_awready(lsbus_awready),
        .bus_wdata(lsbus_wdata),
        .bus_wstrb(lsbus_wstrb),
        .bus_wlast(lsbus_wlast),
        .bus_wvalid(lsbus_wvalid),
        .bus_wready(lsbus_wready),
        .bus_bid(lsbus_bid),
        .bus_bresp(lsbus_bresp),
        .bus_bvalid(lsbus_bvalid),
        .bus_bready(lsbus_bready),
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
        .sw_avail(sw_avail),
        .flush(lsu_flush)
    );

    wire valid_lw, ready_lw;
    wire [31:0] wdata_lw;
    wire [4:0] rd_lsu;
    wire [63:0] wbu_blockf_cyc, wbu_work_cyc;
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

        .wbu_blockf_cyc(wbu_blockf_cyc),
        .wbu_work_cyc(wbu_work_cyc),
        .wbu_blockf(wbu_blockf),

        .wen(wen),
        .rd(rd_wbu),
        .wdata(wdata_wbu),

        .wb_q(wb_q),
        .exu_new_wbd(exu_new_wbd),
        .exu_new_wbt(exu_new_wbt),
        .flush(lsu_flush),
        .wb_q_update(wb_q_update),

        .compare(compare),
        .jump(jump)
    );

    wire wen;
    wire [4:0] rd_wbu;
    wire [31:0] wdata_wbu;
    wire [`WB_Q_LEN-1:0][5:0] wb_q_update;

/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/

// ⭐: BUS 总线相关
    wire [31:0] ifu_araddr;
    wire [3:0] ifu_arid;
    wire [7:0] ifu_arlen;
    wire [2:0] ifu_arsize;
    wire [1:0] ifu_arburst;
    wire        ifu_arvalid;
    wire        ifu_arready;
    wire [31:0] ifu_rdata;
    wire [3:0] ifu_rid;
    wire [1:0] ifu_rresp;
    wire        ifu_rlast;
    wire        ifu_rvalid;
    wire        ifu_rready;
    wire [31:0] ifu_awaddr;
    wire [3:0] ifu_awid;
    wire [7:0] ifu_awlen;
    wire [2:0] ifu_awsize;
    wire [1:0] ifu_awburst;
    wire        ifu_awvalid;
    wire        ifu_awready;
    wire [31:0] ifu_wdata;
    wire [3:0] ifu_wstrb;
    wire        ifu_wlast;
    wire        ifu_wvalid;
    wire        ifu_wready;
    wire [3:0] ifu_bid;
    wire [1:0] ifu_bresp;
    wire        ifu_bvalid;
    wire        ifu_bready;

    wire [31:0] lsbus_araddr;
    wire [3:0] lsbus_arid;
    wire [7:0] lsbus_arlen;
    wire [2:0] lsbus_arsize;
    wire [1:0] lsbus_arburst;
    wire        lsbus_arvalid;
    wire        lsbus_arready;
    wire [31:0] lsbus_rdata;
    wire [3:0] lsbus_rid;
    wire [1:0] lsbus_rresp;
    wire        lsbus_rlast;
    wire        lsbus_rvalid;
    wire        lsbus_rready;
    wire [31:0] lsbus_awaddr;
    wire [3:0] lsbus_awid;
    wire [7:0] lsbus_awlen;
    wire [2:0] lsbus_awsize;
    wire [1:0] lsbus_awburst;
    wire        lsbus_awvalid;
    wire        lsbus_awready;
    wire [31:0] lsbus_wdata;
    wire [3:0] lsbus_wstrb;
    wire        lsbus_wlast;
    wire        lsbus_wvalid;
    wire        lsbus_wready;
    wire [3:0] lsbus_bid;
    wire [1:0] lsbus_bresp;
    wire        lsbus_bvalid;
    wire        lsbus_bready;

    wire [31:0] mem_araddr;
    wire [3:0] mem_arid;
    wire [7:0] mem_arlen;
    wire [2:0] mem_arsize;
    wire [1:0] mem_arburst;
    wire        mem_arvalid;
    wire        mem_arready;
    wire [31:0] mem_rdata;
    wire [3:0] mem_rid;
    wire [1:0] mem_rresp;
    wire        mem_rlast;
    wire        mem_rvalid;
    wire        mem_rready;
    wire [31:0] mem_awaddr;
    wire [3:0] mem_awid;
    wire [7:0] mem_awlen;
    wire [2:0] mem_awsize;
    wire [1:0] mem_awburst;
    wire        mem_awvalid;
    wire        mem_awready;
    wire [31:0] mem_wdata;
    wire [3:0] mem_wstrb;
    wire        mem_wlast;
    wire        mem_wvalid;
    wire        mem_wready;
    wire [3:0] mem_bid;
    wire [1:0] mem_bresp;
    wire        mem_bvalid;
    wire        mem_bready;




    ysyx_26040135_AXI4_Xbar u_xbar (
        .clock   (clock),
        .reset   (reset),
        .ifu_s_araddr(ifu_araddr),
        .ifu_s_arid(ifu_arid),
        .ifu_s_arlen(ifu_arlen),
        .ifu_s_arsize(ifu_arsize),
        .ifu_s_arburst(ifu_arburst),
        .ifu_s_arvalid(ifu_arvalid),
        .ifu_s_arready(ifu_arready),
        .ifu_s_rdata(ifu_rdata),
        .ifu_s_rid(ifu_rid),
        .ifu_s_rresp(ifu_rresp),
        .ifu_s_rlast(ifu_rlast),
        .ifu_s_rvalid(ifu_rvalid),
        .ifu_s_rready(ifu_rready),
        .ifu_s_awaddr(ifu_awaddr),
        .ifu_s_awid(ifu_awid),
        .ifu_s_awlen(ifu_awlen),
        .ifu_s_awsize(ifu_awsize),
        .ifu_s_awburst(ifu_awburst),
        .ifu_s_awvalid(ifu_awvalid),
        .ifu_s_awready(ifu_awready),
        .ifu_s_wdata(ifu_wdata),
        .ifu_s_wstrb(ifu_wstrb),
        .ifu_s_wlast(ifu_wlast),
        .ifu_s_wvalid(ifu_wvalid),
        .ifu_s_wready(ifu_wready),
        .ifu_s_bid(ifu_bid),
        .ifu_s_bresp(ifu_bresp),
        .ifu_s_bvalid(ifu_bvalid),
        .ifu_s_bready(ifu_bready),
        .lsu_s_araddr(lsbus_araddr),
        .lsu_s_arid(lsbus_arid),
        .lsu_s_arlen(lsbus_arlen),
        .lsu_s_arsize(lsbus_arsize),
        .lsu_s_arburst(lsbus_arburst),
        .lsu_s_arvalid(lsbus_arvalid),
        .lsu_s_arready(lsbus_arready),
        .lsu_s_rdata(lsbus_rdata),
        .lsu_s_rid(lsbus_rid),
        .lsu_s_rresp(lsbus_rresp),
        .lsu_s_rlast(lsbus_rlast),
        .lsu_s_rvalid(lsbus_rvalid),
        .lsu_s_rready(lsbus_rready),
        .lsu_s_awaddr(lsbus_awaddr),
        .lsu_s_awid(lsbus_awid),
        .lsu_s_awlen(lsbus_awlen),
        .lsu_s_awsize(lsbus_awsize),
        .lsu_s_awburst(lsbus_awburst),
        .lsu_s_awvalid(lsbus_awvalid),
        .lsu_s_awready(lsbus_awready),
        .lsu_s_wdata(lsbus_wdata),
        .lsu_s_wstrb(lsbus_wstrb),
        .lsu_s_wlast(lsbus_wlast),
        .lsu_s_wvalid(lsbus_wvalid),
        .lsu_s_wready(lsbus_wready),
        .lsu_s_bid(lsbus_bid),
        .lsu_s_bresp(lsbus_bresp),
        .lsu_s_bvalid(lsbus_bvalid),
        .lsu_s_bready(lsbus_bready),
        .m_m_araddr(mem_araddr),
        .m_m_arid(mem_arid),
        .m_m_arlen(mem_arlen),
        .m_m_arsize(mem_arsize),
        .m_m_arburst(mem_arburst),
        .m_m_arvalid(mem_arvalid),
        .m_m_arready(mem_arready),
        .m_m_rdata(mem_rdata),
        .m_m_rid(mem_rid),
        .m_m_rresp(mem_rresp),
        .m_m_rlast(mem_rlast),
        .m_m_rvalid(mem_rvalid),
        .m_m_rready(mem_rready),
        .m_m_awaddr(mem_awaddr),
        .m_m_awid(mem_awid),
        .m_m_awlen(mem_awlen),
        .m_m_awsize(mem_awsize),
        .m_m_awburst(mem_awburst),
        .m_m_awvalid(mem_awvalid),
        .m_m_awready(mem_awready),
        .m_m_wdata(mem_wdata),
        .m_m_wstrb(mem_wstrb),
        .m_m_wlast(mem_wlast),
        .m_m_wvalid(mem_wvalid),
        .m_m_wready(mem_wready),
        .m_m_bid(mem_bid),
        .m_m_bresp(mem_bresp),
        .m_m_bvalid(mem_bvalid),
        .m_m_bready(mem_bready)    );


    ysyx_26040135_AXI_RAM u_ram (
        .bus_araddr(mem_araddr),
        .bus_arid(mem_arid),
        .bus_arlen(mem_arlen),
        .bus_arsize(mem_arsize),
        .bus_arburst(mem_arburst),
        .bus_arvalid(mem_arvalid),
        .bus_arready(mem_arready),
        .bus_rdata(mem_rdata),
        .bus_rid(mem_rid),
        .bus_rresp(mem_rresp),
        .bus_rlast(mem_rlast),
        .bus_rvalid(mem_rvalid),
        .bus_rready(mem_rready),
        .bus_awaddr(mem_awaddr),
        .bus_awid(mem_awid),
        .bus_awlen(mem_awlen),
        .bus_awsize(mem_awsize),
        .bus_awburst(mem_awburst),
        .bus_awvalid(mem_awvalid),
        .bus_awready(mem_awready),
        .bus_wdata(mem_wdata),
        .bus_wstrb(mem_wstrb),
        .bus_wlast(mem_wlast),
        .bus_wvalid(mem_wvalid),
        .bus_wready(mem_wready),
        .bus_bid(mem_bid),
        .bus_bresp(mem_bresp),
        .bus_bvalid(mem_bvalid),
        .bus_bready(mem_bready),
        .clock(clock),
        .reset(reset),
        .ram_instr(ram)
    );


/*------------------------------------------------------------------------------------------------------------
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
-------------------------------------------------------------------------------------------------------------*/
/*
需要顶层维护的流水线控制逻辑
*/

// 应对数字冒险的寄存器io前后依赖记录 (write back queue)
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


`ifndef FORMAL
    `include "vsrc/dpi-f.sv"
`endif


endmodule

/* verilator lint_off UNUSEDSIGNAL */




