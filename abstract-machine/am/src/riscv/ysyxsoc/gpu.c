#include <am.h>
#include "ysyxsoc.h"
/*
NVBoard提供的VGA屏幕分辨率是640x480

VGA	   0x2100_0000~0x211f_ffff
这段地址空间其实是帧缓冲, 程序往其中写入像素信息, 即可在输出到NVBoard的VGA区域.

ysyxSoC/perip/vga/vga_top_apb.v   VGA控制器

关于帧缓冲, 目前你可以暂时使用SRAM等简单存储器的方式来实现. 但需要注意, 在真实情况中, 这种实现方案的成本较高: 以上文提到的640x480分辨率为例, 如果每个像素占4字节, 将需要1.17MB的SRAM, 这将占用不少的流片面积
接入NVBoard, 绑定相关引脚
在AM IOE中添加代码, 将像素信息写入VGA控制器的帧缓冲中
由于NVBoard提供的VGA机制是自动刷新的, 因此无需实现AM中的画面同步功能

⭐: 
注意, 
*/

#define SYNC_ADDR (NPC_VGACTL_ADDR + 4)   // sync_addr

void __am_gpu_init() {

}

//  ysyxsoc的硬件没有存储 VGA info的寄存器, 所以这里这个API直接返回 NVboarad 的分辨率 640*480
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
    *(volatile uint32_t *)SYNC_ADDR = 1;   // 调用 vga_update_screen
  }
  // git width:
  uint32_t vga_info = *(volatile uint32_t *)NPC_VGACTL_ADDR;  //
  int screen_w = (vga_info >> 16) & 0xFFFF;

  uint32_t *pixels = (uint32_t *)ctl->pixels;
  int vmem_index = 0;
  int p_idx = 0;

  for (size_t i = ctl->y; i < ctl->y + ctl->h; i++)
  {
    for (size_t j = ctl->x; j < ctl->x + ctl->w; j++)
    {
      vmem_index = (i * screen_w + j) * 4;
      *(volatile uint32_t *)(NPC_FB_ADDR + vmem_index) = pixels[p_idx++];  //
    }
    
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
