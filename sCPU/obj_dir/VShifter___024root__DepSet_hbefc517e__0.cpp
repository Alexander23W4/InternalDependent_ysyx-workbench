// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VShifter.h for the primary calling header

#include "verilated.h"

#include "VShifter___024root.h"

void VShifter___024root___eval_act(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval_act\n"); );
}

VL_INLINE_OPT void VShifter___024root___nba_sequent__TOP__0(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h026b5c56__0;
    // Body
    __Vtemp_h026b5c56__0 = ((4U & (IData)(vlSelf->mode))
                             ? ((2U & (IData)(vlSelf->mode))
                                 ? ((1U & (IData)(vlSelf->mode))
                                     ? ((0xfeU & ((IData)(vlSelf->out) 
                                                  << 1U)) 
                                        | (1U & ((IData)(vlSelf->out) 
                                                 >> 7U)))
                                     : ((0x80U & ((IData)(vlSelf->out) 
                                                  << 7U)) 
                                        | (0x7fU & 
                                           ((IData)(vlSelf->out) 
                                            >> 1U))))
                                 : ((1U & (IData)(vlSelf->mode))
                                     ? (((IData)(vlSelf->in) 
                                         << 7U) | (0x7fU 
                                                   & ((IData)(vlSelf->out) 
                                                      >> 1U)))
                                     : ((0x80U & (IData)(vlSelf->out)) 
                                        | (0x7fU & 
                                           ((IData)(vlSelf->out) 
                                            >> 1U)))))
                             : ((2U & (IData)(vlSelf->mode))
                                 ? ((1U & (IData)(vlSelf->mode))
                                     ? (0xfeU & ((IData)(vlSelf->out) 
                                                 << 1U))
                                     : (0x7fU & ((IData)(vlSelf->out) 
                                                 >> 1U)))
                                 : ((1U & (IData)(vlSelf->mode))
                                     ? (IData)(vlSelf->value)
                                     : 0U)));
    vlSelf->out = __Vtemp_h026b5c56__0;
}

void VShifter___024root___eval_nba(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VShifter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VShifter___024root___eval_triggers__act(VShifter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VShifter___024root___dump_triggers__act(VShifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VShifter___024root___dump_triggers__nba(VShifter___024root* vlSelf);
#endif  // VL_DEBUG

void VShifter___024root___eval(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            VShifter___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VShifter___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("RTL/SCMs/Shifter.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VShifter___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VShifter___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("RTL/SCMs/Shifter.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VShifter___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VShifter___024root___eval_debug_assertions(VShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VShifter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->mode & 0xf8U))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
