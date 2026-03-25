// VA
// 3 period
module Instr_add(
    input clk,
    input en,    // enable
    input rst,
    input [1:0] rs1,   // get rs1 from instr
    input [1:0] rs2,   // get rs2 from instr
    input [1:0] rd,    // get rd from instr
    input [7:0] data_in,    // read data from ram
    output reg [7:0] data_out,   // write data to ram
    output reg [1:0] read_addr,  // read data addr for ram
    output reg [1:0] write_addr,  // write data addr for ram
    output reg we,     // write signal for ram
    output reg finish   // the instr operation is finished (flag for controller)     
);
    localparam R_RS1 = 2'b00, R_RS2 = 2'b10, W_RD = 2'b11;    // use flip friendly code 
    reg [7:0] rs1_num, rs2_num;  // rs1 & rs2 are from the same wire source (ram data out), so use register is essential
    reg [1:0] state, next;
    wire [7:0] add_result;

/* verilator lint_off PINCONNECTEMPTY */
    Adder #(8) adder (     // 8-bit normal adder
        .a({8{en}} & rs1_num),   // static idle
        .b({8{en}} & rs2_num),
        .s(add_result),
        .c()
    );
/* verilator lint_off PINCONNECTEMPTY */

    always @(*) begin
        case(state) 
            R_RS1: begin
                if(en) begin
                    next = R_RS2;                
                end
                else begin
                    next = R_RS1;
                end
            end
            R_RS2: next = W_RD;
            W_RD: next = R_RS1;
            default: next = R_RS1;
        endcase
    end 

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            state <= R_RS1;
            rs1_num <= 8'h00;
            rs2_num <= 8'h00;
        end
        else begin
            state <= next;
            if(state == R_RS1)
                rs1_num <= data_in;     // latch

            if(state == R_RS2)
                rs2_num <= data_in;     // latch
        end
    end

    always @(*) begin
        // these registers are not intended to be latch, so give them default in advance
        we = 0;        
        data_out = 0;
        read_addr = 0;
        write_addr = 0;
        finish = 0;

        case(state)
            R_RS1: begin
                read_addr = rs1;               
            end
            R_RS2: begin
                read_addr = rs2;               
            end
            W_RD: begin
                we = 1'b1;
                data_out = add_result;
                write_addr = rd;
                finish = 1'b1;
            end
            default: begin
                we = 0;
                data_out = 0;
                read_addr = 0;
                write_addr = 0;
                finish = 0;
            end
        endcase
    end

endmodule



