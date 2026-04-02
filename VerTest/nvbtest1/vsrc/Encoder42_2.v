// parallel with priority , higher bit with priority
module Encoder42_2 (
    input [3:0] in,
    input en,
    output reg [1:0] out
);
    integer i;
    always @(in or en) begin
        if(en) begin
            out = 2'b00;
            for (i = 0; i < 4; i = i + 1) begin
                if(in[i] == 1) begin
                    out = i[1:0];
                end
            end
        end
        else begin
            out = 2'b00;
        end
    end

endmodule


