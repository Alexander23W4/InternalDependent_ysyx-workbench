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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

/*
You need to implement the isa_difftest_checkregs() function, 
  which compares the general-purpose registers and the PC with the values of the registers read from the DUT. 

  If the comparison results are the same, the function returns true; 

  If the values are found to be different, 
    the function returns false and the framework code automatically stops the client program. 

  Especially, if the comparison result of isa_difftest_checkregs() is inconsistent, 
    the second parameter pc should point to the instruction that caused the inconsistency, 
    which can be used to print a debug message.
*/
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  // printf("pc: 0x%08x, 0x%08x. 0x%08x\n", pc + 4, cpu.pc, ref_r->pc);
  bool is_same = true;

  // check PC
  if((ref_r->pc) != cpu.pc) is_same = false;

  // check GPR
  for (int i = 0; i < 32; i++)
  {
    // printf("reg:%d, %d, %d\n", i, ref_r->gpr[i], cpu.gpr[i]);
    if(is_same == false) break;
    if(ref_r->gpr[i] != cpu.gpr[i]){
      is_same = false;
      break;
    }
  }

  // // check CSR
  // if (is_same && (ref_r->mtvec != cpu.mtvec))     is_same = false;
  // if (is_same && (ref_r->mepc != cpu.mepc))       is_same = false;
  // if (is_same && (ref_r->mcause != cpu.mcause))   is_same = false;
  
  // // for mstatus, use 0x1fff mask
  // if (is_same && ((ref_r->mstatus & 0x1fff) != (cpu.mstatus & 0x1fff))) {
  //   is_same = false;
  // }

  if(is_same == false){
    nemu_state.state = NEMU_STOP;
  }
  
  return is_same;
}

void isa_difftest_attach() {
}
