// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VT_ins_bner0.h for the primary calling header

#include "verilated.h"

#include "VT_ins_bner0__Syms.h"
#include "VT_ins_bner0___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_bner0___024root___dump_triggers__stl(VT_ins_bner0___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VT_ins_bner0___024root___eval_triggers__stl(VT_ins_bner0___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_bner0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_bner0___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VT_ins_bner0___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
