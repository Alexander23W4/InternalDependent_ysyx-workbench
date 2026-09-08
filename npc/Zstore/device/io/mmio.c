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
-> 1. call add_mmio_map first, add devices    (In monitor_init(), device_init(), add all device-map)
-> 2. and prepare callback function for each devices
-> 3. check (STORE & LOAD, e.g. sw sb) instr addr-operand, when not operate physical ram, call mmio_read/write()

*/
#include "/home/wang/InternalDependent_ysyx-workbench/npc/include/_All.h"

#define NR_MAP 16

/*
typedef void(*io_callback_t)(uint32_t, int, bool);
typedef struct {
  const char *name;
  uint32_t low;
  uint32_t high;
  void *space;
  io_callback_t callback;
} IOMap;
*/
static IOMap maps[NR_MAP] = {};   // maps
static int nr_map = 0;

// Init, Device operation
static void report_mmio_overlap(const char *name1, uint32_t l1, uint32_t r1, const char *name2, uint32_t l2, uint32_t r2) {
  panic("MMIO region %s@[0x%x, 0x%x] is overlapped with %s@[0x%x, 0x%x]",name1, l1, r1, name2, l2, r2);
}

// add device to bus
void add_mmio_map(const char *name, uint32_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  uint32_t left = addr, right = addr + len - 1;
  if (in_pmem(left) || in_pmem(right)) {    // in physical ram range
    report_mmio_overlap(name, left, right, "pmem", PMEM_LEFT, PMEM_RIGHT);
  }
  for (int i = 0; i < nr_map; i++) {      // overlap with other device-addr-range
    if (left <= maps[i].high && right >= maps[i].low) {
      report_mmio_overlap(name, left, right, maps[i].name, maps[i].low, maps[i].high);
    }
  }

  // low = addr    high = add + len -1
  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,      // addr len (low, high) 
    .space = space, .callback = callback };
  Log("Add mmio map '%s' at [0x%x, 0x%x]", maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);
  nr_map ++;
}

inline int find_mapid_by_addr(IOMap *maps, int size, uint32_t addr) {  // check addr in all devices-addr-range, return map-device-index
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {    // check loop
      #if DIFF_TEST_ENABLE
      difftest_skip_ref();   // skip check with REF(reference machine) when difftest, device behaviour perform different between REF & emulator
      #endif
      return i;
    }
  }
  return -1;
}


// Iterative Search
static IOMap* fetch_mmio_map(uint32_t addr) {
  int mapid = find_mapid_by_addr(maps, nr_map, addr);  // search according device in map[]
  return (mapid == -1 ? NULL : &maps[mapid]);
}

/* bus interface */ 
// BUS interface to devices.   The toppest IOE API
// MMIO Device addressing API (nestly call general I/O API map_read/write())
uint32_t mmio_read(uint32_t addr, int len) {     // addr provided by upper layer, len provided by instr (sw, sb...)
  return map_read(addr, len, fetch_mmio_map(addr));
}

void mmio_write(uint32_t addr, int len, uint32_t data) {
  map_write(addr, len, data, fetch_mmio_map(addr));
}


