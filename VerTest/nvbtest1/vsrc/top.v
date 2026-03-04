module top(
    input [3: 0] a,
    input [3: 0] b,
    output result
);
    Comp comp(a, b, result);

endmodule



