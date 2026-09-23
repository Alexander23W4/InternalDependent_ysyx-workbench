
/* verilator lint_on UNUSEDSIGNAL */
module ysyx_26040135_decode(
    input clock,
    input reset,

    input [31:0] instr,
    input in_valid,
    output in_ready,

    output reg out_valid,
    input out_ready,

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

    output reg fence_i,
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
    output [31:0] immCSR
);

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            
        end else begin
            if(out_ready) begin
                out_valid >= 1'b0;
            end

            if(!out_valid)
        end
    end

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

        fence_i  = 1'b0;


        case(opcode)
            7'b0001111: fence_i = 1'b1;   //     // imm[11:0] rs1 001 rd 0001111 FENCE.I
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
                else if (instr[31:7] == 25'b0011000000100000000000000) mret = 1'b1;
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
