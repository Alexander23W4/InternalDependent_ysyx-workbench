#include <am.h>
#include <nemu.h>

// timer

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {    // us after system start
  uint64_t time_l = (uint64_t)inl(RTC_ADDR);
  uint64_t time_h = ((uint64_t)inl(RTC_ADDR + 4)) << 32;
  uptime->us = time_h | time_l;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {    // specific time
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
