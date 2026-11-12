#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

const char *regs_name[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};



static void difftest_abort_print() {
  printf("pc: [DUT] 0x%08x, [REF] 0x%08x\n", d_status.pc, top->ref_pc);
  
  for (int i = 0; i < 32; i++) {
    printf("reg %2d [%3s]: [DUT] 0x%08x, [REF] 0x%08x", i, regs_name[i], d_status.gpr[i], top->ref_gpr[i]);
    if (d_status.gpr[i] != top->ref_gpr[i]) {
      printf("  <-- DIFF!");
    }
    printf("\n");
  } 
  // printf("--------------------- CSR State ---------------------\n");
  // printf("mtvec:   0x%08x\n", cpu.mtvec);
  // printf("mepc:    0x%08x\n", cpu.mepc);
  // printf("mcause:  0x%08x\n", cpu.mcause);
  // printf("mstatus: 0x%08x\n", cpu.mstatus);
  // printf("mcycle: %" PRIu64 "\n", cpu.mcycle);
  // printf("-----------------------------------------------------\n");
}





void pipeline_difftest_step(){   // 专用于流水线处理器的difftest step, 只比较wb的instr, 在main_loop里面遇到wen调用一次这个即可
  while(!top->ref_wen){
    ref_tick();
  }
  ref_tick();
  difftest_cmp();
}

void difftest_cmp(){
  if (!difftest_checkregs()) {
    printf("Difftest Abort.\n");
    difftest_abort_print();
    Status = NPC_CRASH;
    // assert(0);
  }
}


bool difftest_check_status(){
  bool is_same = true;
  if((top->ref_pc) != d_status.pc) is_same = false;
  for (int i = 0; i < 32; i++)
  {
    if(is_same == false) break;
    if(top->ref_gpr[i] != d_status.gpr[i]){
      is_same = false;
      break;
    }
  }
  if(is_same == false) endprog = 1;    // break down process
  return is_same;
}