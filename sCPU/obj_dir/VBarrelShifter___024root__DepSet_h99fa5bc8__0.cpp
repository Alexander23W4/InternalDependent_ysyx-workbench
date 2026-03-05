// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBarrelShifter.h for the primary calling header

#include "verilated.h"

#include "VBarrelShifter___024root.h"

VL_INLINE_OPT void VBarrelShifter___024root___ico_sequent__TOP__0(VBarrelShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ BarrelShifter__DOT__sign;
    BarrelShifter__DOT__sign = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h5f3e1026__0;
    BarrelShifter__DOT____VdfgTmp_h5f3e1026__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h35a2d575__0;
    BarrelShifter__DOT____VdfgTmp_h35a2d575__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0;
    BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h29f6efd0__0;
    BarrelShifter__DOT____VdfgTmp_h29f6efd0__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h86d0e74e__0;
    BarrelShifter__DOT____VdfgTmp_h86d0e74e__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_hde27953d__0;
    BarrelShifter__DOT____VdfgTmp_hde27953d__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h8119adaf__0;
    BarrelShifter__DOT____VdfgTmp_h8119adaf__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h87b24a18__0;
    BarrelShifter__DOT____VdfgTmp_h87b24a18__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h1a9f3742__0;
    BarrelShifter__DOT____VdfgTmp_h1a9f3742__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_hdb5af18b__0;
    BarrelShifter__DOT____VdfgTmp_hdb5af18b__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h2abd72af__0;
    BarrelShifter__DOT____VdfgTmp_h2abd72af__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0;
    BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h467ce533__0;
    BarrelShifter__DOT____VdfgTmp_h467ce533__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_hb27d78ea__0;
    BarrelShifter__DOT____VdfgTmp_hb27d78ea__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_hacc14072__0;
    BarrelShifter__DOT____VdfgTmp_hacc14072__0 = 0;
    CData/*0:0*/ BarrelShifter__DOT____VdfgTmp_h60836966__0;
    BarrelShifter__DOT____VdfgTmp_h60836966__0 = 0;
    // Body
    BarrelShifter__DOT__sign = ((IData)(vlSelf->AL) 
                                & ((~ (IData)(vlSelf->LR)) 
                                   & ((IData)(vlSelf->din) 
                                      >> 7U)));
    if ((1U & (IData)(vlSelf->shamt))) {
        BarrelShifter__DOT____VdfgTmp_h1a9f3742__0 
            = (1U & ((~ (IData)(vlSelf->LR)) & ((IData)(vlSelf->din) 
                                                >> 1U)));
        if (vlSelf->LR) {
            BarrelShifter__DOT____VdfgTmp_hdb5af18b__0 
                = (1U & (IData)(vlSelf->din));
            BarrelShifter__DOT____VdfgTmp_hacc14072__0 
                = (1U & ((IData)(vlSelf->din) >> 5U));
            BarrelShifter__DOT____VdfgTmp_h2abd72af__0 
                = (1U & ((IData)(vlSelf->din) >> 1U));
            BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0 
                = (1U & ((IData)(vlSelf->din) >> 2U));
            BarrelShifter__DOT____VdfgTmp_h467ce533__0 
                = (1U & ((IData)(vlSelf->din) >> 3U));
            BarrelShifter__DOT____VdfgTmp_hb27d78ea__0 
                = (1U & ((IData)(vlSelf->din) >> 4U));
            BarrelShifter__DOT____VdfgTmp_h60836966__0 
                = (1U & ((IData)(vlSelf->din) >> 6U));
        } else {
            BarrelShifter__DOT____VdfgTmp_hdb5af18b__0 
                = (1U & ((IData)(vlSelf->din) >> 2U));
            BarrelShifter__DOT____VdfgTmp_hacc14072__0 
                = (1U & ((IData)(vlSelf->din) >> 7U));
            BarrelShifter__DOT____VdfgTmp_h2abd72af__0 
                = (1U & ((IData)(vlSelf->din) >> 3U));
            BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0 
                = (1U & ((IData)(vlSelf->din) >> 4U));
            BarrelShifter__DOT____VdfgTmp_h467ce533__0 
                = (1U & ((IData)(vlSelf->din) >> 5U));
            BarrelShifter__DOT____VdfgTmp_hb27d78ea__0 
                = (1U & ((IData)(vlSelf->din) >> 6U));
            BarrelShifter__DOT____VdfgTmp_h60836966__0 
                = (1U & (IData)(BarrelShifter__DOT__sign));
        }
    } else {
        BarrelShifter__DOT____VdfgTmp_h1a9f3742__0 
            = (1U & (IData)(vlSelf->din));
        BarrelShifter__DOT____VdfgTmp_hdb5af18b__0 
            = (1U & ((IData)(vlSelf->din) >> 1U));
        BarrelShifter__DOT____VdfgTmp_hacc14072__0 
            = (1U & ((IData)(vlSelf->din) >> 6U));
        BarrelShifter__DOT____VdfgTmp_h2abd72af__0 
            = (1U & ((IData)(vlSelf->din) >> 2U));
        BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0 
            = (1U & ((IData)(vlSelf->din) >> 3U));
        BarrelShifter__DOT____VdfgTmp_h467ce533__0 
            = (1U & ((IData)(vlSelf->din) >> 4U));
        BarrelShifter__DOT____VdfgTmp_hb27d78ea__0 
            = (1U & ((IData)(vlSelf->din) >> 5U));
        BarrelShifter__DOT____VdfgTmp_h60836966__0 
            = (1U & ((IData)(vlSelf->din) >> 7U));
    }
    if ((2U & (IData)(vlSelf->shamt))) {
        BarrelShifter__DOT____VdfgTmp_h8119adaf__0 
            = ((~ (IData)(vlSelf->LR)) & (IData)(BarrelShifter__DOT____VdfgTmp_h2abd72af__0));
        BarrelShifter__DOT____VdfgTmp_h86d0e74e__0 
            = ((~ (IData)(vlSelf->LR)) & (IData)(BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0));
        if (vlSelf->LR) {
            BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0 
                = BarrelShifter__DOT____VdfgTmp_h1a9f3742__0;
            BarrelShifter__DOT____VdfgTmp_h87b24a18__0 
                = BarrelShifter__DOT____VdfgTmp_h2abd72af__0;
            BarrelShifter__DOT____VdfgTmp_h5f3e1026__0 
                = BarrelShifter__DOT____VdfgTmp_hdb5af18b__0;
            BarrelShifter__DOT____VdfgTmp_h29f6efd0__0 
                = BarrelShifter__DOT____VdfgTmp_h467ce533__0;
            BarrelShifter__DOT____VdfgTmp_h35a2d575__0 
                = BarrelShifter__DOT____VdfgTmp_hb27d78ea__0;
            BarrelShifter__DOT____VdfgTmp_hde27953d__0 
                = BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0;
        } else {
            BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0 
                = BarrelShifter__DOT____VdfgTmp_h467ce533__0;
            BarrelShifter__DOT____VdfgTmp_h87b24a18__0 
                = BarrelShifter__DOT____VdfgTmp_hacc14072__0;
            BarrelShifter__DOT____VdfgTmp_h5f3e1026__0 
                = BarrelShifter__DOT____VdfgTmp_hb27d78ea__0;
            BarrelShifter__DOT____VdfgTmp_h29f6efd0__0 
                = BarrelShifter__DOT__sign;
            BarrelShifter__DOT____VdfgTmp_h35a2d575__0 
                = BarrelShifter__DOT__sign;
            BarrelShifter__DOT____VdfgTmp_hde27953d__0 
                = BarrelShifter__DOT____VdfgTmp_h60836966__0;
        }
    } else {
        BarrelShifter__DOT____VdfgTmp_h8119adaf__0 
            = BarrelShifter__DOT____VdfgTmp_h1a9f3742__0;
        BarrelShifter__DOT____VdfgTmp_h86d0e74e__0 
            = BarrelShifter__DOT____VdfgTmp_hdb5af18b__0;
        BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0 
            = BarrelShifter__DOT____VdfgTmp_h2abd72af__0;
        BarrelShifter__DOT____VdfgTmp_h87b24a18__0 
            = BarrelShifter__DOT____VdfgTmp_h467ce533__0;
        BarrelShifter__DOT____VdfgTmp_h5f3e1026__0 
            = BarrelShifter__DOT____VdfgTmp_h1c4e8f39__0;
        BarrelShifter__DOT____VdfgTmp_h29f6efd0__0 
            = BarrelShifter__DOT____VdfgTmp_hacc14072__0;
        BarrelShifter__DOT____VdfgTmp_h35a2d575__0 
            = BarrelShifter__DOT____VdfgTmp_h60836966__0;
        BarrelShifter__DOT____VdfgTmp_hde27953d__0 
            = BarrelShifter__DOT____VdfgTmp_hb27d78ea__0;
    }
    vlSelf->dout = ((((4U & (IData)(vlSelf->shamt))
                       ? ((IData)(vlSelf->LR) ? (IData)(BarrelShifter__DOT____VdfgTmp_h5f3e1026__0)
                           : (IData)(BarrelShifter__DOT__sign))
                       : (IData)(BarrelShifter__DOT____VdfgTmp_h35a2d575__0)) 
                     << 7U) | ((((4U & (IData)(vlSelf->shamt))
                                  ? ((IData)(vlSelf->LR)
                                      ? (IData)(BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0)
                                      : (IData)(BarrelShifter__DOT__sign))
                                  : (IData)(BarrelShifter__DOT____VdfgTmp_h29f6efd0__0)) 
                                << 6U) | ((((4U & (IData)(vlSelf->shamt))
                                             ? ((IData)(vlSelf->LR)
                                                 ? (IData)(BarrelShifter__DOT____VdfgTmp_h86d0e74e__0)
                                                 : (IData)(BarrelShifter__DOT__sign))
                                             : (IData)(BarrelShifter__DOT____VdfgTmp_hde27953d__0)) 
                                           << 5U) | 
                                          ((((4U & (IData)(vlSelf->shamt))
                                              ? ((IData)(vlSelf->LR)
                                                  ? (IData)(BarrelShifter__DOT____VdfgTmp_h8119adaf__0)
                                                  : (IData)(BarrelShifter__DOT__sign))
                                              : (IData)(BarrelShifter__DOT____VdfgTmp_h87b24a18__0)) 
                                            << 4U) 
                                           | ((((4U 
                                                 & (IData)(vlSelf->shamt))
                                                 ? 
                                                ((~ (IData)(vlSelf->LR)) 
                                                 & (IData)(BarrelShifter__DOT____VdfgTmp_h35a2d575__0))
                                                 : (IData)(BarrelShifter__DOT____VdfgTmp_h5f3e1026__0)) 
                                               << 3U) 
                                              | ((((4U 
                                                    & (IData)(vlSelf->shamt))
                                                    ? 
                                                   ((~ (IData)(vlSelf->LR)) 
                                                    & (IData)(BarrelShifter__DOT____VdfgTmp_h29f6efd0__0))
                                                    : (IData)(BarrelShifter__DOT____VdfgTmp_hf1f2dbca__0)) 
                                                  << 2U) 
                                                 | ((((4U 
                                                       & (IData)(vlSelf->shamt))
                                                       ? 
                                                      ((~ (IData)(vlSelf->LR)) 
                                                       & (IData)(BarrelShifter__DOT____VdfgTmp_hde27953d__0))
                                                       : (IData)(BarrelShifter__DOT____VdfgTmp_h86d0e74e__0)) 
                                                     << 1U) 
                                                    | ((4U 
                                                        & (IData)(vlSelf->shamt))
                                                        ? 
                                                       ((~ (IData)(vlSelf->LR)) 
                                                        & (IData)(BarrelShifter__DOT____VdfgTmp_h87b24a18__0))
                                                        : (IData)(BarrelShifter__DOT____VdfgTmp_h8119adaf__0)))))))));
}

