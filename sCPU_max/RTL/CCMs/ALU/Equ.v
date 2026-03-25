module Comp #(parameter N) (
    input [N - 1: 0] a,
    input [N - 1: 0] b,
    output result;
);
    reg [N - 1: 0] out;
    AS #(N) AS1 (
        .a(a),
        .b(b),
        .cin(1),
        .s(out),
        .c(),
        .overflow(),
        .zero()
    )
    assign result = |out ? 0 : 1; 



endmodule