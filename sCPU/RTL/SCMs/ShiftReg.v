module ShiftReg #(parameter N) (
    input [2:0] mode,
    input in,
    input clk.
    input [N - 1: 0] value,
    output reg [N - 1: 0] out
);
    reg [N - 1: 0] State;
    always @(posedge clk) begin
        case(mode) 
            3'b000: begin
                State <= `0;
            end
            3'b001: begin
                State <= value;
            end
            3'b010: begin
                State <= {in, State[N - 1: 1]};
            end
            3'b011: begin
                State <= {State[N - 2: 0], in};
            end
            3'b100: begin
                State <= {State[N - 1], State[N - 1: 1]};
            end
            3'b101: begin
                
            end
            3'b110: begin
                State <= {State[0], State[N - 1: 1]};
            end
            3'b111: begin
                State <= {State[N - 2: 0], State[N - 1]};
            end
        endcase
    end

    assign out = State;
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

