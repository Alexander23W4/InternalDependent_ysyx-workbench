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
这里DiffTest的设计结构: 
首先将 REF 的实现动态链接过来, 提供 init 和 exec_once 接口给 DUT

实现双向 reg_cpy 和 mem_cpy, 用于同步状态(reg_env)

启动 REF (init), 并且同步初始状态

** 在 DUT 的 exec 函数中, 运行difftest_step, 比较所有 reg_env  


*/
#include <dlfcn.h>

#include <isa.h>
#include <cpu/cpu.h>
#include <memory/paddr.h>
#include <utils.h>
#include <difftest-def.h>

// REF function pointers
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

// ** some INSTRUCTION CAN NOT run in REF
// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// ** INSTRUCTION-PACKING in REF (e.g. QEMU)
// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}


/*
  After the above initialization, the DUT and REF are in the same state.
*/
void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);      // Open the incoming dynamic library file ref_so_file.

  // Dynamic Loading
  // Resolve and relocate the API symbols in the dynamic libraries through dynamic loading, and return their addresses.
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("%s", ANSI_FMT("REF_SO file mapped successfully: ", ANSI_FG_CYAN));
  printf("%s\n", ref_so_file);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  // Initialize the DIffTest function of the REF, the specific behavior varies from REF to REF.
  ref_difftest_init(port);

  // Replicate DUT reg-env to REF: 
  // Copy the guest memory of the DUT into the REF.
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  // Copy the register state of the DUT into the REF.
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void difftest_abort_print(CPU_state* ref){
  printf("pc: [DUT]0x%08x, [REF]0x%08x.\n", cpu.pc, ref->pc);
  for (int i = 0; i < 32; i++)
  {
    printf("reg: %d: [DUT]%d, [REF]%d\n", i, cpu.gpr[i], ref->gpr[i]);
  }
  printf("--------------------- CSR State ---------------------\n");
  printf("mtvec:   [DUT] 0x%08x, [REF] 0x%08x\n", cpu.mtvec, ref->mtvec);
  printf("mepc:    [DUT] 0x%08x, [REF] 0x%08x\n", cpu.mepc, ref->mepc);
  printf("mcause:  [DUT] 0x%08x, [REF] 0x%08x\n", cpu.mcause, ref->mcause);
  printf("mstatus: [DUT] 0x%08x, [REF] 0x%08x\n", cpu.mstatus, ref->mstatus);
  printf("-----------------------------------------------------\n");
  
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    printf("Difftest Abort.\n");
    difftest_abort_print(ref);
    nemu_state.state = NEMU_ABORT;
    nemu_state.halt_pc = pc;
    isa_reg_display();
  }
}

/*
step by step comprison, called in the mainloop of cpu_exec

After executing an instruction in NEMU, it will let REF execute the same instruction in difftest_step(), 
  and then read out the registers in REF and compare them.
*/
void difftest_step(vaddr_t pc, vaddr_t npc) {  // dut->pc, dut->dnpc
  CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);   //
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);  // 这个其实把 REF 内部的 reg_env(CPU_state) 复制到这里的 ref_r

  checkregs(&ref_r, pc);     // 比较 ref_r 和 dut_reg_env
  // difftest_abort_print(&ref_r);    // If wanna print each circle comparison result
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif
