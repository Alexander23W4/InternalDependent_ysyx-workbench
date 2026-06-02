#include "test.h"


char* diff_so_file = NULL; 

void parse_args(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++)
    {
        printf("Argument[%d]: %s\n", i, argv[i]);
    }

    static struct option last_options[] = {
        {"diff",     required_argument, NULL, 'd'},
        {0,          0,                 NULL,  0 }
    };

    int o;
    while ((o = getopt_long(argc, argv, "-d:h", last_options, NULL)) != -1) {
        switch (o) {
            case 'd':
                diff_so_file = optarg;
                printf("[NPC] Using Difftest REF: %s\n", diff_so_file);
                break;
        }
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


void load_memory(char* filename, uint32_t* M, size_t *img_size) {
    FILE *fp = fopen(filename, "rb");
    assert(fp);

    fseek(fp, 0, SEEK_END);   
    size_t size = ftell(fp);   
    printf("image size: %zu\n", size); 
    fseek(fp, 0, SEEK_SET);      

    if (img_size != NULL) {
        *img_size = size;
    }

    size_t loaded_instr = fread(M, sizeof(uint32_t), RAM_SIZE, fp);
    fclose(fp);

    printf("--LOAD %zu INSTR (%zu BYTES) TO M[]\n", loaded_instr, size);
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
    printf("kkkk1\n");
    else {
        if (paddr >= RAM_SIZE * 4){
            printf("invalid ram_write addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
        }

        for (int i = 0; i < amount; i++) {
            ram_byte[paddr + i] = (uint8_t)(data >> (8 * i));
        }
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