module RandomShifter (
    input clk,
    input rst,
    output reg [7:0] out
);

wire feedback;

assign feedback = out[3] ^ out[2] ^ out[1] ^ out[0];

always @(posedge clk or posedge rst) begin
    if (rst) begin
        out <= 8'b0000_0001;   
    end
    else begin
        out <= {feedback, out[7:1]}; 
    end
end

endmodule