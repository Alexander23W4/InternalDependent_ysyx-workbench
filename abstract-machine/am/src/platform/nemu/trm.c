#include <am.h>
#include <nemu.h>
// can not find outb? use:   grep -r "outb" ~/InternalDependent_ysyx-workbench
/*
  How large is the stack defined in AM:

  The details are in start.S & linker.ld, linker.ld provides stack range info to start.S, the ultimate program put _start() 
    at the beginning of the program, therefore distribute stack (auipc sp) before guest program runs. 

  _pmem_start 是 0x80000000，且程序段总共占用了 0x1000 字节：
  BSS 结束地址：0x80001000。
  栈顶地址 (_stack_top)：对齐后依然是 0x80001000。
  栈底地址 (_stack_pointer)：0x80001000 + 0x8000 = 0x80009000。
*/
extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {    // serial output API
  outb(SERIAL_PORT, ch);    // *(volatile uint8_t  *)addr = data;   sbu addr data    (find it in src/riscv/riscv.h)
}

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}


