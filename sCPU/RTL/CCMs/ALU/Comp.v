module Comp #(parameter N) (
    input [N - 1: 0] a,
    input [N - 1: 0] b,
    output result;
);
    reg [N - 1: 0] out;
    reg carry;
    reg overflow;
    AS #(N) AS1 (
        .a(a),
        .b(b),
        .cin(1),
        .s(out),
        .c(carry),
        .overflow(overflow),
        .zero()
    )
    assign result = ((!overflow && (out[N - 1] == 0)) || (overflow && carry)) ? 0 : 1;


endmodule
