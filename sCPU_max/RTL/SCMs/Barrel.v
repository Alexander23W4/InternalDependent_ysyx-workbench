// barrel shifters are often used in ALUs to perform shifts
// the barrel shifters implemented with MUX is a pule combinational circuit

module Barrel #(parameter N = 3) (
    input LR,
    input AL,
    input clk,
    input rst,
    input [2*N - 1: 0] din,
    input [N - 1: 0] shamt,
    output reg [2*N - 1: 0] dout
);
    // wire [2*N - 1: 0] _shift_remain;
    // assign _shift_remain = |shamt ? {dout[2*N - 1: 2*N - shamt], (2*N - shamt){1'b0}} : dout;
    always @(posedge clk) begin
        if(rst) begin
            dout <= din;
        end
        else begin
            case(LR)
                1'b1: begin
                    dout <= (dout << shamt);
                end
                1'b0: begin
                    dout <= AL ? (dout >>> shamt) : (dout >> shamt);
                end
            endcase            
        end
    end

endmodule


