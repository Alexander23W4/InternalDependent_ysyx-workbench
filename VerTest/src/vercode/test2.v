module test2
(
    input a,
    input b,
    output c,
    output d
);
    assign c = a ^ b;
    assign d = 1'b1 ^ c;
    
endmodule




