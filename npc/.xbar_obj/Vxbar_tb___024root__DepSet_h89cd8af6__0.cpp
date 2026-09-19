// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxbar_tb.h for the primary calling header

#include "verilated.h"

#include "Vxbar_tb___024root.h"

VlCoroutine Vxbar_tb___024root___eval_initial__TOP__0(Vxbar_tb___024root* vlSelf);
VlCoroutine Vxbar_tb___024root___eval_initial__TOP__1(Vxbar_tb___024root* vlSelf);

void Vxbar_tb___024root___eval_initial(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_initial\n"); );
    // Body
    Vxbar_tb___024root___eval_initial__TOP__0(vlSelf);
    Vxbar_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__clock 
        = vlSelf->xbar_tb__DOT__clock;
    vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__reset 
        = vlSelf->xbar_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vxbar_tb___024root___eval_initial__TOP__1(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           ".xbar_tb/xbar_tb.sv", 
                                           8);
        vlSelf->xbar_tb__DOT__clock = (1U & (~ (IData)(vlSelf->xbar_tb__DOT__clock)));
    }
}

void Vxbar_tb___024root___act_sequent__TOP__0(Vxbar_tb___024root* vlSelf);

void Vxbar_tb___024root___eval_act(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vxbar_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vxbar_tb___024root___nba_sequent__TOP__0(Vxbar_tb___024root* vlSelf);
void Vxbar_tb___024root___nba_comb__TOP__0(Vxbar_tb___024root* vlSelf);

void Vxbar_tb___024root___eval_nba(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vxbar_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vxbar_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vxbar_tb___024root___eval_triggers__act(Vxbar_tb___024root* vlSelf);
void Vxbar_tb___024root___timing_commit(Vxbar_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__act(Vxbar_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vxbar_tb___024root___timing_resume(Vxbar_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__nba(Vxbar_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vxbar_tb___024root___eval(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vxbar_tb___024root___eval_triggers__act(vlSelf);
            Vxbar_tb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vxbar_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT(".xbar_tb/xbar_tb.sv", 5, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vxbar_tb___024root___timing_resume(vlSelf);
                Vxbar_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vxbar_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT(".xbar_tb/xbar_tb.sv", 5, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vxbar_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vxbar_tb___024root___timing_commit(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_hb236363d__0.commit("@(posedge xbar_tb.clock)");
    }
}

void Vxbar_tb___024root___timing_resume(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_hb236363d__0.resume("@(posedge xbar_tb.clock)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vxbar_tb___024root___eval_debug_assertions(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
