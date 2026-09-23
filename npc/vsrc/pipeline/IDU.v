
/* verilator lint_on UNUSEDSIGNAL */
module ysyx_26040135_IDU(
    input [31:0] in_pc,
    input [31:0] instr,
    input in_valid,
    output in_ready,

    output out_valid,
    input out_ready,

    output reg [31:0] out_pc,
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

// oprands
    output reg[4:0] rd,
    output reg[4:0] rs1,
    output reg[4:0] rs2,

// ⭐ 一条指令只用一个立即数, 在这里就按指令类型选好
    output reg[31:0] imm
);

    assign in_ready  = out_ready;
    assign out_valid = in_valid;

    wire [6:0] opcode = instr[6:0];
    wire [2:0] funct3 = instr[14:12];
    wire [6:0] funct7 = instr[31:25];

    wire [31:0] immI_w   = {{20{instr[31]}}, instr[31:20]};
    wire [31:0] immU_w   = {instr[31:12], 12'b0};
    wire [31:0] immS_w   = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    wire [31:0] immB_w   = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    wire [31:0] immJ_w   = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    wire [31:0] immCSR_w = {20'b0, instr[31:20]};

    reg [31:0] imm_w;
    always @(*) begin
        case(opcode)
            7'b0110111: imm_w = immU_w;     // lui
            7'b0010111: imm_w = immU_w;     // auipc
            7'b1101111: imm_w = immJ_w;     // jal
            7'b1100011: imm_w = immB_w;     // branch
            7'b0100011: imm_w = immS_w;     // store
            7'b1110011: imm_w = immCSR_w;   // CSR
            default:    imm_w = immI_w;     // I-type / jalr / load
        endcase
    end

    always @(*) begin
        out_pc = in_pc;

        rd  = instr[11:7];
        rs1 = instr[19:15];
        rs2 = instr[24:20];

        imm = imm_w;

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
            7'b0010111: auipc = 1'b1;
            7'b0110111: lui = 1'b1;

            // === Jump ===
            7'b1101111: jal = 1'b1;
            7'b1100111: jalr = 1'b1;

            // === Branch ===
            7'b1100011: begin
                case(funct3)
                    3'b000: beq = 1'b1;
                    3'b001: bne = 1'b1;
                    3'b100: blt = 1'b1;
                    3'b101: bge = 1'b1;
                    3'b110: bltu = 1'b1;
                    3'b111: bgeu = 1'b1;
                    default: ;
                endcase
            end

            // === Load ===
            7'b0000011: begin
                case(funct3)
                    3'b000: lb = 1'b1;
                    3'b001: lh = 1'b1;
                    3'b010: lw = 1'b1;
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
                    3'b000: addi = 1'b1;
                    3'b010: slti = 1'b1;
                    3'b011: sltiu = 1'b1;
                    3'b100: xori = 1'b1;
                    3'b110: ori = 1'b1;
                    3'b111: andi = 1'b1;
                    3'b001: slli = 1'b1;
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
                    3'b001: sll = 1'b1;
                    3'b010: slt = 1'b1;
                    3'b011: sltu = 1'b1;
                    3'b100: xor_inst = 1'b1;
                    3'b101: begin
                        if (funct7[5]) sra = 1'b1;
                        else           srl = 1'b1;
                    end
                    3'b110: or_inst = 1'b1;
                    3'b111: and_inst = 1'b1;
                    default: ;
                endcase
            end

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
