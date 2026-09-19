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
    // DPI export at vsrc/dpi-f.sv:54:15
    extern void check_end(int* period_end);
    // DPI export at vsrc/dpi-f.sv:40:15
    extern void check_error(int* ifu_error, int* lsu_error, int* master_validation_error);
    // DPI export at vsrc/dpi-f.sv:14:15
    extern void debug_read_all(int* dbg_regs, int* pc, int* mstatus, int* mepc, int* mcause, int* mtvec, long long* mcycle, int* instr);
    // DPI export at vsrc/dpi-f.sv:78:15
    extern void get_unit_cycles(unsigned long long* out_ifu_cycles, unsigned long long* out_lsu_cycles);
    // DPI export at vsrc/dpi-f.sv:6:6
    extern void halt(int* endprog);

    // DPI IMPORTS
    // DPI import at ../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at vsrc/dpi-f.sv:67:30
    extern void instr_type_event(svBit event_alu, svBit event_branch, svBit event_load, svBit event_store, svBit event_jump, svBit event_csr, svBit event_system);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:5422:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/dpi-f.sv:61:30
    extern void perf_event(svBit ifu_instr_valid, svBit lsu_read_complete, svBit lsu_write_complete);

#ifdef __cplusplus
}
#endif

#endif  // guard
