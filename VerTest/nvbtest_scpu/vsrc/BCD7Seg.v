// ommon anode, low lit
// !!! VA NV
module BCD7Seg(
    input [3:0] b,
    input en,
    output reg [6:0] h
);
    always @(b or en) begin
        if(en) begin
            case(b)
                4'b0000: h = 7'b0000001;
                4'b0001: h = 7'b1001111;
                4'b0010: h = 7'b0010010;
                4'b0011: h = 7'b0000110;
                4'b0100: h = 7'b1001100;
                4'b0101: h = 7'b0100101;
                4'b0110: h = 7'b0100000;
                4'b0111: h = 7'b0001111;
                4'b1000: h = 7'b0000000;
                4'b1001: h = 7'b0000100;
                4'b1010: h = 7'b0001000;
                4'b1011: h = 7'b1100000;
                4'b1100: h = 7'b0110001;
                4'b1101: h = 7'b1000010;
                4'b1110: h = 7'b0110000;
                4'b1111: h = 7'b0111000;
                default: h = 7'b1111111;
            endcase
        end
        else begin
            h =7'b1111111;
        end
    end
endmodule

