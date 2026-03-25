// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__top__DOT__gpr__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__gpr__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__gpr__DOT__ram__v0;
    __Vdlyvval__top__DOT__gpr__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__gpr__DOT__ram__v0;
    __Vdlyvset__top__DOT__gpr__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__gpr__DOT__ram__v0 = 0U;
    if (vlSelf->top__DOT__we) {
        __Vdlyvval__top__DOT__gpr__DOT__ram__v0 = vlSelf->top__DOT__data_out;
        __Vdlyvset__top__DOT__gpr__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__gpr__DOT__ram__v0 = vlSelf->top__DOT__write_addr;
    }
    if (__Vdlyvset__top__DOT__gpr__DOT__ram__v0) {
        vlSelf->top__DOT__gpr__DOT__ram[__Vdlyvdim0__top__DOT__gpr__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__gpr__DOT__ram__v0;
    }
    vlSelf->debug0 = vlSelf->top__DOT__gpr__DOT__ram
        [0U];
    vlSelf->debug1 = vlSelf->top__DOT__gpr__DOT__ram
        [1U];
    vlSelf->debug2 = vlSelf->top__DOT__gpr__DOT__ram
        [2U];
    vlSelf->debug3 = vlSelf->top__DOT__gpr__DOT__ram
        [3U];
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_ha68cf5eb_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vdly__top__DOT__pc;
    __Vdly__top__DOT__pc = 0;
    CData/*3:0*/ __Vdly__top__DOT__pc_next;
    __Vdly__top__DOT__pc_next = 0;
    // Body
    __Vdly__top__DOT__pc_next = vlSelf->top__DOT__pc_next;
    __Vdly__top__DOT__pc = vlSelf->top__DOT__pc;
    if (vlSelf->rst) {
        __Vdly__top__DOT__pc = 0U;
        __Vdly__top__DOT__pc_next = 0U;
        vlSelf->top__DOT__state = 0U;
    } else {
        if ((4U & (IData)(vlSelf->top__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->top__DOT__state))) {
                    __Vdly__top__DOT__pc = vlSelf->top__DOT__pc_next;
                } else if ((2U & (IData)(vlSelf->top__DOT__opcode))) {
                    __Vdly__top__DOT__pc_next = (0xfU 
                                                 & ((1U 
                                                     & (IData)(vlSelf->top__DOT__opcode))
                                                     ? 
                                                    (((IData)(vlSelf->top__DOT__num1) 
                                                      != (IData)(vlSelf->top__DOT__num2))
                                                      ? (IData)(vlSelf->top__DOT__addr)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__pc)))
                                                     : 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->top__DOT__pc))));
                } else if ((1U & (IData)(vlSelf->top__DOT__opcode))) {
                    vlSelf->top__DOT__display_num = vlSelf->top__DOT__num2;
                    __Vdly__top__DOT__pc_next = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__pc)));
                } else {
                    __Vdly__top__DOT__pc_next = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__pc)));
                }
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__state))) {
                if ((2U != (IData)(vlSelf->top__DOT__opcode))) {
                    vlSelf->top__DOT__num2 = vlSelf->top__DOT__data_in;
                }
            } else if ((3U == (IData)(vlSelf->top__DOT__opcode))) {
                vlSelf->top__DOT__num1 = vlSelf->top__DOT__data_in;
            } else if ((0U == (IData)(vlSelf->top__DOT__opcode))) {
                vlSelf->top__DOT__num1 = vlSelf->top__DOT__data_in;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__state))) {
            vlSelf->top__DOT__opcode = (3U & ((IData)(vlSelf->top__DOT__instr) 
                                              >> 6U));
            vlSelf->top__DOT__rd = (3U & ((IData)(vlSelf->top__DOT__instr) 
                                          >> 4U));
            vlSelf->top__DOT__addr = (0xfU & ((IData)(vlSelf->top__DOT__instr) 
                                              >> 2U));
            vlSelf->top__DOT__rs1 = (3U & ((IData)(vlSelf->top__DOT__instr) 
                                           >> 2U));
            vlSelf->top__DOT__rs2 = (3U & (IData)(vlSelf->top__DOT__instr));
            vlSelf->top__DOT__imm = (0xfU & (IData)(vlSelf->top__DOT__instr));
        } else {
            vlSelf->top__DOT__instr = vlSelf->top__DOT__mem_out;
        }
        vlSelf->top__DOT__state = vlSelf->top__DOT__next;
    }
    vlSelf->top__DOT__pc_next = __Vdly__top__DOT__pc_next;
    vlSelf->top__DOT__pc = __Vdly__top__DOT__pc;
    vlSelf->display_PC = vlSelf->top__DOT__pc;
    vlSelf->top__DOT__mem_out = vlSelf->top__DOT__memory__DOT__mem
        [vlSelf->top__DOT__pc];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->top__DOT__display_num));
    vlSelf->h1 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->top__DOT__display_num) 
                            >> 4U));
    vlSelf->h2 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx2];
    vlSelf->top__DOT__next = ((5U == (IData)(vlSelf->top__DOT__state))
                               ? 0U : (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__state))));
    vlSelf->top__DOT__we = 0U;
    vlSelf->top__DOT__write_addr = 0U;
    vlSelf->top__DOT__data_out = 0U;
    if ((2U != (IData)(vlSelf->top__DOT__state))) {
        if ((3U != (IData)(vlSelf->top__DOT__state))) {
            if ((4U == (IData)(vlSelf->top__DOT__state))) {
                if ((0U == (IData)(vlSelf->top__DOT__opcode))) {
                    vlSelf->top__DOT__we = 1U;
                    vlSelf->top__DOT__write_addr = vlSelf->top__DOT__rd;
                    vlSelf->top__DOT__result = (0xffU 
                                                & ((IData)(vlSelf->top__DOT__num1) 
                                                   + (IData)(vlSelf->top__DOT__num2)));
                    vlSelf->top__DOT__data_out = vlSelf->top__DOT__result;
                } else if ((2U == (IData)(vlSelf->top__DOT__opcode))) {
                    vlSelf->top__DOT__we = 1U;
                    vlSelf->top__DOT__write_addr = vlSelf->top__DOT__rd;
                    vlSelf->top__DOT__data_out = vlSelf->top__DOT__imm;
                }
            }
        }
    }
    vlSelf->top__DOT__read_addr = 0U;
    if ((2U == (IData)(vlSelf->top__DOT__state))) {
        if ((3U == (IData)(vlSelf->top__DOT__opcode))) {
            vlSelf->top__DOT__read_addr = 0U;
        } else if ((0U == (IData)(vlSelf->top__DOT__opcode))) {
            vlSelf->top__DOT__read_addr = vlSelf->top__DOT__rs1;
        }
    } else if ((3U == (IData)(vlSelf->top__DOT__state))) {
        if ((2U != (IData)(vlSelf->top__DOT__opcode))) {
            vlSelf->top__DOT__read_addr = vlSelf->top__DOT__rs2;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__data_in = vlSelf->top__DOT__gpr__DOT__ram
        [vlSelf->top__DOT__read_addr];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.v", 31, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.v", 31, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
