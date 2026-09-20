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

#ifndef VL_DPIDECL_check_end_
#define VL_DPIDECL_check_end_
void check_end(int* period_end) {
    // DPI export at vsrc/dpi-f.sv:54:15
    return Vtop::check_end(period_end);
}
#endif

#ifndef VL_DPIDECL_check_error_
#define VL_DPIDECL_check_error_
void check_error(int* ifu_error, int* lsu_error, int* master_validation_error) {
    // DPI export at vsrc/dpi-f.sv:40:15
    return Vtop::check_error(ifu_error, lsu_error, master_validation_error);
}
#endif

#ifndef VL_DPIDECL_debug_read_all_
#define VL_DPIDECL_debug_read_all_
void debug_read_all(int* dbg_regs, int* pc, int* mstatus, int* mepc, int* mcause, int* mtvec, long long* mcycle, int* instr) {
    // DPI export at vsrc/dpi-f.sv:14:15
    return Vtop::debug_read_all(dbg_regs, pc, mstatus, mepc, mcause, mtvec, mcycle, instr);
}
#endif

#ifndef VL_DPIDECL_get_icache_counters_
#define VL_DPIDECL_get_icache_counters_
void get_icache_counters(unsigned long long* out_hit_cnt, unsigned long long* out_miss_cnt, unsigned long long* out_hit_cycles, unsigned long long* out_miss_cycles) {
    // DPI export at vsrc/dpi-f.sv:188:15
    return Vtop::get_icache_counters(out_hit_cnt, out_miss_cnt, out_hit_cycles, out_miss_cycles);
}
#endif

#ifndef VL_DPIDECL_get_ifu_region_counts_
#define VL_DPIDECL_get_ifu_region_counts_
void get_ifu_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:108:15
    return Vtop::get_ifu_region_counts(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_ifu_region_cycles_
#define VL_DPIDECL_get_ifu_region_cycles_
void get_ifu_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:95:15
    return Vtop::get_ifu_region_cycles(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_lsu_read_region_counts_
#define VL_DPIDECL_get_lsu_read_region_counts_
void get_lsu_read_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:134:15
    return Vtop::get_lsu_read_region_counts(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_lsu_read_region_cycles_
#define VL_DPIDECL_get_lsu_read_region_cycles_
void get_lsu_read_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:121:15
    return Vtop::get_lsu_read_region_cycles(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_lsu_write_region_counts_
#define VL_DPIDECL_get_lsu_write_region_counts_
void get_lsu_write_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:160:15
    return Vtop::get_lsu_write_region_counts(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_lsu_write_region_cycles_
#define VL_DPIDECL_get_lsu_write_region_cycles_
void get_lsu_write_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:147:15
    return Vtop::get_lsu_write_region_cycles(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_region_cycles_
#define VL_DPIDECL_get_region_cycles_
void get_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    // DPI export at vsrc/dpi-f.sv:174:15
    return Vtop::get_region_cycles(out_flash, out_sram, out_sdram, out_other);
}
#endif

#ifndef VL_DPIDECL_get_unit_cycles_
#define VL_DPIDECL_get_unit_cycles_
void get_unit_cycles(unsigned long long* out_ifu_cycles, unsigned long long* out_lsu_cycles, unsigned long long* out_lsu_read_cycles, unsigned long long* out_lsu_write_cycles) {
    // DPI export at vsrc/dpi-f.sv:78:15
    return Vtop::get_unit_cycles(out_ifu_cycles, out_lsu_cycles, out_lsu_read_cycles, out_lsu_write_cycles);
}
#endif

#ifndef VL_DPIDECL_halt_
#define VL_DPIDECL_halt_
void halt(int* endprog) {
    // DPI export at vsrc/dpi-f.sv:6:6
    return Vtop::halt(endprog);
}
#endif

