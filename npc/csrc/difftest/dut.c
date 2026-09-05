#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"
#include <dlfcn.h>

#define RESET_VECTOR 0x80000000
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
/*
⭐ 开启DiffTest时, 在config和makefile里面都要激活DiffTest的 MACRO

npc difftest 的实现逻辑

先将nemu设置成ref模式

将$(NEMU_HOME)/build/riscv32-nemu-interpreter-so ⭐ 通过 makefile 和 args 配合传递过来

解析动态库, NEMU 需要实现作为REF 的 DiffTest接口规范函数

调用接口函数进行初始同步

每个周期进行比较reg-env即可

*/

const char *regs_name[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_init)(int port) = NULL;
static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;



void difftest_skip_ref() {  
  is_skip_ref = true;

  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

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

  // Initialize the DIffTest function of the REF, the specific behavior varies from REF to REF.
  ref_difftest_init(port);
  // Copy the guest memory of the DUT into the REF.
  ref_difftest_memcpy(RESET_VECTOR, ram, img_size, DIFFTEST_TO_REF);
  // Copy the register state of the DUT into the REF.
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}



static void difftest_abort_print(CPU_state* ref) {
  printf("pc: [DUT] 0x%08x, [REF] 0x%08x\n", cpu.pc, ref->pc);
  
  for (int i = 0; i < 32; i++) {
    printf("reg %2d [%3s]: [DUT] 0x%08x, [REF] 0x%08x", i, regs_name[i], cpu.gpr[i], ref->gpr[i]);
    if (cpu.gpr[i] != ref->gpr[i]) {
      printf("  <-- DIFF!");
    }
    printf("\n");
  } 
  printf("--------------------- CSR State ---------------------\n");
  printf("mtvec:   0x%08x\n", cpu.mtvec);
  printf("mepc:    0x%08x\n", cpu.mepc);
  printf("mcause:  0x%08x\n", cpu.mcause);
  printf("mstatus: 0x%08x\n", cpu.mstatus);
  printf("mcycle: %" PRIu64 "\n", cpu.mcycle);
  printf("-----------------------------------------------------\n");
}

static void checkregs(CPU_state *ref) {
  // difftest_abort_print(ref);    // show each DiffTest circle detail
  if (!difftest_checkregs(ref)) {
    printf("Difftest Abort.\n");
    difftest_abort_print(ref);
    Status = NPC_CRASH;
  #if TRACE_ENABLE
    i_ring_buf_logout(&ring);
  #endif
    // assert(0);
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

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == top->_pc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r);   //
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = 0x%x at pc = 0x%x", ref_r.pc, pc);
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
  checkregs(&ref_r);     //
}


