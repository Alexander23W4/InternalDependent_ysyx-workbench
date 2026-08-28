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

#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

#define IO_SPACE_MAX (32 * 1024 * 1024)

static uint8_t *io_space = NULL;    // IO space
static uint8_t *p_space = NULL;     // 

// distribute IO space  这个是每个外设接口初始化的时候, 用new_space这个函数分配需要的内存在init_map()函数分配的 heap里面 (p_space)
uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, uint32_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, uint32_t offset, int len, bool is_write) {   // call callback function
  if (c != NULL) { c(offset, len, is_write); }    
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

/*
Among them, map_read() and map_write() are used to map the address addr to the target space indicated by map, and perform access. 

These two functions are core Device I/O API, when instr-ram-addr falls in device area, call these API
  the API calls callback function for operating device internally (invoke_callback)
*/

uint32_t map_read(uint32_t addr, int len, IOMap *map) {   // map 
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);     // check range  (assert)

  uint32_t offset = addr - map->low;    // offset = read_addr - device_base_addr
  invoke_callback(map->callback, offset, len, false);  // prepare data to "space" 
  uint32_t ret = host_read(map->space + offset, len);    // 这里map->space + offset, 这个指针直接指到对应的heap的位置上
  return ret;
}

void map_write(uint32_t addr, int len, uint32_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);

  uint32_t offset = addr - map->low;
  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}
