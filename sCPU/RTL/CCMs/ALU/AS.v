module AS #(parameter N)(   // adder & subtractor
    input [N -1: 0] a,
    input [N -1: 0] b,
    input cin,
    output [N - 1: 0] s,
    output c,
    output overflow,
    output zero
);
    wire [N: 0] add_res;
    wire [N: 0] sub_res;
    assign add_res = {1'b0, a} + {1'b0, b};              
    assign sub_res = {1'b0, a} + {1'b0, (~b)} + 1'b1;    

    assign {c, s} = cin ? sub_res : add_res;
    assign overflow = cin ^ c;
    assign zero = ~(|s);

endmodule


// NOTICE: if carry XNOR cin[0-> add, 1-> sub] == 0, overflow happens
