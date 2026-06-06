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

void Vtop::check_ram_op(int* ram_op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::check_ram_op\n"); );
    // Init
    IData/*31:0*/ ram_op__Vcvt;
    ram_op__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("check_ram_op");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vtop__Vcb_check_ram_op_t __Vcb = (Vtop__Vcb_check_ram_op_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtop__Syms*)(__Vscopep->symsp()), ram_op__Vcvt);
    for (size_t ram_op__Vidx = 0; ram_op__Vidx < 1; ++ram_op__Vidx) *ram_op = ram_op__Vcvt;
}
