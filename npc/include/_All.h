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
#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/config.h"

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/trace/trace.h"
#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/log.h"

/*
头文件包含tip: 一个大头文件, 包含所有小头文件, 然后所有小头文件只做声明
    所有的.c文件, 全部只包含大头文件
*/

#define RAM_SIZE 50000000
#define MEMORY_LOAD_EFFECTIVENESS 20000
#define RAM_BASE 0x80000000

#define MMIO_SERIAL 0xa00003f8

extern char* diff_so_file;  // ref 的 so文件
extern int endprog;
extern const char *regs_name[];
extern int ram_op;
extern I_ring_buf ring;
extern uint32_t pc;
extern bool batch_mode;
extern size_t img_size;
extern uint32_t* ram;


typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
    uint32_t mepc;
    uint32_t mstatus;
    uint32_t mcause;
    uint32_t mtvec;
    uint64_t mcycle;
} CPU_state;

extern CPU_state cpu;

void _init(int argc, char** argv, Vtop* top);
void parse_args(int argc, char *argv[]);
void init_ram();
void reset(Vtop* top);
void load_memory(char* filename, uint32_t* M, size_t *img_size);
void end_process(Vtop* top);

void main_loop(Vtop* top);
void init_sdb();

void exec_once(Vtop* top);

void tick(Vtop* top);
uint32_t ram_read(uint32_t addr, int amount);
void ram_write(uint32_t addr, uint32_t data, int amount);
void prt_gprs(Vtop* top);
uint32_t get_gpr(Vtop* top, int reg_id);
void cpu_state_print();
void final_check(Vtop* top);


void init_difftest(char *diff_so_file, uint32_t* ram, long img_size, int port);
void difftest_step();
bool difftest_checkregs(CPU_state* ref_r);
void difftest_state_print(CPU_state* ref);
