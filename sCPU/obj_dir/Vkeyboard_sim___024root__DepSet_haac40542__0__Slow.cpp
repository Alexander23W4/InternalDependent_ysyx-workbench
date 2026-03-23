// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkeyboard_sim.h for the primary calling header

#include "verilated.h"

#include "Vkeyboard_sim___024root.h"

VL_ATTR_COLD void Vkeyboard_sim___024root___eval_static(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vkeyboard_sim___024root___eval_initial__TOP(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->keyboard_sim__DOT__kbd_clk = 1U;
}

VL_ATTR_COLD void Vkeyboard_sim___024root___eval_final(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vkeyboard_sim___024root___eval_triggers__stl(Vkeyboard_sim___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_sim___024root___dump_triggers__stl(Vkeyboard_sim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vkeyboard_sim___024root___eval_stl(Vkeyboard_sim___024root* vlSelf);

VL_ATTR_COLD void Vkeyboard_sim___024root___eval_settle(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vkeyboard_sim___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vkeyboard_sim___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("RTL/Tests/keyboard_sim.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vkeyboard_sim___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_sim___024root___dump_triggers__stl(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 256> Vkeyboard_sim__ConstPool__TABLE_h06476a8b_0;

VL_ATTR_COLD void Vkeyboard_sim___024root___stl_sequent__TOP__0(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->keyboard_sim__DOT____Vcellinp__receiver_inst__rst 
        = (1U & (~ (IData)(vlSelf->keyboard_sim__DOT__clrn)));
    vlSelf->keyboard_sim__DOT__data = vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__fifo
        [vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__r_ptr];
    __Vtableidx1 = vlSelf->keyboard_sim__DOT__data;
    vlSelf->keyboard_sim__DOT__receiver_inst__DOT__ascii_lut 
        = Vkeyboard_sim__ConstPool__TABLE_h06476a8b_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vkeyboard_sim___024root___eval_stl(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vkeyboard_sim___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_sim___024root___dump_triggers__act(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge keyboard_sim.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge keyboard_sim.__Vcellinp__receiver_inst__rst or posedge keyboard_sim.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vkeyboard_sim___024root___dump_triggers__nba(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge keyboard_sim.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge keyboard_sim.__Vcellinp__receiver_inst__rst or posedge keyboard_sim.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vkeyboard_sim___024root___ctor_var_reset(Vkeyboard_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkeyboard_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkeyboard_sim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->keyboard_sim__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__clrn = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__data = VL_RAND_RESET_I(8);
    vlSelf->keyboard_sim__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__kbd_clk = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__kbd_data = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__ascii = VL_RAND_RESET_I(8);
    vlSelf->keyboard_sim__DOT__nextdata_n = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT____Vcellinp__receiver_inst__rst = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__model__DOT__kbd_sendcode__Vstatic__send_buffer = VL_RAND_RESET_I(11);
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__buffer = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__w_ptr = VL_RAND_RESET_I(3);
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__r_ptr = VL_RAND_RESET_I(3);
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT__ps2_clk_sync = VL_RAND_RESET_I(3);
    vlSelf->keyboard_sim__DOT__ps2_kbd_inst__DOT____Vlvbound_h1a91ade8__0 = VL_RAND_RESET_I(1);
    vlSelf->keyboard_sim__DOT__receiver_inst__DOT__ascii_lut = VL_RAND_RESET_I(8);
    vlSelf->keyboard_sim__DOT__receiver_inst__DOT__break_flag = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__keyboard_sim__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__keyboard_sim__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__keyboard_sim__DOT____Vcellinp__receiver_inst__rst = VL_RAND_RESET_I(1);
}
