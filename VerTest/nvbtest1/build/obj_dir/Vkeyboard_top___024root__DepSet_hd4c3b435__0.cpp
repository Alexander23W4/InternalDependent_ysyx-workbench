// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_top.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard_top___024root.h"

void Vkeyboard_top___024root___eval_act(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vkeyboard_top___024root___nba_sequent__TOP__0(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count = 0;
    CData/*2:0*/ __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__overflow;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__overflow = 0;
    CData/*2:0*/ __Vdlyvdim0__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0;
    __Vdlyvdim0__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0;
    __Vdlyvval__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0;
    __Vdlyvset__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 = 0;
    // Body
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync 
        = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync;
    vlSelf->__Vdly__ready = vlSelf->ready;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__overflow 
        = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__overflow;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr 
        = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count 
        = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr 
        = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr;
    __Vdlyvset__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 = 0U;
    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count = 0U;
        __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr = 0U;
        __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr = 0U;
        __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__overflow = 0U;
        vlSelf->__Vdly__ready = 0U;
    } else {
        if (vlSelf->ready) {
            if ((1U & (~ (IData)(vlSelf->keyboard_top__DOT__nextdata_n)))) {
                __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr)));
                if (((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr))))) {
                    vlSelf->__Vdly__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count))) {
                if ((((~ (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0 
                        = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr;
                    vlSelf->__Vdly__ready = 1U;
                    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr)));
                    __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__overflow 
                        = ((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__overflow) 
                           | ((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr)))));
                }
                __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count = 0U;
            } else {
                vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT____Vlvbound_h590903c5__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count))) {
                    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count))) 
                            & (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT____Vlvbound_h590903c5__0) 
                                        << (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count))));
                }
                __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count)));
            }
        }
    }
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count 
        = __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__count;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr 
        = __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__overflow 
        = __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__overflow;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync 
        = __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr 
        = __Vdly__keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr;
    if (__Vdlyvset__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0) {
        vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__fifo[__Vdlyvdim0__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0] 
            = __Vdlyvval__keyboard_top__DOT__ps2_kbd_inst__DOT__fifo__v0;
    }
}

VL_INLINE_OPT void Vkeyboard_top___024root___nba_sequent__TOP__1(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag;
    __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag = 0;
    // Body
    __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag 
        = vlSelf->keyboard_top__DOT__receiver_inst__DOT__break_flag;
    if (vlSelf->rst) {
        vlSelf->ascii = 0U;
        __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag = 0U;
    } else if (vlSelf->ready) {
        if ((0xf0U == (IData)(vlSelf->keyboard_top__DOT__data))) {
            __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag = 1U;
        } else if (vlSelf->keyboard_top__DOT__receiver_inst__DOT__break_flag) {
            __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag = 0U;
        } else {
            vlSelf->ascii = vlSelf->keyboard_top__DOT__receiver_inst__DOT__ascii_lut;
        }
    }
    vlSelf->keyboard_top__DOT__nextdata_n = (1U & ((IData)(vlSelf->rst) 
                                                   | (~ (IData)(vlSelf->ready))));
    vlSelf->keyboard_top__DOT__receiver_inst__DOT__break_flag 
        = __Vdly__keyboard_top__DOT__receiver_inst__DOT__break_flag;
}

extern const VlUnpacked<CData/*7:0*/, 256> Vkeyboard_top__ConstPool__TABLE_h06476a8b_0;

VL_INLINE_OPT void Vkeyboard_top___024root___nba_sequent__TOP__2(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->keyboard_top__DOT__data = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__fifo
        [vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr];
    vlSelf->ready = vlSelf->__Vdly__ready;
    __Vtableidx1 = vlSelf->keyboard_top__DOT__data;
    vlSelf->keyboard_top__DOT__receiver_inst__DOT__ascii_lut 
        = Vkeyboard_top__ConstPool__TABLE_h06476a8b_0
        [__Vtableidx1];
}

void Vkeyboard_top___024root___eval_nba(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vkeyboard_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vkeyboard_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vkeyboard_top___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vkeyboard_top___024root___eval_triggers__act(Vkeyboard_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___dump_triggers__act(Vkeyboard_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___dump_triggers__nba(Vkeyboard_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vkeyboard_top___024root___eval(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval\n"); );
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
            Vkeyboard_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vkeyboard_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/keyboard_top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vkeyboard_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vkeyboard_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/keyboard_top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vkeyboard_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vkeyboard_top___024root___eval_debug_assertions(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
