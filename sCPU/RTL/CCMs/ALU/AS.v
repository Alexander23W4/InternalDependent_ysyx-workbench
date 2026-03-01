module AS #(parameter N)(   // adder & subtractor
    input [N -1: 0] a,
    input [N -1: 0] b,
    input cin,
    output [N - 1: 0] s,
    output c,
    output overflow,
    output zero
);
    assign {c, s} = cin ? (~b + a + 1'b1) : (a + b);
    assign overflow = cin ^ c;
    assign zero = ~(|s);

endmodule


// NOTICE: if carry XNOR cin[0-> add, 1-> sub] == 0, overflow happens
