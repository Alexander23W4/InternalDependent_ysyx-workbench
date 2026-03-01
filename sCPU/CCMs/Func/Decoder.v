module Decoder #(parameter N = 2) (
    input [N - 1: 0] in,
    input en,
    output [(1 << N) - 1: 0] out
);

    assign out = en ? (1'b1 << in) : {(1 << N)1'b0};

endmodule
