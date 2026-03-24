#include <verilated.h>
#include <iostream>
#include <unistd.h>
#include <bitset>
#include "Vtop.h"


char seg7_to_char(uint8_t h) {
    switch(h & 0x7F) { 
        case 0b0000001: return '0';
        case 0b1001111: return '1';
        case 0b0010010: return '2';
        case 0b0000110: return '3';
        case 0b1001100: return '4';
        case 0b0100101: return '5';
        case 0b0100000: return '6';
        case 0b0001111: return '7';
        case 0b0000000: return '8';
        case 0b0000100: return '9';
        case 0b0001000: return 'A';
        case 0b1100000: return 'B';
        case 0b0110001: return 'C';
        case 0b1000010: return 'D';
        case 0b0110000: return 'E';
        case 0b0111000: return 'F';
        default: return '?';
    }
}

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop;

    top->clk = 0;
    top->rst = 1;

    int cycles = 0;


    for (int i = 0; i < 10; i++) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        cycles++;
    }
    top->rst = 0;

    std::cout << "===== CPU Start Running =====" << std::endl;


    for (int i = 0; i < 500; i++) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
        cycles++;


        std::cout << "PC=" << std::bitset<4>(top->display_PC)
                  << " | h1=" << seg7_to_char(top->h1)
                  << " | h2=" << seg7_to_char(top->h2)
                  << " | r0=" << std::bitset<8>(top->debug0)
                  << " | r1=" << std::bitset<8>(top->debug1)
                  << " | r2=" << std::bitset<8>(top->debug2)
                  << " | r3=" << std::bitset<8>(top->debug3)
                  << " | rom0=" << std::bitset<8>(top->rom_debug0)
                  << " | rom1=" << std::bitset<8>(top->rom_debug1)
                  << " | rom2=" << std::bitset<8>(top->rom_debug2)
                  << " | rom3=" << std::bitset<8>(top->rom_debug3)
                  << std::endl;

        usleep(100000);
    }

    top->final();
    delete top;
    return 0;
}