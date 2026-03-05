module Decoder38(
    input [2:0] x,
    input en,
    output reg [7:0] y
);
    integer i;
    always @(*) begin
        if (en) begin
            for( i = 0; i < 8; i = i+1)
                if(x == i[2:0])
                        y[i] = 1;
                else
                        y[i] = 0;
        end
        else
        y = 8'b00000000;
    end

endmodule



