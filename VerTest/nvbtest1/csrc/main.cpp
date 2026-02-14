#include <nvboard.h>
#include <Vtop.h>

static TOP_NAME dut;   // device under test (DUT)

void nvboard_bind_all_pins(TOP_NAME* top);

static void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

int main() {
  nvboard_bind_all_pins(&dut);   // pin
  nvboard_init();   // start

  reset(10); // reset

  while(1) {
    nvboard_update();
    single_cycle();
  }
}


