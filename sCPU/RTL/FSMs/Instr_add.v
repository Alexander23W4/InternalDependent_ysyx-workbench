module Instr_add(
    input clk,
    input en,
    input rst,
    input [1:0] rs1,
    input [1:0] rs2,
    input [1:0] rd,
    input [7:0] data_in,
    output reg [7:0] data_out,
    output reg [1:0] read_addr,
    output reg [1:0] write_addr,
    output reg we,
    output reg finish
);
    localparam START = 2'b00, R_RS1 = 2'b01, R_RS2 = 2'b11, W_RD = 2'b10;
    reg [7:0] rs1_num, rs2_num, add_result;
    Adder #(8) adder (
        .a(rs1_num),
        .b(rs2_num),
        .s(add_result),
        .c()
    );


    reg [1:0] state, next;

    always @(*) begin
        case(state) 
            START: next = R_RS1;
            R_RS1: next = R_RS2;
            R_RS2: next = W_RD;
            W_RD: next = START;
            default: next = state;
        endcase
    end 

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            state <= START;
            rs1_num <= 8'h00;
            rs2_num <= 8'h00;
        end
        else if(en) begin
            state <= next;
        end
    end

    always @(*) begin
        case(state) 
            START: begin
                we = 1'b1;
                read_addr = rs1;
            end
            R_RS1: begin
                we = 1'b1;
                rs1_num = data_out;
                read_addr = rs2;
            end
            R_RS2: begin
                we = 1'b0;
                rs2_num = data_out;
            end
            W_RD: begin
                we = 1'b0;
                data_in = add_result;
                write_addr = rd;
                finish = 1'b1;
            end
            default: begin
                we = 1'b0;
                data_out = 8'h00;
                read_addr = 2'b00;
                write_addr = 2'b00;
                finish = 1'b0;
            end
        endcase
    end

endmodule

