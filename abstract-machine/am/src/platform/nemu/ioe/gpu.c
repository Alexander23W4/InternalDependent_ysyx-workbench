#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)   // sync_addr

/*
在AM中, 显示相关的设备叫GPU, GPU是一个专门用来进行图形渲染的设备. 在NEMU中, 我们并不支持一个完整GPU的功能, 而仅仅保留绘制像素的基本功能.
这是AM基于VGA设计的一个IO接口, 并不是标准的通用硬件接口

1. AM_GPU_CONFIG, AM display controller information, can read the screen size information width and height. 
    Additionally, AM assumes that the screen size will not change during the system's operation.

2. AM_GPU_FBDRAW, AM frame buffer controller, can write drawing information, drawing a w*h rectangular image at the screen coordinates (x, y). 
    The image pixels are stored in pixels in row-major order, with each pixel described as a 32-bit integer in the 00RRGGBB format for color. 
    If sync is true, the contents of the frame buffer will be immediately synchronized to the screen.

⭐ 这些就是相当于硬件API, 裸机嵌入式编程的库函数, 这些共同构成IOE  (void __am_gpu_config(AM_GPU_CONFIG_T *cfg) 和裸机标准库函数的结构一模一样)
  这里的"gpu"不是现在普遍标准的硬件接口, 正常来说, 标准硬件接口如USB, USART的基本API代码是包含在Linux内核里面的, Linux在扫描 设备树之后, 对其做完善

  USB：drivers/usb/ 目录下包含主机控制器驱动（如 xHCI）、设备驱动框架（如 HID、存储、网络等）。
  UART：drivers/tty/serial/ 目录下包含 8250、amba-pl011、omap 等具体控制器的驱动。

  对于裸机嵌入式来说, 下载标准库函数, 就有了IOE, 加上RTOS, 就有了CTE

*/


void __am_gpu_init() {
  // int i;
  // uint32_t vga_info = inl(VGACTL_ADDR);
  // int w = (vga_info >> 16) & 0xFFFF;  
  // int h = vga_info & 0xFFFF;  
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) fb[i] = i;
  // outl(SYNC_ADDR, 1);
}

//  bool present, has_accel; int width, height, vmemsz
void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 0, .height = 0,
    .vmemsz = 0
  };
  uint32_t vga_info = inl(VGACTL_ADDR);
  cfg->height = vga_info & 0xFFFF;
  cfg->width = (vga_info >> 16) & 0xFFFF;
  cfg->vmemsz = cfg->height * cfg->width * sizeof(uint32_t);
}

// int x, y; void *pixels; int w, h; bool sync
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);  // 刷新
  }
  // git width:
  uint32_t vga_info = inl(VGACTL_ADDR);
  int screen_w = (vga_info >> 16) & 0xFFFF;

  uint32_t *pixels = (uint32_t *)ctl->pixels;
  int vmem_index = 0;
  int p_idx = 0;

  for (size_t i = ctl->y; i < ctl->y + ctl->h; i++)
  {
    for (size_t j = ctl->x; j < ctl->x + ctl->w; j++)
    {
      vmem_index = (i * screen_w + j) * 4;
      outl(FB_ADDR + vmem_index, pixels[p_idx++]);
    }
    
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
