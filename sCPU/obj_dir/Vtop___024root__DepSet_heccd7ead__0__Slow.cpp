// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h375dd916__0;
    // Body
    __Vtemp_h375dd916__0[0U] = 0x2e686578U;
    __Vtemp_h375dd916__0[1U] = 0x2f726f6dU;
    __Vtemp_h375dd916__0[2U] = 0x2eU;
    VL_READMEM_N(true, 8, 16, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h375dd916__0)
                 ,  &(vlSelf->top__DOT__memory__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.v", 169, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_ha68cf5eb_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vtop__ConstPool__TABLE_h92d2c765_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->top__DOT__finish_bner0 = 0U;
    vlSelf->top__DOT__we_add = 0U;
    vlSelf->top__DOT__finish_add = 0U;
    vlSelf->display_PC = vlSelf->top__DOT__PC;
    vlSelf->rom_debug0 = vlSelf->top__DOT__memory__DOT__mem
        [0U];
    vlSelf->rom_debug1 = vlSelf->top__DOT__memory__DOT__mem
        [1U];
    vlSelf->rom_debug2 = vlSelf->top__DOT__memory__DOT__mem
        [2U];
    vlSelf->rom_debug3 = vlSelf->top__DOT__memory__DOT__mem
        [3U];
    vlSelf->debug0 = vlSelf->top__DOT__gpr__DOT__ram
        [0U];
    vlSelf->debug1 = vlSelf->top__DOT__gpr__DOT__ram
        [1U];
    vlSelf->debug2 = vlSelf->top__DOT__gpr__DOT__ram
        [2U];
    vlSelf->debug3 = vlSelf->top__DOT__gpr__DOT__ram
        [3U];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__ins_out__DOT__display_num));
    vlSelf->h1 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__ins_out__DOT__display_num) 
                            >> 4U));
    vlSelf->h2 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx3];
    vlSelf->top__DOT__mem_out = vlSelf->top__DOT__memory__DOT__mem
        [vlSelf->top__DOT__PC];
    vlSelf->top__DOT__write_addr_add = 0U;
    vlSelf->top__DOT__read_addr_bner0 = 0U;
    vlSelf->top__DOT__read_addr_add = 0U;
    __Vtableidx1 = vlSelf->top__DOT__mem_out;
    vlSelf->top__DOT__en = Vtop__ConstPool__TABLE_h92d2c765_0
        [__Vtableidx1];
    if ((0U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
        vlSelf->top__DOT__read_addr_add = (3U & ((IData)(vlSelf->top__DOT__mem_out) 
                                                 >> 2U));
        vlSelf->top__DOT__ins_add__DOT__next = ((1U 
                                                 & (IData)(vlSelf->top__DOT__en))
                                                 ? 2U
                                                 : 0U);
    } else if ((2U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
        vlSelf->top__DOT__read_addr_add = (3U & (IData)(vlSelf->top__DOT__mem_out));
        vlSelf->top__DOT__ins_add__DOT__next = 3U;
    } else {
        if ((3U != (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
            vlSelf->top__DOT__read_addr_add = 0U;
        }
        vlSelf->top__DOT__ins_add__DOT__next = 0U;
    }
    if ((0U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
        vlSelf->top__DOT__read_addr_bner0 = 0U;
        vlSelf->top__DOT__ins_bner0__DOT__next = ((4U 
                                                   & (IData)(vlSelf->top__DOT__en))
                                                   ? 1U
                                                   : 0U);
    } else {
        if ((1U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
            vlSelf->top__DOT__read_addr_bner0 = (3U 
                                                 & (IData)(vlSelf->top__DOT__mem_out));
        }
        vlSelf->top__DOT__ins_bner0__DOT__next = 0U;
    }
    vlSelf->top__DOT__data_out_add = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
        if ((2U != (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
            if ((3U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
                vlSelf->top__DOT__we_add = 1U;
                vlSelf->top__DOT__finish_add = 1U;
                vlSelf->top__DOT__write_addr_add = 
                    (3U & ((IData)(vlSelf->top__DOT__mem_out) 
                           >> 4U));
                vlSelf->top__DOT__data_out_add = (0xffU 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->top__DOT__en)))) 
                                                      & (IData)(vlSelf->top__DOT__ins_add__DOT__rs1_num)) 
                                                     + 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->top__DOT__en)))) 
                                                      & (IData)(vlSelf->top__DOT__ins_add__DOT__rs2_num))));
            } else {
                vlSelf->top__DOT__we_add = 0U;
                vlSelf->top__DOT__finish_add = 0U;
                vlSelf->top__DOT__write_addr_add = 0U;
                vlSelf->top__DOT__data_out_add = 0U;
            }
        }
    }
    vlSelf->top__DOT__data_in = vlSelf->top__DOT__gpr__DOT__ram
        [(3U & (((IData)(vlSelf->top__DOT__read_addr_add) 
                 & (- (IData)((1U & (IData)(vlSelf->top__DOT__en))))) 
                | (((IData)(vlSelf->top__DOT__read_addr_bner0) 
                    & (- (IData)((1U & ((IData)(vlSelf->top__DOT__en) 
                                        >> 2U))))) 
                   | ((IData)(vlSelf->top__DOT__mem_out) 
                      & (- (IData)((1U & ((IData)(vlSelf->top__DOT__en) 
                                          >> 3U))))))))];
    vlSelf->top__DOT__update_bner0 = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
            vlSelf->top__DOT__finish_bner0 = 1U;
            vlSelf->top__DOT__update_bner0 = ((IData)(vlSelf->top__DOT__ins_bner0__DOT__r0_num) 
                                              != (IData)(vlSelf->top__DOT__data_in));
        }
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->h1 = VL_RAND_RESET_I(7);
    vlSelf->h2 = VL_RAND_RESET_I(7);
    vlSelf->display_PC = VL_RAND_RESET_I(4);
    vlSelf->debug0 = VL_RAND_RESET_I(8);
    vlSelf->debug1 = VL_RAND_RESET_I(8);
    vlSelf->debug2 = VL_RAND_RESET_I(8);
    vlSelf->debug3 = VL_RAND_RESET_I(8);
    vlSelf->rom_debug0 = VL_RAND_RESET_I(8);
    vlSelf->rom_debug1 = VL_RAND_RESET_I(8);
    vlSelf->rom_debug2 = VL_RAND_RESET_I(8);
    vlSelf->rom_debug3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__en = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__finish_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__finish_bner0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__update_bner0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__write_addr_add = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__read_addr_add = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__read_addr_bner0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__data_out_add = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__we_add = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__gpr__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__ins_out__DOT__display_num = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins_bner0__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ins_bner0__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ins_bner0__DOT__r0_num = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins_add__DOT__rs1_num = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins_add__DOT__rs2_num = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ins_add__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ins_add__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
}
