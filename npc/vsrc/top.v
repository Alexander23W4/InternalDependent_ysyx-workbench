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
// ram access(load)
INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2), 16));
INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));

// ram write
INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2)); 
INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2)); // @ 
INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2)); 

// direct jump
INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->snpc, s->dnpc = (src1 + imm) & ~1);  // jump and link reg
INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(rd) = s->snpc; s->dnpc = s->pc + imm); 

// conditional branch (if + jump)
INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int32_t)src1 < (int32_t)src2) ? s->pc + imm : s->snpc);  // branch if less than
INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = (src1 < src2) ? s->pc + imm : s->snpc);
INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int32_t)src1 >= (int32_t)src2) ? s->pc + imm : s->snpc); // branch if greater equal than
INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = (src1 >= src2) ? s->pc + imm : s->snpc);
INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? s->pc + imm : s->snpc);
INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? s->pc + imm : s->snpc);

// if
INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = ((int32_t)src1 < (int32_t)src2) ? 1 : 0);
INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = ((uint32_t)src1 < (uint32_t)src2) ? 1 : 0); 
INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = ((int32_t)src1 < (int32_t)imm) ? 1 : 0); 
INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = ((uint32_t)src1 < (uint32_t)imm) ? 1 : 0); 

// shift
INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1 << (uint32_t)(imm & 0x1F));
INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1 >> (uint32_t)(imm & 0x1F));
INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = ((int32_t)src1) >> (uint32_t)(imm & 0x1F)); // @
INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << (uint32_t)(src2 & 0x1F));    // shifter left logical
INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1 >> (uint32_t)(src2 & 0x1F));
INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = ((int32_t)src1) >> (uint32_t)(src2 & 0x1F));   // shifte right arithematic  

// logic
INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2); // @
INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & imm); // @
INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2); // @
INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm); // @
INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2); // @
INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ imm); // @

// alu
INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2); // @
INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);
INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2); // @

INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0, NEMU_END
*/


    assign wen = add | addi | sub | lui | auipc | 
                 and_inst | or_inst | xor_inst | andi | ori | xori |
                 sll | srl | sra | slli | srli | srai |
                 slt | sltu | slti | sltiu |
                 jal | jalr |
                 lb | lh | lw | lbu | lhu;

    wire [31:0] add1 = ({32{auipc}} & pc) |
                        rdata1;

    wire [31:0] add2 = ({32{add}} & rdata2) |
                       ({32{sw | sb}} & immS) |
                       ({32{auipc}} & immU) |
                       ({32{lbu | lw | lhu}} & immI) |
                       


    wire [31:0] add_rst = add1 + add2;


    assign wdata = ({32{lui}} & immU) | 
                   ({32{add | addi | auipc}} & add_rst) | 
                   ({32{jalr}} & pc_next_dft) |
                   ({32{lw}} & lw_rst) |
                   ({32{lbu}} & lbu_rst) |
                   ({32{lhu}} & lhu_rst)

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
            pc <= jalr ? (add_rst & ~32'h1) : pc_next_dft;  // update

            // write ram
            if(sw) begin
                ram_write(add_rst, rdata2, 4);
            end
            else if(sb) begin
                ram_write(add_rst, rdata2, 1);
            end
        end
    end



endmodule
/* verilator lint_off UNUSEDSIGNAL */
