#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/test.h"
#include <dlfcn.h>

#define RESET_VECTOR 0x80000000
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_init)(int port) = NULL;

/*
get img_size
*/

void init_difftest(char *diff_so_file, uint32_t* ram, long img_size, int port) {
  assert(diff_so_file != NULL);      // Open the incoming dynamic library file ref_so_file.

  // Resolve and relocate the API symbols in the dynamic libraries through dynamic loading, and return their addresses.
  void *handle;
  handle = dlopen(diff_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_init = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("The result of every instruction will be compared with %s.\n", diff_so_file);

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

static void checkregs(CPU_state *ref) {
  if (!difftest_checkregs(ref)) {
    printf("Difftest Abort.\n");
    difftest_abort_print(ref);
  }
}

bool difftest_checkregs(CPU_state* ref_r){
  bool is_same = true;
  if((ref_r->pc) != cpu.pc) is_same = false;
  for (int i = 0; i < 32; i++)
  {
    // printf("reg:%d, %d, %d\n", i, ref_r->gpr[i], cpu.gpr[i]);
    if(is_same == false) break;
    if(ref_r->gpr[i] != cpu.gpr[i]){
      is_same = false;
      break;
    }
  }
  if(is_same == false) endprog = 1;    // break down process
  return is_same;
}


/*
step by step comprison, called in the mainloop of cpu_exec

After executing an instruction in NEMU, it will let REF execute the same instruction in difftest_step(), 
  and then read out the registers in REF and compare them.
*/
void difftest_step() {
  CPU_state ref_r;
  cpu_state_print();
  assert(0);
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  difftest_abort_print(&ref_r);
  assert(0);
  checkregs(&ref_r);     //
}