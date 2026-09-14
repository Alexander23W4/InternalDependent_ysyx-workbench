#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"

/*
⭐⭐$$:
现在的任务就是集成 sram 和 mrom, 然后配置对应的ysyxsoc-am, 跑通mem-test.
而且要debug verilator仿真环境, 成功boot整个仿真环境

主要涉及load bin的问题, 现阶段, bin文件load到mrom里面, 堆栈这些要配置到sram区域
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

extern char _heap_start;
int main(const char *args);

// 0x0f000000~0x0f001fff (8KB)
extern char _pmem_start;
#define PMEM_SIZE (8 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS 

void putch(char ch) {
  *(volatile uint8_t  *)YSYXSOC_SERIAL_ADDR = ch;
}

void halt(int code) {
  asm volatile("ebreak");   // 这里的code传入比如main函数的ret, 存在a0, ebreak来判断这个
  while (1);   // 防止halt函数返回, 如果ebreak没有正确执行, 程序会卡死在这里
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}


