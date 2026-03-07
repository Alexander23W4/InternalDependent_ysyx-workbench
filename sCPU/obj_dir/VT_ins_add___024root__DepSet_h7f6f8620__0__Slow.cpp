// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VT_ins_add.h for the primary calling header

#include "verilated.h"

#include "VT_ins_add___024root.h"

VL_ATTR_COLD void VT_ins_add___024root___eval_static(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_static\n"); );
}

VL_ATTR_COLD void VT_ins_add___024root___eval_initial__TOP(VT_ins_add___024root* vlSelf);

VL_ATTR_COLD void VT_ins_add___024root___eval_initial(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_initial\n"); );
    // Body
    VT_ins_add___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VT_ins_add___024root___eval_initial__TOP(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h405f8b63__0;
    // Body
    __Vtemp_h405f8b63__0[0U] = 0x2e686578U;
    __Vtemp_h405f8b63__0[1U] = 0x5f72616dU;
    __Vtemp_h405f8b63__0[2U] = 0x65627567U;
    __Vtemp_h405f8b63__0[3U] = 0x74732f64U;
    __Vtemp_h405f8b63__0[4U] = 0x2f546573U;
    __Vtemp_h405f8b63__0[5U] = 0x2eU;
    VL_READMEM_N(true, 8, 4, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_h405f8b63__0)
                 ,  &(vlSelf->T_ins_add__DOT__gpr__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VT_ins_add___024root___eval_final(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_final\n"); );
}

VL_ATTR_COLD void VT_ins_add___024root___eval_triggers__stl(VT_ins_add___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__stl(VT_ins_add___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___eval_stl(VT_ins_add___024root* vlSelf);

VL_ATTR_COLD void VT_ins_add___024root___eval_settle(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VT_ins_add___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VT_ins_add___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("RTL/Tests/T_ins_add.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VT_ins_add___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__stl(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VT_ins_add___024root___stl_sequent__TOP__0(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->T_ins_add__DOT__we = 0U;
    vlSelf->finish = 0U;
    vlSelf->dbg0 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [0U];
    vlSelf->dbg1 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [1U];
    vlSelf->dbg2 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [2U];
    vlSelf->dbg3 = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [3U];
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
    vlSelf->T_ins_add__DOT__data_in = vlSelf->T_ins_add__DOT__gpr__DOT__ram
        [vlSelf->T_ins_add__DOT__read_addr];
}

VL_ATTR_COLD void VT_ins_add___024root___eval_stl(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VT_ins_add___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__ico(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__act(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VT_ins_add___024root___dump_triggers__nba(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VT_ins_add___024root___ctor_var_reset(VT_ins_add___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VT_ins_add__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VT_ins_add___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->rs1 = VL_RAND_RESET_I(2);
    vlSelf->rs2 = VL_RAND_RESET_I(2);
    vlSelf->rd = VL_RAND_RESET_I(2);
    vlSelf->finish = VL_RAND_RESET_I(1);
    vlSelf->dbg0 = VL_RAND_RESET_I(8);
    vlSelf->dbg1 = VL_RAND_RESET_I(8);
    vlSelf->dbg2 = VL_RAND_RESET_I(8);
    vlSelf->dbg3 = VL_RAND_RESET_I(8);
    vlSelf->T_ins_add__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->T_ins_add__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->T_ins_add__DOT__read_addr = VL_RAND_RESET_I(2);
    vlSelf->T_ins_add__DOT__write_addr = VL_RAND_RESET_I(2);
    vlSelf->T_ins_add__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->T_ins_add__DOT__ins_add__DOT__rs1_num = VL_RAND_RESET_I(8);
    vlSelf->T_ins_add__DOT__ins_add__DOT__rs2_num = VL_RAND_RESET_I(8);
    vlSelf->T_ins_add__DOT__ins_add__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->T_ins_add__DOT__ins_add__DOT__next = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->T_ins_add__DOT__gpr__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
}
