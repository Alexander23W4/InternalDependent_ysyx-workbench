#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/test.h"

char* diff_so_file = NULL; 

void tick(Vtop* top) {
    top->clk = 0;
    top->eval();   //
    top->clk = 1;
    top->eval();
}

void final_check(Vtop* top){
    #if TRACE_ENABLE
        i_ring_buf_logout(&ring);
    #endif
    
    if(top->dbg_reg[10] != 0){   
        printf("%s", ANSI_FMT("[HIT BAD TRAP]\n", ANSI_FG_RED));
        printf("ERROR, PROGRAM ENDED, X0 is not equal to 0\n");

        prt_gprs(top);
    }
    else{
        printf("%s", ANSI_FMT("[HIT GOOD TRAP]\n", ANSI_FG_GREEN));
    }
}



void cpu_state_print(){
  printf("pc: 0x%08x\n", cpu.pc);
  for (int i = 0; i < 32; i++)
  {
    printf("reg: %d: %d\n", i, cpu.gpr[i]);
  } 
}


uint32_t get_gpr(Vtop* top, int reg_id) {
    return top->dbg_reg[reg_id]; 
}



// allow misalign access
uint32_t ram_read(uint32_t addr, int amount) {
    if((instr & 0x7f) == 3){
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

void prt_gprs(Vtop* top) {
    printf("PC: [0x%08x] | ", top->_pc); 
    
    int count = 0;
    for (int i = 0; i < 32; i++) {
        uint32_t val = get_gpr(top, i);
        if (val != 0) {
            printf("x%-2d: 0x%08x  ", i, val);
            count++;
            if (count % 4 == 0) printf("\n                | "); 
        }
    }
    printf("\n");
    printf("mtvec:   0x%08x\n", top->_mtvec);
    printf("mepc:    0x%08x\n", top->_mepc);
    printf("mcause:  0x%08x\n", top->_mcause);
    printf("mstatus: 0x%08x\n", top->_mstatus);
    printf("mcycle: %" PRIu64 "\n", (((uint64_t)(top->_mcycleh)) << 32) + (uint64_t)(top->_mcycle));
}