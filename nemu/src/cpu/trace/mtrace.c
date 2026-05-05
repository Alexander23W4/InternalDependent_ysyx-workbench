#include "/home/wang/InternalDependent_ysyx-workbench/nemu/src/cpu/trace/mtrace.h"

uint32_t mem_addr;
int32_t content;
int mtrace_flag = 0;   // read: 1   write: 2   none: 0