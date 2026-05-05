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

INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2); // @
INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);
INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->snpc, s->dnpc = (src1 + imm) & ~1);  // jump and link reg
INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm); // @
INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));  // @
INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2)); 
INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2)); 

INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0, NEMU_END

#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)   // INPORTANT!!! the U type is used for load high bit
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1; } while(0)
*/
module decode(
    input [31:0] instr,

    output reg addi,
    output reg add,
    output reg jalr,
    output reg lui,
    output reg lw,
    output reg lbu,
    output reg sw,
    output reg sb,
    output reg ebreak,

    output [4:0] rd,
    output [4:0] rs1,
    output [4:0] rs2,

    output [31:0] immI,
    output [31:0] immU,
    output [31:0] immS
);
    wire [6:0] opcode = instr[6:0];
    wire [2:0] funct3 = instr[14:12];
    
    assign rd = instr[11:7];
    assign rs1 = instr[19:15];
    assign rs2 = instr[24:20];

    assign immI = {{20{instr[31]}}, instr[31:20]};
    assign immU = {instr[31:12], 12'b0};
    assign immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};

    always @(*) begin
        addi = 0;
        add = 0;
        jalr = 0;
        lui = 0;
        lw = 0;
        lbu = 0;
        sw = 0;
        sb = 0;
        ebreak = 0;

        case(opcode)
            7'b0110011: begin
                add = 1'b1;
            end
            7'b0010011: begin
                addi = 1'b1;
            end
            7'b1100111: begin
                jalr = 1'b1;
            end
            7'b0110111: begin
                lui = 1'b1;
            end
            7'b0000011: begin
                case(funct3) 
                    3'b010: lw = 1'b1;
                    3'b100: lbu = 1'b1;
                    default: begin end
                endcase
            end
            7'b0100011: begin
                case(funct3)
                    3'b010: sw = 1'b1;
                    3'b000: sb = 1'b1;
                    default: begin end
                endcase
            end
            7'b1110011: begin
                ebreak = 1'b1;
            end
            default: begin end
        endcase 
    end

endmodule

