// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncoder42_2.h for the primary calling header

#include "verilated.h"

#include "VEncoder42_2___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> VEncoder42_2__ConstPool__TABLE_hcfb368ec_0;

VL_INLINE_OPT void VEncoder42_2___024root___ico_sequent__TOP__0(VEncoder42_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEncoder42_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder42_2___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->in) << 1U) | (IData)(vlSelf->en));
    vlSelf->out = VEncoder42_2__ConstPool__TABLE_hcfb368ec_0
        [__Vtableidx1];
}

void VEncoder42_2___024root___eval_ico(VEncoder42_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEncoder42_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder42_2___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VEncoder42_2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VEncoder42_2___024root___eval_act(VEncoder42_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEncoder42_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder42_2___024root___eval_act\n"); );
}

void VEncoder42_2___024root___eval_nba(VEncoder42_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEncoder42_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder42_2___024root___eval_nba\n"); );
}

void VEncoder42_2___024root___eval_triggers__ico(VEncoder42_2___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VEncoder42_2___024root___dump_triggers__ico(VEncoder42_2___024root* vlSelf);
#endif  // VL_DEBUG
void VEncoder42_2___024root___eval_triggers__act(VEncoder42_2___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VEncoder42_2___024root___dump_triggers__act(VEncoder42_2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VEncoder42_2___024root___dump_triggers__nba(VEncoder42_2___024root* vlSelf);
#endif  // VL_DEBUG

void VEncoder42_2___024root___eval(VEncoder42_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEncoder42_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder42_2___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VEncoder42_2___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VEncoder42_2___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/Encoder42_2.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VEncoder42_2___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VEncoder42_2___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VEncoder42_2___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/Encoder42_2.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VEncoder42_2___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VEncoder42_2___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/Encoder42_2.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VEncoder42_2___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VEncoder42_2___024root___eval_debug_assertions(VEncoder42_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VEncoder42_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncoder42_2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->in & 0xf0U))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
