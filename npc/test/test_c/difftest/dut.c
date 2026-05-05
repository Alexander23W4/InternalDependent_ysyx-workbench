#include "test.h"
#include <dlfcn.h>

#define RESET_VECTOR 0x80000000
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

// img_size

void init_difftest(char *diff_so_file, uint32_t* ram, long img_size, int port) {
  assert(diff_so_file != NULL);      // Open the incoming dynamic library file ref_so_file.

  // Resolve and relocate the API symbols in the dynamic libraries through dynamic loading, and return their addresses.
  void *handle;
  handle = dlopen(diff_so_file, RTLD_LAZY);
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

  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", diff_so_file);

  // Initialize the DIffTest function of the REF, the specific behavior varies from REF to REF.
  ref_difftest_init(port);
  // Copy the guest memory of the DUT into the REF.
  ref_difftest_memcpy(RESET_VECTOR, ram, img_size, DIFFTEST_TO_REF);
  // Copy the register state of the DUT into the REF.
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}



static void difftest_abort_print(CPU_state* ref){
  printf("pc: [DUT]0x%08x, [REF]0x%08x.\n", cpu.pc, ref->pc);
  for (int i = 0; i < 32; i++)
  {
    printf("reg: %d: [DUT]%d, [REF]%d\n", i, cpu.gpr[i], ref->gpr[i]);
  } 
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
void difftest_step(vaddr_t pc, vaddr_t npc) {
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
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);     //
}