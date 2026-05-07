// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/top.v:11:10
    extern void halt(int* endprog);

    // DPI IMPORTS
    // DPI import at vsrc/top.v:18:42
    extern unsigned int ram_read(unsigned int addr, int amount);
    // DPI import at vsrc/top.v:23:34
    extern void ram_write(unsigned int addr, unsigned int data, int amount);

#ifdef __cplusplus
}
#endif

#endif  // guard
