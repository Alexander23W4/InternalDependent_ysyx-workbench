/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

/*
The code only simulates the 400x300x32 graphics mode, where each pixel occupies 32 bits of storage space, 
 with R(red), G(green), B(blue), A(alpha) each occupying 8 bits, and VGA does not use the alpha information.

-> Index to a palette:
A palette is an array of color information, with each element occupying 4 bytes, representing the values of R(red), G(green), B(blue), A(alpha). 
  After introducing the concept of a palette, a pixel no longer stores color information, but an index into the palette: 
  Specifically, to obtain the color information of a pixel, its value is used as an index, 
  and an index operation is performed in the palette array to retrieve the corresponding color information. 
  Therefore, by using different palettes, it is possible to use different sets of 256 colors at different times.
*/

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

// 800*600 / 400*300(&)
#define SCREEN_W 400
#define SCREEN_H 300

static uint32_t screen_width() {
  return SCREEN_W;
}

static uint32_t screen_height() {
  return SCREEN_H;
}

// 400*300* (4 bytes)
static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;

#ifdef CONFIG_VGA_SHOW_SCREEN
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NEMU", str(__GUEST_ISA__));    // title
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
  SDL_RenderPresent(renderer);
}

// &
static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}
#endif

void vga_update_screen(uint32_t offset, int len, bool is_write) {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register
  if((vgactl_port_base[1] != 0) && (offset == 4) && is_write){   // SYNC 寄存器 (Second Word)
    update_screen();
    vgactl_port_base[1] = 0;
  }
}

void init_vga() {
// vga ctl:
  vgactl_port_base = (uint32_t *)new_space(8);   // 2 * uint32_t  (8 Byte, 2 Word)
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();   // vga info (canvas area) (First Word)

  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, vga_update_screen);     // 0xa0000100  vga control  // name, addr, space, len, callback


// init vga mem (Screen):
  vmem = new_space(screen_size());   // space
  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);    // 0xa1000000   vga memory (for screen)  Callback函数是NULL, 就是直接读写(读写画布)
  init_screen();     
  memset(vmem, 0, screen_size());    // init vmem with 0 
}




