#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <cstring>
#include "/home/wang/InternalDependent_ysyx-workbench/npc/tools/capstone/repo/include/capstone/capstone.h"

#include <verilated.h>
#include "svdpi.h"
#include "Vtop.h"

#define MAX_LOGBUF 512
#define MAX_LOGAMT 300
#define I_RING_BUF_LOGFILE "/home/wang/InternalDependent_ysyx-workbench/npc/i_ring_buf_log.txt"

typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

extern I_ring_buf ring;

void i_ring_buf_logout(I_ring_buf* i_ring_buf);

void get_itrace_line(uint32_t pc, I_ring_buf* i_ring_buf);

void close_trace_file();

void trace(Vtop* top);


extern int disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

extern void init_disasm();



