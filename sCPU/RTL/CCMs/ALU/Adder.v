module Adder #(parameter N)(
    input [N -1: 0] a,
    input [N -1: 0] b,
    output [N - 1: 0] s,
    output c
);
    assign {c, s} = a + b;

endmodule

// NOTICE: if carry XNOR cin[0-> add, 1-> sub] == 0, overflow happens

