// CDC
// 应对异步时钟域

// ---------------------- 单信号 -----------------------
// 快到慢
// 利用延迟来展宽窄脉冲信号的方法 Verilog 
reg sig_1;
wire sig_2;

reg [1:0] sig_1_r;
reg [1:0] sig_2_r;

always @(posedge clk1) begin
    sig_1_r <= {sig_1_r[0], sig_1};    // 用移位寄存器组展宽
end

always @(posedge clk2) begin
    sig_2_r <= sig_1_r;
end

assign sig_2 = |sig_2_r;   // 


// 慢到快    延迟打拍法   保只采样一次

reg sig_1;
reg [1:0] sig_2_r;
wire sig_2;

always @(posedge clk2) begin
    sig_2_r <= {sig_2_r[0], sig_1};   // 01有效, 11不算
end

assign sig_2 = sig_2_r[0] & ~sig_2_r[1];




// ---------------------- 多相关信号, 需要时序同步 -----------------------

// Bundled Data CDC
// 需要A时钟域配合在发出valid之后 延迟data信号若干周期

// 慢到快       延迟采样法    保同步和只采样一次
wire valid_1;
reg [7:0] data1_r;
reg [7:0] data2_r;
reg [2:0] valid_2_r;

always @(posedge clk2) begin
    valid_2_r <= {valid_2_r[1:0], valid1};   // 延迟打拍一周期, 保证只采样一次   延迟采样一周期, 保证同步
end


always @(posedge clk2) begin
    if(valid_2_r[1] & ~valid_2_r[2]) begin
        data2_r <= data1_r;
    end
end



