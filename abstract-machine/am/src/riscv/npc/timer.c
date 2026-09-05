#include <am.h>
#include "npc.h"

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {   // 8 Byte
  uint64_t time_l = (uint64_t)(*(volatile uint32_t *)NPC_UPT_ADDR);
  uint64_t time_h = ((uint64_t)(*(volatile uint32_t *)(NPC_UPT_ADDR + 4))) << 32;
  uptime->us = time_h | time_l;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {   // 12 Byte
  rtc->second = (int)(*(volatile uint16_t *)(NPC_RTC_ADDR + 10));
  rtc->minute = (int)(*(volatile uint16_t *)(NPC_RTC_ADDR + 8));
  rtc->hour   = (int)(*(volatile uint16_t *)(NPC_RTC_ADDR + 6));
  rtc->day    = (int)(*(volatile uint16_t *)(NPC_RTC_ADDR + 4));
  rtc->month  = (int)(*(volatile uint16_t *)(NPC_RTC_ADDR + 2));
  rtc->year   = (int)(*(volatile uint16_t *)NPC_RTC_ADDR);
}




