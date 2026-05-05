// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vour__Syms.h"
#include "Vour___024root.h"

void Vour___024root____Vdpiexp_our__DOT__publicSetBool_TOP(Vour__Syms* __restrict vlSymsp, IData/*31:0*/ in_bool) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root____Vdpiexp_our__DOT__publicSetBool_TOP\n"); );
    // Init
    CData/*3:0*/ our__DOT__var_bool;
    our__DOT__var_bool = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    our__DOT__var_bool = (0xfU & in_bool);
    VL_WRITEF("C++ called me! var_bool is now: %b\n",
              4,our__DOT__var_bool);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vour___024root___dump_triggers__act(Vour___024root* vlSelf);
#endif  // VL_DEBUG

void Vour___024root___eval_triggers__act(Vour___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__Vdpi_export_trigger;
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vour___024root___dump_triggers__act(vlSelf);
    }
#endif
}
