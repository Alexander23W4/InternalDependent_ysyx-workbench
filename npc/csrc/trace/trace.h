#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <cstring>


#define MAX_LOGBUF 128
#define MAX_LOGAMT 300
#define I_RING_BUF_LOGFILE "/home/wang/InternalDependent_ysyx-workbench/npc/i_ring_buf_log.txt"

typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

void i_ring_buf_logout(I_ring_buf* i_ring_buf);

void get_itrace_line(uint32_t pc, I_ring_buf* ring_buf);
