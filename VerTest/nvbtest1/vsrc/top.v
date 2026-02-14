module top(
    input clk,
    input rst,
    input a,
    input b,
    output c
);

double_switch my_double_switch(
    .clk(clk),
    .rst(rst),
    .a(a),
    .b(b),
    .c(c)
);

endmodule


