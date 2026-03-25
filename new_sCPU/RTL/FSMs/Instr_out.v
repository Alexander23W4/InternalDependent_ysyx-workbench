module Instr_out(
    input clk,
    input rst,
    input en,    // enable
    input [1:0] rs2,   // get rs2 from instr
    input [7:0] data_in,    // read data from ram
    output reg [1:0] read_addr,  // read data addr for ram
    output reg finish,   // the instr operation is finished (flag for controller)
    output [6:0] h1,
    output [6:0] h2
);
    reg [7:0] display_num;
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

    always @(*) begin
        finish = 1'b1;
        read_addr = rs2;
    end

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            display_num <= 8'h00;
        end
        else if(en) begin
            display_num <= data_in;
        end
    end

endmodule
