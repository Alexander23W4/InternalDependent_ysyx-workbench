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

  output reg    in_pready,    // APB 传输准备好，表示当前传输已完成
  output reg [31:0] in_prdata,// APB 读数据总线
  output reg    in_pslverr,   // APB 错误标志，1 表示访问错误

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


localparam GPIO_BASE = 32'h10002000;

reg [15:0] gpio_out_r;
reg [7:0]  seg_reg_0_r;
reg [7:0]  seg_reg_1_r;
reg [7:0]  seg_reg_2_r;
reg [7:0]  seg_reg_3_r;

wire valid_access;
wire [31:0] addr_off;
wire [3:0]  addr_sel;

assign valid_access = in_psel && in_penable && (in_paddr >= GPIO_BASE) && (in_paddr <= GPIO_BASE + 32'h0f);  // 读写通用的enable条件
assign addr_off     = in_paddr - GPIO_BASE;
assign addr_sel     = addr_off[3:0];

assign gpio_out = gpio_out_r;


always @(posedge clock or posedge reset) begin
  if (reset) begin
    gpio_out_r <= 16'h0;
    seg_reg_0_r <= 8'h0;
    seg_reg_1_r <= 8'h0;
    seg_reg_2_r <= 8'h0;
    seg_reg_3_r <= 8'h0;
  end else if (valid_access && in_pwrite) begin
    case (addr_sel)
      4'h0: begin
        if (in_pstrb[0]) gpio_out_r[ 7: 0] <= in_pwdata[ 7: 0];
        if (in_pstrb[1]) gpio_out_r[15: 8] <= in_pwdata[15: 8];
      end
      4'h4: begin
      end
      4'h8: begin
        if (in_pstrb[0]) seg_reg_0_r <= in_pwdata[ 7: 0];
        if (in_pstrb[1]) seg_reg_1_r <= in_pwdata[15: 8];
        if (in_pstrb[2]) seg_reg_2_r <= in_pwdata[23:16];
        if (in_pstrb[3]) seg_reg_3_r <= in_pwdata[31:24];
      end
      default: begin
      end
    endcase
  end
end

always @(*) begin
  in_prdata = 32'h0;
  in_pready = 1'b0;
  in_pslverr = 1'b0;

  if (in_psel && in_penable) begin
    in_pready = 1'b1;

    if ((in_paddr < GPIO_BASE) || (in_paddr > GPIO_BASE + 32'h0f)) begin
      in_pslverr = 1'b1;
      in_prdata = 32'h0;
    end else begin
      case (addr_sel)
        4'h0: in_prdata = {16'h0, gpio_out_r};                                   // 回读 LED 寄存器
        4'h4: in_prdata = {16'h0, gpio_in};                                      
        4'h8: in_prdata = {seg_reg_3_r, seg_reg_2_r, seg_reg_1_r, seg_reg_0_r};  // LED 和 seg 是可以读的, 本质是读状态寄存器
        default: in_prdata = 32'h0;                                             
      endcase
    end
  end
end

/*
⭐ 段码表必须和 NVBoard 的数码管模型对齐, 不能照抄常见的"共阳段码表"。

NVBoard (nvboard/src/segs7.cpp) 的渲染规则:
    slot 0..7 = A B C D E F G DP        (A 是最上面那横, DP 是小数点)
    (newval >> k) & 1 == 0  ->  点亮 slot (7-k)      // 低电平点亮(共阳)
  即:  value[7]->A  value[6]->B  value[5]->C  value[4]->D
       value[3]->E  value[2]->F  value[1]->G  value[0]->DP

而 .nxdc 里写的是
    externalPins_gpio_seg_N (SEGN_A, SEGN_B, ..., SEGN_G, DECN_P)
nvboard_bind_pin() 里 bit_offset = len-1-i, 也就是**第一个名字绑最高位**,
所以 gpio_seg_N[7] 就是 A 段。

因此下面这张表是按 value[7]=A ... value[0]=DP 排的,
正好是常见那张"bit0=A 的共阳段码表"的按位反转 (0 从 C0 变 03)。
*/
function [7:0] seg_decode(input [3:0] data);
  case (data)
    4'h0: seg_decode = 8'h03;   // A B C D E F
    4'h1: seg_decode = 8'h9f;   //   B C
    4'h2: seg_decode = 8'h25;   // A B   D E   G
    4'h3: seg_decode = 8'h0d;   // A B C D     G
    4'h4: seg_decode = 8'h99;   //   B C   F G
    4'h5: seg_decode = 8'h49;   // A   C D F G
    4'h6: seg_decode = 8'h41;   // A   C D E F G
    4'h7: seg_decode = 8'h1f;   // A B C
    4'h8: seg_decode = 8'h01;   // A B C D E F G
    4'h9: seg_decode = 8'h09;   // A B C D   F G
    4'ha: seg_decode = 8'h11;   // A B C   E F G
    4'hb: seg_decode = 8'hc1;   //     C D E F G
    4'hc: seg_decode = 8'h63;   // A     D E F
    4'hd: seg_decode = 8'h85;   //   B C D E   G
    4'he: seg_decode = 8'h61;   // A     D E F G
    4'hf: seg_decode = 8'h71;   // A       E F G
    default: seg_decode = 8'hff;   // 全灭
  endcase
endfunction

assign gpio_seg_0 = seg_decode(seg_reg_0_r[3:0]);
assign gpio_seg_1 = seg_decode(seg_reg_0_r[7:4]);
assign gpio_seg_2 = seg_decode(seg_reg_1_r[3:0]);
assign gpio_seg_3 = seg_decode(seg_reg_1_r[7:4]);
assign gpio_seg_4 = seg_decode(seg_reg_2_r[3:0]);
assign gpio_seg_5 = seg_decode(seg_reg_2_r[7:4]);
assign gpio_seg_6 = seg_decode(seg_reg_3_r[3:0]);
assign gpio_seg_7 = seg_decode(seg_reg_3_r[7:4]);

endmodule
