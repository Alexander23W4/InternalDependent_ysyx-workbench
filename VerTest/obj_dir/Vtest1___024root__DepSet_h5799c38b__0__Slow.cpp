// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest1.h for the primary calling header

#include "verilated.h"

#include "Vtest1___024root.h"

VL_ATTR_COLD void Vtest1___024root___eval_static(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtest1___024root___eval_initial__TOP(Vtest1___024root* vlSelf);

VL_ATTR_COLD void Vtest1___024root___eval_initial(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___eval_initial\n"); );
    // Body
    Vtest1___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtest1___024root___eval_initial__TOP(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("Hello World\n");
    VL_FINISH_MT("src/vercode/test1.v", 2, "");
}

VL_ATTR_COLD void Vtest1___024root___eval_final(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtest1___024root___eval_settle(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest1___024root___dump_triggers__act(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest1___024root___dump_triggers__nba(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest1___024root___ctor_var_reset(Vtest1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest1___024root___ctor_var_reset\n"); );
}
