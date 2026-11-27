// CDC
// 应对异步时钟域

// ---------------------- 单信号 -----------------------
// 快到慢
// 利用延迟来展宽窄脉冲信号的方法 Verilog 
// 脉冲扩展法
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


// 慢到快     确保只采样一次(本质是采边沿)

reg sig_1;   // 比如这个信号是一个高电平有效的信号   一般被缓存操控的都是en(valid)信号
reg [1:0] sig_2_r;
wire sig_2;   

always @(posedge clk2) begin
    sig_2_r <= {sig_2_r[0], sig_1};   // 1级缓存  只用于边沿检测      因为只检测边沿, 所以只会采样一次
end

assign sig_2 = sig_2_r[0] & ~sig_2_r[1];    // 采边沿




// ---------------------- 多相关信号, 需要时序同步 -----------------------

// Bundled Data CDC
// 需要A时钟域配合在发出valid之后 延迟data信号若干周期

// 慢到快       延迟打拍同步法    
wire valid_1;
reg [7:0] data1_r;
reg [7:0] data2_r;
reg [2:0] valid_2_r;

always @(posedge clk2) begin
    valid_2_r <= {valid_2_r[1:0], valid1};   // 1级用于延迟打拍同步  1级用于边沿检测
end


always @(posedge clk2) begin
    if(valid_2_r[1] & ~valid_2_r[2]) begin
        data2_r <= data1_r;
    end
end


// 频率差的比较多的情况:

// 同步模块工作时钟为 100MHz 的模块
// 异步数据对来自工作时钟为 999KHz 的模块
module delay_cnt_sample(
    input               rstn,
    input               clk1,
    input [31:0]        din,
    input               din_en,

    input               clk2,
    output [31:0]       dout,
    output              dout_en);

   // 4级缓存：3级用于打拍同步，一级用于边沿检测
   reg [3:0]    edge_r ;
   always @(posedge clk2 or negedge rstn) begin
     if (!rstn) edge_r  <= 3'b0 ;
     else       edge_r  <= {edge_r[3:0], clk1} ;
   end
   wire edge_pos = edge_r[2] && !edge_r[3] ;

   // 延迟计数器，检测到慢时钟上升沿时开始计数
   reg [5:0] cnt ;
   always @(posedge clk2 or negedge rstn) begin
      if (!rstn)                cnt <= 6'h3f ;
      else if (edge_pos && din_en)
                                cnt <= 6'h0 ;
      else if (cnt != 6'h3f)    cnt <= cnt + 1'b1 ;
   end

/*
我的方案, 还是延时en信号, example里面延迟的是clk1

    reg [1:0] edge_pos;

    always @(posedge clk2) begin
        edge_pos <= {edge_pos[0], din_en};
    end

    always @(posedge clk2) begin
        if(edge_pos[0] & ~edge_pos[1]) begin    // 这里不需要对en做延迟了, 只需要采边沿, 延迟采样的作用由计数器承担
            cnt <= 6'h0;
        end
    end

    always @(posedge clk2) begin
        if(cnt != 6'h3f) begin
            cnt <= cnt + 6'h1;      // 然后到cnt == 6'3f的时候, 再进行数据采样
        end
    end
*/
   // 数据同步
   reg [31:0]           dout_r ;
   reg                  dout_en_r ;
   always @(posedge clk2 or negedge rstn) begin
      if (!rstn)
        dout_r         <= 'b0 ;
      else if (din_en && cnt == 47) // 大约在慢时钟周期中间时刻采样
        dout_r         <= din ;
   end
   // 数据使能信号较数据采样时刻延迟一个周期输出
   always @(posedge clk2 or negedge rstn) begin
      if (!rstn)        dout_en_r      <= 1'b0 ;
      else if (din_en && cnt==48)
                        dout_en_r      <= 1'b1 ;
      else              dout_en_r      <= 1'b0 ;
   end
   assign       dout    = dout_r ;
   assign       dout_en = dout_en_r ;

endmodule



// 快到慢
// 快时钟域脉宽扩展+慢时钟域延迟打拍




// 通用方法(使用快到慢  慢到快):   握手   异步FIFO   