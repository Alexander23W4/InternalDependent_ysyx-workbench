#include <am.h>
#include <nemu.h>

// timer

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {    // us after system start
  uint64_t time_l = (uint64_t)inl(UPT_ADDR);
  uint64_t time_h = ((uint64_t)inl(UPT_ADDR + 4)) << 32;
  uptime->us = time_h | time_l;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {    // specific time
  rtc->second = (int)(*(volatile uint16_t *)(RTC_ADDR + 10));
  rtc->minute = (int)(*(volatile uint16_t *)(RTC_ADDR + 8));
  rtc->hour   = (int)(*(volatile uint16_t *)(RTC_ADDR + 6));
  rtc->day    = (int)(*(volatile uint16_t *)(RTC_ADDR + 4));
  rtc->month  = (int)(*(volatile uint16_t *)(RTC_ADDR + 2));
  rtc->year   = (int)(*(volatile uint16_t *)RTC_ADDR);
}
