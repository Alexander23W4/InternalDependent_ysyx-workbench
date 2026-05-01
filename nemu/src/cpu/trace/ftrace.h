#include <cpu/cpu.h>
#include <cpu/decode.h>
#define MAX_FUNCS 256
#define PARSED_ELF_FILE "/home/wang/InternalDependent_ysyx-workbench/nemu/elf.txt"

typedef struct {
    uint32_t value;
    int size;
    char name[64];
} Sym_info;

extern Sym_info symbol_table[MAX_FUNCS];
extern int symbol_cnt;

void init_elf_symbols_info();
int sieve_jump_func(uint32_t instr);
char* ftrace_get_func(uint32_t taddr);
uint32_t get_taddr(uint32_t instr, uint32_t current_pc, CPU_state cpu);

// void print_symbol_table();