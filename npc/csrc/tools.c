#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

char* diff_so_file = NULL; 
uint32_t ram_read_last_pc = 0;
uint32_t ram_read_last_data = 0;

void tick() {
    top->clock = 0;
    top->eval();   //
    top->clock = 1;
    top->eval();
}

void error_handler(){
    Status = NPC_CRASH;
    if(ifu_error){
        printf("%s", ANSI_FMT("IFU_error\n", ANSI_FG_RED));
    }
    else if(lsu_error){
        printf("%s", ANSI_FMT("LSU_error\n", ANSI_FG_RED));
    }
    else if(master_validation_error){
        printf("%s", ANSI_FMT("IFU visit unexpected addr\n", ANSI_FG_RED));
    }
}





void final_check(){
    #if TRACE_ENABLE
        i_ring_buf_logout(&ring);
    #endif
    if(Status == NPC_QUIT){
        printf("%s", ANSI_FMT("\n[QUIT]\n", ANSI_FG_YELLOW));
    }
    else if(top->dbg_reg[10] != 0 || Status == NPC_CRASH){   
        printf("%s", ANSI_FMT("\n[HIT BAD TRAP]\n", ANSI_FG_RED));

        prt_gprs();
    }
    else{
        printf("%s", ANSI_FMT("\n[HIT GOOD TRAP]\n", ANSI_FG_GREEN));
    }
}


void prt_gprs() {
    printf("PC: [0x%08x]\n", cpu.pc); 
    
    int count = 0;
    for (int i = 0; i < 32; i++) {
        uint32_t val = cpu.gpr[i];
        printf("x%-2d: 0x%08x  ", i, val);
        count++;
        if (count % 2 == 0) printf("\n"); 
    }
    printf("\n");
    printf("mtvec:   0x%08x\n", cpu.mtvec);
    printf("mepc:    0x%08x\n", cpu.mepc);
    printf("mcause:  0x%08x\n", cpu.mcause);
    printf("mstatus: 0x%08x\n", cpu.mstatus);
    printf("mcycle: %" PRIu64 "\n", cpu.mcycle);
}


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};


uint32_t isa_reg_str2val(const char *s, bool *success) {
  if(s[0] != '$'){
    printf("NOT VALID REGISTER NAME, MUST START WITH $.\n");
    *success = false;
    return 0;
  }
  if(strcmp(s+1, "0") == 0){
    *success = true;
    return cpu.gpr[0];
  }
  if (strcmp(s+1, "pc") == 0) {
    *success = true;
    return top->_pc;
  }
  for (int i = 0; i < sizeof(regs) / sizeof(const char*); i++)
  {
    if(strcmp(s+1, regs[i]) == 0){
      *success = true;
    //   printf("%s, register content: %d\n", s, cpu.gpr[i]);
      return cpu.gpr[i];
    }
  }
  printf("NO REGISTER MATCH.\n");
  *success = false;
  return 0;
}