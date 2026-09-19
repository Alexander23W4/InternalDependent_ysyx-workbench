#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

char* diff_so_file = NULL; 

void tick() {
    top->clock = 0;
    top->eval();   //
    top->clock = 1;
    top->eval();
}

void error_handler(){
    // 出错时先把 CPU 状态读出来, 这样后面 final_check()/prt_gprs() 打出的
    // PC 和寄存器才是"出错那一刻"的值, 而不是上一次 exec_once 留下的旧值
    top->debug_read_all((int *)cpu.gpr, (int *)&cpu.pc, (int *)&cpu.mstatus, (int *)&cpu.mepc,
                        (int *)&cpu.mcause, (int *)&cpu.mtvec, (long long *)&cpu.mcycle, &instr);
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
    else if(cpu.gpr[10] != 0 || Status == NPC_CRASH){   
        printf("%s", ANSI_FMT("\n[HIT BAD TRAP]\n", ANSI_FG_RED));

        prt_gprs();
    }
    else{
        printf("%s", ANSI_FMT("\n[HIT GOOD TRAP]\n", ANSI_FG_GREEN));
    }
}

void final_print() {
  printf("%s", ANSI_FMT("[CYCLES] ", ANSI_FG_CYAN));
  printf("%lu\n", cpu.mcycle);

  printf("%s", ANSI_FMT("[INSTRS] ", ANSI_FG_CYAN));
  printf("%lu\n", instr_amt);

  printf("%s", ANSI_FMT("[CPI] ", ANSI_FG_CYAN));
  if (instr_amt)
    printf("%.3f\n", (double)cpu.mcycle / (double)instr_amt);
  else
    printf("N/A\n");

  printf("\n");

  printf("Performance Counter: \n");

  printf("%s", ANSI_FMT("[IFU_FETCH_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", ifu_instr_count);

  printf("%s", ANSI_FMT("[LSU_READ_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", lsu_read_count);

  printf("%s", ANSI_FMT("[LSU_WRITE_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", lsu_write_count);

  printf("%s", ANSI_FMT("[ALU_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", alu_count);

  printf("%s", ANSI_FMT("[BRANCH_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", branch_count);

  printf("%s", ANSI_FMT("[LOAD_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", load_count);

  printf("%s", ANSI_FMT("[STORE_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", store_count);

  printf("%s", ANSI_FMT("[JUMP_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", jump_count);

  printf("%s", ANSI_FMT("[CSR_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", csr_count);

  printf("%s", ANSI_FMT("[SYSTEM_CNT] ", ANSI_FG_CYAN));
  printf("%lu\n", system_count);

  printf("\n");

  printf("%s", ANSI_FMT("[ALU_CPI] ", ANSI_FG_CYAN));
  if (alu_count)
    printf("%.3f\n", (double)alu_cycles / (double)alu_count);
  else
    printf("N/A\n");

  printf("%s", ANSI_FMT("[BRANCH_CPI] ", ANSI_FG_CYAN));
  if (branch_count)
    printf("%.3f\n", (double)branch_cycles / (double)branch_count);
  else
    printf("N/A\n");

  printf("%s", ANSI_FMT("[LOAD_CPI] ", ANSI_FG_CYAN));
  if (load_count)
    printf("%.3f\n", (double)load_cycles / (double)load_count);
  else
    printf("N/A\n");

  printf("%s", ANSI_FMT("[STORE_CPI] ", ANSI_FG_CYAN));
  if (store_count)
    printf("%.3f\n", (double)store_cycles / (double)store_count);
  else
    printf("N/A\n");

  printf("%s", ANSI_FMT("[JUMP_CPI] ", ANSI_FG_CYAN));
  if (jump_count)
    printf("%.3f\n", (double)jump_cycles / (double)jump_count);
  else
    printf("N/A\n");

  printf("%s", ANSI_FMT("[CSR_CPI] ", ANSI_FG_CYAN));
  if (csr_count)
    printf("%.3f\n", (double)csr_cycles / (double)csr_count);
  else
    printf("N/A\n");

  printf("%s", ANSI_FMT("[SYSTEM_CPI] ", ANSI_FG_CYAN));
  if (system_count)
    printf("%.3f\n", (double)system_cycles / (double)system_count);
  else
    printf("N/A\n");
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
    return cpu.pc;
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


uint64_t ifu_instr_count = 0;
uint64_t lsu_read_count = 0;
uint64_t lsu_write_count = 0;

extern "C" void perf_event(
    unsigned char ifu_instr_valid,
    unsigned char lsu_read_complete,
    unsigned char lsu_write_complete
) {
    if (ifu_instr_valid)
        ifu_instr_count++;

    if (lsu_read_complete)
        lsu_read_count++;

    if (lsu_write_complete)
        lsu_write_count++;
}


uint64_t alu_count = 0;
uint64_t branch_count = 0;
uint64_t load_count = 0;
uint64_t store_count = 0;
uint64_t jump_count = 0;
uint64_t csr_count = 0;
uint64_t system_count = 0;

int event_alu = 0;
int event_branch = 0;
int event_load = 0;
int event_store = 0;
int event_jump = 0;
int event_csr = 0;
int event_system = 0;


extern "C" void instr_type_event(
    unsigned char e_alu,
    unsigned char e_branch,
    unsigned char e_load,
    unsigned char e_store,
    unsigned char e_jump,
    unsigned char e_csr,
    unsigned char e_system
) {
    if (e_alu) {
        alu_count++;
        event_alu = 1;
    }
    if (e_branch) {
        branch_count++;
        event_branch = 1;
    }
    if (e_load) {
        load_count++;
        event_load = 1;
    }
    if (e_store) {
        store_count++;
        event_store = 1;
    }
    if (e_jump) {
        jump_count++;
        event_jump = 1;
    }
    if (e_csr) {
        csr_count++;
        event_csr = 1;
    }
    if (e_system) {
        system_count++;
        event_system = 1;
    }
}

void clear_event_flag() {
    event_alu = 0;
    event_branch = 0;
    event_load = 0;
    event_store = 0;
    event_jump = 0;
    event_csr = 0;
    event_system = 0;
}

void cal_instr_cycles() {
    if (event_alu)
        alu_cycles += instr_cycles;
    if (event_branch)
        branch_cycles += instr_cycles;
    if (event_load)
        load_cycles += instr_cycles;
    if (event_store)
        store_cycles += instr_cycles;
    if (event_jump)
        jump_cycles += instr_cycles;
    if (event_csr)
        csr_cycles += instr_cycles;
    if (event_system)
        system_cycles += instr_cycles;
}
