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

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"
#include <sys/time.h>
#include <signal.h>

#define MAX_HANDLER 8

static alarm_handler_t handler[MAX_HANDLER] = {};
static int idx = 0;

void add_alarm_handle(alarm_handler_t h) {
  assert(idx < MAX_HANDLER);
  handler[idx ++] = h;
}

static void alarm_sig_handler(int signum) {
  int i;
  for (i = 0; i < idx; i ++) {
    handler[i]();
  }
}
