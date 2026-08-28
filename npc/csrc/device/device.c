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


#include <SDL2/SDL.h>    // SDL
#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

/*
NEMU 的 内存映射定义 和 外设行为实现   (NEMU侧实现的就是 ⭐板级挂载外设, AM侧实现 API库函数(IOE))
主要就是:  CPU定死MMIO接口内存映射(硬件逻辑连接)   NEMU的软件虚拟外设实现

init_map(): 分配IO所需地址
init所有IO接口与设备: add_mmio_map, 硬件连接所有IO接口, 完成内存映射   每个接口传一个handler,代表虚拟外设实现

交互时: mmio_read/write() -> map_read/write()     (这里要跳过difftest比较)

Besides: 还有一个device_update()函数, 在exec_once()里面调用, 实时更新device的信息, 但是这不是硬件行为

*/


uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

// *** device update (be called by execute() in every circle)
// ⭐ 注意: 这个函数模拟的是 OS 的设备驱动轮询/事件循环, 不是硬件行为, 按理来说应该写在AM里面
void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {      // avoid checking too frequently
    return;
  }
  last = now;
  
  vga_update_screen();
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        nemu_state.state = NPC_QUIT;
        break;

      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}

void init_device() {
  init_map();    // 在heap上分配一块地址空间, 用于存储IO数据

  init_serial();
  init_timer();
  init_vga();
  init_i8042();


}