void VBarrelShifter___024root___eval_ico(VBarrelShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VBarrelShifter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VBarrelShifter___024root___eval_act(VBarrelShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_act\n"); );
}

void VBarrelShifter___024root___eval_nba(VBarrelShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_nba\n"); );
}

void VBarrelShifter___024root___eval_triggers__ico(VBarrelShifter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__ico(VBarrelShifter___024root* vlSelf);
#endif  // VL_DEBUG
void VBarrelShifter___024root___eval_triggers__act(VBarrelShifter___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__act(VBarrelShifter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBarrelShifter___024root___dump_triggers__nba(VBarrelShifter___024root* vlSelf);
#endif  // VL_DEBUG

void VBarrelShifter___024root___eval(VBarrelShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval\n"); );
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
        VBarrelShifter___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VBarrelShifter___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("RTL/SCMs/BarrelShifter.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VBarrelShifter___024root___eval_ico(vlSelf);
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
            VBarrelShifter___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBarrelShifter___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("RTL/SCMs/BarrelShifter.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VBarrelShifter___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBarrelShifter___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("RTL/SCMs/BarrelShifter.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBarrelShifter___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBarrelShifter___024root___eval_debug_assertions(VBarrelShifter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBarrelShifter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBarrelShifter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->LR & 0xfeU))) {
        Verilated::overWidthError("LR");}
    if (VL_UNLIKELY((vlSelf->AL & 0xfeU))) {
        Verilated::overWidthError("AL");}
    if (VL_UNLIKELY((vlSelf->shamt & 0xf8U))) {
        Verilated::overWidthError("shamt");}
}
#endif  // VL_DEBUG
