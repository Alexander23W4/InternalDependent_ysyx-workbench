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


#define CSR_MSTATUS 0x300
#define CSR_MTVEC   0x305
#define CSR_MEPC    0x341
#define CSR_MCAUSE  0x342

/*
Trigger an interrupt/exception with ``NO''.
Then return the address of the interrupt/exception vector.

potision:    MXLEN-1 MXLEN-2                 0
items:      Interrupt    Exception Code (WLRL)
length:       1                 MXLEN-1
Machine Cause register mcause.

  Interrupt Exception Code Description   (mcause)
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
  0 11 Environment call from M-mode    // ecall 
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
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  cpu.mcause = NO;
  cpu.mepc = epc;
  cpu.mstatus = cpu.mstatus;

  return cpu.mtvec;  // jump to exception processing program addr
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

word_t isa_csr_read(word_t csr_no) {
  switch (csr_no) {
    case CSR_MSTATUS: return cpu.mstatus; 
    case CSR_MTVEC:   return cpu.mtvec;
    case CSR_MEPC:    return cpu.mepc;
    case CSR_MCAUSE:  return cpu.mcause;
    default: 
      panic("Unimplemented or invalid CSR address for read: 0x%x", csr_no);
      return 0; 
  }
}

void isa_csr_write_rs(word_t csr_no, word_t data, int rs) {
  if(rs != 0){
    switch (csr_no) {
      case CSR_MSTATUS: cpu.mstatus = data; break;
      case CSR_MTVEC: cpu.mtvec = data; break;
      case CSR_MEPC: cpu.mepc = data; break;
      case CSR_MCAUSE: cpu.mcause = data; break;
      default: panic("Unimplemented or invalid CSR address: 0x%x", csr_no);
    }   
  }
}

void isa_csr_write(word_t csr_no, word_t data){
  switch (csr_no) {
    case CSR_MSTATUS: cpu.mstatus = data; break;
    case CSR_MTVEC: cpu.mtvec = data; break;
    case CSR_MEPC: cpu.mepc = data; break;
    case CSR_MCAUSE: cpu.mcause = data; break;
    default: panic("Unimplemented or invalid CSR address: 0x%x", csr_no);
  }   
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