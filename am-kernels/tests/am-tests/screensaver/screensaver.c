#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
// make ARCH=native run
/*
The desired effect of the screensaver we need to implement is to create a gradient between multiple colors on the screen. 
The gradient algorithm needs to linearly interpolate k colors between the current color and the target color
*/
#define INTERVAL_T 50
#define ACCELERATE 0.5
#define NAMEINIT(key)  [ AM_KEY_##key ] = #key,


const uint32_t target_color_arr[8] = {0x000000, 0xff0000, 0x00ff00, 0x0000ff,0xffff00, 0xff00ff, 0x00ffff, 0xffffff};

#define WIDTH 400
#define HEIGHT 300
#define GRAIENT_STEP 30   
uint32_t* color_buf;

void interval(int n){
  uint64_t start = io_read(AM_TIMER_UPTIME).us;  
  while (io_read(AM_TIMER_UPTIME).us - start < n * 1000);
}

uint32_t* create_buf(){
  uint32_t* color_buf = (uint32_t*)malloc(sizeof(uint32_t) * WIDTH * HEIGHT);
  assert(color_buf != NULL);
  return color_buf;
}

void draw(uint32_t color) {
  for (int i = 0; i < WIDTH * HEIGHT; i++) {
    color_buf[i] = color;
  }

  int w = io_read(AM_GPU_CONFIG).width / WIDTH;
  int h = io_read(AM_GPU_CONFIG).height / HEIGHT;

  io_write(AM_GPU_FBDRAW, 0, 0, color_buf, w * WIDTH, h * HEIGHT, false);

  // refresh
  io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
}

uint32_t cal_color(uint32_t prev, uint32_t target, int step){

  uint8_t r1 = (prev >> 16) & 0xFF;
  uint8_t g1 = (prev >> 8) & 0xFF;
  uint8_t b1 = (prev) & 0xFF;

  uint8_t r2 = (target >> 16) & 0xFF;
  uint8_t g2 = (target >> 8) & 0xFF;
  uint8_t b2 = (target) & 0xFF;

  uint8_t r = r1 + (r2 - r1) * step / GRAIENT_STEP;
  uint8_t g = g1 + (g2 - g1) * step / GRAIENT_STEP;
  uint8_t b = b1 + (b2 - b1) * step / GRAIENT_STEP;

  return (r << 16) | (g << 8) | b;
}

void update(uint32_t prev, uint32_t target, int step){
  uint32_t color = cal_color(prev, target, step);
  draw(color);
}

int main() {

  srand(time(NULL));
  printf("started.\n");
  ioe_init(); // initialization for GUI

  color_buf = create_buf();
  uint32_t prev = 0;
  uint32_t target = 0;

  while(1){

    prev = target;
    target = target_color_arr[rand()%8];

    for (size_t i = 0; i <= GRAIENT_STEP; i++)  
    {
      int interval_time = INTERVAL_T; 

      AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);  
      if (ev.keycode == AM_KEY_ESCAPE) return 0;  
      if (ev.keycode != AM_KEY_NONE && ev.keydown) {
        interval_time = INTERVAL_T * ACCELERATE;  
      }

      update(prev, target, i);
      interval(interval_time);   // interval
    }
  }
  return 0;
}
