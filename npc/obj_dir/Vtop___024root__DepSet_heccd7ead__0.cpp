// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSelf->reset));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___act_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtop___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*7:0*/ __Vdly__difftest_top__DOT__soc__DOT__psram__DOT__counter;
    __Vdly__difftest_top__DOT__soc__DOT__psram__DOT__counter = 0;
    IData/*21:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 = 0;
    // Body
    __Vdlyvset__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__psram__DOT__counter 
        = vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter;
    if (vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n) {
        __Vdly__difftest_top__DOT__soc__DOT__psram__DOT__counter = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__dout = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state = 0U;
    } else {
        __Vdly__difftest_top__DOT__soc__DOT__psram__DOT__counter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter)));
        if ((((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state)) 
              | (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__CMD_LAST)))) {
            vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                    ? (((~ ((IData)(0xfU) << (7U & 
                                              (((IData)(7U) 
                                                - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                                                   << 2U)) 
                                               - (IData)(3U))))) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl)) 
                       | (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT___dio_wire) 
                                   << (7U & (((IData)(7U) 
                                              - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                                                 << 2U)) 
                                             - (IData)(3U))))))
                    : (((~ ((IData)(1U) << (7U & ((IData)(7U) 
                                                  - (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter))))) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl)) 
                       | (0xffU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT___dio_wire)) 
                                   << (7U & ((IData)(7U) 
                                             - (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter)))))));
        }
        if ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state)) 
              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                 >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_FIRST))) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_LAST)))) {
            vlSelf->difftest_top__DOT__soc__DOT__psram__DOT____Vlvbound_hbae54c47__0 
                = vlSelf->difftest_top__DOT__soc__DOT___dio_wire;
            if ((0x17U >= (0x1fU & (((IData)(0x17U) 
                                     - (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                                         - (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_FIRST)) 
                                        << 2U)) - (IData)(3U))))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr 
                    = (((~ ((IData)(0xfU) << (0x1fU 
                                              & (((IData)(0x17U) 
                                                  - 
                                                  (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                                                    - (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_FIRST)) 
                                                   << 2U)) 
                                                 - (IData)(3U))))) 
                        & vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr) 
                       | (0xffffffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT____Vlvbound_hbae54c47__0) 
                                       << (0x1fU & 
                                           (((IData)(0x17U) 
                                             - (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                                                 - (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_FIRST)) 
                                                << 2U)) 
                                            - (IData)(3U))))));
            }
        }
        if ((((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state)) 
              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                 >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__WR_FIRST))) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__WR_LAST)))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 
                    = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_hi) 
                        << 4U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT___dio_wire));
                __Vdlyvset__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_idx;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_hi 
                    = vlSelf->difftest_top__DOT__soc__DOT___dio_wire;
            }
        }
        if ((((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state)) 
              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                 >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__RD_FIRST))) 
             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__RD_LAST)))) {
            vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__dout 
                = (0xfU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off))
                            ? vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__memory
                           [vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_idx]
                            : (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__memory
                               [vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_idx] 
                               >> 4U)));
        }
        if (((((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state)) 
               & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                  == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__CMD_LAST))) 
              & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi))) 
             & (0x35U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done)))) {
            vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi = 1U;
        }
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next;
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__psram__DOT__memory__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter 
        = __Vdly__difftest_top__DOT__soc__DOT__psram__DOT__counter;
    if (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi) {
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__CMD_LAST = 1U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_FIRST = 2U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_LAST = 7U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__WR_FIRST = 8U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__WR_LAST = 0xfU;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__RD_FIRST = 0xeU;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__RD_LAST = 0x15U;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__CMD_LAST = 7U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_FIRST = 8U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ADDR_LAST = 0xdU;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__WR_FIRST = 0xeU;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__WR_LAST = 0x15U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__RD_FIRST = 0x14U;
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__RD_LAST = 0x1bU;
    }
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off 
        = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                    - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                        ? 8U : 0xeU)));
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off 
        = (0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                    - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                        ? 0xeU : 0x14U)));
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_idx 
        = (0x3fffffU & (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr 
                        + (3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                 >> 1U))));
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_idx 
        = (0x3fffffU & (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr 
                        + (3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off) 
                                 >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__len = 0;
    CData/*3:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__Vfuncout;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__len;
    __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__len = 0;
    SData/*12:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    // Body
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0U;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter;
    __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0U;
    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0U;
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 0U;
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__len))
                                          ? 4U : 8U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__20__Vfuncout;
            } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__len))
                                          ? 4U : 8U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__21__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a)));
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))) {
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out = 0U;
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if (((6U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 0U;
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__len))
                                          ? 4U : 8U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__18__Vfuncout;
            } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__len))
                                          ? 4U : 8U)));
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = (0xffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__19__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a)));
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))) {
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out = 0U;
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if (((6U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = (0xffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a)));
            }
        }
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 0U;
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__len))
                                          ? 4U : 8U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__16__Vfuncout;
            } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__len))
                                          ? 4U : 8U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__17__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a)));
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))) {
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out = 0U;
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if (((6U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 0U;
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__len))
                                          ? 4U : 8U)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__14__Vfuncout;
            } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__len 
                    = (7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__Vfuncout 
                    = ((0U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__len))
                        ? 1U : ((1U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__len))
                                          ? 4U : 8U)));
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = (0xffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__15__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a)));
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))) {
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out = 0U;
            } else {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a];
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if (((6U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))) {
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = (0xffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire);
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = (0xffU & (vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
                }
                __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a)));
            }
        }
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state 
            = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next;
    } else {
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a = 0U;
        __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state = 0U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0] 
            = __Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter;
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
        = __Vdly__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter;
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2))));
    }
    if (__Vdlyvset__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3))) 
                & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim1__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim2__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                 ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out)
                 : 0U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                           ? 0xffffU : 0U)) << 0x10U));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__dq__en1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
             ? 0xffffU : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                                  ? 0xffffU : 0U) << 0x10U));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out)
                : 0U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
                          ? 0xffffU : 0U)));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                 ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out)
                 : 0U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                           ? 0xffffU : 0U)) << 0x10U));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__dq__en0 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
             ? 0xffffU : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                                  ? 0xffffU : 0U) << 0x10U));
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out)
                : 0U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
                          ? 0xffffU : 0U)));
}

void Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ write_type);
void Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &mem_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Init
    IData/*31:0*/ __Vdly__difftest_top__DOT__u_ref__DOT__pc;
    __Vdly__difftest_top__DOT__u_ref__DOT__pc = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__u_ref__DOT__mepc;
    __Vdly__difftest_top__DOT__u_ref__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__u_ref__DOT__mtvec;
    __Vdly__difftest_top__DOT__u_ref__DOT__mtvec = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__u_ref__DOT__mcycle;
    __Vdly__difftest_top__DOT__u_ref__DOT__mcycle = 0;
    IData/*31:0*/ __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh;
    __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v0;
    __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32;
    __Vdlyvdim0__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 = 0;
    IData/*31:0*/ __Vdlyvval__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32;
    __Vdlyvval__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 = 0;
    CData/*0:0*/ __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32;
    __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 = 0;
    // Body
    __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v0 = 0U;
    __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 = 0U;
    __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh 
        = vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh;
    __Vdly__difftest_top__DOT__u_ref__DOT__mcycle = vlSelf->difftest_top__DOT__u_ref__DOT__mcycle;
    __Vdly__difftest_top__DOT__u_ref__DOT__mtvec = vlSelf->difftest_top__DOT__u_ref__DOT__mtvec;
    __Vdly__difftest_top__DOT__u_ref__DOT__mepc = vlSelf->difftest_top__DOT__u_ref__DOT__mepc;
    __Vdly__difftest_top__DOT__u_ref__DOT__pc = vlSelf->difftest_top__DOT__u_ref__DOT__pc;
    if (vlSelf->ref_rst) {
        __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v0 = 1U;
    } else if (((IData)(vlSelf->ref_wen) & (0U != (0x1fU 
                                                   & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                      >> 7U))))) {
        __Vdlyvval__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 
            = vlSelf->difftest_top__DOT__u_ref__DOT__wdata;
        __Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 = 1U;
        __Vdlyvdim0__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32 
            = (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                        >> 7U));
    }
    if (vlSelf->ref_rst) {
        __Vdly__difftest_top__DOT__u_ref__DOT__pc = 0x30000000U;
        vlSelf->difftest_top__DOT__u_ref__DOT__last_pc = 0x30000000U;
        vlSelf->difftest_top__DOT__u_ref__DOT__mstatus = 0x1800U;
        vlSelf->difftest_top__DOT__u_ref__DOT__mcause = 0U;
        __Vdly__difftest_top__DOT__u_ref__DOT__mepc = 0U;
        __Vdly__difftest_top__DOT__u_ref__DOT__mtvec = 0U;
        __Vdly__difftest_top__DOT__u_ref__DOT__mcycle = 0U;
        __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__mvendorid = 0x79737978U;
        vlSelf->difftest_top__DOT__u_ref__DOT__marchid = 0x18d6687U;
    } else {
        vlSelf->difftest_top__DOT__u_ref__DOT__last_pc 
            = vlSelf->difftest_top__DOT__u_ref__DOT__pc;
        __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh 
            = (IData)(((1ULL + (((QData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__mcycle)))) 
                       >> 0x20U));
        __Vdly__difftest_top__DOT__u_ref__DOT__mcycle 
            = ((IData)(1U) + vlSelf->difftest_top__DOT__u_ref__DOT__mcycle);
        if (vlSelf->difftest_top__DOT__u_ref__DOT__jalr) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = (0xfffffffeU & vlSelf->difftest_top__DOT__u_ref__DOT__add_rst);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__jal) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = vlSelf->difftest_top__DOT__u_ref__DOT__add_rst;
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__blt) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = (VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__add_rst
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__beq) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = ((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                    == vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__add_rst
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__bne) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = ((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                    != vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__add_rst
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__bge) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = (VL_GTES_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__add_rst
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__bltu) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = ((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                    < vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__add_rst
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__bgeu) {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = ((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                    >= vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__add_rst
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__ecall) {
            __Vdly__difftest_top__DOT__u_ref__DOT__mepc 
                = vlSelf->difftest_top__DOT__u_ref__DOT__pc;
            vlSelf->difftest_top__DOT__u_ref__DOT__mcause = 0xbU;
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = vlSelf->difftest_top__DOT__u_ref__DOT__mtvec;
        } else {
            __Vdly__difftest_top__DOT__u_ref__DOT__pc 
                = ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__mret)
                    ? vlSelf->difftest_top__DOT__u_ref__DOT__mepc
                    : vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft);
        }
        if (vlSelf->difftest_top__DOT__u_ref__DOT__sw) {
            Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_write_TOP(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2, 4U);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__sb) {
            Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_write_TOP(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2, 1U);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__sh) {
            Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_write_TOP(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2, 2U);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__csrrw) {
            if ((0x300U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                            >> 0x14U))) {
                vlSelf->difftest_top__DOT__u_ref__DOT__mstatus 
                    = vlSelf->difftest_top__DOT__u_ref__DOT__rdata1;
            } else if ((0x305U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mtvec 
                    = vlSelf->difftest_top__DOT__u_ref__DOT__rdata1;
            } else if ((0x341U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mepc 
                    = vlSelf->difftest_top__DOT__u_ref__DOT__rdata1;
            } else if ((0x342U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                vlSelf->difftest_top__DOT__u_ref__DOT__mcause 
                    = vlSelf->difftest_top__DOT__u_ref__DOT__rdata1;
            } else if ((0xb00U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mcycle 
                    = vlSelf->difftest_top__DOT__u_ref__DOT__rdata1;
            } else if ((0xb80U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh 
                    = vlSelf->difftest_top__DOT__u_ref__DOT__rdata1;
            }
        } else if ((0U != (0x1fU & ((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__csrrs))) 
                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                       >> 0xfU))))) {
            if ((0x300U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                            >> 0x14U))) {
                vlSelf->difftest_top__DOT__u_ref__DOT__mstatus 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                       | vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst);
            } else if ((0x305U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mtvec 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                       | vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst);
            } else if ((0x341U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mepc 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                       | vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst);
            } else if ((0x342U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                vlSelf->difftest_top__DOT__u_ref__DOT__mcause 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                       | vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst);
            } else if ((0xb00U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mcycle 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                       | vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst);
            } else if ((0xb80U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                       | vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst);
            }
        } else if ((0U != (0x1fU & ((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__csrrc))) 
                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                       >> 0xfU))))) {
            if ((0x300U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                            >> 0x14U))) {
                vlSelf->difftest_top__DOT__u_ref__DOT__mstatus 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
                       & (~ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1));
            } else if ((0x305U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mtvec 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
                       & (~ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1));
            } else if ((0x341U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mepc 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
                       & (~ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1));
            } else if ((0x342U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                vlSelf->difftest_top__DOT__u_ref__DOT__mcause 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
                       & (~ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1));
            } else if ((0xb00U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mcycle 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
                       & (~ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1));
            } else if ((0xb80U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U))) {
                __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh 
                    = (vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
                       & (~ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1));
            }
        }
    }
    if (__Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v0) {
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[1U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[2U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[3U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[4U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[5U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[6U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[7U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[8U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[9U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0xaU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0xbU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0xcU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0xdU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0xeU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0xfU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x10U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x11U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x12U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x13U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x14U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x15U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x16U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x17U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x18U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x19U] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x1aU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x1bU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x1cU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x1dU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x1eU] = 0U;
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0x1fU] = 0U;
    }
    if (__Vdlyvset__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32) {
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[__Vdlyvdim0__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32] 
            = __Vdlyvval__difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr__v32;
    }
    vlSelf->difftest_top__DOT__u_ref__DOT__mepc = __Vdly__difftest_top__DOT__u_ref__DOT__mepc;
    vlSelf->difftest_top__DOT__u_ref__DOT__mtvec = __Vdly__difftest_top__DOT__u_ref__DOT__mtvec;
    vlSelf->difftest_top__DOT__u_ref__DOT__mcycle = __Vdly__difftest_top__DOT__u_ref__DOT__mcycle;
    vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh 
        = __Vdly__difftest_top__DOT__u_ref__DOT__mcycleh;
    vlSelf->difftest_top__DOT__u_ref__DOT__pc = __Vdly__difftest_top__DOT__u_ref__DOT__pc;
    vlSelf->ref_gpr[0U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0U];
    vlSelf->ref_gpr[1U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [1U];
    vlSelf->ref_gpr[2U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [2U];
    vlSelf->ref_gpr[3U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [3U];
    vlSelf->ref_gpr[4U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [4U];
    vlSelf->ref_gpr[5U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [5U];
    vlSelf->ref_gpr[6U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [6U];
    vlSelf->ref_gpr[7U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [7U];
    vlSelf->ref_gpr[8U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [8U];
    vlSelf->ref_gpr[9U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [9U];
    vlSelf->ref_gpr[0xaU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0xaU];
    vlSelf->ref_gpr[0xbU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0xbU];
    vlSelf->ref_gpr[0xcU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0xcU];
    vlSelf->ref_gpr[0xdU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0xdU];
    vlSelf->ref_gpr[0xeU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0xeU];
    vlSelf->ref_gpr[0xfU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0xfU];
    vlSelf->ref_gpr[0x10U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x10U];
    vlSelf->ref_gpr[0x11U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x11U];
    vlSelf->ref_gpr[0x12U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x12U];
    vlSelf->ref_gpr[0x13U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x13U];
    vlSelf->ref_gpr[0x14U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x14U];
    vlSelf->ref_gpr[0x15U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x15U];
    vlSelf->ref_gpr[0x16U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x16U];
    vlSelf->ref_gpr[0x17U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x17U];
    vlSelf->ref_gpr[0x18U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x18U];
    vlSelf->ref_gpr[0x19U] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x19U];
    vlSelf->ref_gpr[0x1aU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x1aU];
    vlSelf->ref_gpr[0x1bU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x1bU];
    vlSelf->ref_gpr[0x1cU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x1cU];
    vlSelf->ref_gpr[0x1dU] = vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [0x1dU];
    vlSelf->ref_gpr[0x1eU] = (IData)((((QData)((IData)(
                                                       vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
                                                       [0x1fU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
                                                                   [0x1eU]))));
    vlSelf->ref_gpr[0x1fU] = (IData)(((((QData)((IData)(
                                                        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
                                                                    [0x1eU]))) 
                                      >> 0x20U));
    vlSelf->ref_last_pc = vlSelf->difftest_top__DOT__u_ref__DOT__last_pc;
    vlSelf->ref_pc = vlSelf->difftest_top__DOT__u_ref__DOT__pc;
    vlSelf->difftest_top__DOT__u_ref__DOT__pc_next_dft 
        = ((IData)(4U) + vlSelf->difftest_top__DOT__u_ref__DOT__pc);
    Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_read_TOP(vlSelf->difftest_top__DOT__u_ref__DOT__pc, vlSelf->__Vfunc_difftest_top__DOT__u_ref__DOT__mem_read__22__Vfuncout);
    vlSelf->difftest_top__DOT__u_ref__DOT__instr = vlSelf->__Vfunc_difftest_top__DOT__u_ref__DOT__mem_read__22__Vfuncout;
    vlSelf->difftest_top__DOT__u_ref__DOT__mret = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__ecall = 0U;
    vlSelf->ref_instr = vlSelf->difftest_top__DOT__u_ref__DOT__instr;
    vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst 
        = (((((((((0x300U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 0x14U)) | (0x305U 
                                            == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x14U))) 
                 | (0x341U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                               >> 0x14U))) | (0x342U 
                                              == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0x14U))) 
               | (0xb00U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                             >> 0x14U))) | (0xb80U 
                                            == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x14U))) 
             | (0xf11U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                           >> 0x14U))) | (0xf12U == 
                                          (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                           >> 0x14U)))
            ? ((0x300U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                           >> 0x14U)) ? vlSelf->difftest_top__DOT__u_ref__DOT__mstatus
                : ((0x305U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                               >> 0x14U)) ? vlSelf->difftest_top__DOT__u_ref__DOT__mtvec
                    : ((0x341U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U)) ? vlSelf->difftest_top__DOT__u_ref__DOT__mepc
                        : ((0x342U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                       >> 0x14U)) ? vlSelf->difftest_top__DOT__u_ref__DOT__mcause
                            : ((0xb00U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                           >> 0x14U))
                                ? vlSelf->difftest_top__DOT__u_ref__DOT__mcycle
                                : ((0xb80U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                               >> 0x14U))
                                    ? vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh
                                    : ((0xf11U == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                   >> 0x14U))
                                        ? vlSelf->difftest_top__DOT__u_ref__DOT__mvendorid
                                        : vlSelf->difftest_top__DOT__u_ref__DOT__marchid)))))))
            : 0U);
    vlSelf->difftest_top__DOT__u_ref__DOT__lui = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__slt = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sll = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sub = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__srai = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__srli = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__slli = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__andi = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__ori = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__xori = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sltiu = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__slti = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sltu = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__srl = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sra = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__or_inst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__and_inst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__csrrc = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__csrrs = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__csrrw = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sb = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sh = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__sw = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__bgeu = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__bltu = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__bge = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__blt = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__beq = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__bne = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__immI = (
                                                   ((- (IData)(
                                                               (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                      >> 0x14U));
    vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 = 
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                   >> 0xfU))];
    vlSelf->difftest_top__DOT__u_ref__DOT__rdata2 = 
        vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                   >> 0x14U))];
    vlSelf->difftest_top__DOT__u_ref__DOT__auipc = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__jalr = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__jal = 0U;
    if ((0x40U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
        if ((0x20U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
            if ((0x10U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                if ((1U & (~ (IData)(
                                                     (0x100000U 
                                                      == 
                                                      (0x107000U 
                                                       & vlSelf->difftest_top__DOT__u_ref__DOT__instr)))))) {
                                    if ((0x604000U 
                                         == (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 7U))) {
                                        vlSelf->difftest_top__DOT__u_ref__DOT__mret = 1U;
                                    }
                                    if ((0x604000U 
                                         != (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 7U))) {
                                        if ((0U == 
                                             (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                              >> 7U))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__ecall = 1U;
                                        }
                                        if ((0U != 
                                             (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                              >> 7U))) {
                                            if ((1U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 0xcU)))) {
                                                if (
                                                    (2U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                         >> 0xcU)))) {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                             >> 0xcU)))) {
                                                        vlSelf->difftest_top__DOT__u_ref__DOT__csrrc = 1U;
                                                    }
                                                }
                                                if (
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                         >> 0xcU)))) {
                                                    vlSelf->difftest_top__DOT__u_ref__DOT__csrrs = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 0xcU)))) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__csrrw = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                if ((0x4000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                    if ((0x2000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__bgeu = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__bltu = 1U;
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__bge = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__blt = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__beq = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__bne = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                vlSelf->difftest_top__DOT__u_ref__DOT__jalr = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                    if ((4U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                vlSelf->difftest_top__DOT__u_ref__DOT__jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__u_ref__DOT__add = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__addi = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lb = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lh = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lw = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lbu = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lhu = 0U;
    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                  >> 6U)))) {
        if ((0x20U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
            if ((0x10U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                vlSelf->difftest_top__DOT__u_ref__DOT__lui = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__slt = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__sltu = 1U;
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__sll = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            if ((0x40000000U 
                                                 & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__sub = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 0x1eU)))) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__add = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((0x4000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 0x1eU)))) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__srl = 1U;
                                            }
                                            if ((0x40000000U 
                                                 & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__sra = 1U;
                                            }
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__or_inst = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__and_inst = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                if ((0U == (7U & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelf->difftest_top__DOT__u_ref__DOT__sb = 1U;
                                }
                                if ((0U != (7U & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xcU)))) {
                                    if ((1U == (7U 
                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                   >> 0xcU)))) {
                                        vlSelf->difftest_top__DOT__u_ref__DOT__sh = 1U;
                                    }
                                    if ((1U != (7U 
                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                   >> 0xcU)))) {
                                        if ((2U == 
                                             (7U & 
                                              (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                               >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__sw = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                      >> 5U)))) {
            if ((0x10U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                if ((0x4000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            if ((0x40000000U 
                                                 & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__srai = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 0x1eU)))) {
                                                vlSelf->difftest_top__DOT__u_ref__DOT__srli = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__xori = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__andi = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__ori = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__slli = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__addi = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__sltiu = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__slti = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                vlSelf->difftest_top__DOT__u_ref__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                            if ((1U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__lb = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__lh = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__lw = 1U;
                                        }
                                    }
                                }
                                if ((0x4000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                    if ((1U & (~ (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0xcU)))) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__lbu = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) {
                                            vlSelf->difftest_top__DOT__u_ref__DOT__lhu = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_haf3ac130__0 
        = ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__csrrw) 
           | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__csrrc) 
              | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__csrrs)));
    vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_heb8827dd__0 
        = ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__blt) 
           | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__bltu) 
              | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__bge) 
                 | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__bgeu) 
                    | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__beq) 
                       | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__bne))))));
    vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_h71776512__0 
        = ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__add) 
           | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__addi));
    vlSelf->difftest_top__DOT__u_ref__DOT__add_rst 
        = ((((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc) 
             | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal) 
                | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_heb8827dd__0)))
             ? vlSelf->difftest_top__DOT__u_ref__DOT__pc
             : vlSelf->difftest_top__DOT__u_ref__DOT__rdata1) 
           + (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__add))) 
               & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2) 
              | (((- (IData)(((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sw) 
                              | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sb) 
                                 | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sh))))) 
                  & (((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 7U))))) 
                 | ((0xfffff000U & ((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc))) 
                                    & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) 
                    | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal))) 
                        & (((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                        >> 0x1fU))) 
                            << 0x14U) | ((0xff000U 
                                          & vlSelf->difftest_top__DOT__u_ref__DOT__instr) 
                                         | ((0x800U 
                                             & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 9U)) 
                                            | (0x7feU 
                                               & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0x14U)))))) 
                       | (((- (IData)(((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jalr) 
                                       | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lbu) 
                                          | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lw) 
                                             | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lhu) 
                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lh) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__addi) 
                                                      | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lb))))))))) 
                           & vlSelf->difftest_top__DOT__u_ref__DOT__immI) 
                          | ((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_heb8827dd__0))) 
                             & (((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                      >> 7U))))))))))));
    vlSelf->ref_wen = ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_h71776512__0) 
                       | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sub) 
                          | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lui) 
                             | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc) 
                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__and_inst) 
                                   | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__or_inst) 
                                      | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst) 
                                         | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__andi) 
                                            | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__ori) 
                                               | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__xori) 
                                                  | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sll) 
                                                     | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__srl) 
                                                        | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sra) 
                                                           | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__slli) 
                                                              | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__srli) 
                                                                 | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__srai) 
                                                                    | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__slt) 
                                                                       | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sltu) 
                                                                          | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__slti) 
                                                                             | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sltiu) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jalr) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lb) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lh) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lw) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lbu) 
                                                                                | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lhu) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_haf3ac130__0))))))))))))))))))))))))))));
    Vtop___024root____Vdpiimwrap_difftest_top__DOT__u_ref__DOT__mem_read_TOP(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst, vlSelf->__Vfunc_difftest_top__DOT__u_ref__DOT__mem_read__26__Vfuncout);
    vlSelf->difftest_top__DOT__u_ref__DOT____VdfgExtracted_h8125cb41__0 
        = vlSelf->__Vfunc_difftest_top__DOT__u_ref__DOT__mem_read__26__Vfuncout;
    vlSelf->difftest_top__DOT__u_ref__DOT__read_rst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lw_rst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lbu_rst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lhu_rst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lb_rst = 0U;
    vlSelf->difftest_top__DOT__u_ref__DOT__lh_rst = 0U;
    if ((((((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lw) 
            | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lb)) 
           | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lbu)) 
          | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lh)) 
         | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lhu))) {
        vlSelf->difftest_top__DOT__u_ref__DOT__read_rst 
            = vlSelf->difftest_top__DOT__u_ref__DOT____VdfgExtracted_h8125cb41__0;
        if (vlSelf->difftest_top__DOT__u_ref__DOT__lw) {
            vlSelf->difftest_top__DOT__u_ref__DOT__lw_rst 
                = vlSelf->difftest_top__DOT__u_ref__DOT__read_rst;
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__lbu) {
            vlSelf->difftest_top__DOT__u_ref__DOT__lbu_rst 
                = (0xffU & vlSelf->difftest_top__DOT__u_ref__DOT__read_rst);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__lhu) {
            vlSelf->difftest_top__DOT__u_ref__DOT__lhu_rst 
                = (0xffffU & vlSelf->difftest_top__DOT__u_ref__DOT__read_rst);
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__lb) {
            vlSelf->difftest_top__DOT__u_ref__DOT__lb_rst 
                = (((- (IData)((1U & (vlSelf->difftest_top__DOT__u_ref__DOT__read_rst 
                                      >> 7U)))) << 7U) 
                   | (0x7fU & vlSelf->difftest_top__DOT__u_ref__DOT__read_rst));
        } else if (vlSelf->difftest_top__DOT__u_ref__DOT__lh) {
            vlSelf->difftest_top__DOT__u_ref__DOT__lh_rst 
                = (((- (IData)((1U & (vlSelf->difftest_top__DOT__u_ref__DOT__read_rst 
                                      >> 0xfU)))) << 0xfU) 
                   | (0x7fffU & vlSelf->difftest_top__DOT__u_ref__DOT__read_rst));
        }
    }
    vlSelf->difftest_top__DOT__u_ref__DOT__wdata = 
        ((0xfffff000U & ((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lui))) 
                         & vlSelf->difftest_top__DOT__u_ref__DOT__instr)) 
         | (((- (IData)(((IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_h71776512__0) 
                         | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc)))) 
             & vlSelf->difftest_top__DOT__u_ref__DOT__add_rst) 
            | (((- (IData)(((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal) 
                            | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jalr)))) 
                & ((IData)(4U) + vlSelf->difftest_top__DOT__u_ref__DOT__pc)) 
               | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lw))) 
                   & vlSelf->difftest_top__DOT__u_ref__DOT__lw_rst) 
                  | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lbu))) 
                      & vlSelf->difftest_top__DOT__u_ref__DOT__lbu_rst) 
                     | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lhu))) 
                         & vlSelf->difftest_top__DOT__u_ref__DOT__lhu_rst) 
                        | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lb))) 
                            & vlSelf->difftest_top__DOT__u_ref__DOT__lb_rst) 
                           | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__lh))) 
                               & vlSelf->difftest_top__DOT__u_ref__DOT__lh_rst) 
                              | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sub))) 
                                  & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                     - vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)) 
                                 | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst))) 
                                     & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                        ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)) 
                                    | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__xori))) 
                                        & (vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                           ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)) 
                                       | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__or_inst))) 
                                           & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                              | vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)) 
                                          | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__ori))) 
                                              & (vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                                 | vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)) 
                                             | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__and_inst))) 
                                                 & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                    & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)) 
                                                | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__andi))) 
                                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                                       & vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)) 
                                                   | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sll))) 
                                                       & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                          << 
                                                          (0x1fU 
                                                           & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))) 
                                                      | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__slli))) 
                                                          & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                             << 
                                                             (0x1fU 
                                                              & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                                 >> 0x14U)))) 
                                                         | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__srl))) 
                                                             & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                                >> 
                                                                (0x1fU 
                                                                 & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))) 
                                                            | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__srli))) 
                                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                                       >> 0x14U)))) 
                                                               | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sra))) 
                                                                   & VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                                                                (0x1fU 
                                                                                & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))) 
                                                                  | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__srai))) 
                                                                      & VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                                                                (0x1fU 
                                                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                                                >> 0x14U)))) 
                                                                     | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__slt))) 
                                                                         & VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)) 
                                                                        | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__slti))) 
                                                                            & VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__immI)) 
                                                                           | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sltu))) 
                                                                               & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                                                < vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)) 
                                                                              | (((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__sltiu))) 
                                                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                                                                < vlSelf->difftest_top__DOT__u_ref__DOT__immI)) 
                                                                                | ((- (IData)((IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_haf3ac130__0))) 
                                                                                & vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*1:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 = 0;
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready = 0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid) 
           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid)) 
                              | (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
            = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_rvalid) 
                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*1:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 = 0;
    CData/*3:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 = 0;
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
            << 1U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)) 
                       & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable))) 
                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                     & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen))))) {
        VL_WRITEF("ERROR: spi_top_apb: flash \347\251\272\351\227\264(0x%08x)\344\270\215\346\224\257\346\214\201\345\206\231\346\223\215\344\275\234\n",
                  32,(0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr));
        Verilated::runFlushCallbacks();
        vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready)
            ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U)) : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite 
        = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready)
                        ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data)
                        : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r)))
            : 0U);
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_awready)
                ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_arready)
                ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 0x18U) : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel 
        = (0x30000000U <= (0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                             >> 0x19U)) | ((8U & (8U 
                                                  ^ 
                                                  (0x78U 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                      >> 0x19U)))) 
                                           | ((4U & 
                                               (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xcU))))))) 
           | (3U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & (8U 
                                                 ^ 
                                                 (0x78U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)))) 
                                          | ((4U & 
                                              (0x4004U 
                                               ^ (0x3fffcU 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xeU)))) 
                                             | (3U 
                                                & (1U 
                                                   ^ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0xcU))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & (8U 
                                                 ^ 
                                                 (0x78U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)))) 
                                          | ((4U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((0xffff0000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
           | ((0xff00U & (((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                            ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 8U) : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x18U)) 
                          << 8U)) | (0xffU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                               ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata
                                               : ((
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                    >> 1U) 
                                                   & (1U 
                                                      == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                   >> 8U)
                                                   : 
                                                  ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                     >> 2U) 
                                                    & (1U 
                                                       == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                    ? 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                    >> 0x10U)
                                                    : 
                                                   ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                      >> 3U) 
                                                     & (1U 
                                                        == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                     ? 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                     >> 0x18U)
                                                     : 
                                                    ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                       >> 2U) 
                                                      & (2U 
                                                         == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                      ? 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                      >> 0x10U)
                                                      : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__data;
    vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__addr;
    vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__cmd;
    vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__counter;
    vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__flash__DOT__state;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable 
        = (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_psel;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                       ? 8U : 0xeU) + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                       << 1U)) - (IData)(1U)));
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable = 0U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable 
        = (IData)(((0x20000000U == (0x30000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel = 0U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel 
        = (IData)(((0x20000000U == (0x30000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = (IData)(((0U == (0x30000000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel = 0xfU;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr 
            = (0x1fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req;
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr 
            = (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc 
            = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb 
            = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                         >> 2U))) ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                             >> 2U))) ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                 >> 2U))) ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                     >> 2U))) ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                         >> 2U))) ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                             >> 2U)))
                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_prdata = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_pready = 0U;
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable))) {
        if ((0U == (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_prdata 
                = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid)
                    ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode)
                    : 0U);
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_pready = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable) 
              & ((0x10002000U <= (0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                 & (0x1000200fU >= (0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pslverr = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata = 0U;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pready = 0U;
    if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable))) {
        if (((0x10002000U > (0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
             | (0x1000200fU < (0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pslverr = 1U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata = 0U;
        } else {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata 
                = ((0U == (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))
                    ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r)
                    : ((4U == (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))
                        ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_in)
                        : ((8U == (0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))
                            ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r) 
                                << 0x18U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r))))
                            : 0U)));
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pready = 1U;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr 
        = (1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                 | ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite))) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pslverr)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)
             : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                            ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                << 0x18U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                            : 0U) : 0U) | (((0U == 
                                             (3U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0x1cU)))
                                             ? ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [3U] 
                                                 << 0x18U) 
                                                | ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))
                                             : 0U) 
                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 0x1cU)))
                                                     ? 
                                                    (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                                      ? 
                                                     vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                                     [
                                                     (0x7ffffU 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 2U))]
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = (1U & (~ (((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                          ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                          : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))) 
                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | ((IData)(((0U == (0x30000000U 
                                           & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                   & (~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                           ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                           : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))))) 
                          | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | (IData)(((0x20000000U 
                                            == (0x30000000U 
                                                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                           & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))))))))))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
            ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd)
                ? 2U : 0U) : ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                               ? (((7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
                                   ? 0U : 1U) : ((2U 
                                                  == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr) {
        vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                        ? (1U & (0x35U >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                            <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 1U : 7U)) ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 0xbU
                                                  : 0xeU)
                                                 : 
                                                (1U 
                                                 & (0xebU 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(7U) 
                                                        - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))
                            : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)
                                ? ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                    ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                        ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                        : ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                            : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 4U)))
                                    : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                        ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                            ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 8U)
                                            : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0xcU))
                                        : ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                            ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x10U)
                                            : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U))))
                                : 0U))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)))));
    } else {
        vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                        <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                             ? 1U : 7U)) ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 8U
                                                 : 3U)
                                             : (1U 
                                                & (0x38U 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))
                        : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                            <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 7U : 0xdU)) ? ((4U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                     ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 4U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                     ? 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0xcU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                     ? 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0x14U))))
                            : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT))
                                ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                    ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                       >> (0x18U & 
                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                            << 2U)))
                                    : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                       >> (0x1fU & 
                                           ((IData)(4U) 
                                            + (0x18U 
                                               & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                  << 2U))))))
                                : 0U))));
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
              & (0xcU == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
             << 3U) | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                         & (8U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
                        << 2U) | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                    & (4U == (0x1cU 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
                                   << 1U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))))) 
           & (- (IData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_psel) 
              & (0xa0000000U <= vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
             & (0xbfffffffU >= vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((0U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter)) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next = 0U;
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next 
            = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state;
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready;
    if ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata 
                    = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save;
            }
        }
        if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready = 0U;
        } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready = 0U;
            if ((0U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter)) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready = 1U;
            }
        }
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bresp 
        = ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready)) 
           | (2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bvalid 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_rvalid 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_bready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_bvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_out_rready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_in_rvalid));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT___asic_spi_mosi;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen;
    if (vlSelf->reset) {
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                        = ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 0xfU : (0xfU & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))));
                } else if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x32U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
                if ((9U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                 >> 0xbU));
                }
            }
        } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                } else {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                     >> 2U));
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                }
                if ((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                 >> 0xbU));
                }
            } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                 >> 2U));
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                             >> 0xbU));
            }
        } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                  >> 0xdU));
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                             >> 0xbU));
            } else {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            }
        } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        } else if ((0x32U != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            if ((0x28U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x400U | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            } else if ((1U & (~ ((0x14U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0xaU == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 0x20U : 0U);
            }
            if ((0x28U != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x14U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                    if ((0xaU != vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    }
                }
            }
        }
        vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
    }
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->__Vdly__difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT___dq_wire = 
        (((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
             ? 0U : 0xffffffffU) & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                       ? 0U : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                         ? 0U : 0xffffffffU)) 
                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                        ? 0U : 0xffffffffU))) 
          & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
              ? 0U : 0xffffffffU)) | (((vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__dq__en0 
                                        & ((vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out2 
                                            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
                                                ? 0xffffU
                                                : 0U)) 
                                           | (vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out3 
                                              & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                                                   ? 0xffffU
                                                   : 0U) 
                                                 << 0x10U)))) 
                                       | (vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__dq__en1 
                                          & ((vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out2 
                                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out3 
                                                & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U))))) 
                                      & (vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__dq__en0 
                                         | vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__dq__en1)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0) 
           | (IData)(vlSelf->reset));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT___dio_wire 
        = ((((((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
               | (0xcU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
           | ((((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))
                 ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__dout)
                 : 0U) & ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))
                           ? 0xfU : 0U)) & ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))
                                             ? 0xfU
                                             : 0U)));
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
            ? ((0xf0U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl)) 
               | (IData)(vlSelf->difftest_top__DOT__soc__DOT___dio_wire))
            : ((0xfeU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl)) 
               | (1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT___dio_wire))));
    vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state;
    if (vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n) {
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 0U;
    } else if ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) {
        if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) {
            vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 0U;
        } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) {
            if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                 == ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                      ? 0xfU : 0x15U))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 0U;
            }
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                    == (0xffU & ((IData)(1U) + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                                 ? 0x15U
                                                 : 0x1bU))))) {
            vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 0U;
        }
    } else if ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) {
            if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                 == ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                      ? 0xdU : 0x13U))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 4U;
            }
        } else if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
                    == ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                         ? 7U : 0xdU))) {
            if ((0x38U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 5U;
            } else if ((0xebU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))) {
        if (((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter) 
             == ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                  ? 1U : 7U))) {
            if (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)) 
                 & (0x35U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done)))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 0U;
            } else if (((0xebU == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done)) 
                        | (0x38U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done)))) {
                vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 2U;
            }
        }
    } else {
        vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    // Init
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready = 0;
    // Body
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_arready) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0)) 
           | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1)) 
              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2) 
                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_arready))));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_arready) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_1 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_valid) 
           & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_arready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_h73aa1639__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    // Init
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready;
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready = 0;
    CData/*0:0*/ difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready;
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready = 0;
    // Body
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_wready) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits)) 
           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U) & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                         & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
               >> 2U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid));
    difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wvalid) 
           & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___GEN 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready 
        = (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4buf_auto_in_awready) 
            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0)) 
           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2) 
              & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4ram_auto_in_awready)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____VdfgTmp_ha2215a43__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty)) 
           & ((IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq 
        = ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty) 
               & (IData)(difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready))) 
           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_enq_ready) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___GEN) 
           & (0xf000000U == (0xfffe000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)));
    difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___anonIn_awready_T));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready))) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid)));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_1 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awvalid) 
           & (IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready 
        = ((IData)(difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT____VdfgTmp_he7a0eac8__0));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready));
    vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 4U);
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 4U);
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 4U);
    }
    vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next 
        = vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state;
    if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        if ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        if ((1U >= (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter))) {
            vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 4U);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(4U)) 
         | vlSelf->__VnbaTriggered.at(7U))) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop___024root___nba_comb__TOP__13(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
           | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
          | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(8U))) {
        Vtop___024root___nba_comb__TOP__16(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<10> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/difftest_top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/difftest_top.v", 2, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/difftest_top.v", 2, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->ref_clk & 0xfeU))) {
        Verilated::overWidthError("ref_clk");}
    if (VL_UNLIKELY((vlSelf->ref_rst & 0xfeU))) {
        Verilated::overWidthError("ref_rst");}
}
#endif  // VL_DEBUG
