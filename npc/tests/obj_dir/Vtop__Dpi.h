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
    // DPI export at test_v/top.v:61:10
    extern void get_decode_signals(int* instr_val, int* addi_s, int* add_s, int* jalr_s, int* lui_s, int* lw_s, int* lbu_s, int* sw_s, int* sb_s, int* ebreak_s, int* rd_val, int* rs1_val, int* rs2_val, int* immI_val, int* immU_val, int* immS_val, int* wdata_val, int* rdata1_val, int* rdata2_val, int* wen_val);
    // DPI export at test_v/top.v:11:10
    extern void halt(int* endprog);

    // DPI IMPORTS
    // DPI import at test_v/top.v:18:42
    extern unsigned int ram_read(unsigned int addr, int amount);
    // DPI import at test_v/top.v:23:34
    extern void ram_write(unsigned int addr, unsigned int data, int amount);

#ifdef __cplusplus
}
#endif

#endif  // guard
