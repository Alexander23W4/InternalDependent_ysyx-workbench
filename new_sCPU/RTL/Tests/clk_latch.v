// clock enable, recommend   -> ICG
module clk_latch(
    input clk,
    input rst,
    input en,
    input [1:0] in,
    output reg [1:0] out
);
    always @(posedge clk) begin
        if(rst) begin
            out <= 2'b00;
        end
        else if(en) begin       // else if
            out <= {in[0], in[1]};
        end
    end

endmodule

// clock gating, generate glitch, DO NOT use this type
module clk_gating(
    input clk,
    input rst,
    input en,
    input [1:0] in,
    output reg [1:0] out
);
    wire enclk = clk & en;
    always @(posedge enclk) begin
        out <= rst ? 2'b00 : {in[0], in[1]};
    end

endmodule

// asyn rst, make rst available when !en
module clk_enable_ICG_asynrst(
    input clk,
    input rst,
    input en,
    input [1:0] in,
    output reg [1:0] out   
);
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            out <= 2'b00;
        end
        else if(en) begin
            out <= {in[0], in[1]};
        end
    end

endmodule




