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
    // ③ LS 地址必须落在 0x80000020~0x8000003f, 且严格对齐
    always @(*) begin
        if (valid_el) begin
            assume(lsu_addr >= 32'h8000_0020 && lsu_addr <= 32'h8000_003f);
            case (io_type)
                2'b10: assume(lsu_addr[1:0] == 2'b00);   // lw / sw
                2'b01: assume(lsu_addr[0]   == 1'b0);    // lh / lhu / sh
                default: ;                               // lb / lbu / sb 无对齐要求
            endcase
        end
    end

    // ④ 取指地址 pc 必须在指令窗口内, 且 4 字节对齐
    always @(*) begin
        assume(pc >= 32'h8000_0000 && pc < 32'h8000_0020);
        assume(pc[1:0] == 2'b00);
    end

    // ⑤ 下一条 pc(跳转目标 / 顺序 pc+4)也不能跳出指令窗口
    always @(*) begin
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
    wire sw_addr;


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
    ysyx_26040135_AXI4 bus_ifu ();
    ysyx_26040135_AXI4 bus_lsu ();
    ysyx_26040135_AXI4 bus_master ();



    ysyx_26040135_AXI4_Xbar u_xbar (
        .clock   (clock),
        .reset   (reset),
        .ifu_s   (bus_ifu.slave),
        .lsu_s   (bus_lsu.slave),
        .m_m     (bus_master.master)
    );


    ysyx_26040135_AXI_RAM u_ram (
        .bus   (bus_master.slave),
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

endmodule

/* verilator lint_off UNUSEDSIGNAL */




