/*
mini-RV ISA   8 in total:

imm[11:0] rs1 000 rd 1100111 JALR   
imm[11:0] rs1 000 rd 0010011 ADDI   
0000000 rs2 rs1 000 rd 0110011 ADD
imm[31:12] rd 0110111 LUI
imm[11:0] rs1 010 rd 0000011 LW
imm[11:0] rs1 100 rd 0000011 LBU
imm[11:5] rs2 rs1 010 imm[4:0] 0100011 SW
imm[11:5] rs2 rs1 000 imm[4:0] 0100011 SB

000000000001 00000 000 00000 1110011 (0x00100073) EBREAK  
0x00000513   HALT




INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);

// store imm
INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm); // @

// ram access(load)
INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));
INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));  // @
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

// RV32M extension(alu)
INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 * src2); // @
INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = (int64_t)(int32_t)src1 * (int64_t)(int32_t)src2 >> 32);
INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(rd) = (int64_t)(int32_t)src1 * (uint64_t)src2 >> 32);
INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(rd) = (uint64_t)src1 * (uint64_t)src2 >> 32);
INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = (src2 == 0) ? 0xFFFFFFFF : ((src1 == 0x80000000 && src2 == (uint32_t)-1) ? src1 : (int32_t)src1 / (int32_t)src2));
INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = (src2 == 0) ? 0xFFFFFFFF : src1 / src2);
INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = (src2 == 0) ? src1 : ((src1 == 0x80000000 && src2 == (uint32_t)-1) ? 0 : (int32_t)src1 % (int32_t)src2));
INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = (src2 == 0) ? src1 : src1 % src2);

INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0, NEMU_END

#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)   // INPORTANT!!! the U type is used for load high bit
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1; } while(0)
*/

