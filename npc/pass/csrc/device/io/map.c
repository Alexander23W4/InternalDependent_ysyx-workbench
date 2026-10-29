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

#define IO_SPACE_MAX (32 * 1024 * 1024)   // 8192 * 4096 (8192 pages)

static uint8_t *io_space = NULL;    // IO space
static uint8_t *p_space = NULL;     // 

// distribute IO space  这个是每个外设接口初始化的时候, 用new_space这个函数分配需要的内存在init_map()函数分配的 heap里面 (p_space). 按页分配
uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static bool check_bound(IOMap *map, uint32_t addr) {
  if (map == NULL) {
    #if TRACE_ENABLE
    i_ring_buf_logout(&ring);
    #endif
    printf("[check_bound]: address (0x%x) is out of bound at pc = 0x%x", addr, cpu.pc);
    Status = NPC_CRASH;
    return false;
  } 
  return true;
  // else {
  //   printf("address (0x%x) is out of bound {%s} [0x%x, 0x%x] at pc = 0x%x", addr, map->name, map->low, map->high, cpu.pc);
  // }
}

static void invoke_callback(io_callback_t c, uint32_t offset, int len, bool is_write) {   // call callback function
  if (c != NULL) { c(offset, len, is_write); }    
}

void init_map() {
  io_space = (uint8_t*)malloc(IO_SPACE_MAX);
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
  if(!check_bound(map, addr)) {return 0;}     // check range  (assert)
  uint32_t offset = addr - map->low;    // offset = read_addr - device_base_addr
  invoke_callback(map->callback, offset, len, false);  // prepare data to "space" 
  uint32_t ret = host_read((void*)((uint8_t*)(map->space) + offset), len);    // 这里map->space + offset, 这个指针直接指到对应的heap的位置上
  return ret;
}

void map_write(uint32_t addr, int len, uint32_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  if(!check_bound(map, addr)) {return;}

  uint32_t offset = addr - map->low;
  host_write((void*)((uint8_t*)(map->space) + offset), len, data);
  invoke_callback(map->callback, offset, len, true);
}




