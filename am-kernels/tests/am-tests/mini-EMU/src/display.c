#include "config.h"
#include "../include/amtest.h"

void display(void);

static uint32_t buffer[WIDTH * HEIGHT] = {0};
static uint32_t* color_buf = NULL;  

uint32_t* create_buf(){
  uint32_t* color_buf = (uint32_t*)malloc(sizeof(uint32_t) * WIDTH * HEIGHT);
  assert(color_buf != NULL);
  return color_buf;
}


