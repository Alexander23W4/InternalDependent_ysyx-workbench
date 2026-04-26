// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU4.h for the primary calling header

#include "verilated.h"

#include "VALU4___024root.h"

VL_INLINE_OPT void VALU4___024root___ico_sequent__TOP__0(VALU4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU4___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ ALU4__DOT__add_res;
    ALU4__DOT__add_res = 0;
    CData/*4:0*/ ALU4__DOT__sub_res;
    ALU4__DOT__sub_res = 0;
    // Body
    ALU4__DOT__add_res = (0x1fU & ((IData)(vlSelf->a) 
                                   + (IData)(vlSelf->b)));
    ALU4__DOT__sub_res = (0x1fU & ((IData)(1U) + ((IData)(vlSelf->a) 
                                                  + 
                                                  (0xfU 
                                                   & (~ (IData)(vlSelf->b))))));
    vlSelf->carry = 0U;
    if ((1U & (~ ((IData)(vlSelf->opcode) >> 2U)))) {
        if ((2U & (IData)(vlSelf->opcode))) {
            if ((1U & (~ (IData)(vlSelf->opcode)))) {
                vlSelf->carry = 0U;
            }
        } else {
            vlSelf->carry = (1U & ((1U & (IData)(vlSelf->opcode))
                                    ? ((IData)(ALU4__DOT__sub_res) 
                                       >> 4U) : ((IData)(ALU4__DOT__add_res) 
                                                 >> 4U)));
        }
    }
    vlSelf->overflow = 0U;
    vlSelf->out = 0U;
    if ((4U & (IData)(vlSelf->opcode))) {
        vlSelf->out = ((2U & (IData)(vlSelf->opcode))
                        ? ((1U & (IData)(vlSelf->opcode))
                            ? (((IData)(vlSelf->a) 
                                == (IData)(vlSelf->b))
                                ? 1U : 0U) : (VL_LTS_III(4, (IData)(vlSelf->a), (IData)(vlSelf->b))
                                               ? 1U
                                               : 0U))
                        : ((1U & (IData)(vlSelf->opcode))
                            ? ((IData)(vlSelf->a) ^ (IData)(vlSelf->b))
                            : ((IData)(vlSelf->a) | (IData)(vlSelf->b))));
    } else if ((2U & (IData)(vlSelf->opcode))) {
        if ((1U & (IData)(vlSelf->opcode))) {
            vlSelf->out = ((IData)(vlSelf->a) & (IData)(vlSelf->b));
        } else {
            vlSelf->out = (0xfU & ((IData)(1U) + (~ (IData)(vlSelf->a))));
            vlSelf->overflow = (8U == (IData)(vlSelf->a));
        }
    } else if ((1U & (IData)(vlSelf->opcode))) {
        vlSelf->out = (0xfU & (IData)(ALU4__DOT__sub_res));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                    >> 3U)) != (1U 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->out) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->a) 
                                                     >> 3U))));
    } else {
        vlSelf->out = (0xfU & (IData)(ALU4__DOT__add_res));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                    >> 3U)) == (1U 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U))) 
                            & ((1U & ((IData)(vlSelf->out) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->a) 
                                                     >> 3U))));
    }
    vlSelf->zero = (1U & (~ (IData)((0U != (IData)(vlSelf->out)))));
}

void VALU4___024root___eval_ico(VALU4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU4___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VALU4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VALU4___024root___eval_act(VALU4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU4___024root___eval_act\n"); );
}

void VALU4___024root___eval_nba(VALU4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU4___024root___eval_nba\n"); );
}

void VALU4___024root___eval_triggers__ico(VALU4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU4___024root___dump_triggers__ico(VALU4___024root* vlSelf);
#endif  // VL_DEBUG
void VALU4___024root___eval_triggers__act(VALU4___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU4___024root___dump_triggers__act(VALU4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU4___024root___dump_triggers__nba(VALU4___024root* vlSelf);
#endif  // VL_DEBUG

void VALU4___024root___eval(VALU4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU4___024root___eval\n"); );
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
        VALU4___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VALU4___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/ALU4.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VALU4___024root___eval_ico(vlSelf);
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
            VALU4___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VALU4___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/ALU4.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VALU4___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VALU4___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/ALU4.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VALU4___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VALU4___024root___eval_debug_assertions(VALU4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->opcode & 0xf8U))) {
        Verilated::overWidthError("opcode");}
}
#endif  // VL_DEBUG
