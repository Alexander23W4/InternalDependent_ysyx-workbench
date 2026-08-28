#include <am.h>
#include <klib-macros.h>

/*
  这些就相当于AM的硬件接口API 库函数, 对标linux的 #include <linux/gpio.h>, <linux/gpio/consumer.h> 这些标准库函数

  CPU -> 硬件接口API(IOE) -> 具体用这个接口的某个设备的驱动 -> 用户应用程序
*/
void __am_timer_init();
void __am_gpu_init();
void __am_audio_init();
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_gpu_config(AM_GPU_CONFIG_T *);
void __am_gpu_status(AM_GPU_STATUS_T *);
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *);
void __am_audio_config(AM_AUDIO_CONFIG_T *);
void __am_audio_ctrl(AM_AUDIO_CTRL_T *);
void __am_audio_status(AM_AUDIO_STATUS_T *);
void __am_audio_play(AM_AUDIO_PLAY_T *);
void __am_disk_config(AM_DISK_CONFIG_T *cfg);
void __am_disk_status(AM_DISK_STATUS_T *stat);
void __am_disk_blkio(AM_DISK_BLKIO_T *io);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void __am_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = false; }
static void __am_net_config (AM_NET_CONFIG_T *cfg)    { cfg->present = false; }

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,

  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,

  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,

  [AM_UART_CONFIG ] = __am_uart_config,

  [AM_AUDIO_CONFIG] = __am_audio_config,
  [AM_AUDIO_CTRL  ] = __am_audio_ctrl,
  [AM_AUDIO_STATUS] = __am_audio_status,
  [AM_AUDIO_PLAY  ] = __am_audio_play,

  [AM_DISK_CONFIG ] = __am_disk_config,
  [AM_DISK_STATUS ] = __am_disk_status,
  [AM_DISK_BLKIO  ] = __am_disk_blkio,
  
  [AM_NET_CONFIG  ] = __am_net_config,
};

static void fail(void *buf) { panic("access nonexist register"); }


// ⭐: 这三个是对上层 驱动 的统一API, 他把所有的AM IOE库函数 都统一到了这个 ioe_read() 和 ioe_write() 这两个API
// all AM-device related API (IOE) is listed in lut as "AM_..._..." in amdev.h
// init
bool ioe_init() {   
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_gpu_init();
  __am_timer_init();
  __am_audio_init();
  return true;
}

// These two are the highest level API in AM (AM->IOE)
// universal IO API, lut[reg] (enum macros are defined in amdev.h)
// the callback func is defined in specific device interface

// io_read(AM_INPUT_KEYBRD, &kbd) 实际上就是调用 __am_input_keybrd(&kbd)
void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }   
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
