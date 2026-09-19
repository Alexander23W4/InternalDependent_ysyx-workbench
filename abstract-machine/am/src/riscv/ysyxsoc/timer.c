#include <am.h>
#include "ysyxsoc.h"

void __am_timer_init() {
}

#define SIM_FREQ_HZ 670000ULL

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t lo = *(volatile uint32_t *)YSYXSOC_CLINT_ADDR;   // 先读低 32 位
  uint32_t hi = *(volatile uint32_t *)(YSYXSOC_CLINT_ADDR + 4);  // 再读高 32 位
  uint64_t mtime = ((uint64_t)hi << 32) | lo;
  uptime->us = mtime * 1000000ULL / SIM_FREQ_HZ;   // div.S 里有 __udivdi3
}





