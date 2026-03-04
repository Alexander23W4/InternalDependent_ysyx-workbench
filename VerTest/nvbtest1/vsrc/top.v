module top(
    input [3: 0] a,
    input [3: 0] b,
    input cin,

    output reg c,
    output reg overflow,
    output zero,

    input en,
    output reg [6:0] h
);
    reg [3:0] s;
    BCD7Seg seg(s, en, h);
    AS as(a, b, cin, s, c, overflow, zero);

endmodule



