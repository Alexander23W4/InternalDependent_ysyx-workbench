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

#include <isa.h>

enum {
  EVENT_NULL = 0,
  EVENT_YIELD, EVENT_SYSCALL, EVENT_PAGEFAULT, EVENT_ERROR,
  EVENT_IRQ_TIMER, EVENT_IRQ_IODEV,
} event;

/* Trigger an interrupt/exception with ``NO''.
  * Then return the address of the interrupt/exception vector.
  */
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  cpu.mcause = NO;
  cpu.mpec = epc;

  return cpu.mtvec;  // jump to exception processing program
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}


/*
Interrupt Exception Code Description
1 0 Reserved
1 1 Supervisor software interrupt
1 2 Reserved
1 3 Machine software interrupt
1 4 Reserved
1 5 Supervisor timer interrupt
1 6 Reserved
1 7 Machine timer interrupt
1 8 Reserved
1 9 Supervisor external interrupt
1 10 Reserved
1 11 Machine external interrupt
1 12–15 Reserved
1 ≥16 Designated for platform use

0 0 Instruction address misaligned
0 1 Instruction access fault
0 2 Illegal instruction
0 3 Breakpoint
0 4 Load address misaligned
0 5 Load access fault
0 6 Store/AMO address misaligned
0 7 Store/AMO access fault

0 8 Environment call from U-mode
0 9 Environment call from S-mode
0 10 Reserved
0 11 Environment call from M-mode
0 12 Instruction page fault
0 13 Load page fault
0 14 Reserved
0 15 Store/AMO page fault
0 16–23 Reserved
0 24–31 Designated for custom use
0 32–47 Reserved
0 48–63 Designated for custom use
0 ≥64 Reserved
*/