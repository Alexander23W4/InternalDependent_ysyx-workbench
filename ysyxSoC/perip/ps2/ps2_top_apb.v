/*
0x1001_1000~0x1001_1007

地址	      作用
0x0	      8位数据, 读出键盘扫描码, 如无按键信息, 则读出0
其他	      保留

让riscv32e-ysyxSoC 从 NVBoard 读取键盘按键, 直接把顶层的keyboard的接线直接接到 nvboard 就行了, nvboard 输入之后是自动缓存的, 软件只需要调用 API 读取就行了


⭐: 键盘控制器只判断地址是不是 0x1001_1000, 并且读出按键扫描码, 然后交给软件来进行翻译
相比于让键盘控制器进行按键扫描码到其他编码的翻译, 我们更推荐让软件获取按键扫描码并进行翻译: 这不仅降低了硬件设计的复杂度, 还提升了灵活性

接入NVBoard, 绑定相关引脚
在AM IOE中添加代码, 从PS2键盘控制器中读出按键信息, 并将其翻译成AM定义的键盘码
键盘扫描码可以参考数字电路实验的相关信息
注意部分按键的扫描码包含扩展码, 如PAGEUP, 你还需要正确识别它们


实现后, 运行am-tests中的按键测试, 检查你的实现是否正确.

⭐: 实现细节:
NVBoard 的 PS/2 就是标准帧（起始 0 + 8 位数据 LSB 先 + 奇校验 + 停止 1，共 11 位），CLK_NUM=10，PAGEUP 是 0xE0,0x7D 两字节。现在写控制器。

  扩展键(如 PAGEUP)的扫描码是两个字节 0xE0, 0x7D, 控制器逐字节交给软件,
  由软件自己识别 0xE0 前缀 —— 硬件不做翻译。

⭐: 总体的逻辑就是, 采ps2_clk 的下降沿, 然后等起始位, 读完一桢之后, 再识别apb的信号, 如果apb要读, 就把数据给他, 在这之前都没有apb的信号什么事, 不管

*/


module ps2_top_apb(
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

  input         ps2_clk,
  input         ps2_data
);

  //-----------------------------------------------------------------
  // 1. 输入同步 + ps2_clk 下降沿检测
  //    ps2_clk/ps2_data 是异步输入, 先过两级触发器同步到 clock 域
  //-----------------------------------------------------------------
  reg [1:0] clk_sync;
  reg [1:0] dat_sync;
  always @(posedge clock) begin
    clk_sync <= {clk_sync[0], ps2_clk};
    dat_sync <= {dat_sync[0], ps2_data};
  end

  wire clk_fall = clk_sync[1] & ~clk_sync[0];   // 上一拍 1, 这一拍 0
  wire dat      = dat_sync[1];

  //-----------------------------------------------------------------
  // 2. 收帧
  //-----------------------------------------------------------------
  reg [3:0] bit_cnt;    // 0=等起始位, 1..8=数据位, 9=校验位, 10=停止位
  reg [7:0] shifter;
  reg       par_acc;    // 8 个数据位的异或, 用来在收到校验位时判奇偶
  reg       frame_ok;   // 校验位是否正确
  reg [7:0] scancode;
  reg       scancode_valid;   // 有一帧新扫描码还没被软件读走

  wire apb_read = in_psel & in_penable & ~in_pwrite;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      bit_cnt        <= 4'd0;
      shifter        <= 8'd0;
      par_acc        <= 1'b0;
      frame_ok       <= 1'b0;
      scancode       <= 8'd0;
      scancode_valid <= 1'b0;
    end
    else if (clk_fall) begin
      case (bit_cnt)
        // ---- 起始位必须是 0, 是 1 说明是空闲, 继续等 ----
        4'd0: begin
          if (!dat) begin
            bit_cnt <= 4'd1;
            shifter <= 8'd0;
            par_acc <= 1'b0;
          end
        end
        // ---- 8 个数据位, PS/2 是 LSB 先发, 所以右移拼接 ----
        4'd1, 4'd2, 4'd3, 4'd4, 4'd5, 4'd6, 4'd7, 4'd8: begin
          shifter <= {dat, shifter[7:1]};
          par_acc <= par_acc ^ dat;
          bit_cnt <= bit_cnt + 4'd1;
        end
        // ---- 奇校验位: 数据位 + 校验位里 1 的个数应该是奇数 ----
        4'd9: begin
          frame_ok <= par_acc ^ dat;
          bit_cnt  <= 4'd10;
        end
        // ---- 停止位必须是 1, 校验过了才认这一帧 ----
        4'd10: begin
          if (dat & frame_ok) begin
            scancode       <= shifter;
            scancode_valid <= 1'b1;     // 写好了, 有新数据
          end
          bit_cnt <= 4'd0;
        end
        default: bit_cnt <= 4'd0;
      endcase
    end
    // ⭐ 软件读走之后就清掉"有新数据"标志。
    //    放在 else if 里: 万一读的同一拍正好收完一帧, 上面优先级更高, 新数据不会被清掉
    else if (apb_read) begin   
      scancode_valid <= 1'b0;
    end
  end

  //-----------------------------------------------------------------
  // 3. APB 从机接口
  //    0x1001_1000(偏移 0): 读出扫描码; 没有新按键信息时读出 0
  //    其他偏移: 保留, 读出 0
  //-----------------------------------------------------------------
  always @(*) begin
    in_pready  = 1'b0;
    in_pslverr = 1'b0;
    in_prdata  = 32'h0;

    if (in_psel && in_penable) begin
      in_pready = 1'b1;

      if (in_paddr[3:0] == 4'h0)
        in_prdata = {24'h0, scancode_valid ? scancode : 8'h0};
    end
  end

endmodule
