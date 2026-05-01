#include "ftrace.h"

Sym_info symbol_table[MAX_FUNCS];
int symbol_cnt = 0;

void init_elf_symbols_info() {
    FILE *fp = fopen(PARSED_ELF_FILE, "r");
    if (!fp) {
        perror("Error opening elf.txt");
        return;
    }

    char line[512];
    while (fgets(line, sizeof(line), fp) && symbol_cnt < MAX_FUNCS) {
        if (strstr(line, " FUNC ") && !strstr(line, " UND ")) {     // obtain FUNC line, defined function
            uint32_t addr;
            int size;
            char name[64];

            int matched = sscanf(line, "%*s %x %d %*s %*s %*s %*s %s", &addr, &size, name);  // skip unused column

            if (matched == 3) {
                symbol_table[symbol_cnt].value = addr;
                symbol_table[symbol_cnt].size = size;
                strncpy(symbol_table[symbol_cnt].name, name, 63);
                symbol_table[symbol_cnt].name[63] = '\0'; 
                symbol_cnt++;
            }
        }
    }

    fclose(fp);
    printf("Ftrace: Loaded %d functions from %s\n", symbol_cnt, PARSED_ELF_FILE);
}

char* ftrace_get_func(uint32_t taddr){
    for (int i = 0; i < symbol_cnt; i++)
    {
        if(taddr > symbol_table[i].value && taddr < (symbol_table[i].value + symbol_table[i].size)){
            return symbol_table[i].name;
        }
    }
    return "???";    // no match
}


// call -> 0  ret -> 1  else -> -1
int sieve_jump_func(uint32_t instr) {

    uint32_t opcode = instr & 0x7f;
    if (opcode == 0x6f) {
        return 0; 
    }
    if (opcode == 0x67) {
        if (instr == 0x00008067) {
            return 1; 
        } else {
            return 0; 
        }
    }
    return -1;
}

uint32_t get_taddr(uint32_t instr, uint32_t current_pc, CPU_state cpu) {
    uint32_t opcode = instr & 0x7f;
    assert(opcode == 0x6f || opcode == 0x67);

    if (opcode == 0x6f) {
        uint32_t i20 = (instr >> 31) & 0x1;
        uint32_t i10_1 = (instr >> 21) & 0x3ff;
        uint32_t i11 = (instr >> 20) & 0x1;
        uint32_t i19_12 = (instr >> 12) & 0xff;
        uint32_t offset = (i20 << 20) | (i19_12 << 12) | (i11 << 11) | (i10_1 << 1);
        if (i20) offset |= 0xffe00000; 

        return current_pc + offset;
    } else {
        uint32_t rs1 = (instr >> 15) & 0x1f;
        int32_t imm12 = (int32_t)instr >> 20; 
        return (cpu.gpr[rs1] + imm12) & ~1;
    }
}


// void print_symbol_table() {
//     printf("%-4s  %-10s  %-8s  %-10s  %s\n", "ID", "StartAddr", "Size", "EndAddr", "Name");
//     printf("-------------------------------------------------------------\n");

//     for (int i = 0; i < symbol_cnt; i++) {
//         uint32_t end_addr = symbol_table[i].value + symbol_table[i].size;

//         printf("[%2d]  0x%08x  %-8d  0x%08x  %s\n", 
//                i, 
//                symbol_table[i].value, 
//                symbol_table[i].size, 
//                end_addr, 
//                symbol_table[i].name);
//     }

//     printf("-------------------------------------------------------------\n");
//     printf("Total functions loaded: %d\n\n", symbol_cnt);
// }
