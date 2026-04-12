// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vour__Syms.h"
#include "Vour___024root.h"

void Vour___024unit____Vdpiimwrap_add_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &add__Vfuncrtn);

VL_ATTR_COLD void Vour___024root___eval_initial__TOP(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vfunc_add__0__Vfuncout;
    __Vfunc_add__0__Vfuncout = 0;
    // Body
    Vour___024unit____Vdpiimwrap_add_TOP____024unit(1U, 2U, __Vfunc_add__0__Vfuncout);
    VL_WRITEF("00000001 + 00000002 = %x\n",32,__Vfunc_add__0__Vfuncout);
}
