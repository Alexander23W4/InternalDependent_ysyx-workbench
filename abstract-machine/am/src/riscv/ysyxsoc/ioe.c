#include <am.h>
#include <klib-macros.h>
#include "ysyxsoc.h"      // ⭐ CLINT 的地址(YSYXSOC_CLINT_ADDR / _MTIMEH_ADDR)

/*
-> support AM API (runtime env level):
IOE (IO extension API) provides three APIs:

bool ioe_init();
void ioe_read(int reg, void *buf);
void ioe_write(int reg, void *buf);

*/

// ==========================================================================================
// ⭐ 时间(CLINT 的 mtime)
//
//   系数怎么给: mtime 每个 CPU 周期 +1, 要换成微秒就得除以"每微秒多少个周期"。
//   真实芯片上这个数就等于主频; 仿真环境里没有主频, 按讲义取"仿真速率"
//   —— 仿真器每秒执行多少个 CPU 周期, 这样 guest 量出来的时间才接近真实时间。
//
//   怎么测:  time ./npc/obj_dir/Vtop <prog>.bin -b
//            记墙钟秒数 T; 串口输出里的 [CYCLES] 是 C; 则 SIM_FREQ_HZ = C / T
//   本机实测(hello, 687655 周期): 556k ~ 618k 周期/秒, 取个整数 6e5。
//
//   ⚠ 这个系数只影响 guest 看到的 usec(比如 microbench 的 score),
//     不影响 [CYCLES] / [INSTRS] / IPC / 任何性能计数器, 所以填什么都不会破坏 make perf 的记录。
// ==========================================================================================
#define SIM_FREQ_HZ 600000ULL

void __am_gpu_init();
void __am_timer_init();

static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }
static void __am_uart_config(AM_UART_CONFIG_T *cfg) { cfg->present = true;  }   
static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = false; }

void __am_uart_rx(AM_UART_RX_T *);
void __am_uart_tx(AM_UART_TX_T *);

// void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);

void __am_input_keybrd(AM_INPUT_KEYBRD_T *);

void __am_gpu_config(AM_GPU_CONFIG_T *);
void __am_gpu_status(AM_GPU_STATUS_T *);
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *);


typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  // [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,

  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,

  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,

  [AM_UART_CONFIG]  = __am_uart_config,
  [AM_UART_RX    ]  = __am_uart_rx,
  [AM_UART_TX    ]  = __am_uart_tx,
};    

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_gpu_init();
  __am_timer_init();
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }

/*
#define io_read(reg) \
  ({ reg##_T __io_param; \
    ioe_read(reg, &__io_param); \
    __io_param; })
*/
