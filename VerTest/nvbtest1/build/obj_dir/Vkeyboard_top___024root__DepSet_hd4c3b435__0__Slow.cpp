// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_top.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard_top___024root.h"

VL_ATTR_COLD void Vkeyboard_top___024root___eval_static(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vkeyboard_top___024root___eval_initial(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vkeyboard_top___024root___eval_final(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vkeyboard_top___024root___eval_triggers__stl(Vkeyboard_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___dump_triggers__stl(Vkeyboard_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___eval_stl(Vkeyboard_top___024root* vlSelf);

VL_ATTR_COLD void Vkeyboard_top___024root___eval_settle(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vkeyboard_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vkeyboard_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wang/InternalDependent_ysyx-workbench/VerTest/nvbtest1/vsrc/keyboard_top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vkeyboard_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___dump_triggers__stl(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 256> Vkeyboard_top__ConstPool__TABLE_h06476a8b_0;

VL_ATTR_COLD void Vkeyboard_top___024root___stl_sequent__TOP__0(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->keyboard_top__DOT__data = vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__fifo
        [vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr];
    __Vtableidx1 = vlSelf->keyboard_top__DOT__data;
    vlSelf->keyboard_top__DOT__receiver_inst__DOT__ascii_lut 
        = Vkeyboard_top__ConstPool__TABLE_h06476a8b_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vkeyboard_top___024root___eval_stl(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vkeyboard_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___dump_triggers__act(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_top___024root___dump_triggers__nba(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkeyboard_top___024root___ctor_var_reset(Vkeyboard_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->ascii = 0;
    vlSelf->ready = 0;
    vlSelf->keyboard_top__DOT__data = 0;
    vlSelf->keyboard_top__DOT__nextdata_n = 0;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__overflow = 0;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__buffer = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__w_ptr = 0;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__r_ptr = 0;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__count = 0;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT__ps2_clk_sync = 0;
    vlSelf->keyboard_top__DOT__ps2_kbd_inst__DOT____Vlvbound_h590903c5__0 = 0;
    vlSelf->keyboard_top__DOT__receiver_inst__DOT__ascii_lut = 0;
    vlSelf->keyboard_top__DOT__receiver_inst__DOT__break_flag = 0;
    vlSelf->__Vdly__ready = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
}
