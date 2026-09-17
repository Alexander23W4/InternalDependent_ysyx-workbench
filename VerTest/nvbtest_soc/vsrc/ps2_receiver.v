// VA
// idle static + ICG  
// functional fanout  
// conditional expression
// state code
// combinational priority

module ps2_receiver (
    input clk,
    input rst,
    input [7:0] data,
    input ready,
    output reg nextdata_n,
    output reg [7:0] ascii
);

wire [7:0] ascii_lut;
reg break_flag;

ps2_lut lut(
    .data(data),
    .ascii(ascii_lut)
);

always @(posedge clk or posedge rst) begin
    if(rst) begin
        nextdata_n <= 1'b1;
        ascii <= 8'd0;
        break_flag <= 1'b0;
    end
    else begin
        if(ready) begin
            nextdata_n <= 1'b0;      // request next byte
            if(data == 8'hF0) begin
                break_flag <= 1'b1;
            end
            else if(break_flag) begin
                break_flag <= 1'b0; // ignore key release repeated byte
            end
            else begin
                ascii <= ascii_lut;  // output make code
            end
        end
        else begin
            nextdata_n <= 1'b1;
        end        
    end
end

endmodule
