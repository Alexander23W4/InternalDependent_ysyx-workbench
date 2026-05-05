#include "test.h"


char* diff_so_file = NULL; 

void parse_args(int argc, char *argv[]) {
    static struct option last_options[] = {
        {"diff",     required_argument, NULL, 'd'},
        {0,          0,                 NULL,  0 }
    };

    int o;
    while ((o = getopt_long(argc, argv, "-dh", last_options, NULL)) != -1) {
        switch (o) {
            case 'd':
                diff_so_file = optarg;
                printf("[NPC] Using Difftest REF: %s\n", diff_so_file);
                break;
        }
    }
}

uint32_t get_gpr(Vtop* top, int reg_id) {
    return top->dbg_reg[reg_id]; 
}


void load_memory(char* filename, uint32_t* M){   
    FILE *fp = fopen(filename, "rb");  
    assert(fp);
    size_t loaded_instr = fread(M, sizeof(uint32_t), MEMORY_LOAD_EFFECTIVENESS, fp);
    fclose(fp);

    printf("--LOAD %zu AMOUNTS OF INSTR TO M[]\n", loaded_instr);
}


// allow misalign access
uint32_t ram_read(uint32_t addr, int amount) {
    if((instr & 0x7f) == 3){
        uint32_t paddr = pram(addr);
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
    uint32_t paddr = pram(addr);
    assert(amount <= 4 && amount >= 1);
    uint8_t* ram_byte = (uint8_t*)ram; 
    check((paddr % amount) == 0, "misaligned access, paddr: 0x%08X, amount: %d", paddr, amount);
    if (paddr >= RAM_SIZE * 4){
        printf("invalid ram_write addr, addr: 0x%08X, paddr: 0x%08X\n", addr, paddr);
    }
    for (int i = 0; i < amount; i++) {
        ram_byte[paddr + i] = (uint8_t)(data >> (8 * i));
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
    printf("\n------------------------------------------------\n");
}