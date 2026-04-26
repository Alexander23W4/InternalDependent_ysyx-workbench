#include <nvboard.h>
#include "VALU4.h"

void nvboard_bind_all_pins(VALU4* top) {
	nvboard_bind_pin( &top->a, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->b, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->opcode, 3, SW10, SW9, SW8);
	nvboard_bind_pin( &top->out, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->carry, 1, LD4);
	nvboard_bind_pin( &top->overflow, 1, LD5);
	nvboard_bind_pin( &top->zero, 1, LD6);
}
