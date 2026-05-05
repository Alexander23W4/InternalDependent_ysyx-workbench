// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vour.h"
#include "Vour__Syms.h"
#include "verilated_dpi.h"


void Vour::publicSetBool(int in_bool) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root::publicSetBool\n"); );
    // Init
    IData/*31:0*/ in_bool__Vcvt;
    in_bool__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("publicSetBool");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vour__Vcb_publicSetBool_t __Vcb = (Vour__Vcb_publicSetBool_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    in_bool__Vcvt = in_bool;
    (*__Vcb)((Vour__Syms*)(__Vscopep->symsp()), in_bool__Vcvt);
}
