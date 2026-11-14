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
    // DPI export at vsrc/dpi-f.sv:41:15
    extern void check_error(int* ifu_error, int* lsu_error, int* master_validation_error);
    // DPI export at vsrc/dpi-f.sv:7:6
    extern void check_halt(int* endprog);
    // DPI export at vsrc/dpi-f.sv:55:6
    extern void check_new_instr(int* new_instr);
    // DPI export at vsrc/dpi-f.sv:81:6
    extern void check_pipeline_bottleneck(int* ifu_out_valid, int* exu_in_ready, int* exu_out_valid, int* lsu_in_ready, int* lsu_out_valid, int* wbu_in_ready);
    // DPI export at vsrc/dpi-f.sv:62:6
    extern void check_wen(int* wen);
    // DPI export at vsrc/dpi-f.sv:15:15
    extern void debug_read_all(int* dbg_regs, int* pc, int* mstatus, int* mepc, int* mcause, int* mtvec, long long* mcycle, int* instr);
    // DPI export at vsrc/dpi-f.sv:70:6
    extern void difftest_read_gpr(int* gprs, int* pc);

    // DPI IMPORTS
    // DPI import at ../ysyxSoC/perip/flash/flash.v:85:30
    extern void flash_read(int addr, int* data);
    // DPI import at vsrc/ref/ref_top.sv:14:30
    extern int mem_read(int addr);
    // DPI import at vsrc/ref/ref_top.sv:15:30
    extern void mem_write(int addr, int data, int write_type);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:6730:30
    extern void mrom_read(int raddr, int* rdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
