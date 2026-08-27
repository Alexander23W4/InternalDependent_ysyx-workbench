#include "/home/wang/InternalDependent_ysyx-workbench/npc/csrc/trace/trace.h"


void i_ring_buf_logout(I_ring_buf* i_ring_buf){
  FILE* f = fopen(I_RING_BUF_LOGFILE, "w");
  assert(f != NULL);
  int start = (i_ring_buf->amt > MAX_LOGAMT) ? (i_ring_buf->amt % MAX_LOGAMT) : 0;
  for (int i = 0; i < MAX_LOGAMT; i++)
  {
    fprintf(f, "%s\n", i_ring_buf->ring_buf[(start + i) % MAX_LOGAMT]);
  }
  fclose(f);
}


I_ring_buf ring = {.amt = 0};






