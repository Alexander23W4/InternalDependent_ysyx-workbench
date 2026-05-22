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

#ifndef __ISA_RISCV_H__
#define __ISA_RISCV_H__

#include <common.h>
// S = <R, M>
// R = {GPR, PC, SR}

// register consist of pc and gpr[32]   ++ SR(system registers) [added for CTE]
// CPU_state struct defination
typedef struct {
  // GPR
  word_t gpr[MUXDEF(CONFIG_RVE, 16, 32)];
  // PC
  vaddr_t pc;
  // SR
  // contexts for CTE
  vaddr_t mtvec;
  vaddr_t mepc;
  word_t mcause;
  word_t mstatus;

} MUXDEF(CONFIG_RV64, riscv64_CPU_state, riscv32_CPU_state);  // this struct represent "cpu"

// decode
typedef struct {
  uint32_t inst;
} MUXDEF(CONFIG_RV64, riscv64_ISADecodeInfo, riscv32_ISADecodeInfo);

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
