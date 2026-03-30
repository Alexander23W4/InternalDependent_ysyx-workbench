#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__
#define NR_WP 32
#include <stdint.h>
#include <common.h>
#include <debug.h>

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expression[64];
  uint32_t result;

} WP;

WP* new_wp();
void free_wp(WP *wp);
WP* get_head();

#endif