/* verilator lint_on UNUSEDSIGNAL */
module decode(
    input [31:0] instr,

// opcodes  
// === Arithmetic & Logical (Integer Register-Immediate Instructions) ===
    output reg addi,
    output reg slti,
    output reg sltiu,
    output reg xori,
    output reg ori,
    output reg andi,
    output reg slli,
    output reg srli,
    output reg srai,

    // === Arithmetic & Logical (Integer Register-Register Instructions) ===
    output reg add,
    output reg sub,
    output reg sll,
    output reg slt,
    output reg sltu,
    output reg xor_inst, 
    output reg srl,
    output reg sra,
    output reg or_inst,  
    output reg and_inst, 

    // === Load & Store Instructions ===
    output reg lb,
    output reg lh,
    output reg lw,
    output reg lbu,
    output reg lhu,
    output reg sb,
    output reg sh,
    output reg sw,

    // === Conditional Branch Instructions ===
    output reg beq,
    output reg bne,
    output reg blt,
    output reg bge,
    output reg bltu,
    output reg bgeu,

    // === Jump Instructions ===
    output reg jal,
    output reg jalr,

    // === Upper Immediate Instructions ===
    output reg lui,
    output reg auipc,

    // === System & Environment Instructions ===
    output reg ebreak,
    output reg ecall,

    // === Previledged Instructions ===
    output reg csrrw,
    output reg csrrs,
    output reg csrrc,
    output reg mret,

/*
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(rd) = (rd == 0) ? R(rd) : isa_csr_read(imm), isa_csr_write(imm, src1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) | src1, rs1));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) & ~(src1), rs1));

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.mepc);   // mstatus to go 

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(0xb, s->pc)); 
*/

// oprands
    output [4:0] rd,
    output [4:0] rs1,
    output [4:0] rs2,

    output [31:0] immI,
    output [31:0] immU,
    output [31:0] immS,
    output [31:0] immB, 
    output [31:0] immJ,
    output [31:0] immCSR;
);

    wire [6:0] opcode = instr[6:0];
    wire [2:0] funct3 = instr[14:12];
    wire [6:0] funct7 = instr[31:25];

    assign rd = instr[11:7];
    assign rs1 = instr[19:15];
    assign rs2 = instr[24:20];

    assign immI = {{20{instr[31]}}, instr[31:20]};
    assign immU = {instr[31:12], 12'b0};
    assign immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    assign immB = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    assign immJ = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    assign immCSR = {20'b0, instr[31:20]};

    always @(*) begin
        addi     = 1'b0;
        slti     = 1'b0;
        sltiu    = 1'b0;
        xori     = 1'b0;
        ori      = 1'b0;
        andi     = 1'b0;
        slli     = 1'b0;
        srli     = 1'b0;
        srai     = 1'b0;

        add      = 1'b0;
        sub      = 1'b0;
        sll      = 1'b0;
        slt      = 1'b0;
        sltu     = 1'b0;
        xor_inst = 1'b0;
        srl      = 1'b0;
        sra      = 1'b0;
        or_inst  = 1'b0;
        and_inst = 1'b0;

        lb       = 1'b0;
        lh       = 1'b0;
        lw       = 1'b0;
        lbu      = 1'b0;
        lhu      = 1'b0;
        sb       = 1'b0;
        sh       = 1'b0;
        sw       = 1'b0;

        beq      = 1'b0;
        bne      = 1'b0;
        blt      = 1'b0;
        bge      = 1'b0;
        bltu     = 1'b0;
        bgeu     = 1'b0;

        jal      = 1'b0;
        jalr     = 1'b0;

        lui      = 1'b0;
        auipc    = 1'b0;

        ebreak   = 1'b0;
        ecall    = 1'b0;

        csrrw    = 1'b0;
        csrrs    = 1'b0;
        csrrc    = 1'b0;
        mret     = 1'b0;

    // opcode recognizition:
        case(opcode)
            // === Upper Immediate ===
            7'b0010111: auipc  = 1'b1;
            7'b0110111: lui    = 1'b1;

            // === Jump ===
            7'b1101111: jal    = 1'b1;
            7'b1100111: jalr   = 1'b1;

            // === Branch ===
            7'b1100011: begin
                case(funct3)
                    3'b000: beq  = 1'b1;
                    3'b001: bne  = 1'b1;
                    3'b100: blt  = 1'b1;
                    3'b101: bge  = 1'b1;
                    3'b110: bltu = 1'b1;
                    3'b111: bgeu = 1'b1;
                    default: ;
                endcase
            end

            // === Load ===
            7'b0000011: begin
                case(funct3)
                    3'b000: lb  = 1'b1;
                    3'b001: lh  = 1'b1;
                    3'b010: lw  = 1'b1;
                    3'b100: lbu = 1'b1;
                    3'b101: lhu = 1'b1;
                    default: ;
                endcase
            end

            // === Store ===
            7'b0100011: begin
                case(funct3)
                    3'b000: sb = 1'b1;
                    3'b001: sh = 1'b1;
                    3'b010: sw = 1'b1;
                    default: ;
                endcase
            end

            // === Register-Immediate (I-type) ===
            7'b0010011: begin
                case(funct3)
                    3'b000: addi  = 1'b1;
                    3'b010: slti  = 1'b1;
                    3'b011: sltiu = 1'b1;
                    3'b100: xori  = 1'b1;
                    3'b110: ori   = 1'b1;
                    3'b111: andi  = 1'b1;
                    3'b001: slli  = 1'b1;
                    3'b101: begin
                        if (funct7[5]) srai = 1'b1;
                        else           srli = 1'b1;
                    end
                    default: ;
                endcase
            end

            // === Register-Register (R-type) ===
            7'b0110011: begin
                case(funct3)
                    3'b000: begin
                        if (funct7[5]) sub = 1'b1;
                        else           add = 1'b1;
                    end
                    3'b001: sll      = 1'b1;
                    3'b010: slt      = 1'b1;
                    3'b011: sltu     = 1'b1;
                    3'b100: xor_inst = 1'b1;
                    3'b101: begin
                        if (funct7[5]) sra = 1'b1;
                        else           srl = 1'b1;
                    end
                    3'b110: or_inst  = 1'b1;
                    3'b111: and_inst = 1'b1;
                    default: ;
                endcase
            end
/*
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , CSR, R(rd) = (rd == 0) ? R(rd) : isa_csr_read(imm), isa_csr_write(imm, src1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) | src1, rs1));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , CSR, R(rd) = isa_csr_read(imm), isa_csr_write_rs(imm, isa_csr_read(imm) & ~(src1), rs1));

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, s->dnpc = cpu.mepc);   // mstatus to go 

  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(0xb, s->pc)); 
*/

            // === System ===
            7'b1110011: begin
                if (funct3 == 3'b000 && instr[20]) ebreak = 1'b1;
                else if (instr[31:7] == 0) ecall = 1'b1;
                else if (funct3 == 3'b001) csrrw = 1'b1;
                else if (funct3 == 3'b010) csrrs = 1'b1;
                else if (funct3 == 3'b011) csrrc = 1'b1; 
            end

            default: ;
        endcase
    end

endmodule
/* verilator lint_on UNUSEDSIGNAL */
