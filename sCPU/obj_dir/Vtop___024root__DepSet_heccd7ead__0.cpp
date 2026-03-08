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
    if ((1U & (((IData)(vlSelf->top__DOT__we_add) & (IData)(vlSelf->top__DOT__en)) 
               | ((IData)(vlSelf->top__DOT__en) >> 1U)))) {
        __Vdlyvval__top__DOT__gpr__DOT__ram__v0 = (
                                                   ((IData)(vlSelf->top__DOT__data_out_add) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->top__DOT__en))))) 
                                                   | (0xfU 
                                                      & ((IData)(vlSelf->top__DOT__mem_out) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__en) 
                                                                          >> 1U)))))));
        __Vdlyvset__top__DOT__gpr__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__gpr__DOT__ram__v0 = 
            (3U & (((IData)(vlSelf->top__DOT__write_addr_add) 
                    & (- (IData)((1U & (IData)(vlSelf->top__DOT__en))))) 
                   | (((IData)(vlSelf->top__DOT__mem_out) 
                       >> 4U) & (- (IData)((1U & ((IData)(vlSelf->top__DOT__en) 
                                                  >> 1U)))))));
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
extern const VlUnpacked<CData/*3:0*/, 256> Vtop__ConstPool__TABLE_h92d2c765_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vdly__top__DOT__PC;
    __Vdly__top__DOT__PC = 0;
    // Body
    __Vdly__top__DOT__PC = vlSelf->top__DOT__PC;
    if (vlSelf->rst) {
        __Vdly__top__DOT__PC = 0U;
        vlSelf->top__DOT__ins_out__DOT__display_num = 0U;
        vlSelf->top__DOT__ins_bner0__DOT__r0_num = 0U;
        vlSelf->top__DOT__ins_add__DOT__rs1_num = 0U;
        vlSelf->top__DOT__ins_add__DOT__rs2_num = 0U;
        vlSelf->top__DOT__ins_bner0__DOT__state = 0U;
        vlSelf->top__DOT__ins_add__DOT__state = 0U;
    } else {
        if ((1U & ((0U != (0xaU & (IData)(vlSelf->top__DOT__en))) 
                   | (((IData)(vlSelf->top__DOT__finish_add) 
                       & (IData)(vlSelf->top__DOT__en)) 
                      | ((IData)(vlSelf->top__DOT__finish_bner0) 
                         & ((IData)(vlSelf->top__DOT__en) 
                            >> 2U)))))) {
            __Vdly__top__DOT__PC = (0xfU & (((IData)(vlSelf->top__DOT__update_bner0) 
                                             & ((IData)(vlSelf->top__DOT__en) 
                                                >> 2U))
                                             ? ((IData)(vlSelf->top__DOT__mem_out) 
                                                >> 2U)
                                             : ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__PC))));
        }
        if ((8U & (IData)(vlSelf->top__DOT__en))) {
            vlSelf->top__DOT__ins_out__DOT__display_num 
                = vlSelf->top__DOT__data_in;
        }
        if ((0U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
            vlSelf->top__DOT__ins_bner0__DOT__r0_num 
                = vlSelf->top__DOT__data_in;
        }
        if ((0U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
            vlSelf->top__DOT__ins_add__DOT__rs1_num 
                = vlSelf->top__DOT__data_in;
        }
        if ((2U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
            vlSelf->top__DOT__ins_add__DOT__rs2_num 
                = vlSelf->top__DOT__data_in;
        }
        vlSelf->top__DOT__ins_bner0__DOT__state = vlSelf->top__DOT__ins_bner0__DOT__next;
        vlSelf->top__DOT__ins_add__DOT__state = vlSelf->top__DOT__ins_add__DOT__next;
    }
    vlSelf->top__DOT__PC = __Vdly__top__DOT__PC;
    vlSelf->display_PC = vlSelf->top__DOT__PC;
    vlSelf->top__DOT__mem_out = vlSelf->top__DOT__memory__DOT__mem
        [vlSelf->top__DOT__PC];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__ins_out__DOT__display_num));
    vlSelf->h1 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__ins_out__DOT__display_num) 
                            >> 4U));
    vlSelf->h2 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx3];
    __Vtableidx1 = vlSelf->top__DOT__mem_out;
    vlSelf->top__DOT__en = Vtop__ConstPool__TABLE_h92d2c765_0
        [__Vtableidx1];
    vlSelf->top__DOT__finish_bner0 = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
            vlSelf->top__DOT__finish_bner0 = 1U;
        }
    }
    vlSelf->top__DOT__read_addr_bner0 = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
        vlSelf->top__DOT__ins_bner0__DOT__next = ((4U 
                                                   & (IData)(vlSelf->top__DOT__en))
                                                   ? 1U
                                                   : 0U);
        vlSelf->top__DOT__read_addr_bner0 = 0U;
    } else {
        vlSelf->top__DOT__ins_bner0__DOT__next = 0U;
        if ((1U == (IData)(vlSelf->top__DOT__ins_bner0__DOT__state))) {
            vlSelf->top__DOT__read_addr_bner0 = (3U 
                                                 & (IData)(vlSelf->top__DOT__mem_out));
        }
    }
    vlSelf->top__DOT__we_add = 0U;
    vlSelf->top__DOT__finish_add = 0U;
    vlSelf->top__DOT__write_addr_add = 0U;
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
    vlSelf->top__DOT__read_addr_add = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
        vlSelf->top__DOT__ins_add__DOT__next = ((1U 
                                                 & (IData)(vlSelf->top__DOT__en))
                                                 ? 2U
                                                 : 0U);
        vlSelf->top__DOT__read_addr_add = (3U & ((IData)(vlSelf->top__DOT__mem_out) 
                                                 >> 2U));
    } else if ((2U == (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
        vlSelf->top__DOT__ins_add__DOT__next = 3U;
        vlSelf->top__DOT__read_addr_add = (3U & (IData)(vlSelf->top__DOT__mem_out));
    } else {
        vlSelf->top__DOT__ins_add__DOT__next = 0U;
        if ((3U != (IData)(vlSelf->top__DOT__ins_add__DOT__state))) {
            vlSelf->top__DOT__read_addr_add = 0U;
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
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
            vlSelf->top__DOT__update_bner0 = ((IData)(vlSelf->top__DOT__ins_bner0__DOT__r0_num) 
                                              != (IData)(vlSelf->top__DOT__data_in));
        }
    }
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
                    VL_FATAL_MT("top.v", 169, "", "Active region did not converge.");
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
                VL_FATAL_MT("top.v", 169, "", "NBA region did not converge.");
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
