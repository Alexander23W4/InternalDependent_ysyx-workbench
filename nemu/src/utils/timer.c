/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <time.h>
#include MUXDEF(CONFIG_TIMER_GETTIMEOFDAY, <sys/time.h>, <time.h>)


IFDEF(CONFIG_TIMER_CLOCK_GETTIME,
    static_assert(CLOCKS_PER_SEC == 1000000, "CLOCKS_PER_SEC != 1000000"));
IFDEF(CONFIG_TIMER_CLOCK_GETTIME,
    static_assert(sizeof(clock_t) == 8, "sizeof(clock_t) != 8"));

static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
#if defined(CONFIG_TARGET_AM)
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
#elif defined(CONFIG_TIMER_GETTIMEOFDAY)    // get time of day
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
#else
  struct timespec now;
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
#endif
  return us;   // in us unit
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

void init_rand() {   // random number init (time seed)
  srand(get_time_internal());
}

rtc_time_t get_absolute_time(void) {
    rtc_time_t rtc = {0};
    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);

    rtc.year   = (uint16_t)(tm_info->tm_year + 1900);  
    rtc.month  = (uint16_t)(tm_info->tm_mon + 1);      
    rtc.day    = (uint16_t)tm_info->tm_mday;
    rtc.hour   = (uint16_t)tm_info->tm_hour;
    rtc.minute = (uint16_t)tm_info->tm_min;
    rtc.second = (uint16_t)tm_info->tm_sec;

    return rtc;
}