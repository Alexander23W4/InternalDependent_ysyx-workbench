module gpio_top_apb(
  input         clock,        // APB 时钟
  input         reset,        // APB 复位，拉高时清空状态

  input  [31:0] in_paddr,     // APB 地址总线，访问 SDRAM 的目标地址

  input         in_psel,      // APB 选择信号，表示当前设备被选中
  input         in_penable,   // APB 使能信号，表示传输阶段有效

  input  [2:0]  in_pprot,     // APB 保护位，通常用于权限/安全信息

  input         in_pwrite,    // 1=写，0=读

  input  [31:0] in_pwdata,    // APB 写数据总线
  input  [3:0]  in_pstrb,     // 写字节掩码，控制 4 个字节是否写入

  output        in_pready,    // APB 传输准备好，表示当前传输已完成

  output [31:0] in_prdata,    // APB 读数据总线

  output        in_pslverr,   // APB 错误标志，1 表示访问错误

  output [15:0] gpio_out,  // led
  input  [15:0] gpio_in,   // key
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);


/*
GPIO	              0x1000_2000~0x1000_200f

地址	  作用
0x0	    16位数据, 分别驱动16个LED灯          0-1
0x4	    16位数据, 分别获得16个拨码开关的状态   4-5
0x8	    32位数据, 其中每4位驱动1个7段数码管    8-b
0xc	     保留           
*/


reg [15:0] gpio_out_r;
reg [7:0]  gpio_seg_0_r;
reg [7:0]  gpio_seg_1_r;
reg [7:0]  gpio_seg_2_r;
reg [7:0]  gpio_seg_3_r;
reg [7:0]  gpio_seg_4_r;
reg [7:0]  gpio_seg_5_r;
reg [7:0]  gpio_seg_6_r;
reg [7:0]  gpio_seg_7_r;

assign gpio_out = gpio_out_r;
assign ...

wire [31:0] mask;
assign mask = {{4{in_pstrb[3]}}, {4{in_pstrb[2]}}, {4{in_pstrb[1]}}, {4{in_pstrb[0]}}} & in_pwdata;

always @(posedge clock or posedge reset) begin
  if(reset) begin
    
  end else begin
    if(in_psel && in_penable && in_pwrite) begin
      if(in_paddr == 32'h10002000) begin
        gpio_out_r <= mask[15:0];
      end
      else if(in_paddr == 32'...)
    end
  end
end


always @(*) begin
  in_prdata = '0;
  in_pready = 1'b0;
  if(in_psel && in_penable && !in_pwrite && in_paddr == 32'h10002004) begin   // 读
    in_prdata = {{16{1'b0}}, gpio_in};
    in_pready = 1'b0;
  end
end

endmodule
