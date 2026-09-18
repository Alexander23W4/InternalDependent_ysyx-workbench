/*
VGA	   0x2100_0000~0x211f_ffff
这段地址空间其实是帧缓冲, 程序往其中写入像素信息, 即可在输出到NVBoard的VGA区域.

ysyxSoC/perip/vga/vga_top_apb.v   VGA控制器

关于帧缓冲, 目前你可以暂时使用SRAM等简单存储器的方式来实现. 
但需要注意, 在真实情况中, 这种实现方案的成本较高: 以上文提到的640x480分辨率为例, 如果每个像素占4字节, 将需要1.17MB的SRAM, 这将占用不少的流片面积
接入NVBoard, 绑定相关引脚

*/

/*
实现说明:

1) 帧缓冲
   0x2100_0000~0x211f_ffff 这 2MB 整块都当地址空间用: 一像素 4 字节,
   字节偏移 addr[20:0], 字下标 addr[20:2], 所以刚好 2^19 个字。
   像素格式 0x00RRGGBB (和 AM 的 gpu.c / NVBoard 的 VGA 一致):
       R = [23:16]  G = [15:8]  B = [7:0]
   640x480 只用到前 640*480*4 = 1.17MB。
   ⭐ 这里就用最简单的行为化存储器实现(讲义允许"暂时使用SRAM等简单存储器"),
      方便仿真; 真正流片时 2MB 片上 SRAM 面积很大, 应该换成真正的 SRAM/DRAM。

2) 时序
   标准 640x480@60 的 VGA 时序, 像素时钟就是 clock:
       x_cnt 数 1..800 : 1..96 是行同步(低), 97..144 后沿, 145..784 有效(640点), 785..800 前沿
       y_cnt 数 1..525 : 1..2 是场同步(低), 3..35 后沿, 36..515 有效(480行), 516..525 前沿
   (和 nvboard/example/vsrc/vga_ctrl.v 完全一致)

3) 和 NVBoard 的约定
   NVBoard 的 VGA 模型本身不做时序判断, 它在 nvboard.cpp 里是这样用的:
       if (*vga_blank_n_ptr) vga_update();      // VGA_BLANK_N 为高时才取一个像素
       vga_update() 每次从 VGA_R/G/B 取一个像素, 填满 640*480 就刷一帧。
   所以 vga_valid 直接接 NVBoard 的 VGA_BLANK_N: 一帧正好被取 640*480 次。

4) 读出的一拍
   显存的读口是同步读(寄存器输出), 所以 hsync/vsync/valid 也一起延后一拍,
   保证"valid 有效的那一拍, RGB 上正好是对应像素"。整幅图像只是相位后移一拍。
*/

module vga_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output reg    in_pready,
  output reg [31:0] in_prdata,
  output reg    in_pslverr,

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);

  //-----------------------------------------------------------------
  // 1. 帧缓冲 (0x2100_0000~0x211f_ffff, 共 2MB = 2^19 个 32 位像素)
  //-----------------------------------------------------------------
  localparam FB_AW = 19;

  reg [31:0] fb [0:(1<<FB_AW)-1];

  wire             apb_wr = in_psel & in_penable &  in_pwrite;
  wire             apb_rd = in_psel & in_penable & ~in_pwrite;
  wire [FB_AW-1:0] fb_index = in_paddr[FB_AW+1:2];   // 窗口内字节偏移[20:0] -> 字下标

  // APB 写口 (按字节掩码写, 支持 sb/sh/sw)
  always @(posedge clock) begin
    if (apb_wr) begin
      if (in_pstrb[0]) fb[fb_index][ 7: 0] <= in_pwdata[ 7: 0];
      if (in_pstrb[1]) fb[fb_index][15: 8] <= in_pwdata[15: 8];
      if (in_pstrb[2]) fb[fb_index][23:16] <= in_pwdata[23:16];
      if (in_pstrb[3]) fb[fb_index][31:24] <= in_pwdata[31:24];
    end
  end

  //-----------------------------------------------------------------
  // 2. APB 从机 (0 等待): 读回显存内容, 写进去的就是帧缓冲
  //-----------------------------------------------------------------
  always @(*) begin
    in_pready  = in_psel & in_penable;
    in_pslverr = 1'b0;
    in_prdata  = apb_rd ? fb[fb_index] : 32'h0;
  end

  //-----------------------------------------------------------------
  // 3. VGA 时序发生器 (640x480@60)
  //-----------------------------------------------------------------
  localparam [9:0] H_TOTAL = 10'd800, H_SYNC = 10'd96, H_ACTIVE = 10'd144, H_BACKPORCH = 10'd784;
  localparam [9:0] V_TOTAL = 10'd525, V_SYNC = 10'd2,  V_ACTIVE = 10'd35,  V_BACKPORCH = 10'd515;

  reg [9:0] x_cnt;
  reg [9:0] y_cnt;
  always @(posedge clock) begin
    if (reset) begin
      x_cnt <= 10'd1;
      y_cnt <= 10'd1;
    end else if (x_cnt == H_TOTAL) begin
      x_cnt <= 10'd1;
      y_cnt <= (y_cnt == V_TOTAL) ? 10'd1 : (y_cnt + 10'd1);
    end else begin
      x_cnt <= x_cnt + 10'd1;
    end
  end

  wire h_valid = (x_cnt > H_ACTIVE) & (x_cnt <= H_BACKPORCH);   // x_cnt 145..784  -> 640 点
  wire v_valid = (y_cnt > V_ACTIVE) & (y_cnt <= V_BACKPORCH);   // y_cnt  36..515  -> 480 行

  wire [9:0]  h_addr = h_valid ? (x_cnt - (H_ACTIVE + 10'd1)) : 10'd0;   // 0..639
  wire [9:0]  v_addr = v_valid ? (y_cnt - (V_ACTIVE + 10'd1)) : 10'd0;   // 0..479
  wire [18:0] vga_index = v_addr * 19'd640 + {9'b0, h_addr};

  // 同步读出像素, 同时把同步信号也延后一拍对齐
  reg [31:0] pixel_q;
  reg        h_valid_q, v_valid_q, hsync_q, vsync_q;
  always @(posedge clock) begin
    pixel_q   <= fb[vga_index];
    h_valid_q <= h_valid;
    v_valid_q <= v_valid;
    hsync_q   <= (x_cnt > H_SYNC);
    vsync_q   <= (y_cnt > V_SYNC);
  end

  assign vga_hsync = hsync_q;
  assign vga_vsync = vsync_q;
  assign vga_valid = h_valid_q & v_valid_q;   // ⭐ 接 NVBoard 的 VGA_BLANK_N

  assign vga_r = pixel_q[23:16];
  assign vga_g = pixel_q[15: 8];
  assign vga_b = pixel_q[ 7: 0];

endmodule
