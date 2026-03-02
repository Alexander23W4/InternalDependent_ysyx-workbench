module ShiftReg #(parameter N = 8) (
    input [2:0] mode,
    input in,
    input clk,
    input [N - 1: 0] value,
    output reg [N - 1: 0] out
);
    always @(posedge clk) begin
        case(mode) 
            3'b000: begin
                out <= '0;
            end
            3'b001: begin
                out <= value;
            end
            3'b010: begin
                out <= {1'b0, out[N - 1: 1]};
            end
            3'b011: begin
                out <= {out[N - 2: 0], 1'b0};
            end
            3'b100: begin
                out <= {out[N - 1], out[N - 1: 1]};
            end
            3'b101: begin
                out <= {in, out[N - 1: 1]};
            end
            3'b110: begin
                out <= {out[0], out[N - 1: 1]};
            end
            3'b111: begin
                out <= {out[N - 2: 0], out[N - 1]};
            end
        endcase
    end


endmodule


// Table 6 Shift register work modes
// Control bit
// Working mode
// 0 0 0
// set to 0
// 0 0 1
// set value
// 0 1 0
// logic right shift
// 0 1 1
// logic left shift
// 1 0 0
// arithmetic right shift
// 1 0 1
// Serial input of 1-bit value on the left end, parallel output 8-bit value
// 1 1 0
// circular right shift
// 1 1 1
// circular left shift

