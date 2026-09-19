// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxbar_tb.h for the primary calling header

#include "verilated.h"

#include "Vxbar_tb___024root.h"

VL_ATTR_COLD void Vxbar_tb___024root___eval_static__TOP(Vxbar_tb___024root* vlSelf);

VL_ATTR_COLD void Vxbar_tb___024root___eval_static(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_static\n"); );
    // Body
    Vxbar_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vxbar_tb___024root___eval_static__TOP(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->xbar_tb__DOT__clock = 0U;
    vlSelf->xbar_tb__DOT__reset = 1U;
    vlSelf->xbar_tb__DOT__errors = 0U;
}

VL_ATTR_COLD void Vxbar_tb___024root___eval_final(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vxbar_tb___024root___eval_triggers__stl(Vxbar_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__stl(Vxbar_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___eval_stl(Vxbar_tb___024root* vlSelf);

VL_ATTR_COLD void Vxbar_tb___024root___eval_settle(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vxbar_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vxbar_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT(".xbar_tb/xbar_tb.sv", 5, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vxbar_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__stl(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vxbar_tb___024root___stl_sequent__TOP__0(Vxbar_tb___024root* vlSelf);

VL_ATTR_COLD void Vxbar_tb___024root___eval_stl(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vxbar_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__act(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge xbar_tb.clock or posedge xbar_tb.reset)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge xbar_tb.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__nba(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge xbar_tb.clock or posedge xbar_tb.reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge xbar_tb.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vxbar_tb___024root___ctor_var_reset(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->xbar_tb__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__mm_rpend = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__errors = 0;
    vlSelf->xbar_tb__DOT__xbar__DOT__w_busy = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__xbar__DOT__w_clint = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state = VL_RAND_RESET_I(2);
    vlSelf->xbar_tb__DOT__xbar__DOT__r_next_state = VL_RAND_RESET_I(2);
    vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid = VL_RAND_RESET_I(1);
    vlSelf->xbar_tb__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->xbar_tb__DOT__clint__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->xbar_tb__DOT__clint__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->xbar_tb__DOT__clint__DOT__rdata_save = VL_RAND_RESET_I(32);
    vlSelf->xbar_tb__DOT__clint__DOT__rresp_save = VL_RAND_RESET_I(2);
    vlSelf->xbar_tb__DOT__clint__DOT__rdata_now = VL_RAND_RESET_I(32);
    vlSelf->xbar_tb__DOT__clint__DOT__rresp_now = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__reset = VL_RAND_RESET_I(1);
}
