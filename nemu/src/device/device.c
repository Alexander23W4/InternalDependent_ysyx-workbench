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

#include <common.h>
#include <utils.h>
#include <device/alarm.h>
#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>    // SDL
#endif

/*
NEMU 的 内存映射定义 和 外设行为实现   (NEMU侧实现的就是 ⭐板级挂载外设, AM侧实现 API库函数(IOE))
主要就是:  CPU定死MMIO接口内存映射(硬件逻辑连接)   NEMU的软件虚拟外设实现

init_map(): 分配IO所需地址
init所有IO接口与设备: add_mmio_map, 硬件连接所有IO接口, 完成内存映射   每个接口传一个handler,代表虚拟外设实现

交互时: mmio_read/write() -> map_read/write()

Besides: 还有一个device_update()函数, 在exec_once()里面调用, 实时更新device的信息, 但是这不是硬件行为

*/


void init_map();
void init_serial();
void init_timer();
void init_vga();
void init_i8042();
void init_audio();
void init_disk();
void init_sdcard();
void init_alarm();

void send_key(uint8_t, bool);
void vga_update_screen();

// *** device update (be called by execute() in every circle)
// ⭐ 注意: 这个函数模拟的是 OS 的设备驱动轮询/事件循环, 不是硬件行为, 按理来说应该写在AM里面
void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {      // avoid checking too frequently
    return;
  }
  last = now;

  IFDEF(CONFIG_HAS_VGA, vga_update_screen());    

#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        nemu_state.state = NEMU_QUIT;
        break;
#ifdef CONFIG_HAS_KEYBOARD    // 轮询读取键盘输入->send_key()->enqueue()
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
#endif
      default: break;
    }
  }
#endif
}

void sdl_clear_event_queue() {
#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event));
#endif
}

void init_device() {
  IFDEF(CONFIG_TARGET_AM, ioe_init());
  init_map();    // 在heap上分配一块地址空间, 用于存储IO数据

  IFDEF(CONFIG_HAS_SERIAL, init_serial());
  IFDEF(CONFIG_HAS_TIMER, init_timer());
  IFDEF(CONFIG_HAS_VGA, init_vga());
  IFDEF(CONFIG_HAS_KEYBOARD, init_i8042());
  IFDEF(CONFIG_HAS_AUDIO, init_audio());
  IFDEF(CONFIG_HAS_DISK, init_disk());
  IFDEF(CONFIG_HAS_SDCARD, init_sdcard());

  IFNDEF(CONFIG_TARGET_AM, init_alarm());
}
