// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VT_ins_add.h for the primary calling header

#include "verilated.h"

#include "VT_ins_add___024root.h"

VL_INLINE_OPT void VT_ins_add___024root___ico_sequent__TOP__0(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->T_ins_add__DOT__write_addr = 0U;
    if ((0U != (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        if ((2U != (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
            vlSelf->T_ins_add__DOT__write_addr = ((3U 
                                                   == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))
                                                   ? (IData)(vlSelf->rd)
                                                   : 0U);
        }
    }
    vlSelf->T_ins_add__DOT__read_addr = 0U;
    if ((0U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        vlSelf->T_ins_add__DOT__read_addr = vlSelf->rs1;
    } else if ((2U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        vlSelf->T_ins_add__DOT__read_addr = vlSelf->rs2;
    } else if ((3U != (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        vlSelf->T_ins_add__DOT__read_addr = 0U;
    }
    vlSelf->T_ins_add__DOT__data_in = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [vlSelf->T_ins_add__DOT__read_addr];
}

void VT_ins_add___024root___eval_ico(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VT_ins_add___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VT_ins_add___024root___eval_act(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_act\n"); );
}

VL_INLINE_OPT void VT_ins_add___024root___nba_sequent__TOP__0(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__T_ins_add__DOT__gpr__DOT__ram__v0;
    __Vdlyvdim0__T_ins_add__DOT__gpr__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__T_ins_add__DOT__gpr__DOT__ram__v0;
    __Vdlyvval__T_ins_add__DOT__gpr__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__T_ins_add__DOT__gpr__DOT__ram__v0;
    __Vdlyvset__T_ins_add__DOT__gpr__DOT__ram__v0 = 0;
    // Body
    __Vdlyvset__T_ins_add__DOT__gpr__DOT__ram__v0 = 0U;
    if (vlSelf->T_ins_add__DOT__we) {
        __Vdlyvval__T_ins_add__DOT__gpr__DOT__ram__v0 
            = vlSelf->T_ins_add__DOT__data_out;
        __Vdlyvset__T_ins_add__DOT__gpr__DOT__ram__v0 = 1U;
        __Vdlyvdim0__T_ins_add__DOT__gpr__DOT__ram__v0 
            = vlSelf->T_ins_add__DOT__write_addr;
    }
    if (__Vdlyvset__T_ins_add__DOT__gpr__DOT__ram__v0) {
        vlSelf->T_ins_add__DOT__gpr__DOT__ram[__Vdlyvdim0__T_ins_add__DOT__gpr__DOT__ram__v0] 
            = __Vdlyvval__T_ins_add__DOT__gpr__DOT__ram__v0;
    }
    vlSelf->dbg0 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [0U];
    vlSelf->dbg1 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [1U];
    vlSelf->dbg2 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [2U];
    vlSelf->dbg3 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [3U];
}

VL_INLINE_OPT void VT_ins_add___024root___nba_sequent__TOP__1(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->T_ins_add__DOT__ins_add__DOT__rs1_num = 0U;
        vlSelf->T_ins_add__DOT__ins_add__DOT__rs2_num = 0U;
        vlSelf->T_ins_add__DOT__ins_add__DOT__state = 0U;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
            vlSelf->T_ins_add__DOT__ins_add__DOT__rs1_num 
                = vlSelf->T_ins_add__DOT__data_in;
        }
        if ((2U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
            vlSelf->T_ins_add__DOT__ins_add__DOT__rs2_num 
                = vlSelf->T_ins_add__DOT__data_in;
        }
        vlSelf->T_ins_add__DOT__ins_add__DOT__state 
            = vlSelf->T_ins_add__DOT__ins_add__DOT__next;
    }
    vlSelf->T_ins_add__DOT__we = 0U;
    vlSelf->finish = 0U;
    vlSelf->T_ins_add__DOT__write_addr = 0U;
    vlSelf->T_ins_add__DOT__data_out = 0U;
    if ((0U != (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        if ((2U != (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
            if ((3U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
                vlSelf->T_ins_add__DOT__we = 1U;
                vlSelf->finish = 1U;
                vlSelf->T_ins_add__DOT__write_addr 
                    = vlSelf->rd;
                vlSelf->T_ins_add__DOT__data_out = 
                    (0xffU & ((IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__rs1_num) 
                              + (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__rs2_num)));
            } else {
                vlSelf->T_ins_add__DOT__we = 0U;
                vlSelf->finish = 0U;
                vlSelf->T_ins_add__DOT__write_addr = 0U;
                vlSelf->T_ins_add__DOT__data_out = 0U;
            }
        }
    }
    vlSelf->T_ins_add__DOT__read_addr = 0U;
    if ((0U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        vlSelf->T_ins_add__DOT__ins_add__DOT__next = 2U;
        vlSelf->T_ins_add__DOT__read_addr = vlSelf->rs1;
    } else if ((2U == (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
        vlSelf->T_ins_add__DOT__ins_add__DOT__next = 3U;
        vlSelf->T_ins_add__DOT__read_addr = vlSelf->rs2;
    } else {
        vlSelf->T_ins_add__DOT__ins_add__DOT__next = 0U;
        if ((3U != (IData)(vlSelf->T_ins_add__DOT__ins_add__DOT__state))) {
            vlSelf->T_ins_add__DOT__read_addr = 0U;
        }
    }
}

VL_INLINE_OPT void VT_ins_add___024root___nba_comb__TOP__0(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->T_ins_add__DOT__data_in = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [vlSelf->T_ins_add__DOT__read_addr];
}

void VT_ins_add___024root___eval_nba(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VT_ins_add___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VT_ins_add___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VT_ins_add___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VT_ins_add___024root___eval_triggers__ico(VT_ins_add___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__ico(VT_ins_add___024root* vlSelf);
#endif  // VL_DEBUG
void VT_ins_add___024root___eval_triggers__act(VT_ins_add___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__act(VT_ins_add___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__nba(VT_ins_add___024root* vlSelf);
#endif  // VL_DEBUG

void VT_ins_add___024root___eval(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VT_ins_add___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VT_ins_add___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("RTL/Tests/T_ins_add.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VT_ins_add___024root___eval_ico(vlSelf);
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
            VT_ins_add___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VT_ins_add___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("RTL/Tests/T_ins_add.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VT_ins_add___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VT_ins_add___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("RTL/Tests/T_ins_add.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VT_ins_add___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VT_ins_add___024root___eval_debug_assertions(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->rs1 & 0xfcU))) {
        Verilated::overWidthError("rs1");}
    if (VL_UNLIKELY((vlSelf->rs2 & 0xfcU))) {
        Verilated::overWidthError("rs2");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfcU))) {
        Verilated::overWidthError("rd");}
}
#endif  // VL_DEBUG
