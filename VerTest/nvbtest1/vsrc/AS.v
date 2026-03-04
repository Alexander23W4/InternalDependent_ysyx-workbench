module AS #(parameter N = 4)(   // VA NV  // adder & subtractor
    input [N -1: 0] a,
    input [N -1: 0] b,
    input cin,
    output reg [N - 1: 0] s,
    output reg c,
    output reg overflow,
    output zero
);
    wire [N: 0] add_m;
    wire [N: 0] supple;

    assign add_m = {1'b0, a};
    assign supple = {1'b0, (~b)} + 1'b1;              

    always @(*) begin
        {c, s} = add_m + (cin ? supple : {1'b0, b});
        if(cin) begin        // if c(carry) == 0, outcome is negative 
            overflow = (a[N-1] == supple[N-1]) && (s[N-1] != a[N-1]);
        end
        else begin
            c = s[N - 1];
            overflow = (a[N-1] == b[N-1]) && (s[N-1] != a[N-1]);
        end
    end

    assign zero = ~(|s);

endmodule

// NOTICE: if carry XNOR cin[0-> add, 1-> sub] == 0, overflow happens
