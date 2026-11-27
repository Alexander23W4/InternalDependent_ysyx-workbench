// 时钟分频

reg clk_x2;

always @(posedge clk) begin
    clk_x2 <= ~clk_x2;     // 2分频
end