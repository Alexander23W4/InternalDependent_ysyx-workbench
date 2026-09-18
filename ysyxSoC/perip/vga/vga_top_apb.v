/*
VGA	   0x2100_0000~0x211f_ffff
这段地址空间其实是帧缓冲, 程序往其中写入像素信息, 即可在输出到NVBoard的VGA区域.

ysyxSoC/perip/vga/vga_top_apb.v   VGA控制器

关于帧缓冲, 目前你可以暂时使用SRAM等简单存储器的方式来实现. 
但需要注意, 在真实情况中, 这种实现方案的成本较高: 以上文提到的640x480分辨率为例, 如果每个像素占4字节, 将需要1.17MB的SRAM, 这将占用不少的流片面积
接入NVBoard, 绑定相关引脚

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
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [7:0]  vga_r,
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,
  output        vga_vsync,
  output        vga_valid
);

endmodule
