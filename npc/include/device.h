#define CONFIG_VGA_SIZE_400x300 1
#define CONFIG_VGA_SHOW_SCREEN 1
#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_FB_ADDR 0xa1000000
#define CONFIG_DISK_CTL_MMIO 0xa0000300
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_I8042_DATA_MMIO 0xa0000060
#define CONFIG_SB_SIZE 0x10000
#define CONFIG_SB_ADDR 0xa1200000
#define CONFIG_VGA_CTL_MMIO 0xa0000100

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)
#define MAP(c, f) c(f)

typedef void (*alarm_handler_t) ();
void add_alarm_handle(alarm_handler_t h);


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