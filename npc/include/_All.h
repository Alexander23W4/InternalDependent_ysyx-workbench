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
// 注: 原来这里还 include 了 npc/include/time.h 和 npc/include/device.h,
//     但这两个文件并不存在(git 里也从来没有), 而且 csrc 里已经不再使用
//     NPC 自己的设备和定时器(NPC 外设已改由 ysyxSoC 提供), 所以直接去掉。


/*
头文件包含tip: 一个大头文件, 包含所有小头文件, 然后所有小头文件只做声明
    所有的.c文件, 全部只包含大头文件
*/

#define RAM_SIZE 50000000    // unit: Word (4Byte)
#define MEMORY_LOAD_EFFECTIVENESS 20000
#define RAM_BASE 0x80000000
#define NR_WP 32
#define TIMER_HZ 60

/*
ysyxSoC: MROM 0x2000_0000 ~ 0x2000_0fff (4KB, 只读, 不可写)
MROM 在 RTL 里是个 "假 ROM": MROMHelper.v 通过 DPI-C 调 mrom_read() 取内容,
所以 MROM 里装什么是完全由本仿真环境决定的 —— .bin 的第 0 个字节对应 0x2000_0000。
*/
#define MROM_BASE 0x20000000
#define MROM_SIZE (4 * 1024)

/*
ysyxSoC: Flash 0x3000_0000 ~ 0x3fff_ffff
Flash 也是"假"的: spi_top_apb.v 里定义了 `define FAST_FLASH 之后, 对 flash 地址段的
APB 读请求会被直接翻译成 flash_cmd -> DPI-C flash_read(), 完全绕开 SPI master.
注意 flash_read() 拿到的 addr 是【相对 flash 基址的字节偏移】, 不是绝对地址:
    spi_top_apb.v: .addr({8'b0, in_paddr[23:2], 2'b0})
因为 0x3000_0000 的低 24 位是 0, 所以 in_paddr[23:2] 恰好就是偏移 >> 2.
数组下标 = 字节偏移, 所以 flash[i] 对应地址 0x3000_0000 + i.
*/
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

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expression[64];
  uint32_t result;

} WP;

#define MMIO_SERIAL 0xa00003f8

extern NPC_status Status;
extern int endprog;
extern Vtop* top;
extern char* diff_so_file;  // ref 的 so文件
extern const char *regs_name[];
extern I_ring_buf ring;
extern uint32_t pc;
extern bool batch_mode;
extern size_t img_size;
extern int diff_flag;


extern CPU_state cpu;

// internal drawout signals
extern int instr;

extern int ifu_error;
extern int lsu_error;
extern int master_validation_error;

extern int period_end;

// Performance Counters:

extern uint64_t instr_amt;

extern uint64_t ifu_instr_count;
extern uint64_t lsu_read_count;
extern uint64_t lsu_write_count;

extern uint64_t alu_count;
extern uint64_t branch_count;
extern uint64_t load_count;
extern uint64_t store_count;
extern uint64_t jump_count;
extern uint64_t csr_count;
extern uint64_t system_count;

extern uint64_t alu_cycles;
extern uint64_t branch_cycles;
extern uint64_t load_cycles;
extern uint64_t store_cycles;
extern uint64_t jump_cycles;
extern uint64_t csr_cycles;
extern uint64_t system_cycles;

extern int event_alu;
extern int event_branch;
extern int event_load;
extern int event_store;
extern int event_jump;
extern int event_csr;
extern int event_system;

extern uint64_t mcycle_reserve;
extern uint64_t instr_cycles;

void clear_event_flag();
void cal_instr_cycles();

void _init(int argc, char** argv);
void parse_args(int argc, char *argv[]);
void reset();
void load_memory(char* filename, uint32_t* M, size_t *img_size);
void end_process();

void main_loop();
void init_sdb();

void exec_once();

void init_regex();
uint32_t expr(char *e, bool *success);

WP* new_wp();
void free_wp(WP *wp);
WP* get_head();
void check_wp(uint32_t pre_pc);

char* hex_to_bin(const char *hex);

void tick();
void error_handler();
void prt_gprs();
void final_check();
void final_print();
uint32_t isa_reg_str2val(const char *s, bool *success);



void init_difftest(char *diff_so_file, uint32_t* ram, long img_size, int port);
void difftest_step();
bool difftest_checkregs(CPU_state* ref_r);
void difftest_state_print(CPU_state* ref);
void difftest_skip_ref();
void difftest_skip_dut(int nr_ref, int nr_dut);


/*
MROM / Flash 的内容数组 + 装载函数, 定义在 csrc/mrom.c 和 csrc/flash.c。
mrom_read()/flash_read() 是 Verilator 生成代码要调用的 DPI-C 函数, 只能在一个
.c 文件里各定义一次; 放在头文件里会被 9 个 .c/.cpp 各定义一份 -> multiple definition。
*/
extern uint8_t mrom[MROM_SIZE];
void load_mrom(const char *path);

extern uint8_t flash[FLASH_SIZE];
void load_flash(const char *path);
























