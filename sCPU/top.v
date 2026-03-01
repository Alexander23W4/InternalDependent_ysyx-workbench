module top #(parameter N = 8) (
    input [N -1: 0] a,
    input [N -1: 0] b,
    input cin,
    output [N - 1: 0] s,
    output c,
    output overflow,
    output zero
);
    AS #(N) AS1 (
        .a(a),
        .b(b),
        .cin(cin),
        .s(s),
        .c(c),
        .overflow(overflow),
        .zero(zero)
    );

endmodule

