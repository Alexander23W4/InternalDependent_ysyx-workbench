module Encoder #(parameter N = 2)(
    input [(1 << N) - 1: 0] in,
    input en,
    output reg [N - 1: 0] out
);
    integer i;
    always @(*) begin
        i = 0;
        out = {N{1'b0}};
        if(en) begin
            while (in >> i) begin
                i = i + 1;
            end
            if(i == 0) begin
                out = 0;
            end
            else begin
                out = i - 1;                 
            end   
        end
    end

endmodule
