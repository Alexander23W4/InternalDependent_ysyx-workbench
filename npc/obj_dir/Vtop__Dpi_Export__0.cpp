// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_dpi.h"


void Vtop::halt(int* endprog) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::halt\n"); );
    // Init
    IData/*31:0*/ endprog__Vcvt;
    endprog__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("halt");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_halt_t __Vcb = (Vtop__Vcb_halt_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), endprog__Vcvt);
    for (size_t endprog__Vidx = 0; endprog__Vidx < 1; ++endprog__Vidx) *endprog = endprog__Vcvt;
}

void Vtop::debug_read_all(int* dbg_regs, int* pc, int* mstatus, int* mepc, int* mcause, int* mtvec, long long* mcycle, int* instr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::debug_read_all\n"); );
    // Init
    VlUnpacked<IData/*31:0*/, 32> dbg_regs__Vcvt;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        dbg_regs__Vcvt[__Vi0] = 0;
    }
    IData/*31:0*/ pc__Vcvt;
    pc__Vcvt = 0;
    IData/*31:0*/ mstatus__Vcvt;
    mstatus__Vcvt = 0;
    IData/*31:0*/ mepc__Vcvt;
    mepc__Vcvt = 0;
    IData/*31:0*/ mcause__Vcvt;
    mcause__Vcvt = 0;
    IData/*31:0*/ mtvec__Vcvt;
    mtvec__Vcvt = 0;
    QData/*63:0*/ mcycle__Vcvt;
    mcycle__Vcvt = 0;
    IData/*31:0*/ instr__Vcvt;
    instr__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("debug_read_all");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_debug_read_all_t __Vcb = (Vtop__Vcb_debug_read_all_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), dbg_regs__Vcvt, pc__Vcvt, mstatus__Vcvt, mepc__Vcvt, mcause__Vcvt, mtvec__Vcvt, mcycle__Vcvt, instr__Vcvt);
    for (size_t dbg_regs__Vidx = 0; dbg_regs__Vidx < 32; ++dbg_regs__Vidx) dbg_regs[dbg_regs__Vidx] = (&dbg_regs__Vcvt[0])[dbg_regs__Vidx];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) *pc = pc__Vcvt;
    for (size_t mstatus__Vidx = 0; mstatus__Vidx < 1; ++mstatus__Vidx) *mstatus = mstatus__Vcvt;
    for (size_t mepc__Vidx = 0; mepc__Vidx < 1; ++mepc__Vidx) *mepc = mepc__Vcvt;
    for (size_t mcause__Vidx = 0; mcause__Vidx < 1; ++mcause__Vidx) *mcause = mcause__Vcvt;
    for (size_t mtvec__Vidx = 0; mtvec__Vidx < 1; ++mtvec__Vidx) *mtvec = mtvec__Vcvt;
    for (size_t mcycle__Vidx = 0; mcycle__Vidx < 1; ++mcycle__Vidx) *mcycle = mcycle__Vcvt;
    for (size_t instr__Vidx = 0; instr__Vidx < 1; ++instr__Vidx) *instr = instr__Vcvt;
}

void Vtop::check_error(int* ifu_error, int* lsu_error, int* master_validation_error) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::check_error\n"); );
    // Init
    IData/*31:0*/ ifu_error__Vcvt;
    ifu_error__Vcvt = 0;
    IData/*31:0*/ lsu_error__Vcvt;
    lsu_error__Vcvt = 0;
    IData/*31:0*/ master_validation_error__Vcvt;
    master_validation_error__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("check_error");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_check_error_t __Vcb = (Vtop__Vcb_check_error_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), ifu_error__Vcvt, lsu_error__Vcvt, master_validation_error__Vcvt);
    for (size_t ifu_error__Vidx = 0; ifu_error__Vidx < 1; ++ifu_error__Vidx) *ifu_error = ifu_error__Vcvt;
    for (size_t lsu_error__Vidx = 0; lsu_error__Vidx < 1; ++lsu_error__Vidx) *lsu_error = lsu_error__Vcvt;
    for (size_t master_validation_error__Vidx = 0; master_validation_error__Vidx < 1; ++master_validation_error__Vidx) *master_validation_error = master_validation_error__Vcvt;
}

void Vtop::check_end(int* period_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::check_end\n"); );
    // Init
    IData/*31:0*/ period_end__Vcvt;
    period_end__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("check_end");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_check_end_t __Vcb = (Vtop__Vcb_check_end_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), period_end__Vcvt);
    for (size_t period_end__Vidx = 0; period_end__Vidx < 1; ++period_end__Vidx) *period_end = period_end__Vcvt;
}

