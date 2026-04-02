#include <nvboard.h>
#include "VEncoder42_2.h"

void nvboard_bind_all_pins(VEncoder42_2* top) {
	nvboard_bind_pin( &top->in, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW7);
	nvboard_bind_pin( &top->out, 2, LD1, LD0);
}
