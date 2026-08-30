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

/*
RTC (real time clock)
During initialization, the i8253 timer registers an 8-byte port at 0x48 and an 8-byte MMIO space at 0xa0000048, 
  both of which are mapped to two 32-bit RTC registers. 
The CPU can access these two registers to obtain the current time represented in 64 bits.
*/

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"


static rtc_time_t* rtc_port_base = NULL;   // 1个 rtc_time_t
static uint32_t* upt_port_base = NULL;     // 2个 uint32_t

// call get_time(), get us time, and store in rtc_port_base (2x 32 bits register, the "space")
// 为了保持一致性, 不管offset是 0 还是 4, 都更新全部 uptime reg
static void upt_io_handler(uint32_t offset, int len, bool is_write) {  // callback function, called when input/output 
  assert(offset == 0 || offset == 4);
  if (!is_write) {    // read only, offset must be 4
    uint64_t us = get_time();
      upt_port_base[0] = (uint32_t)us;   // lw addr
      upt_port_base[1] = (uint32_t)(us >> 32);   // lw addr+4  
  }
}

static void rtc_io_handler(uint32_t offset, int len, bool is_write) {
  assert(offset <= 10 && offset % 2 == 0);
  if(!is_write) {
    rtc_time_t rtc = get_absolute_time();
    rtc_port_base->year = rtc.year;
    rtc_port_base->month  = rtc.month;
    rtc_port_base->day    = rtc.day;
    rtc_port_base->hour   = rtc.hour;
    rtc_port_base->minute = rtc.minute;
    rtc_port_base->second = rtc.second;
  }
}


void init_timer() {
  rtc_port_base = (rtc_time_t *)new_space(12);
  upt_port_base = (uint32_t *)new_space(8);
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 12, rtc_io_handler);    // name, addr, space, len, callback
  add_mmio_map("upt", CONFIG_UPTIME_MMIO, upt_port_base, 8, upt_io_handler);
}
