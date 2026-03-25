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

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_ha68cf5eb_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__gpr__DOT__regs__v0;
    __Vdlyvdim0__top__DOT__gpr__DOT__regs__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__gpr__DOT__regs__v0;
    __Vdlyvval__top__DOT__gpr__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__gpr__DOT__regs__v0;
    __Vdlyvset__top__DOT__gpr__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__gpr__DOT__regs__v0 = 0U;
    if (((0U == (3U & ((IData)(vlSelf->top__DOT__instr) 
                       >> 6U))) | (2U == (3U & ((IData)(vlSelf->top__DOT__instr) 
                                                >> 6U))))) {
        __Vdlyvval__top__DOT__gpr__DOT__regs__v0 = 
            (0xffU & ((0U == (3U & ((IData)(vlSelf->top__DOT__instr) 
                                    >> 6U))) ? ((IData)(vlSelf->top__DOT__rdata1) 
                                                + (IData)(vlSelf->top__DOT__rdata2))
                       : ((2U == (3U & ((IData)(vlSelf->top__DOT__instr) 
                                        >> 6U))) ? 
                          (0xfU & (IData)(vlSelf->top__DOT__instr))
                           : 0U)));
        __Vdlyvset__top__DOT__gpr__DOT__regs__v0 = 1U;
        __Vdlyvdim0__top__DOT__gpr__DOT__regs__v0 = 
            (3U & ((IData)(vlSelf->top__DOT__instr) 
                   >> 4U));
    }
    if ((1U == (3U & ((IData)(vlSelf->top__DOT__instr) 
                      >> 6U)))) {
        vlSelf->top__DOT__display_num = vlSelf->top__DOT__rdata2;
    }
    if (__Vdlyvset__top__DOT__gpr__DOT__regs__v0) {
        vlSelf->top__DOT__gpr__DOT__regs[__Vdlyvdim0__top__DOT__gpr__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__gpr__DOT__regs__v0;
    }
    vlSelf->debug0 = vlSelf->top__DOT__gpr__DOT__regs
        [0U];
    vlSelf->debug1 = vlSelf->top__DOT__gpr__DOT__regs
        [1U];
    vlSelf->debug2 = vlSelf->top__DOT__gpr__DOT__regs
        [2U];
    vlSelf->debug3 = vlSelf->top__DOT__gpr__DOT__regs
        [3U];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->top__DOT__display_num));
    vlSelf->h1 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->top__DOT__display_num) 
                            >> 4U));
    vlSelf->h2 = Vtop__ConstPool__TABLE_ha68cf5eb_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__pc = ((IData)(vlSelf->rst) ? 0U
                             : (IData)(vlSelf->top__DOT__pc_next));
    vlSelf->display_PC = vlSelf->top__DOT__pc;
    vlSelf->top__DOT__instr = vlSelf->top__DOT__rom__DOT__mem
        [vlSelf->top__DOT__pc];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rdata2 = vlSelf->top__DOT__gpr__DOT__regs
        [(3U & (IData)(vlSelf->top__DOT__instr))];
    vlSelf->top__DOT__rdata1 = vlSelf->top__DOT__gpr__DOT__regs
        [((3U == (3U & ((IData)(vlSelf->top__DOT__instr) 
                        >> 6U))) ? 0U : (3U & ((IData)(vlSelf->top__DOT__instr) 
                                               >> 2U)))];
    vlSelf->top__DOT__pc_next = (0xfU & ((IData)(((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->top__DOT__instr))) 
                                                  & ((IData)(vlSelf->top__DOT__rdata1) 
                                                     != (IData)(vlSelf->top__DOT__rdata2))))
                                          ? (0xfU & 
                                             ((IData)(vlSelf->top__DOT__instr) 
                                              >> 2U))
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->top__DOT__pc))));
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
                    VL_FATAL_MT("top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("top.v", 1, "", "NBA region did not converge.");
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
