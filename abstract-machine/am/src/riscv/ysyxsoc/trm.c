#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"

/*
⭐⭐$$:
现在的任务就是集成 sram 和 mrom, 然后配置对应的ysyxsoc-am, 跑通mem-test.
而且要debug verilator仿真环境, 成功boot整个仿真环境

主要涉及load bin的问题, 现阶段, bin文件load到mrom里面, 堆栈这些要配置到sram区域



方案: 将只读的 text rdata data bss 段这些通过linkner.ld直接预加载在 mrom里面, 依然还是使用 verilator-c
    在linker.ld中配置 堆栈的地址, 使得堆栈分配到 sram 里面

现在按照上述方案完成了 linker-ysyxsoc.ld 和 ysyxsoc.mk
*/

/*
@@
可以用来自由计算的内存区间 - 堆区
堆区需要分配在可写的内存区间, 因此可以分配在SRAM中

程序 "入口" - main(const char *args)
main()函数由AM上的程序提供, 但我们需要考虑整个运行时环境的入口, 即需要将程序链接到MROM的地址空间, 并保证TRM的第一条指令与NPC复位后的PC值一致

"退出"程序的方式 - halt()
ysyxSoC不支持"关机"等功能, 为方便起见, 可借助ebreak指令让仿真环境结束仿真

打印字符 - putch()
可通过ysyxSoC中的UART16550进行输出

由于NPC复位后从MROM开始执行, 而MROM不支持写入操作, 因此我们需要额外注意:
程序中不能包含对全局变量的写入操作
栈区需要分配在可写的SRAM中为ysyxSoC添加AM运行时环境

添加一个riscv32e-ysyxsoc的新AM, 并按照上述方式提供TRM的API. 
添加后, 将cpu-tests中的dummy测试编译到riscv32e-ysyxsoc, 并尝试在ysyxSoC的仿真环境中运行它.
*/


/*
设置串口收发参数, 具体包括波特率, 字符长度, 是否带校验位, 停止位的位宽等

波特率指每秒传送的字符数. 不过通常并非直接在寄存器中设置波特率, 而是设置一个与波特率成反比的除数: 
除数越小, 波特率越大, 传输速率越快, 但受电气特性的影响, 误码率也越高, 字符传送成功的概率越低; 
相反, 除数越大, 波特率越小, 传输速率越慢, 软件等待的时间也越长. 除数的值还与串口控制器的工作频率有关, 后者即串口每秒传送的比特数, 可RTFM了解两者的具体关系.

串口收发端的参数配置要完全一致, 才能正确发送和接收字符. 通常用形如115200 8N1等方式来描述一组参数配置, 它表示波特率是115200, 字符长度是8位, 不带校验位, 1位停止位.
*/

/*
尝试编写一个AM程序, 在其中实现一个原型为uint32_t flash_read(uint32_t addr)的函数, 此处的flash_read()函数通过驱动SPI master, 读出flash颗粒中起始地址为addr的32位内容. 

将需要发送给flash颗粒的命令设置到SPI master的TX寄存器中

设置除数寄存器

设置SS寄存器, 选择flash颗粒作为slave, 其slave编号为0

设置控制寄存器:
CHAR_LEN - 由于读命令的长度共32位, 且需要读出32位数据, 因此传输长度应为64位
Rx_NEG和Tx_NEG - 需要根据slave的相关文档进行设置
在真实芯片中, Rx_NEG和Tx_NEG设置错误可能会导致电路工作时的保持时间(hold)违例, 从而无法采样到正确的数据. 不过在verilator中没有时序的概念, 因此某些不正确的设置可能也会得到正确的结果, 但我们还是建议你在RTFM后严格按照约定来设置
LSB - 需要根据slave的相关文档进行设置, 在必要情况下, 读出的数据可通过软件调整其尾端
IE - 目前我们不使用中断功能
ASS - 是否设置均可, 但需要与软件协同考虑
轮询控制寄存器中的完成标志, 直到SPI master完成数据传输
从SPI master的RX寄存器中读出slave返回的数据

实现flash_read()后, 通过该函数从flash存储空间中读出内容, 并检查是否与仿真环境初始化时设置的内容一致.
*/

extern char _heap_start, _heap_end;
int main(const char *args);

Area heap = RANGE(&_heap_start, &_heap_end);      // 这里正式定义 heap 堆区, 然后malloc使用
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER);     // defined in CFLAGS 


void init_uart(void) {
    *(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 3) = 0x80;  // LCR: DLAB = 1    line control register, 打开除数锁存访问模式

    // 写除数
    *(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 0) = 0x01;  // DLL
    *(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 1) = 0x00;  // DLM

    *(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 3) = 0x03;  // LCR: 8N1  恢复正常模式, 设置字符长度为8bit, 无停止位(bit3), 无校验位(bit2)
}

void putch(char ch) {
  while (!(*(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 5) & 0x20));  
  *(volatile uint8_t *)(YSYXSOC_SERIAL_ADDR + 0) = ch;               
}

void halt(int code) {
  asm volatile("ebreak");   // 这里的code传入比如main函数的ret, 存在a0, ebreak来判断这个
  while (1);   // 防止halt函数返回, 如果ebreak没有正确执行, 程序会卡死在这里
}

void _trm_init() {
  init_uart();
  int ret = main(mainargs);
  halt(ret);
}


/*
SPI master 的设备寄存器(ysyxSoC/perip/spi/rtl/spi_top.v, 字偏移 = in_paddr[4:2]):

    +0x00 TX_0 / RX_0     +0x04 TX_1 / RX_1     +0x08 TX_2 / RX_2     +0x0c TX_3 / RX_3
    +0x10 CTRL            +0x14 DIVIDER         +0x18 SS

CTRL 位(spi_defines.v):
    [6:0]  CHAR_LEN   [8] GO   [9] RX_NEG   [10] TX_NEG   [11] LSB   [12] IE   [13] ASS

⚠ spi_top.v 写 CTRL 的实现是:
      if (wb_sel_i[0]) ctrl[7:0] <= wb_dat_i[7:0] | {7'b0, ctrl[0]};
  也就是 CHAR_LEN 的最低位只能被"置 1"、清不掉, 所以写进去的 CHAR_LEN 只能一直是偶数
  或一直是奇数, 中途换奇偶会出问题. 我们固定用 64(偶数)。

⚠ 实测: CHAR_LEN 就是"实际传输的位数"本身(不是位数减一), 而且是从 data[CHAR_LEN-1]
  开始发. 所以 64 位传输要写 CHAR_LEN = 64, 发送的首位是 data[63] = TX_1 的最高位。

⚠ SS 是"写 1 选中": spi_top.v 里 ss_pad_o = ~ss (ASS=0 时), 所以 SPI_SS = 1<<0
  会把 flash(spi.ss[0]) 的片选拉低。

⚠ 接收到的 32 位数据落在 data[31:0], 从 RX_0 读出来。但 flash 颗粒(flash.v)在往外吐
  数据之前先做了一次字节翻转:
      wire [31:0] data_bswap = {rdata[7:0], rdata[15:8], rdata[23:16], rdata[31:24]};
  也就是线上是"低字节先出、每个字节内部 MSB 先出"。master 用 MSB first 收完, 拿到的是
  字节序相反的 32 位, 需要软件再翻一次(讲义里说的"读出的数据可通过软件调整其尾端")。
*/





