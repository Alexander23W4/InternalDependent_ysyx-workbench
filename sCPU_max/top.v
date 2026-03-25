/*
The opcode : add li bner0 
 7  6 5  4 3   2 1   0
+----+----+-----+-----+
| 00 | rd | rs1 | rs2 | R[rd]=R[rs1]+R[rs2]            ADD instruction for register addition
+----+----+-----+-----+
| 10 | rd |    imm    | R[rd]=imm                      LI instruction (Load Immediate with zero-extension)
+----+----+-----+-----+
| 11 |   addr   | rs2 | if (R[0]!=R[rs2]) PC=addr      BNER0 instruction (Branch if Not Equal to Register 0)
+----+----------+-----+
| 01 |   xx     | rs2 | out rs2                        OUT instruction 
+----+----------+-----+

*/


/*
Fetch
Decode

operate1
operate2
operate3

update
*/

// multi-state storage things, must be written into sequential-always block, 
// only by this could this signal be regarded as registers 

module top(
    input clk,
    input rst,

    output [6:0] h1,
    output [6:0] h2,

    output [3:0] display_PC,

    output [7:0] debug0,
    output [7:0] debug1,
    output [7:0] debug2,
    output [7:0] debug3,
    output [7:0] rom_debug0,
    output [7:0] rom_debug1,
    output [7:0] rom_debug2,
    output [7:0] rom_debug3
);
    assign display_PC = pc;

// FSM, controller
    localparam FETCH = 3'b000, DECODE = 3'b001, OPERATE1 = 3'b010, OPERATE2 = 3'b011, OPERATE3 = 3'b100, UPDATE = 3'b101;
    reg [2:0] state, next;

    always @(*) begin
        next = (state == UPDATE) ? FETCH : (state + 3'b001);
    end 

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc <= 4'b0000;
            pc_next <= 4'b0000;
            state <= 3'b000;
        end
        else begin
            state <= next;
            case(state)    // all of the register update operation, move to sequential-always block
                FETCH: begin
                    instr <= mem_out;
                end
                DECODE: begin
                    opcode <= instr[7:6];
                    rd <= instr[5:4];
                    addr <= instr[5:2];
                    rs1 <= instr[3:2];
                    rs2 <= instr[1:0];
                    imm <= instr[3:0];
                end
                OPERATE1: begin
                    case(opcode)
                        BNER0: begin
                            num1 <= data_in;
                        end
                        ADD: begin
                            num1 <= data_in;
                        end
                        default: begin
                            
                        end
                    endcase
                end
                OPERATE2: begin
                    case(opcode)
                        LI:begin
                            
                        end
                        default: begin
                            num2 <= data_in;
                        end
                    endcase 
                end
                OPERATE3: begin
                    case(opcode) 
                        ADD: begin
                            pc_next <= pc + 4'b0001;
                        end
                        LI: begin
                            pc_next <= pc + 4'b0001;
                        end
                        BNER0: begin
                            pc_next <= (num1 != num2) ? addr : (pc + 4'b0001);
                        end
                        OUT: begin
                            display_num <= num2;
                            pc_next <= pc + 4'b0001;
                        end
                        default: begin
                            
                        end
                    endcase
                end 
                UPDATE: begin
                    pc <= pc_next;
                end
                default: begin
                    
                end

            endcase
        end
    end

// rom & gpr
    debug_rom #(8, 4, "./rom.hex") memory (
        .addr(pc),
        .out(mem_out),
        .debug0(rom_debug0),
        .debug1(rom_debug1),
        .debug2(rom_debug2),
        .debug3(rom_debug3)
    );
    wire [7:0] mem_out;

    debug_ram1 #(8, 2) gpr (    // 4 line , 8 bits
        .clk(clk),
        .we(we),    // write flag
        .inaddr(write_addr),
        .outaddr(read_addr),
        .din(data_out),
        .dout(data_in),
        .debug0(debug0),
        .debug1(debug1),
        .debug2(debug2),
        .debug3(debug3)
    );

    reg we;
    reg [1:0] write_addr;
    reg [1:0] read_addr;
    reg [7:0] data_out;
    wire [7:0] data_in;


/*
The opcode : add li bner0 
 7  6 5  4 3   2 1   0
+----+----+-----+-----+
| 00 | rd | rs1 | rs2 | R[rd]=R[rs1]+R[rs2]            ADD instruction for register addition
+----+----+-----+-----+
| 10 | rd |    imm    | R[rd]=imm                      LI instruction (Load Immediate with zero-extension)
+----+----+-----+-----+
| 11 |   addr   | rs2 | if (R[0]!=R[rs2]) PC=addr      BNER0 instruction (Branch if Not Equal to Register 0)
+----+----------+-----+
| 01 |   xx     | rs2 | out rs2                        OUT instruction 
+----+----------+-----+
*/
    BCD7Seg seg1(
        .b(display_num[3:0]),
        .en(1'b1),
        .h(h1)
    );
    BCD7Seg seg2(
        .b(display_num[7:4]),
        .en(1'b1),
        .h(h2)
    );

    reg [7:0] instr;
    reg [3:0] pc;
    reg [3:0] pc_next;

    reg [1:0] opcode;
    reg [1:0] rd;
    reg [1:0] rs1;
    reg [1:0] rs2;
    reg [3:0] imm;
    reg [3:0] addr;

    reg [7:0] num1;
    reg [7:0] num2;
    reg [7:0] result;
    reg [7:0] display_num;


    localparam ADD = 2'b00, LI = 2'b10, BNER0 = 2'b11, OUT = 2'b01;

    always @(*) begin
        we = 1'b0;
        read_addr = 0;
        write_addr = 0;
        data_out = 0;
        case(state)
            OPERATE1: begin
                case(opcode)
                    BNER0: begin
                        read_addr = 2'b00;
                    end
                    ADD: begin
                        read_addr = rs1;
                    end
                    default: begin
                        
                    end
                endcase
            end
            OPERATE2: begin
                case(opcode)
                    LI: begin
                        
                    end
                    default: begin
                        read_addr = rs2;
                    end
                endcase 
            end
            OPERATE3: begin
                case(opcode) 
                    ADD: begin
                        result = num1 + num2;
                        we = 1'b1;
                        data_out = result;
                        write_addr = rd;
                    end
                    LI: begin
                        we = 1'b1;
                        data_out = {{4{1'b0}}, imm};
                        write_addr = rd;
                    end
                    default: begin
                        
                    end
                endcase
            end 
            default: begin
                
            end
        endcase
    end 

endmodule




