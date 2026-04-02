#include <am.h>
#include <klib-macros.h>
#include "config.h"

void draw(int32_t* VRAM) {

  // get real screen size
  int w = io_read(AM_GPU_CONFIG).width / WIDTH;
  int h = io_read(AM_GPU_CONFIG).height / HEIGHT;

  // draw whole VRAM
  io_write(AM_GPU_FBDRAW, 0, 0, VRAM, w * WIDTH, h * HEIGHT, false);

  // flush / sync
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
}


