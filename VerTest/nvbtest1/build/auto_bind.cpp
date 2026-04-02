#include <nvboard.h>
#include "Vkeyboard_top.h"

void nvboard_bind_all_pins(Vkeyboard_top* top) {
	nvboard_bind_pin( &top->ready, 1, LD0);
	nvboard_bind_pin( &top->rst, 1, BTNC);
	nvboard_bind_pin( &top->ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, 1, PS2_DAT);
}
