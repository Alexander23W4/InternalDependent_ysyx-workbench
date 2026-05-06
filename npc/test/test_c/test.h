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

extern char* diff_so_file;
extern int endprog

typedef struct{
    uint32_t pc;
    uint32_t gpr[32];
} CPU_state;


void parse_args(int argc, char *argv[]);
void load_memory(char* filename, uint32_t* M);
uint32_t ram_read(uint32_t addr, int amount);
void ram_write(uint32_t addr, uint32_t data, int amount);
void prt_gprs(Vtop* top);
uint32_t get_gpr(Vtop* top, int reg_id);


