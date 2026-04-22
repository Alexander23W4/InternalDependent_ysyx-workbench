#include <am.h>
#include <nemu.h>
// can not find outb? use:   grep -r "outb" ~/InternalDependent_ysyx-workbench

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


