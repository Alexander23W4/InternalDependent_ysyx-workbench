// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode.h for the primary calling header

#include "verilated.h"

#include "Vdecode___024root.h"

VL_ATTR_COLD void Vdecode___024root___eval_static(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdecode___024root___eval_initial(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vdecode___024root___eval_final(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdecode___024root___eval_triggers__stl(Vdecode___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__stl(Vdecode___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___eval_stl(Vdecode___024root* vlSelf);

VL_ATTR_COLD void Vdecode___024root___eval_settle(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdecode___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vdecode___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("test_v/decode.v", 33, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdecode___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__stl(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdecode___024root___ico_sequent__TOP__0(Vdecode___024root* vlSelf);

VL_ATTR_COLD void Vdecode___024root___eval_stl(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vdecode___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__ico(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__act(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__nba(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecode___024root___ctor_var_reset(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->addi = VL_RAND_RESET_I(1);
    vlSelf->add = VL_RAND_RESET_I(1);
    vlSelf->jalr = VL_RAND_RESET_I(1);
    vlSelf->lui = VL_RAND_RESET_I(1);
    vlSelf->lw = VL_RAND_RESET_I(1);
    vlSelf->lbu = VL_RAND_RESET_I(1);
    vlSelf->sw = VL_RAND_RESET_I(1);
    vlSelf->sb = VL_RAND_RESET_I(1);
    vlSelf->ebreak = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->immI = VL_RAND_RESET_I(32);
    vlSelf->immU = VL_RAND_RESET_I(32);
    vlSelf->immS = VL_RAND_RESET_I(32);
}
