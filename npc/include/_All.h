#include <verilated.h>
#include "svdpi.h"
#include "Vtop.h"
#include "Vtop__Dpi.h"

#include <iostream>
#include <assert.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/config.h"

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/log.h"

/*
头文件包含tip: 一个大头文件, 包含所有小头文件, 然后所有小头文件只做声明
    所有的.c文件, 全部只包含大头文件
*/

// #define RAM_SIZE 50000000    // unit: Word (4Byte)
// #define MEMORY_LOAD_EFFECTIVENESS 20000
// #define RAM_BASE 0x80000000
#define TIMER_HZ 60

#define MROM_BASE 0x20000000
#define MROM_SIZE (4 * 1024)


#define FLASH_BASE 0x30000000
#define FLASH_SIZE (16 * 1024 * 1024)

typedef enum {
    NPC_NORM = 0,
    NPC_STOP,
    NPC_CRASH,
    NPC_END,
    NPC_QUIT,
} NPC_status;

typedef struct{
    uint32_t gpr[32];
    uint32_t pc;
    uint32_t mepc;
    uint32_t mstatus;
    uint32_t mcause;
    uint32_t mtvec;
    uint64_t mcycle;
} CPU_state;


#define MMIO_SERIAL 0xa00003f8

extern NPC_status Status;
extern int endprog;
extern Vtop* top;
extern char* diff_so_file;  // ref 的 so文件
extern const char *regs_name[];

extern uint32_t pc;

extern size_t img_size;
extern int diff_flag;


extern CPU_state cpu;

// internal drawout signals
extern int instr;

extern int ifu_error;
extern int lsu_error;
extern int master_validation_error;

extern int new_instr;

// Performance Counters:

extern uint64_t instr_amt;


void _init(int argc, char** argv);
void parse_args(int argc, char *argv[]);
void reset();
void load_memory(char* filename, uint32_t* M, size_t *img_size);
void end_process();

void main_loop();

void exec_once();

void tick();
void error_handler();
void prt_gprs();
void final_check();
void statistical_print();

// ⭐ 波形(VCD): 实现见 csrc/tools.c. make trace 用 -DWAVE_TRACE=1 打开,
//    不带这个宏时它们是空函数, 不产生任何开销.
#ifdef WAVE_TRACE
#include "verilated_vcd_c.h"
extern VerilatedVcdC *wave_tfp;
extern uint64_t       wave_cycle;
#endif
void wave_init();
void wave_close();
void wave_dump();




void init_difftest(char *diff_so_file, uint32_t* ram, long img_size, int port);
void difftest_step();
bool difftest_checkregs(CPU_state* ref_r);
void difftest_state_print(CPU_state* ref);
void difftest_skip_ref();
void difftest_skip_dut(int nr_ref, int nr_dut);



extern uint8_t mrom[MROM_SIZE];
void load_mrom(const char *path);

extern uint8_t flash[FLASH_SIZE];
void load_flash(const char *path);
























