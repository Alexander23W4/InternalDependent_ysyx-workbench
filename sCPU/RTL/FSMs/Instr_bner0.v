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

module Instr_bner0(
    input clk,
    input en,       // enable
    input rst,
    input [1:0] rs2,   // get rs2 from instr
    input [7:0] data_in,    // read data from ram
    output reg [1:0] read_addr,  // read data addr for ram
    output reg finish,   // instruction finished
    output reg update    // PC update flag
);

    // FSM states
    localparam R_0    = 2'b00,
               R_RS2  = 2'b01,
               UPDATE = 2'b10;

    reg [1:0] state, next;
    reg [7:0] r0_num, rs2_num;

    // FSM next-state logic
    always @(*) begin
        case(state)
            R_0:    next = R_RS2;
            R_RS2:  next = UPDATE;
            UPDATE: next = R_0;
            default: next = R_0;
        endcase
    end

    // FSM state update & register latching
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            state   <= R_0;
            r0_num  <= 8'h00;
            rs2_num <= 8'h00;
        end
        else if(en) begin
            state <= next;
            case(state)
                R_0:    r0_num  <= data_in;
                R_RS2:  rs2_num <= data_in;
                default: ;
            endcase
        end
    end

    // output logic
    always @(*) begin
        // defaults
        read_addr = 2'b00;
        finish = 1'b0;
        update = 1'b0;

        case(state)
            R_0:    read_addr = 2'b00;       // read R0
            R_RS2:  read_addr = rs2;         // read R[rs2]
            UPDATE: begin
                finish = 1'b1;               // instruction finished
                update = (r0_num != rs2_num); // PC update decision
            end
            default: ;
        endcase
    end

endmodule