void Vtop::get_unit_cycles(unsigned long long* out_ifu_cycles, unsigned long long* out_lsu_cycles, unsigned long long* out_lsu_read_cycles, unsigned long long* out_lsu_write_cycles) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_unit_cycles\n"); );
    // Init
    QData/*63:0*/ out_ifu_cycles__Vcvt;
    out_ifu_cycles__Vcvt = 0;
    QData/*63:0*/ out_lsu_cycles__Vcvt;
    out_lsu_cycles__Vcvt = 0;
    QData/*63:0*/ out_lsu_read_cycles__Vcvt;
    out_lsu_read_cycles__Vcvt = 0;
    QData/*63:0*/ out_lsu_write_cycles__Vcvt;
    out_lsu_write_cycles__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_unit_cycles");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_unit_cycles_t __Vcb = (Vtop__Vcb_get_unit_cycles_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_ifu_cycles__Vcvt, out_lsu_cycles__Vcvt, out_lsu_read_cycles__Vcvt, out_lsu_write_cycles__Vcvt);
    for (size_t out_ifu_cycles__Vidx = 0; out_ifu_cycles__Vidx < 1; ++out_ifu_cycles__Vidx) *out_ifu_cycles = out_ifu_cycles__Vcvt;
    for (size_t out_lsu_cycles__Vidx = 0; out_lsu_cycles__Vidx < 1; ++out_lsu_cycles__Vidx) *out_lsu_cycles = out_lsu_cycles__Vcvt;
    for (size_t out_lsu_read_cycles__Vidx = 0; out_lsu_read_cycles__Vidx < 1; ++out_lsu_read_cycles__Vidx) *out_lsu_read_cycles = out_lsu_read_cycles__Vcvt;
    for (size_t out_lsu_write_cycles__Vidx = 0; out_lsu_write_cycles__Vidx < 1; ++out_lsu_write_cycles__Vidx) *out_lsu_write_cycles = out_lsu_write_cycles__Vcvt;
}

void Vtop::get_ifu_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_ifu_region_cycles\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_ifu_region_cycles");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_ifu_region_cycles_t __Vcb = (Vtop__Vcb_get_ifu_region_cycles_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_ifu_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_ifu_region_counts\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_ifu_region_counts");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_ifu_region_counts_t __Vcb = (Vtop__Vcb_get_ifu_region_counts_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_lsu_read_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_lsu_read_region_cycles\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_lsu_read_region_cycles");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_lsu_read_region_cycles_t __Vcb = (Vtop__Vcb_get_lsu_read_region_cycles_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_lsu_read_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_lsu_read_region_counts\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_lsu_read_region_counts");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_lsu_read_region_counts_t __Vcb = (Vtop__Vcb_get_lsu_read_region_counts_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_lsu_write_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_lsu_write_region_cycles\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_lsu_write_region_cycles");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_lsu_write_region_cycles_t __Vcb = (Vtop__Vcb_get_lsu_write_region_cycles_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_lsu_write_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_lsu_write_region_counts\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_lsu_write_region_counts");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_lsu_write_region_counts_t __Vcb = (Vtop__Vcb_get_lsu_write_region_counts_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_region_cycles\n"); );
    // Init
    QData/*63:0*/ out_flash__Vcvt;
    out_flash__Vcvt = 0;
    QData/*63:0*/ out_sram__Vcvt;
    out_sram__Vcvt = 0;
    QData/*63:0*/ out_sdram__Vcvt;
    out_sdram__Vcvt = 0;
    QData/*63:0*/ out_other__Vcvt;
    out_other__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_region_cycles");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_region_cycles_t __Vcb = (Vtop__Vcb_get_region_cycles_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_flash__Vcvt, out_sram__Vcvt, out_sdram__Vcvt, out_other__Vcvt);
    for (size_t out_flash__Vidx = 0; out_flash__Vidx < 1; ++out_flash__Vidx) *out_flash = out_flash__Vcvt;
    for (size_t out_sram__Vidx = 0; out_sram__Vidx < 1; ++out_sram__Vidx) *out_sram = out_sram__Vcvt;
    for (size_t out_sdram__Vidx = 0; out_sdram__Vidx < 1; ++out_sdram__Vidx) *out_sdram = out_sdram__Vcvt;
    for (size_t out_other__Vidx = 0; out_other__Vidx < 1; ++out_other__Vidx) *out_other = out_other__Vcvt;
}

void Vtop::get_icache_counters(unsigned long long* out_hit_cnt, unsigned long long* out_miss_cnt, unsigned long long* out_hit_cycles, unsigned long long* out_miss_cycles) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::get_icache_counters\n"); );
    // Init
    QData/*63:0*/ out_hit_cnt__Vcvt;
    out_hit_cnt__Vcvt = 0;
    QData/*63:0*/ out_miss_cnt__Vcvt;
    out_miss_cnt__Vcvt = 0;
    QData/*63:0*/ out_hit_cycles__Vcvt;
    out_hit_cycles__Vcvt = 0;
    QData/*63:0*/ out_miss_cycles__Vcvt;
    out_miss_cycles__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_icache_counters");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_get_icache_counters_t __Vcb = (Vtop__Vcb_get_icache_counters_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), out_hit_cnt__Vcvt, out_miss_cnt__Vcvt, out_hit_cycles__Vcvt, out_miss_cycles__Vcvt);
    for (size_t out_hit_cnt__Vidx = 0; out_hit_cnt__Vidx < 1; ++out_hit_cnt__Vidx) *out_hit_cnt = out_hit_cnt__Vcvt;
    for (size_t out_miss_cnt__Vidx = 0; out_miss_cnt__Vidx < 1; ++out_miss_cnt__Vidx) *out_miss_cnt = out_miss_cnt__Vcvt;
    for (size_t out_hit_cycles__Vidx = 0; out_hit_cycles__Vidx < 1; ++out_hit_cycles__Vidx) *out_hit_cycles = out_hit_cycles__Vcvt;
    for (size_t out_miss_cycles__Vidx = 0; out_miss_cycles__Vidx < 1; ++out_miss_cycles__Vidx) *out_miss_cycles = out_miss_cycles__Vcvt;
}
