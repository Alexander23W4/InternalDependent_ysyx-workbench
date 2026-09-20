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
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = 0U;
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata 
            = (((0x10002000U > (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                | (0x1000200fU < (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                ? 0U : ((0U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r)
                         : ((4U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                             ? (IData)(vlSelf->externalPins_gpio_in)
                             : ((8U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r))))
                                 : 0U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                            : 0U) : 0U) | (((0U == 
                                             (3U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0x1cU)))
                                             ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [3U] 
                                                 << 0x18U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))
                                             : 0U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 0x1cU)))
                                                     ? 
                                                    (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                                     [
                                                     (0x7ffffU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 2U))]
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
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

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__counter = 0;
    IData/*21:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__memory__v0 = 0;
    // Body
    __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__memory__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__counter = vlSelf->ysyxSoCFull__DOT__psram__DOT__counter;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        __Vdly__ysyxSoCFull__DOT__psram__DOT__counter = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__state = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)));
        if ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__CMD_LAST)))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                    ? (((~ ((IData)(0xfU) << (7U & 
                                              (((IData)(7U) 
                                                - ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                                   << 2U)) 
                                               - (IData)(3U))))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl)) 
                       | (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT___dio_wire) 
                                   << (7U & (((IData)(7U) 
                                              - ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                                 << 2U)) 
                                             - (IData)(3U))))))
                    : (((~ ((IData)(1U) << (7U & ((IData)(7U) 
                                                  - (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl)) 
                       | (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT___dio_wire)) 
                                   << (7U & ((IData)(7U) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))))));
        }
        if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                 >= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_FIRST))) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_LAST)))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT____Vlvbound_hbae54c47__0 
                = vlSelf->ysyxSoCFull__DOT___dio_wire;
            if ((0x17U >= (0x1fU & (((IData)(0x17U) 
                                     - (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                         - (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_FIRST)) 
                                        << 2U)) - (IData)(3U))))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                    = (((~ ((IData)(0xfU) << (0x1fU 
                                              & (((IData)(0x17U) 
                                                  - 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                                    - (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_FIRST)) 
                                                   << 2U)) 
                                                 - (IData)(3U))))) 
                        & vlSelf->ysyxSoCFull__DOT__psram__DOT__addr) 
                       | (0xffffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____Vlvbound_hbae54c47__0) 
                                       << (0x1fU & 
                                           (((IData)(0x17U) 
                                             - (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_FIRST)) 
                                                << 2U)) 
                                            - (IData)(3U))))));
            }
        }
        if ((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                 >= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__WR_FIRST))) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__WR_LAST)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off))) {
                __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__memory__v0 
                    = (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_hi) 
                        << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT___dio_wire));
                __Vdlyvset__ysyxSoCFull__DOT__psram__DOT__memory__v0 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__memory__v0 
                    = vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_idx;
            } else {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_hi 
                    = vlSelf->ysyxSoCFull__DOT___dio_wire;
            }
        }
        if ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                 >= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__RD_FIRST))) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                <= (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__RD_LAST)))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__dout 
                = (0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off))
                            ? vlSelf->ysyxSoCFull__DOT__psram__DOT__memory
                           [vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_idx]
                            : (vlSelf->ysyxSoCFull__DOT__psram__DOT__memory
                               [vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_idx] 
                               >> 4U)));
        }
        if (((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__CMD_LAST))) 
              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi))) 
             & (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done)))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__psram__DOT__next;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__memory__v0) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__memory__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__psram__DOT__memory__v0;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__counter = __Vdly__ysyxSoCFull__DOT__psram__DOT__counter;
    if (vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__CMD_LAST = 1U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_FIRST = 2U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_LAST = 7U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__WR_FIRST = 8U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__WR_LAST = 0xfU;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__RD_FIRST = 0xeU;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__RD_LAST = 0x15U;
    } else {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__CMD_LAST = 7U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_FIRST = 8U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__ADDR_LAST = 0xdU;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__WR_FIRST = 0xeU;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__WR_LAST = 0x15U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__RD_FIRST = 0x14U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__RD_LAST = 0x1bU;
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off = 
        (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                  - ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                      ? 8U : 0xeU)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off = 
        (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                  - ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                      ? 0xeU : 0x14U)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_idx = 
        (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                      + (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                               >> 1U))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_idx = 
        (0x3fffffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                      + (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off) 
                               >> 1U))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__len = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__len;
    __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__len = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    SData/*8:0*/ __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 0U;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 0U;
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__len))
                                          ? 4U : 8U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__22__Vfuncout;
            } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__len))
                                          ? 4U : 8U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__calc_burst_len__23__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = (vlSelf->ysyxSoCFull__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a)));
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 0U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
            if (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = (vlSelf->ysyxSoCFull__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 0U;
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__len))
                                          ? 4U : 8U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__20__Vfuncout;
            } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__len))
                                          ? 4U : 8U)));
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = (0xffU & vlSelf->ysyxSoCFull__DOT___dq_wire);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__calc_burst_len__21__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a)));
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 0U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
            if (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = (0xffU & vlSelf->ysyxSoCFull__DOT___dq_wire);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a)));
            }
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 0U;
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__len))
                                          ? 4U : 8U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__18__Vfuncout;
            } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__len))
                                          ? 4U : 8U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__calc_burst_len__19__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = (vlSelf->ysyxSoCFull__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a)));
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 0U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
            if (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 2U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 0x10U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 3U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = (vlSelf->ysyxSoCFull__DOT___dq_wire 
                           >> 0x18U);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a)));
            }
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
            } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
                    = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg) 
                              >> 4U) - (IData)(1U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 0U;
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__len))
                                          ? 4U : 8U)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__16__Vfuncout;
            } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__len 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg));
                __Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__Vfuncout 
                    = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__len))
                        ? 1U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__len))
                                 ? 2U : ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__len))
                                          ? 4U : 8U)));
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = (0xffU & vlSelf->ysyxSoCFull__DOT___dq_wire);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__calc_burst_len__17__Vfuncout) 
                               - (IData)(1U)));
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a)));
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter) 
                             - (IData)(1U)));
            }
        }
        if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 0U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 1U;
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba]]
                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a];
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a)));
            }
        }
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
            if (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                 & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
                    = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter) 
                               - (IData)(1U)));
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = (0xffU & vlSelf->ysyxSoCFull__DOT___dq_wire);
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 = 0U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
                }
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                              >> 1U)))) {
                    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = (0xffU & (vlSelf->ysyxSoCFull__DOT___dq_wire 
                                    >> 8U));
                    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 = 8U;
                    __Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
                    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row
                        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba];
                    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3 
                        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
                }
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a)));
            }
        }
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next;
    } else {
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row__v0;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v2))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__memory__v3))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row__v0;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v2))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__memory__v3))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row__v0;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v2))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__memory__v3))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row__v0;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v0))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v1))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v2))));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3][__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3]
                [__Vdlyvdim2__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__memory__v3))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                 ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out)
                 : 0U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                           ? 0xffffU : 0U)) << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 = 
        (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
           ? 0xffffU : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                                ? 0xffffU : 0U) << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out)
                : 0U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
                          ? 0xffffU : 0U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                 ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out)
                 : 0U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                           ? 0xffffU : 0U)) << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 = 
        (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
           ? 0xffffU : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                                ? 0xffffU : 0U) << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out)
                : 0U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
                          ? 0xffffU : 0U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)) 
                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable))) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen))))) {
        VL_WRITEF("ERROR: spi_top_apb: flash \347\251\272\351\227\264(0x%08x)\344\270\215\346\224\257\346\214\201\345\206\231\346\223\215\344\275\234\n",
                  32,(0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr));
        Verilated::runFlushCallbacks();
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen = 1U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready)
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                       >> 4U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
            ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                     ? 1U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                              ? 1U : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                ? 2U
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                                    ? 2U
                                                    : 4U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_awready)
                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_arready)
                ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                           >> 0xbU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel 
        = (0x30000000U <= (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                             >> 0x19U)) | ((8U & (8U 
                                                  ^ 
                                                  (0x78U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                      >> 0x19U)))) 
                                           | ((4U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                >> 0xeU)) 
                                              | (3U 
                                                 & (1U 
                                                    ^ 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xcU))))))) 
           | (3U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                           >> 0x1cU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & (8U 
                                                 ^ 
                                                 (0x78U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)))) 
                                          | ((4U & 
                                              (0x4004U 
                                               ^ (0x3fffcU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0xeU)))) 
                                             | (3U 
                                                & (1U 
                                                   ^ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & ((~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1cU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0xcU))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                            >> 0x19U)) | ((8U & (8U 
                                                 ^ 
                                                 (0x78U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                     >> 0x19U)))) 
                                          | ((4U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0xeU)) 
                                             | (3U 
                                                & (2U 
                                                   ^ 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                    >> 0xcU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
           | ((0xff00U & (((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 8U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x18U)) 
                          << 8U)) | (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata
                                               : ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                    >> 1U) 
                                                   & (1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                   >> 8U)
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                     >> 2U) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                    >> 0x10U)
                                                    : 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                      >> 3U) 
                                                     & (1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                     >> 0x18U)
                                                     : 
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                       >> 2U) 
                                                      & (2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                      >> 0x10U)
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata))))))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__flash__DOT__data = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__counter = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__state = vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable 
        = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                     ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                         ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                        ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT 
        = (0xffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                       ? 8U : 0xeU) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                       << 1U)) - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid));
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable = 0U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable 
        = (IData)(((0x20000000U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel = 0U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel 
        = (IData)(((0x20000000U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel 
        = (IData)(((0U == (0x30000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel = 0xfU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr 
            = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr 
            = (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat 
        = ((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                         >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
            : ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                             >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                : ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                 >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                    : ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                     >> 2U))) ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                        : ((4U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                         >> 2U))) ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                            : ((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                             >> 2U)))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                : ((6U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr) 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                    : 0U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                   << 1U)) | (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1) 
                                      << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_1))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
              << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready = 0U;
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable))) {
        if ((0U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode)
                    : 0U);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready = 1U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable) 
              & ((0x10002000U <= (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                 & (0x1000200fU >= (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready = 0U;
    if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel) 
         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable))) {
        if (((0x10002000U > (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
             | (0x1000200fU < (0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata 
                = ((0U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r)
                    : ((4U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                        ? (IData)(vlSelf->externalPins_gpio_in)
                        : ((8U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r) 
                                << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r))))
                            : 0U)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready = 1U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (((4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                   << 1U)) | (((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3) 
                                      << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_filter_T_3))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
              << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys 
        = (3U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                     >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                 | ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)
             : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                 << 8U) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                            : 0U) : 0U) | (((0U == 
                                             (3U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 0x1cU)))
                                             ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [3U] 
                                                 << 0x18U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))
                                             : 0U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 0x1cU)))
                                                     ? 
                                                    (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                                     [
                                                     (0x7ffffU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                         >> 2U))]
                                                      : 0U)
                                                     : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready 
        = (1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                    | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                       | ((IData)(((0U == (0x30000000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                   & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))))) 
                          | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)) 
                                | (IData)(((0x20000000U 
                                            == (0x30000000U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                           & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1 
        = (3U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                     >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rvalid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd)
                ? 2U : 0U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                               ? (((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
                                   ? 0U : 1U) : ((2U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                                                   ? 0U
                                                   : 2U)
                                                  : 0U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr) {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
        vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                        ? (1U & (0x35U >> (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                            <= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 1U : 7U)) ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 0xbU
                                                  : 0xeU)
                                                 : 
                                                (1U 
                                                 & (0xebU 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(7U) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))
                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                    ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 4U)))
                                    : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 8U)
                                            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0xcU))
                                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x10U)
                                            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U))))
                                : 0U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)))));
    } else {
        vlSelf->ysyxSoCFull__DOT___asic_psram_sck = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
        vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout 
            = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                        <= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                             ? 1U : 7U)) ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 8U
                                                 : 3U)
                                             : (1U 
                                                & (0x38U 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))
                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                            <= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 7U : 0xdU)) ? ((4U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 4U)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0xcU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0x14U))))
                            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                       >> (0x18U & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                            << 2U)))
                                    : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                       >> (0x1fU & 
                                           ((IData)(4U) 
                                            + (0x18U 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                  << 2U))))))
                                : 0U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten 
            = (0xfU & (- (IData)((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n))))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
              & (0xcU == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
             << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                         & (8U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
                        << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                    & (4U == (0x1cU 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr)))) 
                                   << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (0U 
                                                == 
                                                (0x1cU 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))))) 
           & (- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel) 
              & (0xa0000000U <= vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
             & (0xbfffffffU >= vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready;
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
        if ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save;
                vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save;
            }
        }
        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = 0U;
            if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready = 1U;
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bvalid 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0 
        = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bresp 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
               << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0 
        = (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready)) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rid 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)
                     : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                               : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                  ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                             >> 3U)) : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                : 0U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                  ? 
                                                 ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 0x10U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_hf132a334__0 
                                                               >> 8U)
                                                               : 0U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? vlSelf->__VdfgTmp_hf132a334__0
                                                                : 0U)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                  : 0U)))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                      [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
            ? (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                  >> 1U)) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rlast 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0) 
            & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                  << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                               << 0xeU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                            << 0xdU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                           << 8U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rid)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_rlast))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                 >> 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT____VdfgTmp_h78415cc4__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_bid 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bid)
                     : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w)
                               : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4buf_auto_out_rready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_in_rvalid));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT___asic_spi_mosi = vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q 
                        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                            ? 0xfU : (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w))));
                } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q = 0U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        if ((0x32U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q)) 
                       | ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r)) 
                          << 0xaU));
                if ((9U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                 >> 0xbU));
                }
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                     >> 2U));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                        = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                        = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                 >> 0xbU));
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                 >> 2U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1bffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                             >> 0xbU));
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                                  >> 0xdU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q 
                    = (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_addr_w 
                             >> 0xbU));
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
        } else if ((0x32U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = (0x400U | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            } else if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                                 | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q 
                    = ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)
                        ? 0x20U : 0U);
            }
            if ((0x28U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((1U & (~ ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q) 
                              | (0x1eU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q))))) {
                    if ((0xaU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q = 0U;
                    }
                }
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
           | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h0622eded__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__ram_accept_w) 
           & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT___dq_wire = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                              ? 0U : 0xffffffffU) 
                                            & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                  ? 0U
                                                  : vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                    ? 0U
                                                    : 0xffffffffU)) 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                                   ? 0U
                                                   : 0xffffffffU))) 
                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)
                                               ? 0U
                                               : 0xffffffffU)) 
                                          | (((vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 
                                               & ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out2 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe)
                                                       ? 0xffffU
                                                       : 0U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__dq__out__strong__out3 
                                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe)
                                                          ? 0xffffU
                                                          : 0U) 
                                                        << 0x10U)))) 
                                              | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 
                                                 & ((vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out2 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe)
                                                         ? 0xffffU
                                                         : 0U)) 
                                                    | (vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__dq__out__strong__out3 
                                                       & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe)
                                                            ? 0xffffU
                                                            : 0U) 
                                                          << 0x10U))))) 
                                             & (vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 
                                                | vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT___dio_wire = ((((((3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                               | (0xcU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                           | ((((4U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout)
                                                 : 0U) 
                                               & ((4U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                                                   ? 0xfU
                                                   : 0U)) 
                                              & ((4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                                                  ? 0xfU
                                                  : 0U)));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
            ? ((0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT___dio_wire))
            : ((0xfeU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT___dio_wire))));
    vlSelf->ysyxSoCFull__DOT__psram__DOT__next = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 0U;
    } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 0U;
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                 == ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                      ? 0xfU : 0x15U))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 0U;
            }
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                    == (0xffU & ((IData)(1U) + ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                                 ? 0x15U
                                                 : 0x1bU))))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                 == ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                      ? 0xdU : 0x13U))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 4U;
            }
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
                    == ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                         ? 7U : 0xdU))) {
            if ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 5U;
            } else if ((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter) 
             == ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                  ? 1U : 7U))) {
            if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)) 
                 & (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done)))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 0U;
            } else if (((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done)) 
                        | (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done)))) {
                vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 2U;
            }
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__psram__DOT__next = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 4U);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 4U);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter)))
                ? 0U : 4U);
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 1U;
        } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 2U;
        } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 4U;
        }
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 0U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        if ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next = 3U;
        }
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 3U);
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state))) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next 
            = (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl)) 
                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter)))
                ? 0U : 4U);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(6U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
         | vlSelf->__VnbaTriggered.at(5U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
          | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(6U))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
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
    VlTriggerVec<7> __VpreTriggered;
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
                VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 6573, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 6573, "", "Active region did not converge.");
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
                VL_FATAL_MT("../ysyxSoC/build/ysyxSoCFull.v", 6573, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_clk & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_clk");}
    if (VL_UNLIKELY((vlSelf->externalPins_ps2_data 
                     & 0xfeU))) {
        Verilated::overWidthError("externalPins_ps2_data");}
    if (VL_UNLIKELY((vlSelf->externalPins_uart_rx & 0xfeU))) {
        Verilated::overWidthError("externalPins_uart_rx");}
}
#endif  // VL_DEBUG
