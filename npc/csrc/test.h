#include <verilated.h>
#include "svdpi.h"
#include "Vtop.h"
#include "Vtop__Dpi.h"

#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include "dbg.h"
#include <getopt.h>
#include <string.h>
#include <inttypes.h>


#define RAM_SIZE 3000000  
#define MEMORY_LOAD_EFFECTIVENESS 20000
#define DIFF_TEST 1
#define RAM_BASE 0x80000000
extern char* diff_so_file;
extern int endprog;
extern const char *regs_name[];

typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
    uint32_t mepc;
    uint32_t mstatus;
    uint32_t mcause;
    uint32_t mtvec;
    uint64_t mcycle;
} CPU_state;

extern uint32_t instr;
extern CPU_state cpu;
extern uint32_t* ram;

void parse_args(int argc, char *argv[]);
void load_memory(char* filename, uint32_t* M, size_t *img_size);
uint32_t ram_read(uint32_t addr, int amount);
void ram_write(uint32_t addr, uint32_t data, int amount);
void prt_gprs(Vtop* top);
uint32_t get_gpr(Vtop* top, int reg_id);
void cpu_state_print();


void init_difftest(char *diff_so_file, uint32_t* ram, long img_size, int port);
void difftest_step();
bool difftest_checkregs(CPU_state* ref_r);
void difftest_state_print(CPU_state* ref);
