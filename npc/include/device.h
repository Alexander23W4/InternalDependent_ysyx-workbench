

void init_map();
void init_serial();
void init_timer();
void init_vga();
void init_i8042();
void send_key(uint8_t, bool);
void vga_update_screen();
uint64_t get_time();
void device_update();
void sdl_clear_event_queue();
void init_device();


uint32_t mmio_read(uint32_t addr, int len);
void mmio_write(uint32_t addr, int len, uint32_t data);

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);


typedef struct {
  const char *name;
  uint32_t low;
  uint32_t high;
  void *space;
  io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, uint32_t addr) {
  return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, uint32_t addr) {  // check addr in all devices-addr-range, return map-device-index
  int i;
  for (i = 0; i < size; i ++) {
    if (map_inside(maps + i, addr)) {    // check loop
      difftest_skip_ref();   // skip check with REF(reference machine) when difftest, device behaviour perform different between REF & emulator
      return i;
    }
  }
  return -1;
}


void add_mmio_map(const char *name, uint32_t addr, void *space, uint32_t len, io_callback_t callback);

//
uint32_t map_read(uint32_t addr, int len, IOMap *map);
void map_write(uint32_t addr, int len, uint32_t data, IOMap *map);

static inline uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: assert(0); return 0;
  }
}

static inline void host_write(void *addr, int len, uint32_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    default: assert(0);
  }
}