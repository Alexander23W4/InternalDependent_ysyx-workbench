// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VysyxSoCFull::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull.h"

#ifndef VL_DPIDECL_check_end_
#define VL_DPIDECL_check_end_
void check_end(int* period_end) {
    // DPI export at /home/wang/InternalDependent_ysyx-workbench/npc/vsrc/dpi-f.sv:54:15
    return VysyxSoCFull::check_end(period_end);
}
#endif

#ifndef VL_DPIDECL_check_error_
#define VL_DPIDECL_check_error_
void check_error(int* ifu_error, int* lsu_error, int* master_validation_error) {
    // DPI export at /home/wang/InternalDependent_ysyx-workbench/npc/vsrc/dpi-f.sv:40:15
    return VysyxSoCFull::check_error(ifu_error, lsu_error, master_validation_error);
}
#endif

#ifndef VL_DPIDECL_debug_read_all_
#define VL_DPIDECL_debug_read_all_
void debug_read_all(int* dbg_regs, int* pc, int* mstatus, int* mepc, int* mcause, int* mtvec, long long* mcycle, int* instr) {
    // DPI export at /home/wang/InternalDependent_ysyx-workbench/npc/vsrc/dpi-f.sv:14:15
    return VysyxSoCFull::debug_read_all(dbg_regs, pc, mstatus, mepc, mcause, mtvec, mcycle, instr);
}
#endif

#ifndef VL_DPIDECL_halt_
#define VL_DPIDECL_halt_
void halt(int* endprog) {
    // DPI export at /home/wang/InternalDependent_ysyx-workbench/npc/vsrc/dpi-f.sv:6:6
    return VysyxSoCFull::halt(endprog);
}
#endif

