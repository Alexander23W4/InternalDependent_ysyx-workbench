#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

char* diff_so_file = NULL; 

void tick() {
    top->clk = 0;
    top->eval();   //
    top->clk = 1;
    top->eval();
}

void final_check(){
    #if TRACE_ENABLE
        i_ring_buf_logout(&ring);
    #endif
    if(Status == NPC_QUIT){
        printf("%s", ANSI_FMT("[QUIT]\n", ANSI_FG_YELLOW));
    }
    else if(top->dbg_reg[10] != 0 || Status == NPC_CRASH){   
        printf("%s", ANSI_FMT("[HIT BAD TRAP]\n", ANSI_FG_RED));

        prt_gprs();
    }
    else{
        printf("%s", ANSI_FMT("[HIT GOOD TRAP]\n", ANSI_FG_GREEN));
    }
}


// allow misalign access
uint32_t ram_read(uint32_t addr, int amount) {
    if((top->instr & 0x7f) == 3 || sdb_read_ram == 1){
        sdb_read_ram = 0;
        uint32_t paddr = addr - RAM_BASE;
        uint8_t* _ram = (uint8_t*) ram;
        assert(amount <= 4 && amount >= 1);
        uint32_t result = 0;
        
        if (paddr >= RAM_SIZE * 4){
            // printf("invalid ram_read addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
            return 0;
        }
        for (int i = 0; i < amount; i++) {
            result |= ((uint32_t)_ram[paddr + i]) << (8 * i);
        }
        #ifdef TRACE_ENABLE
            mtrace_flag = 1;    // mtrace
            mem_addr = addr;
            content = (int32_t) result;
        #endif

        return result;
    }
    else {
        return 0;
    }
}

// doesn't misalign access
void ram_write(uint32_t addr, uint32_t data, int amount) {
    uint32_t paddr = addr - RAM_BASE;
    assert(amount <= 4 && amount >= 1);
    uint8_t* ram_byte = (uint8_t*)ram; 
    check((paddr % amount) == 0, "misaligned access, paddr: 0x%08X, amount: %d", paddr, amount);
    if (addr == MMIO_SERIAL){
        putc((char)data, stderr);
    }
    else {
        if (paddr >= RAM_SIZE * 4){
            printf("invalid ram_write addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
        }

        for (int i = 0; i < amount; i++) {
            ram_byte[paddr + i] = (uint8_t)(data >> (8 * i));
        }
        #ifdef TRACE_ENABLE
            mtrace_flag = 2;    // mtrace
            mem_addr = addr;
            content = (int32_t) data;
        #endif
    }
    
    return;
error:
    assert(0);
}

void rep_cpu(){
    cpu.pc = top->_pc;
    for (int i = 0; i < 32; i++) {
        cpu.gpr[i] = top->dbg_reg[i];
    }
    cpu.mcause = top->_mcause;
    cpu.mepc = top->_mepc;
    cpu.mstatus = top->_mstatus;
    cpu.mtvec = top->_mtvec;
    cpu.mcycle = (((uint64_t)(top->_mcycleh)) << 32) + (uint64_t)(top->_mcycle);
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