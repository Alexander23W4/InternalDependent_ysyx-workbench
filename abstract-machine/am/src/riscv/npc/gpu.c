#include <am.h>
#include "npc.h"

#define SYNC_ADDR (NPC_VGACTL_ADDR + 4)   // sync_addr

void __am_gpu_init() {

}

//  bool present, has_accel; int width, height, vmemsz
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 0, .height = 0,
    .vmemsz = 0
  };
  uint32_t vga_info = *(volatile uint32_t *)NPC_VGACTL_ADDR;
  cfg->height = vga_info & 0xFFFF;
  cfg->width = (vga_info >> 16) & 0xFFFF;
  cfg->vmemsz = cfg->height * cfg->width * sizeof(uint32_t);
}

// int x, y; void *pixels; int w, h; bool sync
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    *(volatile uint32_t *)SYNC_ADDR = 1;
  }
  // git width:
  uint32_t vga_info = *(volatile uint32_t *)NPC_VGACTL_ADDR;
  int screen_w = (vga_info >> 16) & 0xFFFF;

  uint32_t *pixels = (uint32_t *)ctl->pixels;
  int vmem_index = 0;
  int p_idx = 0;

  for (size_t i = ctl->y; i < ctl->y + ctl->h; i++)
  {
    for (size_t j = ctl->x; j < ctl->x + ctl->w; j++)
    {
      vmem_index = (i * screen_w + j) * 4;
      *(volatile uint32_t *)(NPC_FB_ADDR + vmem_index) = pixels[p_idx++];
    }
    
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
