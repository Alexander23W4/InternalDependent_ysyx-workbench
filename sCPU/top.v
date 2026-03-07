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

*/

/*
Fill Momery with 
0: li r0, 10   # This is decimal 10.
1: li r1, 0
2: li r2, 0
3: li r3, 1
4: add r1, r1, r3
5: add r2, r2, r1
6: out xx, xx, r2
7: bner0 4, r1
8: bner0 7, r3
*/

// ROM  8x8

module top (
    input clk,

)
    reg [7:0] mem_out;
    reg [2:0] PC;   // PC
    reg en[2:0];

    reg [1:0] gpr_inaddr;
    reg [1:0] gpr_outaddr;

// mem & fetch
    rom #(8, 3, "rom.hex") mem (
        .addr(PC),
        .out(mem_out)
    );

// decode 
    always @(*) begin
        case(memout[7:6])
            2'b00: en = 3'b001;
            2'b10: en = 3'b010;
            2'b11: en = 3'b100;
            default: en = 3'b000;
        endcase
    end 

// GPR:
    ram1 #(8, 2) gpr (
        .clk(clk),
        .we(),
        .inaddr(),
        .outaddr(),
        .din(),
        .dout()
    );




endmodule







