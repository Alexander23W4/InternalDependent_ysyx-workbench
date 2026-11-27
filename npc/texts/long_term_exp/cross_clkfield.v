
// 利用延迟来展宽窄脉冲信号的方法 Verilog 
reg sig_1;
wire sig_2;

reg [1:0] sig_1_r;
reg [1:0] sig_2_r;

always @(posedge clk1) begin
    sig_1_r <= {sig_1_r[0], sig_1};    // 这样就把sig_1的有效生命周期延长了
end

always @(posedge clk2) begin
    sig_2_r <= sig_1_r;
end

assign sig_2 = |sig_2_r;   // 

