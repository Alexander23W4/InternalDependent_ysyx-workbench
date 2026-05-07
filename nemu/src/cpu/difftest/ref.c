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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

// The REF needs to implement these APIs, and the DUT will use these APIs for DiffTest.

/*
NEMU as an API:

Implement the DiffTest API in nemu/src/cpu/difftest/ref.c, including difftest_memcpy(), difftest_regcpy() and difftest_exec().
In addition, difftest_raise_intr() is prepared for interrupts and is not used currently.
*/

// requirement:
//      buf is the origin ram arr of dut (index starts from 0)
//      n: size (in byte)
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    uint8_t* ram = (uint8_t*)buf;
    uint32_t base_idx = addr - CONFIG_MBASE; 
    for (size_t i = 0; i < n; i++) {
      paddr_write(addr + i, 1, ram[base_idx + i]);
    }
  }
}


__EXPORT void difftest_regcpy(void *dut, bool direction) {
  CPU_state* dut_cpu = (CPU_state*)dut;
  if (direction == DIFFTEST_TO_REF) {
    for (int i = 0; i < 32; i++) {
      cpu.gpr[i] = dut_cpu->gpr[i];
    }
    cpu.pc = dut_cpu->pc;
  } else {       // TO_DUT
    for (int i = 0; i < 32; i++) {
      dut_cpu->gpr[i]  = cpu.gpr[i];
    }
    dut_cpu->pc = cpu.pc;
  }

  printf("%%%%%%%%\n");
  for (int i = 0; i < 32; i++)
  {
    printf("[NUM %d]: %u (0x%x)\n", i, cpu.gpr[i], cpu.gpr[i]);
  }
  printf("pc: (0x%x)\n", cpu.pc);
}

__EXPORT void difftest_exec(uint64_t n) {
  for (int i = 0; i < 32; i++)
  {
    printf("[NUM %d]: %u (0x%x)\n", i, cpu.gpr[i], cpu.gpr[i]);
  }
  printf("pc: (0x%x)\n", cpu.pc);

  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
