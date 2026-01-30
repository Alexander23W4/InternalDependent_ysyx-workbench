#include <am.h>
#include <klib-macros.h>

void draw(uint32_t color) {
  // add code here
}

int main() {
  ioe_init(); // initialization for GUI
  while (1) {
    draw(0x000000ff);
  }
  return 0;
}
