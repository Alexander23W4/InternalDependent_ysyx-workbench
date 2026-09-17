/*
top=vga_top
            
rst BTNC        
vga_r (VGA_R7, VGA_R6, VGA_R5, VGA_R4, VGA_R3, VGA_R2, VGA_R1, VGA_R0)
vga_g (VGA_G7, VGA_G6, VGA_G5, VGA_G4, VGA_G3, VGA_G2, VGA_G1, VGA_G0)
vga_b (VGA_B7, VGA_B6, VGA_B5, VGA_B4, VGA_B3, VGA_B2, VGA_B1, VGA_B0)

hsync VGA_HSYNC
vsync VGA_VSYNC
valid VGA_BLANK_N
*/
#include <stdio.h>
#include <unistd.h>
#include <nvboard.h>
#include "Vvga_top.h"

static Vvga_top dut;

void nvboard_bind_all_pins(Vvga_top* top);

static uint64_t cycle_cnt = 0;

// 
static void single_cycle() {
    dut.clk = 0;
    dut.eval();
    nvboard_update();

    dut.clk = 1;
    dut.eval();
    nvboard_update();

    cycle_cnt++;
}

// Reset
static void reset(int n) {
    dut.rst = 1;
    while (n-- > 0) {
        single_cycle();
    }
    dut.rst = 0;
}

// Generate pixel color based on coordinates, random 
static uint32_t gen_pixel(uint16_t x, uint16_t y) {
    uint8_t r = x & 0xFF;
    uint8_t g = y & 0xFF;
    uint8_t b = (x ^ y) & 0xFF;
    return (r << 16) | (g << 8) | b;
}

int main() {

    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.clk = 0;
    dut.rst = 0;
    // dut.clken = 1;

    reset(10);
// 
    while (1) {

        if (dut.valid) {   // if not blank
            dut.vga_data = gen_pixel(dut.h_addr, dut.v_addr);
        } else {
            dut.vga_data = 0;
        }
        printf("x=%d y=%d valid=%d\n", dut.h_addr, dut.v_addr, dut.valid);
        printf("valid=%d rgb=%x\n", dut.valid, dut.vga_data);

        nvboard_update();
        single_cycle();
    }

    nvboard_quit();
}