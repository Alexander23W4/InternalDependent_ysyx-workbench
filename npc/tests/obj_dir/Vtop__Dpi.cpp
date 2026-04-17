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

#ifndef VL_DPIDECL_get_decode_signals_
#define VL_DPIDECL_get_decode_signals_
void get_decode_signals(int* instr_val, int* addi_s, int* add_s, int* jalr_s, int* lui_s, int* lw_s, int* lbu_s, int* sw_s, int* sb_s, int* ebreak_s, int* rd_val, int* rs1_val, int* rs2_val, int* immI_val, int* immU_val, int* immS_val, int* wdata_val, int* rdata1_val, int* rdata2_val, int* wen_val) {
    // DPI export at test_v/top.v:61:10
    return Vtop::get_decode_signals(instr_val, addi_s, add_s, jalr_s, lui_s, lw_s, lbu_s, sw_s, sb_s, ebreak_s, rd_val, rs1_val, rs2_val, immI_val, immU_val, immS_val, wdata_val, rdata1_val, rdata2_val, wen_val);
}
#endif

#ifndef VL_DPIDECL_halt_
#define VL_DPIDECL_halt_
void halt(int* endprog) {
    // DPI export at test_v/top.v:11:10
    return Vtop::halt(endprog);
}
#endif

