module Adder #(parameter N)(
    input [n -1: 0] a,
    input [n -1: 0] b,
    output [n - 1: 0] s,
    output c
);
    assign {c, s} = a + b;

endmodule

// NOTICE: if carry XNOR cin[0-> add, 1-> sub] == 0, overflow happens