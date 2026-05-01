// ring buffer for limited trace record storage:
#include <stdbool.h>
#include <stdio.h>
#include <cpu/cpu.h>

#define MAX_LOGBUF 128
#define MAX_LOGAMT 30
#define I_RING_BUF_LOGFILE "/home/wang/InternalDependent_ysyx-workbench/nemu/i_ring_buf_log.txt"

typedef struct {
    char ring_buf[MAX_LOGAMT][MAX_LOGBUF]; 
    int amt;
} I_ring_buf;

void i_ring_buf_logout(I_ring_buf* i_ring_buf);
