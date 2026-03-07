// VA   
// 1 period
module Instr_li (
    input clk,
    input en,       // enable
    input [1:0] rd,  // destination register
    input [3:0] imm, // immediate value
    output reg [7:0] data_out,     // write data to RAM
    output reg [1:0] write_addr,   // write address
    output reg we,                  // write enable
    output reg finish               // instruction finished
);

    always @(posedge clk) begin
        if(en) begin
            we <= 1'b1;
            finish <= 1'b1;
            write_addr <= rd;
            data_out <= {4'b0000, imm};  
        end
    end

endmodule



