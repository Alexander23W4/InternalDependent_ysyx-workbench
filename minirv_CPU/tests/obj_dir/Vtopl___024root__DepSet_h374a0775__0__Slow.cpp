// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopl.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtopl__Syms.h"
#include "Vtopl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___dump_triggers__stl(Vtopl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtopl___024root___eval_triggers__stl(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtopl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
