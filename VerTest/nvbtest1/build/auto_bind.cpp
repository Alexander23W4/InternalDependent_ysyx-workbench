#include <nvboard.h>
#include "VShifter.h"

void nvboard_bind_all_pins(VShifter* top) {
	nvboard_bind_pin( &top->mode, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->in, 1, SW12);
	nvboard_bind_pin( &top->clk, 1, SW11);
	nvboard_bind_pin( &top->rst, 1, BTNC);
	nvboard_bind_pin( &top->value, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->out, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
