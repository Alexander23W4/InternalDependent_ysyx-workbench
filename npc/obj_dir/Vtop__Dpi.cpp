// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtop::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtop__Dpi.h"
#include "Vtop.h"

#ifndef VL_DPIDECL_check_ram_op_
#define VL_DPIDECL_check_ram_op_
void check_ram_op(int* ram_op) {
    // DPI export at vsrc/top.v:451:10
    return Vtop::check_ram_op(ram_op);
}
#endif

#ifndef VL_DPIDECL_halt_
#define VL_DPIDECL_halt_
void halt(int* endprog) {
    // DPI export at vsrc/top.v:444:10
    return Vtop::halt(endprog);
}
#endif

