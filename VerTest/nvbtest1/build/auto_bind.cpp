#include <nvboard.h>
#include "VDecoder38.h"

void nvboard_bind_all_pins(VDecoder38* top) {
	nvboard_bind_pin( &top->x, 3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW3);
	nvboard_bind_pin( &top->y, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
