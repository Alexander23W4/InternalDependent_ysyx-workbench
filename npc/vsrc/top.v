/* verilator lint_off UNUSEDSIGNAL */
module top(
    input clk,
    input rst,
    input [31:0] instr,
    output [32*32-1:0] dbg_reg,
    output [31:0] _pc
);
    // DPI-C interfaces:
    export "DPI-C" task halt;
    task halt(output int endprog); 
        begin
            endprog = {{31{1'b0}}, ebreak};
        end
    endtask


    import "DPI-C" function int unsigned ram_read(
        input int unsigned addr,
        input int amount
    );

    import "DPI-C" function void ram_write(
        input int unsigned addr, 
        input int unsigned data, 
        input int amount
    );

    export "DPI-C" task get_decode_signals;

    task get_decode_signals(
        output int instr_val,
        output int addi_s,
        output int add_s,
        output int jalr_s,
        output int lui_s,
        output int lw_s,
        output int lbu_s,
        output int sw_s,
        output int sb_s,
        output int ebreak_s,
        output int rd_val,
        output int rs1_val,
        output int rs2_val,
        output int immI_val,
        output int immU_val,
        output int immS_val,
        output int wdata_val,
        output int rdata1_val,
        output int rdata2_val,
        output int wen_val
    );
        begin
            instr_val  = instr;
            addi_s     = {31'b0, addi};
            add_s      = {31'b0, add};
            jalr_s     = {31'b0, jalr};
            lui_s      = {31'b0, lui};
            lw_s       = {31'b0, lw};
            lbu_s      = {31'b0, lbu};
            sw_s       = {31'b0, sw};
            sb_s       = {31'b0, sb};
            ebreak_s   = {31'b0, ebreak};

            rd_val     = {27'b0, rd};
            rs1_val    = {27'b0, rs1};
            rs2_val    = {27'b0, rs2};
            immI_val   = immI;
            immU_val   = immU;
            immS_val   = immS;
            wdata_val  = wdata;
            rdata1_val = rdata1;
            rdata2_val = rdata2;
            wen_val    = {31'b0, wen};
        end
    endtask 

// ------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------

    reg [31:0] pc;
    assign _pc = pc;

    wire addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    wire add, sub, sll, slt, sltu, xor_inst, srl, sra, or_inst, and_inst;
    wire lb, lh, lw, lbu, lhu, sb, sh, sw;
    wire beq, bne, blt, bge, bltu, bgeu;
    wire jal, jalr;
    wire lui, auipc;
    wire ebreak;

    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;

    wire [31:0] immI;
    wire [31:0] immU;
    wire [31:0] immS;


    wire [31:0] wdata;
    wire [31:0] rdata1;
    wire [31:0] rdata2;
    wire wen;

    wire [31:0] pc_next_dft;

    assign pc_next_dft = pc + 32'd4;

decode Decode(
        .instr(instr),

        .addi(addi),
        .slti(slti),
        .sltiu(sltiu),
        .xori(xori),
        .ori(ori),
        .andi(andi),
        .slli(slli),
        .srli(srli),
        .srai(srai),

        .add(add),
        .sub(sub),
        .sll(sll),
        .slt(slt),
        .sltu(sltu),
        .xor_inst(xor_inst),
        .srl(srl),
        .sra(sra),
        .or_inst(or_inst),   
        .and_inst(and_inst), 

        .lb(lb),
        .lh(lh),
        .lw(lw),
        .lbu(lbu),
        .lhu(lhu),
        .sb(sb),
        .sh(sh),
        .sw(sw),

        .beq(beq),
        .bne(bne),
        .blt(blt),
        .bge(bge),
        .bltu(bltu),
        .bgeu(bgeu),
        .jal(jal),
        .jalr(jalr),

        .lui(lui),
        .auipc(auipc),
        .ebreak(ebreak),

        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .immI(immI),
        .immU(immU),
        .immS(immS),
        .immB(immB), 
        .immJ(immJ)
    );

    dbg_register #(5, 32) GPR (
        .clk(clk),
        .wen(wen),
        .raddr1(rs1),
        .raddr2(rs2),
        .waddr(rd),
        .wdata(wdata),
        .rdata1(rdata1),
        .rdata2(rdata2),
        .dbg_regs(dbg_reg)
    );

/*

// conditional branch (if + jump)
INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int32_t)src1 < (int32_t)src2) ? s->pc + imm : s->snpc);  // branch if less than
INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = (src1 < src2) ? s->pc + imm : s->snpc);
INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int32_t)src1 >= (int32_t)src2) ? s->pc + imm : s->snpc); // branch if greater equal than
INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = (src1 >= src2) ? s->pc + imm : s->snpc);
INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? s->pc + imm : s->snpc);
INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? s->pc + imm : s->snpc);
*/


    assign wen = add | addi | sub | lui | auipc | 
                 and_inst | or_inst | xor_inst | andi | ori | xori |
                 sll | srl | sra | slli | srli | srai |
                 slt | sltu | slti | sltiu |
                 jal | jalr |
                 lb | lh | lw | lbu | lhu;


    wire [31:0] add1 = ({32{auipc | jal}} & pc) |
                        rdata1;

    wire [31:0] add2 = ({32{add}} & rdata2) |
                       ({32{sw | sb | sh}} & immS) |
                       ({32{auipc}} & immU) |
                       ({32{jal}} & immJ) |
                       ({32{lbu | lw | lhu | lh | lb | addi}} & immI) |
                       

    wire [31:0] add_rst = add1 + add2;


    // other arithm/logic
    wire[31:0] sub_rst = rdata1 - rdata2;
    wire[31:0] xor_rst = rdata1 ^ rdata2;
    wire[31:0] xori_rst = rdata1 ^ immI;
    wire[31:0] or_rst = rdata1 | rdata2;
    wire[31:0] ori_rst = rdata1 | immI;
    wire[31:0] and_rst = rdata1 & rdata2;
    wire[31:0] andi_rst = rdata1 & immI;

    wire[31:0] slt_rst  = {31'b0, ($signed(rdata1) < $signed(rdata2))};
    wire[31:0] sltu_rst = {31'b0, (rdata1 < rdata2)};
    wire[31:0] slti_rst = {31'b0, ($signed(rdata1) < $signed(immI))};
    wire[31:0] sltiu_rst= {31'b0, (rdata1 < immI)};

    wire[4:0]  shamt_r  = rdata2[4:0];
    wire[4:0]  shamt_i  = immI[4:0];
    wire[31:0] sll_rst  = rdata1 << shamt_r;
    wire[31:0] slli_rst = rdata1 << shamt_i;
    wire[31:0] srl_rst  = rdata1 >> shamt_r;
    wire[31:0] srli_rst = rdata1 >> shamt_i;
    wire[31:0] sra_rst  = $signed(rdata1) >>> shamt_r;
    wire[31:0] srai_rst = $signed(rdata1) >>> shamt_i;



    assign wdata = ({32{lui}} & immU) | 
                   ({32{add | addi | auipc}} & add_rst) | 
                   ({32{jalr | jal}} & pc_next_dft) |
                   ({32{lw}} & lw_rst) |
                   ({32{lbu}} & lbu_rst) |
                   ({32{lhu}} & lhu_rst) |
                   ({32{lb}} & lb_rst) |
                   ({32{lh}} & lh_rst) |     
                   ({32{sub}} & sub_rst) |
                   ({32{xor_inst}} & xor_rst) |
                   ({32{xori}} & xori_rst) |
                   ({32{or_inst}} & or_rst) |
                   ({32{ori}} & ori_rst) |
                   ({32{and_inst}} & and_rst) |
                   ({32{andi}} & andi_rst) |
                   ({32{sll}} & sll_rst) |
                   ({32{slli}} & slli_rst) |
                   ({32{srl}} & srl_rst) |
                   ({32{srli}} & srli_rst) |
                   ({32{sra}} & sra_rst) |
                   ({32{srai}} & srai_rst) |
                   ({32{slt}} & slt_rst) |
                   ({32{slti}} & slti_rst) |
                   ({32{sltu}} & sltu_rst) |
                   ({32{sltiu}} & sltiu_rst);   

    // read ram
    wire [31:0] lw_rst;
    wire [31:0] lbu_rst;
    wire [31:0] lhu_rst;
    wire [31:0] lb_rst;
    wire [31:0] lh_rst;

    assign lw_rst = ram_read(add_rst, 4);
    assign lbu_rst = ram_read(add_rst, 1);
    assign lhu_rst = ram_read(add_rst, 2);
    assign lb_rst = {{25{lbu_rst[7]}}, lbu_rst[6:0]};
    assign lh_rst = {{17{lhu_rst[15]}}, lhu_rst[14:0]};

    // update
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc <= 32'h80000000;
        end
        else begin
            pc <= jalr ? (add_rst & ~32'h1) : jal? add_rst : pc_next_dft;  // update

            // write ram
            if(sw) begin
                ram_write(add_rst, rdata2, 4);
            end
            else if(sb) begin
                ram_write(add_rst, rdata2, 1);
            end
            else if(sh) begin
                ram_write(add_rst, rdata2, 2);
            end
        end
    end



endmodule
/* verilator lint_off UNUSEDSIGNAL */
