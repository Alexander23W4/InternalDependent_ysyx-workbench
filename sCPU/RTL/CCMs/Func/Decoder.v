module Decoder #(parameter N = 2) (
    input [N - 1: 0] in,
    input en,
    output [(1 << N) - 1: 0] out
);

    assign out = en ? (1'b1 << in) : '0;    // fill all with 0

endmodule
