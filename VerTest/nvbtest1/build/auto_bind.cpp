#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->h, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->en, 1, SW9);
	nvboard_bind_pin( &top->a, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->b, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->cin, 1, SW8);
	nvboard_bind_pin( &top->c, 1, LD0);
	nvboard_bind_pin( &top->overflow, 1, LD1);
	nvboard_bind_pin( &top->zero, 1, LD2);
}
