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
  output        in_pready,    // APB 传输准备好，表示当前传输已完成
  output [31:0] in_prdata,    // APB 读数据总线
  output        in_pslverr,   // APB 错误标志，1 表示访问错误

  input         ps2_clk,
  input         ps2_data
);

endmodule
