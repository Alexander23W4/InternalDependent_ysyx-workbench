// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<32>/*1023:0*/ __Vtemp_hf4c6a2b0__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgBit(oldp+0,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
        bufp->chgBit(oldp+1,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
        bufp->chgBit(oldp+2,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+3,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+4,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+5,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+6,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+7,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+8,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
        bufp->chgBit(oldp+10,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
        bufp->chgBit(oldp+11,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 1U) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+12,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 0xaU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+13,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 0xbU) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+14,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+15,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xdU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+16,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xeU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+17,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                               & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+18,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+19,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                          & ((((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+20,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 4U) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+21,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 5U) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+22,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 6U) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+23,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 7U) 
                                            & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+24,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 8U) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
        bufp->chgBit(oldp+25,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 9U) 
                                           & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+26,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)))));
        bufp->chgBit(oldp+27,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 1U)))));
        bufp->chgBit(oldp+28,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 0xaU)))));
        bufp->chgBit(oldp+29,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 0xbU)))));
        bufp->chgBit(oldp+30,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+31,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+32,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+33,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                               & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                  >> 0xfU))));
        bufp->chgBit(oldp+34,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 2U)))));
        bufp->chgBit(oldp+35,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                             >> 3U)))));
        bufp->chgBit(oldp+36,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 4U)))));
        bufp->chgBit(oldp+37,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 5U)))));
        bufp->chgBit(oldp+38,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 6U)))));
        bufp->chgBit(oldp+39,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                            >> 7U)))));
        bufp->chgBit(oldp+40,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 8U)))));
        bufp->chgBit(oldp+41,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 9U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+42,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
        bufp->chgBit(oldp+43,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid));
        bufp->chgCData(oldp+44,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+45,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
        bufp->chgCData(oldp+46,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+47,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
        bufp->chgBit(oldp+48,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgBit(oldp+49,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
        bufp->chgBit(oldp+50,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready));
        bufp->chgBit(oldp+51,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
        bufp->chgBit(oldp+52,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgBit(oldp+56,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
        bufp->chgCData(oldp+57,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
        bufp->chgIData(oldp+58,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
        bufp->chgCData(oldp+59,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
        bufp->chgBit(oldp+60,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast));
        bufp->chgBit(oldp+61,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready));
        bufp->chgBit(oldp+62,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving));
        bufp->chgCData(oldp+63,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
        bufp->chgIData(oldp+64,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
        bufp->chgCData(oldp+65,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
        bufp->chgBit(oldp+66,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
        bufp->chgSData(oldp+67,((0xffffU & ((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
        bufp->chgBit(oldp+68,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
        bufp->chgBit(oldp+69,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
        bufp->chgCData(oldp+70,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x1bU]))) {
        bufp->chgBit(oldp+71,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready));
        bufp->chgBit(oldp+72,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
        bufp->chgBit(oldp+73,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
        bufp->chgBit(oldp+74,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren));
        bufp->chgBit(oldp+75,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x1eU]))) {
        bufp->chgBit(oldp+76,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid));
        bufp->chgIData(oldp+77,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache),32);
        bufp->chgCData(oldp+78,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error),2);
        bufp->chgCData(oldp+79,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next),2);
        bufp->chgCData(oldp+80,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next),2);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgBit(oldp+81,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                               & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                   ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                   : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                               & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
        bufp->chgBit(oldp+83,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 1U)))));
        bufp->chgBit(oldp+84,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 2U)))));
        bufp->chgBit(oldp+85,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                             >> 3U)))));
        bufp->chgBit(oldp+86,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 4U)))));
        bufp->chgBit(oldp+87,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 5U)))));
        bufp->chgBit(oldp+88,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 6U)))));
        bufp->chgBit(oldp+89,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 7U)))));
        bufp->chgBit(oldp+90,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 8U)))));
        bufp->chgBit(oldp+91,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 9U)))));
        bufp->chgBit(oldp+92,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 0xaU)))));
        bufp->chgBit(oldp+93,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 0xbU)))));
        bufp->chgBit(oldp+94,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xcU)))));
        bufp->chgBit(oldp+95,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+96,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+97,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                               & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                  >> 0xfU))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgBit(oldp+98,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                               & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)))));
        bufp->chgBit(oldp+99,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 1U)))));
        bufp->chgBit(oldp+100,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 2U)))));
        bufp->chgBit(oldp+101,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                           & (((IData)(1U) 
                                               << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                              >> 3U)))));
        bufp->chgBit(oldp+102,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 4U)))));
        bufp->chgBit(oldp+103,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 5U)))));
        bufp->chgBit(oldp+104,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 6U)))));
        bufp->chgBit(oldp+105,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                          & (((IData)(1U) 
                                              << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                             >> 7U)))));
        bufp->chgBit(oldp+106,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 8U)))));
        bufp->chgBit(oldp+107,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 9U)))));
        bufp->chgBit(oldp+108,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+109,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                            >> 0xbU)))));
        bufp->chgBit(oldp+110,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 0xcU)))));
        bufp->chgBit(oldp+111,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+112,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+113,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                   >> 0xfU))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x19U]))) {
        bufp->chgBit(oldp+114,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
        bufp->chgCData(oldp+115,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
        bufp->chgCData(oldp+116,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
        bufp->chgBit(oldp+117,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready));
        bufp->chgBit(oldp+118,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving));
        bufp->chgBit(oldp+119,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
        bufp->chgCData(oldp+120,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
        bufp->chgSData(oldp+121,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
        bufp->chgBit(oldp+122,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
        bufp->chgBit(oldp+123,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0x1cU]))) {
        bufp->chgBit(oldp+124,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready));
        bufp->chgBit(oldp+125,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready));
        bufp->chgBit(oldp+126,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready));
        bufp->chgBit(oldp+127,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
        bufp->chgBit(oldp+128,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
        bufp->chgBit(oldp+129,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
        bufp->chgBit(oldp+130,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+131,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
        bufp->chgBit(oldp+132,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
        bufp->chgBit(oldp+133,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
        bufp->chgBit(oldp+134,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
        bufp->chgBit(oldp+135,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
        bufp->chgBit(oldp+136,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+137,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+138,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0x1dU]))) {
        bufp->chgCData(oldp+139,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next),2);
        bufp->chgCData(oldp+140,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next),3);
        bufp->chgBit(oldp+141,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next));
        bufp->chgBit(oldp+142,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next));
        bufp->chgBit(oldp+143,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+144,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+145,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q 
                                           >> 8U))),8);
        bufp->chgCData(oldp+146,((0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q)),8);
        bufp->chgBit(oldp+147,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync_q));
        bufp->chgBit(oldp+148,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync_q));
        bufp->chgBit(oldp+149,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q))));
        bufp->chgBit(oldp+150,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+151,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgIData(oldp+152,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x18U) | 
                                  ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [2U] << 0x10U) 
                                   | ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U])))),32);
        bufp->chgBit(oldp+153,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+154,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+155,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                  >> 0x2bU)))),4);
        bufp->chgIData(oldp+156,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                          >> 0xbU))),32);
        bufp->chgCData(oldp+157,((0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                   >> 3U)))),8);
        bufp->chgCData(oldp+158,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
        bufp->chgBit(oldp+159,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
        bufp->chgIData(oldp+160,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                          >> 4U))),32);
        bufp->chgCData(oldp+161,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
        bufp->chgBit(oldp+162,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
        bufp->chgCData(oldp+163,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgBit(oldp+164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+165,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
        bufp->chgCData(oldp+166,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                  >> 0x2bU)))),4);
        bufp->chgIData(oldp+167,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                          >> 0xbU))),32);
        bufp->chgCData(oldp+168,((0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                   >> 3U)))),8);
        bufp->chgCData(oldp+169,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
        bufp->chgBit(oldp+170,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
        bufp->chgCData(oldp+171,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+172,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+173,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+174,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+175,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+176,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+177,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+178,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+179,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+180,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
        bufp->chgCData(oldp+181,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgCData(oldp+182,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgBit(oldp+183,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+184,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+185,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                          >> 2U))),4);
        bufp->chgCData(oldp+186,((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
        bufp->chgBit(oldp+187,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
        bufp->chgCData(oldp+188,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid),4);
        bufp->chgBit(oldp+189,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
        bufp->chgCData(oldp+190,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 0x23U)))),4);
        bufp->chgIData(oldp+191,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                          >> 3U))),32);
        bufp->chgCData(oldp+192,((3U & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+193,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
        bufp->chgBit(oldp+194,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
        bufp->chgBit(oldp+195,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+196,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+197,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+198,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
        bufp->chgBit(oldp+199,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
        bufp->chgCData(oldp+200,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
        bufp->chgCData(oldp+201,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
        bufp->chgCData(oldp+202,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
        bufp->chgBit(oldp+203,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+204,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
        bufp->chgBit(oldp+205,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+206,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+207,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+208,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
        bufp->chgBit(oldp+209,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
        bufp->chgQData(oldp+210,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
        bufp->chgQData(oldp+212,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
        bufp->chgQData(oldp+214,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
        bufp->chgBit(oldp+216,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+217,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
        bufp->chgBit(oldp+218,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+219,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+220,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+221,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
        bufp->chgBit(oldp+222,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
        bufp->chgQData(oldp+223,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
        bufp->chgQData(oldp+225,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+227,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+229,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+230,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
        bufp->chgBit(oldp+231,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+232,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+233,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+234,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
        bufp->chgBit(oldp+235,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
        bufp->chgQData(oldp+236,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
        bufp->chgQData(oldp+238,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
        bufp->chgQData(oldp+240,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
        bufp->chgBit(oldp+242,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+243,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
        bufp->chgBit(oldp+244,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
        bufp->chgBit(oldp+245,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
        bufp->chgBit(oldp+246,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
        bufp->chgBit(oldp+247,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
        bufp->chgBit(oldp+248,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
        bufp->chgQData(oldp+249,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
        bufp->chgQData(oldp+251,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
        bufp->chgQData(oldp+253,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
        bufp->chgBit(oldp+255,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
        bufp->chgBit(oldp+256,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+257,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+258,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
        bufp->chgCData(oldp+259,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
        bufp->chgCData(oldp+260,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                        | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                << 0x1cU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                   << 0x1aU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                         << 0x16U) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                               << 0x12U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                     << 0xeU) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                        << 0xcU) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                           << 0xaU) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                              << 8U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                  << 1U)))))),2);
        bufp->chgBit(oldp+261,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+262,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
        bufp->chgCData(oldp+263,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
        bufp->chgIData(oldp+264,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                    ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U))
                                    : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                               ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                               : 0U) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    (vlSelf->__VdfgTmp_h2168da81__0 
                                                     >> 0x18U)
                                                     : 0U)
                                                    : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          (vlSelf->__VdfgTmp_h2168da81__0 
                                                           >> 0x10U)
                                                           : 0U)
                                                          : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? 
                                                            ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_h2168da81__0 
                                                              >> 8U)
                                                              : 0U)
                                                             : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? vlSelf->__VdfgTmp_h2168da81__0
                                                               : 0U)
                                                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                 : 0U)))),32);
        bufp->chgCData(oldp+265,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                          ? (IData)(
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                     >> 1U))
                                          : 0U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                     ? 0U
                                                     : 3U)
                                                    : 0U)))),2);
        bufp->chgBit(oldp+266,((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                   << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                << 0xeU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                   << 0xdU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                      << 0xcU) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                         << 0xbU) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                               << 9U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                  << 8U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                 >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
        bufp->chgBit(oldp+267,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
        bufp->chgBit(oldp+268,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
        bufp->chgCData(oldp+269,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
        bufp->chgBit(oldp+270,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
        bufp->chgBit(oldp+271,((1U & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                        << 0xfU) | 
                                       (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                      >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
        bufp->chgBit(oldp+272,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
        bufp->chgBit(oldp+273,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+274,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+275,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+276,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgBit(oldp+277,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+278,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+279,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+280,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgBit(oldp+281,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgSData(oldp+282,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgCData(oldp+283,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+284,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+285,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+286,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+287,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+288,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+289,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+290,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+291,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+292,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+293,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+294,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+295,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+296,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+297,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+298,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgQData(oldp+299,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+301,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgCData(oldp+302,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgQData(oldp+303,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+305,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+306,((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
        bufp->chgQData(oldp+307,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+309,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+310,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+311,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+312,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+313,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+314,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+315,(((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                     ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                         ? (vlSelf->__VdfgTmp_h2168da81__0 
                                            >> 0x18U)
                                         : 0U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_h2168da81__0 
                                                       >> 0x10U)
                                                       : 0U)
                                                      : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelf->__VdfgTmp_h2168da81__0 
                                                          >> 8U)
                                                          : 0U)
                                                         : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? vlSelf->__VdfgTmp_h2168da81__0
                                                           : 0U)
                                                          : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
        bufp->chgCData(oldp+316,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+317,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+318,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+319,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+320,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+321,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+322,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+323,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgIData(oldp+324,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
        bufp->chgCData(oldp+325,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
        bufp->chgBit(oldp+326,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
        bufp->chgCData(oldp+327,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
        bufp->chgBit(oldp+328,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
        bufp->chgCData(oldp+329,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
        bufp->chgCData(oldp+330,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
        bufp->chgCData(oldp+331,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
        bufp->chgCData(oldp+332,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
        bufp->chgCData(oldp+333,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
        bufp->chgCData(oldp+334,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
        bufp->chgCData(oldp+335,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
        bufp->chgCData(oldp+336,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
        bufp->chgCData(oldp+337,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
        bufp->chgCData(oldp+338,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
        bufp->chgCData(oldp+339,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
        bufp->chgCData(oldp+340,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
        bufp->chgCData(oldp+341,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
        bufp->chgCData(oldp+342,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
        bufp->chgCData(oldp+343,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
        bufp->chgCData(oldp+344,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
        bufp->chgCData(oldp+345,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
        bufp->chgCData(oldp+346,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
        bufp->chgCData(oldp+347,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
        bufp->chgCData(oldp+348,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
        bufp->chgCData(oldp+349,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
        bufp->chgCData(oldp+350,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
        bufp->chgCData(oldp+351,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
        bufp->chgCData(oldp+352,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
        bufp->chgCData(oldp+353,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
        bufp->chgCData(oldp+354,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
        bufp->chgCData(oldp+355,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
        bufp->chgCData(oldp+356,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
        bufp->chgCData(oldp+357,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
        bufp->chgCData(oldp+358,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
        bufp->chgBit(oldp+359,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched));
        bufp->chgBit(oldp+360,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2));
        bufp->chgCData(oldp+361,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+362,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
        bufp->chgBit(oldp+363,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
        bufp->chgBit(oldp+364,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3));
        bufp->chgCData(oldp+365,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
        bufp->chgBit(oldp+366,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
        bufp->chgBit(oldp+367,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
        bufp->chgBit(oldp+368,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+369,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+370,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+371,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+372,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+373,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+374,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+375,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
        bufp->chgCData(oldp+376,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
        bufp->chgCData(oldp+377,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
        bufp->chgBit(oldp+378,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+379,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+380,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+381,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgSData(oldp+382,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
        bufp->chgSData(oldp+383,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
        bufp->chgSData(oldp+384,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
        bufp->chgSData(oldp+385,((0xffffU & ((IData)(1U) 
                                             << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
        bufp->chgBit(oldp+386,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+387,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+388,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+389,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+390,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+391,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+392,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+393,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+394,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+395,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+396,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+397,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+398,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+399,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+400,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+401,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+402,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+403,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+404,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+405,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+406,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+407,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+408,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+409,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+410,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+411,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+412,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+413,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+414,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+415,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+416,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+417,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+418,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+419,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgBit(oldp+420,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
        bufp->chgCData(oldp+421,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
        bufp->chgCData(oldp+422,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgCData(oldp+423,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
        bufp->chgCData(oldp+424,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
        bufp->chgBit(oldp+425,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
        bufp->chgBit(oldp+426,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
        bufp->chgBit(oldp+427,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
        bufp->chgBit(oldp+428,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+429,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+430,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+431,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
        bufp->chgBit(oldp+432,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
        bufp->chgBit(oldp+433,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
        bufp->chgBit(oldp+434,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgBit(oldp+435,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
        bufp->chgCData(oldp+436,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
        bufp->chgCData(oldp+437,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgCData(oldp+438,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
        bufp->chgCData(oldp+439,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
        bufp->chgBit(oldp+440,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
        bufp->chgBit(oldp+441,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
        bufp->chgBit(oldp+442,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+443,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+444,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
        bufp->chgBit(oldp+445,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
        bufp->chgBit(oldp+446,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgBit(oldp+447,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+448,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+449,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+450,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+451,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+452,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+453,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+454,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+455,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+456,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+457,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+458,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+459,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+460,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+461,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+462,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+463,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+464,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+465,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+466,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+467,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+468,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+469,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+470,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+471,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+472,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+473,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+474,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+475,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+476,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+477,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+478,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+479,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+480,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+481,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+482,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+483,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+484,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+485,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+486,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+487,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+488,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+489,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+490,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+491,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+492,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+493,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+494,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+495,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+496,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+497,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+498,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+499,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+500,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+501,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+502,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+503,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+504,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+505,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+506,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+507,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+508,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+509,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+510,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+511,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+512,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+513,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+514,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+515,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+516,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+517,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+518,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+519,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+520,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+521,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+522,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+523,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+524,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+525,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+526,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+527,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+528,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+529,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+530,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+531,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+532,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+533,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+534,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+535,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+536,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+537,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+538,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+539,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+540,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+541,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+542,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+543,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+544,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+545,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+546,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+547,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+548,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+549,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+550,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+551,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+552,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+553,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+554,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+555,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+556,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+557,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+558,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+559,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+560,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+561,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+562,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+563,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+564,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+565,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+566,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+567,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+568,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+569,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+570,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+571,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+572,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+573,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+574,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+575,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+576,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+577,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+578,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+579,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+580,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+581,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+582,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+583,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgIData(oldp+584,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt),32);
        bufp->chgIData(oldp+585,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu),32);
        bufp->chgIData(oldp+586,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft),32);
        bufp->chgBit(oldp+587,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt));
        bufp->chgBit(oldp+588,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_eq));
        bufp->chgBit(oldp+589,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu));
        bufp->chgBit(oldp+590,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+591,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+592,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+593,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+594,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+595,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+596,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+597,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+598,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+599,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgCData(oldp+600,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+601,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+602,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+603,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+604,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+605,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+606,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+607,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+608,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+609,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+610,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+611,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+612,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+613,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+614,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+615,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+616,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+617,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+618,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+619,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+620,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+621,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+622,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+623,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+624,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+625,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+626,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+627,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+628,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+629,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+630,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+631,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+632,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+633,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+634,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+635,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+636,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgSData(oldp+637,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
        bufp->chgSData(oldp+638,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
        bufp->chgBit(oldp+639,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
        bufp->chgBit(oldp+640,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
        bufp->chgSData(oldp+641,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                   ? (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                - (IData)(0x91U)))
                                   : 0U)),10);
        bufp->chgSData(oldp+642,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                   ? (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                - (IData)(0x24U)))
                                   : 0U)),10);
        bufp->chgIData(oldp+643,((0x7ffffU & (((IData)(0x280U) 
                                               * ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                                   ? 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                      - (IData)(0x24U)))
                                                   : 0U)) 
                                              + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                     - (IData)(0x91U)))
                                                  : 0U)))),19);
        bufp->chgIData(oldp+644,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q),32);
        bufp->chgBit(oldp+645,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q));
        bufp->chgBit(oldp+646,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+647,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__buffer),8);
        bufp->chgCData(oldp+648,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__bits),4);
        bufp->chgIData(oldp+649,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+650,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize),3);
        bufp->chgBit(oldp+651,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready));
        bufp->chgBit(oldp+654,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw));
        bufp->chgBit(oldp+655,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw));
        bufp->chgCData(oldp+656,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save),5);
        bufp->chgIData(oldp+657,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_pc_out),32);
        bufp->chgIData(oldp+658,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu),32);
        bufp->chgIData(oldp+659,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_pc_out),32);
        bufp->chgIData(oldp+660,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+661,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle),32);
        bufp->chgIData(oldp+662,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh),32);
        bufp->chgIData(oldp+663,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid),32);
        bufp->chgIData(oldp+664,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid),32);
        bufp->chgWData(oldp+665,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[0]),128);
        bufp->chgWData(oldp+669,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[1]),128);
        bufp->chgWData(oldp+673,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[2]),128);
        bufp->chgWData(oldp+677,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[3]),128);
        bufp->chgWData(oldp+681,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[4]),128);
        bufp->chgWData(oldp+685,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[5]),128);
        bufp->chgWData(oldp+689,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[6]),128);
        bufp->chgWData(oldp+693,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[7]),128);
        bufp->chgIData(oldp+697,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[0]),25);
        bufp->chgIData(oldp+698,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[1]),25);
        bufp->chgIData(oldp+699,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[2]),25);
        bufp->chgIData(oldp+700,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[3]),25);
        bufp->chgIData(oldp+701,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[4]),25);
        bufp->chgIData(oldp+702,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[5]),25);
        bufp->chgIData(oldp+703,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[6]),25);
        bufp->chgIData(oldp+704,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[7]),25);
        bufp->chgBit(oldp+705,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0]));
        bufp->chgBit(oldp+706,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1]));
        bufp->chgBit(oldp+707,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2]));
        bufp->chgBit(oldp+708,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3]));
        bufp->chgBit(oldp+709,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4]));
        bufp->chgBit(oldp+710,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5]));
        bufp->chgBit(oldp+711,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6]));
        bufp->chgBit(oldp+712,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7]));
        bufp->chgCData(oldp+713,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save),2);
        bufp->chgCData(oldp+714,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat),2);
        bufp->chgCData(oldp+715,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state),2);
        bufp->chgIData(oldp+716,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+717,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+718,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save));
        bufp->chgCData(oldp+719,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save),2);
        bufp->chgBit(oldp+720,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save));
        bufp->chgIData(oldp+721,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save),32);
        bufp->chgIData(oldp+722,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save),32);
        bufp->chgIData(oldp+723,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out),32);
        bufp->chgCData(oldp+724,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
        bufp->chgBit(oldp+725,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done));
        bufp->chgBit(oldp+726,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done));
        bufp->chgBit(oldp+727,((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
        bufp->chgBit(oldp+728,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
        bufp->chgBit(oldp+729,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
        bufp->chgQData(oldp+730,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime),64);
        bufp->chgIData(oldp+732,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save),32);
        bufp->chgCData(oldp+733,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state),2);
        bufp->chgBit(oldp+734,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint));
        bufp->chgBit(oldp+735,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state));
        bufp->chgBit(oldp+736,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
        bufp->chgCData(oldp+738,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize),3);
        bufp->chgBit(oldp+739,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready));
        bufp->chgIData(oldp+740,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata),32);
        bufp->chgCData(oldp+741,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp),2);
        bufp->chgBit(oldp+742,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid));
        bufp->chgBit(oldp+743,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast));
        bufp->chgBit(oldp+744,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgCData(oldp+745,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state),3);
        bufp->chgCData(oldp+746,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl),8);
        bufp->chgIData(oldp+747,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr),24);
        bufp->chgCData(oldp+748,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter),8);
        bufp->chgCData(oldp+749,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__dout),4);
        bufp->chgCData(oldp+750,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_hi),4);
        bufp->chgBit(oldp+751,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi));
        bufp->chgBit(oldp+752,((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))));
        bufp->chgCData(oldp+753,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 1U : 7U)),8);
        bufp->chgCData(oldp+754,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 2U : 8U)),8);
        bufp->chgCData(oldp+755,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 7U : 0xdU)),8);
        bufp->chgCData(oldp+756,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 0xdU : 0x13U)),8);
        bufp->chgCData(oldp+757,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 0xeU : 0x14U)),8);
        bufp->chgCData(oldp+758,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 0x15U : 0x1bU)),8);
        bufp->chgCData(oldp+759,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 8U : 0xeU)),8);
        bufp->chgCData(oldp+760,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                   ? 0xfU : 0x15U)),8);
        bufp->chgCData(oldp+761,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off),8);
        bufp->chgCData(oldp+762,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off),8);
        bufp->chgCData(oldp+763,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off) 
                                        >> 1U))),2);
        bufp->chgBit(oldp+764,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off))));
        bufp->chgCData(oldp+765,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                        >> 1U))),2);
        bufp->chgIData(oldp+766,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_idx),22);
        bufp->chgIData(oldp+767,((0x3fffffU & (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr 
                                               + (3U 
                                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                                     >> 1U))))),22);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgSData(oldp+768,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r),16);
        bufp->chgCData(oldp+769,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_0),8);
        bufp->chgCData(oldp+770,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_1),8);
        bufp->chgCData(oldp+771,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_2),8);
        bufp->chgCData(oldp+772,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_3),8);
        bufp->chgCData(oldp+773,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_4),8);
        bufp->chgCData(oldp+774,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_5),8);
        bufp->chgCData(oldp+775,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_6),8);
        bufp->chgCData(oldp+776,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_7),8);
        bufp->chgBit(oldp+777,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U) | ((~ 
                                                  ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 6U)) 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
        bufp->chgBit(oldp+778,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck));
        bufp->chgCData(oldp+779,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss),8);
        bufp->chgBit(oldp+780,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi));
        bufp->chgBit(oldp+781,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U))));
        bufp->chgBit(oldp+782,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+783,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+784,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
        bufp->chgCData(oldp+785,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
        bufp->chgIData(oldp+786,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
        bufp->chgIData(oldp+787,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save),32);
        bufp->chgBit(oldp+788,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save));
        bufp->chgBit(oldp+789,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
        bufp->chgCData(oldp+790,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
        bufp->chgIData(oldp+791,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
        bufp->chgBit(oldp+792,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                      >> 4U))));
        bufp->chgBit(oldp+793,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
        bufp->chgCData(oldp+794,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state),2);
        bufp->chgQData(oldp+795,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0]),33);
        bufp->chgQData(oldp+797,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1]),33);
        bufp->chgQData(oldp+799,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2]),33);
        bufp->chgQData(oldp+801,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3]),33);
        bufp->chgQData(oldp+803,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4]),33);
        bufp->chgQData(oldp+805,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5]),33);
        bufp->chgQData(oldp+807,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6]),33);
        bufp->chgQData(oldp+809,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7]),33);
        bufp->chgQData(oldp+811,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8]),33);
        bufp->chgQData(oldp+813,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9]),33);
        bufp->chgQData(oldp+815,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[10]),33);
        bufp->chgQData(oldp+817,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[11]),33);
        bufp->chgQData(oldp+819,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[12]),33);
        bufp->chgQData(oldp+821,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[13]),33);
        bufp->chgQData(oldp+823,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[14]),33);
        bufp->chgQData(oldp+825,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[15]),33);
        bufp->chgQData(oldp+827,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[16]),33);
        bufp->chgQData(oldp+829,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[17]),33);
        bufp->chgQData(oldp+831,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[18]),33);
        bufp->chgQData(oldp+833,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[19]),33);
        bufp->chgQData(oldp+835,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[20]),33);
        bufp->chgQData(oldp+837,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[21]),33);
        bufp->chgQData(oldp+839,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[22]),33);
        bufp->chgQData(oldp+841,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[23]),33);
        bufp->chgQData(oldp+843,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[24]),33);
        bufp->chgQData(oldp+845,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[25]),33);
        bufp->chgQData(oldp+847,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[26]),33);
        bufp->chgQData(oldp+849,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[27]),33);
        bufp->chgQData(oldp+851,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[28]),33);
        bufp->chgQData(oldp+853,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[29]),33);
        bufp->chgQData(oldp+855,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[30]),33);
        bufp->chgQData(oldp+857,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[31]),33);
        bufp->chgIData(oldp+859,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0]),32);
        bufp->chgIData(oldp+860,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1]),32);
        bufp->chgIData(oldp+861,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2]),32);
        bufp->chgIData(oldp+862,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3]),32);
        bufp->chgIData(oldp+863,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4]),32);
        bufp->chgIData(oldp+864,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5]),32);
        bufp->chgIData(oldp+865,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6]),32);
        bufp->chgIData(oldp+866,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7]),32);
        bufp->chgIData(oldp+867,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8]),32);
        bufp->chgIData(oldp+868,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9]),32);
        bufp->chgIData(oldp+869,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[10]),32);
        bufp->chgIData(oldp+870,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[11]),32);
        bufp->chgIData(oldp+871,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[12]),32);
        bufp->chgIData(oldp+872,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[13]),32);
        bufp->chgIData(oldp+873,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[14]),32);
        bufp->chgIData(oldp+874,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[15]),32);
        bufp->chgIData(oldp+875,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[16]),32);
        bufp->chgIData(oldp+876,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[17]),32);
        bufp->chgIData(oldp+877,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[18]),32);
        bufp->chgIData(oldp+878,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[19]),32);
        bufp->chgIData(oldp+879,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[20]),32);
        bufp->chgIData(oldp+880,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[21]),32);
        bufp->chgIData(oldp+881,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[22]),32);
        bufp->chgIData(oldp+882,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[23]),32);
        bufp->chgIData(oldp+883,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[24]),32);
        bufp->chgIData(oldp+884,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[25]),32);
        bufp->chgIData(oldp+885,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[26]),32);
        bufp->chgIData(oldp+886,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[27]),32);
        bufp->chgIData(oldp+887,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[28]),32);
        bufp->chgIData(oldp+888,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[29]),32);
        bufp->chgIData(oldp+889,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[30]),32);
        bufp->chgIData(oldp+890,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[31]),32);
        bufp->chgCData(oldp+891,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat),6);
        bufp->chgCData(oldp+892,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat),6);
        bufp->chgCData(oldp+893,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save),5);
        bufp->chgCData(oldp+894,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save),4);
        bufp->chgCData(oldp+895,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save),2);
        bufp->chgQData(oldp+896,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter),33);
        bufp->chgBit(oldp+898,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received));
        bufp->chgCData(oldp+899,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save),4);
        bufp->chgCData(oldp+900,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_save),2);
        bufp->chgIData(oldp+901,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
        bufp->chgCData(oldp+902,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r),8);
        bufp->chgCData(oldp+903,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r),8);
        bufp->chgCData(oldp+904,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r),8);
        bufp->chgCData(oldp+905,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r),8);
        bufp->chgCData(oldp+906,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
        bufp->chgCData(oldp+907,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter),8);
        bufp->chgBit(oldp+908,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc));
        bufp->chgBit(oldp+909,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok));
        bufp->chgCData(oldp+910,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode),8);
        bufp->chgBit(oldp+911,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid));
        bufp->chgBit(oldp+912,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
        bufp->chgBit(oldp+913,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgCData(oldp+914,((0xfU & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                           ? (1U & 
                                              (0x35U 
                                               >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                           : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                               <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                    ? 1U
                                                    : 7U))
                                               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
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
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                     ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                      ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                      : 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                      ? 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 8U)
                                                      : 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                      ? 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x10U)
                                                      : 
                                                     (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0x14U))))
                                                   : 0U))))),4);
        bufp->chgBit(oldp+915,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0))));
        bufp->chgBit(oldp+916,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+917,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+918,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+919,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
        bufp->chgBit(oldp+920,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
        bufp->chgBit(oldp+921,(((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
        bufp->chgBit(oldp+922,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgCData(oldp+923,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
        bufp->chgCData(oldp+924,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
        bufp->chgIData(oldp+925,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgCData(oldp+926,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? 1U : 7U)),8);
        bufp->chgCData(oldp+927,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? 2U : 8U)),8);
        bufp->chgCData(oldp+928,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? 7U : 0xdU)),8);
        bufp->chgCData(oldp+929,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? 0xdU : 0x13U)),8);
        bufp->chgCData(oldp+930,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? 0xeU : 0x14U)),8);
        bufp->chgCData(oldp+931,((0xffU & ((IData)(7U) 
                                           + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                               ? 0xeU
                                               : 0x14U)))),8);
        bufp->chgCData(oldp+932,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                       ? 0xbU : 0xeU)
                                   : (1U & (0xebU >> 
                                            (7U & ((IData)(7U) 
                                                   - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))),4);
        bufp->chgCData(oldp+933,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8),8);
        bufp->chgCData(oldp+934,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))),3);
        bufp->chgCData(oldp+935,((0xfU & ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                           ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                               ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                               : ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)))
                                           : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                               ? ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU))
                                               : ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x14U)))))),4);
        bufp->chgCData(oldp+936,((0xffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                            >> 1U) 
                                           - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                               ? 7U
                                               : 0xaU)))),8);
        bufp->chgCData(oldp+937,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                    ? 7U
                                                    : 0xaU)))),2);
        bufp->chgBit(oldp+938,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+939,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+940,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgCData(oldp+941,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? 8U : 0xeU)),8);
        bufp->chgCData(oldp+942,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                   ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                       ? 8U : 3U) : 
                                  (1U & (0x38U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))),4);
        bufp->chgCData(oldp+943,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8),8);
        bufp->chgCData(oldp+944,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))),3);
        bufp->chgCData(oldp+945,((0xfU & ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                           ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                               ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                               : ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)))
                                           : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                               ? ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0xcU))
                                               : ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U)))))),4);
        bufp->chgCData(oldp+946,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8),8);
        bufp->chgCData(oldp+947,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))),3);
        bufp->chgCData(oldp+948,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                        >> 1U))),2);
        bufp->chgBit(oldp+949,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
        bufp->chgIData(oldp+950,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
        bufp->chgIData(oldp+951,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
        bufp->chgBit(oldp+952,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
        bufp->chgIData(oldp+953,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
        bufp->chgCData(oldp+954,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
        bufp->chgIData(oldp+955,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
        bufp->chgBit(oldp+956,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
        bufp->chgBit(oldp+957,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
        bufp->chgCData(oldp+958,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
        bufp->chgCData(oldp+959,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
        bufp->chgCData(oldp+960,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
        bufp->chgBit(oldp+961,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
        bufp->chgBit(oldp+962,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
        bufp->chgBit(oldp+963,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
        bufp->chgBit(oldp+964,((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgBit(oldp+965,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
        bufp->chgCData(oldp+966,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
        bufp->chgBit(oldp+967,(((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 5U)) & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
        bufp->chgBit(oldp+968,(((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 5U))));
        bufp->chgBit(oldp+969,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgBit(oldp+970,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
        bufp->chgBit(oldp+971,((1U & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
        bufp->chgCData(oldp+972,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
        bufp->chgCData(oldp+973,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
        bufp->chgCData(oldp+974,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
        bufp->chgCData(oldp+975,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
        bufp->chgCData(oldp+976,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
        bufp->chgCData(oldp+977,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
        bufp->chgCData(oldp+978,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
        bufp->chgBit(oldp+979,((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
        bufp->chgIData(oldp+980,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
        bufp->chgIData(oldp+981,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
        bufp->chgIData(oldp+982,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
        bufp->chgIData(oldp+983,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
        bufp->chgCData(oldp+984,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
        bufp->chgCData(oldp+985,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
        bufp->chgCData(oldp+986,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
        bufp->chgCData(oldp+987,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
        bufp->chgBit(oldp+988,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
        bufp->chgCData(oldp+989,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
        bufp->chgBit(oldp+990,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
        bufp->chgCData(oldp+991,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
        bufp->chgSData(oldp+992,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),14);
        bufp->chgSData(oldp+993,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),14);
        bufp->chgSData(oldp+994,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),14);
        bufp->chgSData(oldp+995,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),14);
        bufp->chgCData(oldp+996,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
        bufp->chgCData(oldp+997,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
        bufp->chgCData(oldp+998,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
        bufp->chgIData(oldp+999,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
        bufp->chgIData(oldp+1000,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
        bufp->chgIData(oldp+1001,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
        bufp->chgCData(oldp+1002,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
        bufp->chgBit(oldp+1003,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
        bufp->chgIData(oldp+1004,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o),32);
        bufp->chgBit(oldp+1005,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack));
        bufp->chgCData(oldp+1006,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
        bufp->chgIData(oldp+1007,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr),32);
        bufp->chgIData(oldp+1008,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
        bufp->chgBit(oldp+1009,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready));
        bufp->chgBit(oldp+1010,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen));
        bufp->chgCData(oldp+1011,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr),5);
        bufp->chgIData(oldp+1012,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat),32);
        bufp->chgBit(oldp+1013,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we));
        bufp->chgBit(oldp+1014,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req));
        bufp->chgBit(oldp+1015,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
        bufp->chgIData(oldp+1016,((0x3000000U | (0xffffffU 
                                                 & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr))),32);
        bufp->chgIData(oldp+1017,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                     << 8U)) 
                                                 | ((0xff00U 
                                                     & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                        >> 8U)) 
                                                    | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                       >> 0x18U))))),32);
        bufp->chgSData(oldp+1018,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
        bufp->chgSData(oldp+1019,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
        bufp->chgCData(oldp+1020,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
        bufp->chgWData(oldp+1021,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
        bufp->chgBit(oldp+1025,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 9U))));
        bufp->chgBit(oldp+1026,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1027,((0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
        bufp->chgBit(oldp+1028,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 8U))));
        bufp->chgBit(oldp+1029,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1030,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1031,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1032,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
        bufp->chgBit(oldp+1033,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
        bufp->chgBit(oldp+1034,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
        bufp->chgBit(oldp+1035,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
        bufp->chgSData(oldp+1036,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
        bufp->chgBit(oldp+1037,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgBit(oldp+1038,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
        bufp->chgCData(oldp+1039,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
        bufp->chgCData(oldp+1040,((0xffU & ((0x800U 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                             ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                             : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                - (IData)(1U))))),8);
        bufp->chgCData(oldp+1041,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
        bufp->chgBit(oldp+1042,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
        bufp->chgBit(oldp+1043,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
        bufp->chgBit(oldp+1044,((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                          >> 1U)))));
        bufp->chgBit(oldp+1045,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+1046,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+1047,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U))));
        bufp->chgBit(oldp+1048,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
        bufp->chgBit(oldp+1049,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+1050,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+1051,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+1052,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+1053,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+1054,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
        bufp->chgCData(oldp+1055,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgSData(oldp+1056,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
        bufp->chgCData(oldp+1057,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+1058,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+1059,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+1060,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgSData(oldp+1061,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
        bufp->chgCData(oldp+1062,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+1063,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+1064,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
        bufp->chgBit(oldp+1065,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                       >> 7U))));
        bufp->chgBit(oldp+1066,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 4U))));
        bufp->chgBit(oldp+1067,((IData)((0x10U != (0x12U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+1068,((IData)((0x11U == (0x11U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+1069,((IData)((0x14U == (0x14U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+1070,((IData)((0x18U == (0x18U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+1071,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
                                                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+1072,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
        bufp->chgBit(oldp+1073,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+1074,((1U & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                       >> 1U))));
        bufp->chgBit(oldp+1075,((1U & (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0))));
        bufp->chgBit(oldp+1076,((1U & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                       >> 2U))));
        bufp->chgBit(oldp+1077,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
        bufp->chgBit(oldp+1078,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
        bufp->chgBit(oldp+1079,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+1080,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+1081,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+1082,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+1083,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+1084,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+1085,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+1086,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+1087,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+1088,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+1089,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+1090,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+1091,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+1092,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+1093,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
        bufp->chgBit(oldp+1094,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+1095,((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U] | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [1U] 
                                                | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [2U] 
                                                   | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [3U] 
                                                      | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U] 
                                                         | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [5U] 
                                                            | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [6U] 
                                                               | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [7U] 
                                                                  | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [8U] 
                                                                     | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [9U] 
                                                                        | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xaU] 
                                                                           | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xbU] 
                                                                              | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xcU] 
                                                                                | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgBit(oldp+1096,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
        bufp->chgCData(oldp+1097,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgCData(oldp+1098,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
        bufp->chgCData(oldp+1099,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
        bufp->chgCData(oldp+1100,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
        bufp->chgSData(oldp+1101,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+1102,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+1103,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+1104,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
        bufp->chgBit(oldp+1105,(((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                     >> 6U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
        bufp->chgBit(oldp+1106,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
        bufp->chgCData(oldp+1107,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+1108,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+1109,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+1110,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+1111,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+1112,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+1113,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+1114,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+1115,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+1116,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+1117,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+1118,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+1119,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+1120,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+1121,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+1122,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+1123,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+1124,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+1125,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+1126,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+1127,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+1128,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+1129,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+1130,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+1131,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgCData(oldp+1132,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+1133,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+1134,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+1135,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+1136,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+1137,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+1138,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+1139,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+1140,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+1141,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+1142,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+1143,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+1144,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+1145,((7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1146,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+1147,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+1148,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                           - (IData)(1U)))),4);
        bufp->chgSData(oldp+1149,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+1150,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                            >> 2U))),8);
        bufp->chgCData(oldp+1151,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+1152,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+1153,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+1154,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+1155,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+1156,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+1157,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+1158,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+1159,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+1160,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+1161,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+1162,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+1163,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+1164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+1165,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+1166,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+1167,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+1168,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+1169,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+1170,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0U]),3);
        bufp->chgCData(oldp+1171,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [1U]),3);
        bufp->chgCData(oldp+1172,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [2U]),3);
        bufp->chgCData(oldp+1173,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [3U]),3);
        bufp->chgCData(oldp+1174,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [4U]),3);
        bufp->chgCData(oldp+1175,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [5U]),3);
        bufp->chgCData(oldp+1176,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [6U]),3);
        bufp->chgCData(oldp+1177,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [7U]),3);
        bufp->chgCData(oldp+1178,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [8U]),3);
        bufp->chgCData(oldp+1179,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [9U]),3);
        bufp->chgCData(oldp+1180,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xaU]),3);
        bufp->chgCData(oldp+1181,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xbU]),3);
        bufp->chgCData(oldp+1182,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xcU]),3);
        bufp->chgCData(oldp+1183,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xdU]),3);
        bufp->chgCData(oldp+1184,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xeU]),3);
        bufp->chgCData(oldp+1185,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                  [0xfU]),3);
        bufp->chgCData(oldp+1186,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                            >> 3U))),8);
        bufp->chgCData(oldp+1187,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+1188,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+1189,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+1190,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+1191,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+1192,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+1193,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+1194,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+1195,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+1196,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+1197,((0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgBit(oldp+1198,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss) 
                                       >> 7U))));
        bufp->chgBit(oldp+1199,(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso));
        bufp->chgCData(oldp+1200,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__next),2);
        bufp->chgBit(oldp+1201,(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss));
        bufp->chgBit(oldp+1202,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgCData(oldp+1203,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state),3);
        bufp->chgSData(oldp+1204,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg),13);
        bufp->chgCData(oldp+1205,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter),3);
        bufp->chgCData(oldp+1206,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter),4);
        bufp->chgSData(oldp+1207,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out),16);
        bufp->chgBit(oldp+1208,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe));
        bufp->chgSData(oldp+1209,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a),9);
        bufp->chgCData(oldp+1210,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba),2);
        bufp->chgSData(oldp+1211,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1212,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1213,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1214,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1215,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state),3);
        bufp->chgSData(oldp+1216,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg),13);
        bufp->chgCData(oldp+1217,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter),3);
        bufp->chgCData(oldp+1218,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter),4);
        bufp->chgSData(oldp+1219,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out),16);
        bufp->chgBit(oldp+1220,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe));
        bufp->chgSData(oldp+1221,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a),9);
        bufp->chgCData(oldp+1222,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba),2);
        bufp->chgSData(oldp+1223,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1224,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1225,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1226,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1227,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state),3);
        bufp->chgSData(oldp+1228,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg),13);
        bufp->chgCData(oldp+1229,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter),3);
        bufp->chgCData(oldp+1230,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter),4);
        bufp->chgSData(oldp+1231,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out),16);
        bufp->chgBit(oldp+1232,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe));
        bufp->chgSData(oldp+1233,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a),9);
        bufp->chgCData(oldp+1234,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba),2);
        bufp->chgSData(oldp+1235,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1236,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1237,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1238,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[3]),13);
        bufp->chgCData(oldp+1239,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state),3);
        bufp->chgSData(oldp+1240,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg),13);
        bufp->chgCData(oldp+1241,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter),3);
        bufp->chgCData(oldp+1242,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter),4);
        bufp->chgSData(oldp+1243,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out),16);
        bufp->chgBit(oldp+1244,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe));
        bufp->chgSData(oldp+1245,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a),9);
        bufp->chgCData(oldp+1246,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba),2);
        bufp->chgSData(oldp+1247,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[0]),13);
        bufp->chgSData(oldp+1248,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[1]),13);
        bufp->chgSData(oldp+1249,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[2]),13);
        bufp->chgSData(oldp+1250,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[3]),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgIData(oldp+1251,(vlSelf->difftest_top__DOT__u_ref__DOT__instr),32);
        bufp->chgIData(oldp+1252,(vlSelf->difftest_top__DOT__u_ref__DOT__pc),32);
        bufp->chgIData(oldp+1253,(vlSelf->difftest_top__DOT__u_ref__DOT__last_pc),32);
        bufp->chgIData(oldp+1254,(vlSelf->difftest_top__DOT__u_ref__DOT__mstatus),32);
        bufp->chgIData(oldp+1255,(vlSelf->difftest_top__DOT__u_ref__DOT__mepc),32);
        bufp->chgIData(oldp+1256,(vlSelf->difftest_top__DOT__u_ref__DOT__mcause),32);
        bufp->chgIData(oldp+1257,(vlSelf->difftest_top__DOT__u_ref__DOT__mtvec),32);
        bufp->chgIData(oldp+1258,(vlSelf->difftest_top__DOT__u_ref__DOT__mcycle),32);
        bufp->chgIData(oldp+1259,(vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh),32);
        bufp->chgIData(oldp+1260,(vlSelf->difftest_top__DOT__u_ref__DOT__mvendorid),32);
        bufp->chgIData(oldp+1261,(vlSelf->difftest_top__DOT__u_ref__DOT__marchid),32);
        bufp->chgBit(oldp+1262,(vlSelf->difftest_top__DOT__u_ref__DOT__addi));
        bufp->chgBit(oldp+1263,(vlSelf->difftest_top__DOT__u_ref__DOT__slti));
        bufp->chgBit(oldp+1264,(vlSelf->difftest_top__DOT__u_ref__DOT__sltiu));
        bufp->chgBit(oldp+1265,(vlSelf->difftest_top__DOT__u_ref__DOT__xori));
        bufp->chgBit(oldp+1266,(vlSelf->difftest_top__DOT__u_ref__DOT__ori));
        bufp->chgBit(oldp+1267,(vlSelf->difftest_top__DOT__u_ref__DOT__andi));
        bufp->chgBit(oldp+1268,(vlSelf->difftest_top__DOT__u_ref__DOT__slli));
        bufp->chgBit(oldp+1269,(vlSelf->difftest_top__DOT__u_ref__DOT__srli));
        bufp->chgBit(oldp+1270,(vlSelf->difftest_top__DOT__u_ref__DOT__srai));
        bufp->chgBit(oldp+1271,(vlSelf->difftest_top__DOT__u_ref__DOT__add));
        bufp->chgBit(oldp+1272,(vlSelf->difftest_top__DOT__u_ref__DOT__sub));
        bufp->chgBit(oldp+1273,(vlSelf->difftest_top__DOT__u_ref__DOT__sll));
        bufp->chgBit(oldp+1274,(vlSelf->difftest_top__DOT__u_ref__DOT__slt));
        bufp->chgBit(oldp+1275,(vlSelf->difftest_top__DOT__u_ref__DOT__sltu));
        bufp->chgBit(oldp+1276,(vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst));
        bufp->chgBit(oldp+1277,(vlSelf->difftest_top__DOT__u_ref__DOT__srl));
        bufp->chgBit(oldp+1278,(vlSelf->difftest_top__DOT__u_ref__DOT__sra));
        bufp->chgBit(oldp+1279,(vlSelf->difftest_top__DOT__u_ref__DOT__or_inst));
        bufp->chgBit(oldp+1280,(vlSelf->difftest_top__DOT__u_ref__DOT__and_inst));
        bufp->chgBit(oldp+1281,(vlSelf->difftest_top__DOT__u_ref__DOT__lb));
        bufp->chgBit(oldp+1282,(vlSelf->difftest_top__DOT__u_ref__DOT__lh));
        bufp->chgBit(oldp+1283,(vlSelf->difftest_top__DOT__u_ref__DOT__lw));
        bufp->chgBit(oldp+1284,(vlSelf->difftest_top__DOT__u_ref__DOT__lbu));
        bufp->chgBit(oldp+1285,(vlSelf->difftest_top__DOT__u_ref__DOT__lhu));
        bufp->chgBit(oldp+1286,(vlSelf->difftest_top__DOT__u_ref__DOT__sb));
        bufp->chgBit(oldp+1287,(vlSelf->difftest_top__DOT__u_ref__DOT__sh));
        bufp->chgBit(oldp+1288,(vlSelf->difftest_top__DOT__u_ref__DOT__sw));
        bufp->chgBit(oldp+1289,(vlSelf->difftest_top__DOT__u_ref__DOT__beq));
        bufp->chgBit(oldp+1290,(vlSelf->difftest_top__DOT__u_ref__DOT__bne));
        bufp->chgBit(oldp+1291,(vlSelf->difftest_top__DOT__u_ref__DOT__blt));
        bufp->chgBit(oldp+1292,(vlSelf->difftest_top__DOT__u_ref__DOT__bge));
        bufp->chgBit(oldp+1293,(vlSelf->difftest_top__DOT__u_ref__DOT__bltu));
        bufp->chgBit(oldp+1294,(vlSelf->difftest_top__DOT__u_ref__DOT__bgeu));
        bufp->chgBit(oldp+1295,(vlSelf->difftest_top__DOT__u_ref__DOT__jal));
        bufp->chgBit(oldp+1296,(vlSelf->difftest_top__DOT__u_ref__DOT__jalr));
        bufp->chgBit(oldp+1297,(vlSelf->difftest_top__DOT__u_ref__DOT__lui));
        bufp->chgBit(oldp+1298,(vlSelf->difftest_top__DOT__u_ref__DOT__auipc));
        bufp->chgBit(oldp+1299,(vlSelf->difftest_top__DOT__u_ref__DOT__ebreak));
        bufp->chgBit(oldp+1300,(vlSelf->difftest_top__DOT__u_ref__DOT__ecall));
        bufp->chgBit(oldp+1301,(vlSelf->difftest_top__DOT__u_ref__DOT__mret));
        bufp->chgBit(oldp+1302,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrw));
        bufp->chgBit(oldp+1303,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrs));
        bufp->chgBit(oldp+1304,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrc));
        bufp->chgCData(oldp+1305,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1306,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1307,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                            >> 0x14U))),5);
        bufp->chgIData(oldp+1308,(vlSelf->difftest_top__DOT__u_ref__DOT__immI),32);
        bufp->chgIData(oldp+1309,((0xfffff000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)),32);
        bufp->chgIData(oldp+1310,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1311,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1312,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->difftest_top__DOT__u_ref__DOT__instr) 
                                                 | ((0x800U 
                                                     & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                          >> 0x14U)))))),32);
        bufp->chgIData(oldp+1313,((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x14U)),32);
        bufp->chgIData(oldp+1314,(vlSelf->difftest_top__DOT__u_ref__DOT__wdata),32);
        bufp->chgIData(oldp+1315,(vlSelf->difftest_top__DOT__u_ref__DOT__rdata1),32);
        bufp->chgIData(oldp+1316,(vlSelf->difftest_top__DOT__u_ref__DOT__rdata2),32);
        bufp->chgIData(oldp+1317,(((IData)(4U) + vlSelf->difftest_top__DOT__u_ref__DOT__pc)),32);
        bufp->chgIData(oldp+1318,((((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc) 
                                    | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal) 
                                       | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_heb8827dd__0)))
                                    ? vlSelf->difftest_top__DOT__u_ref__DOT__pc
                                    : vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
        bufp->chgIData(oldp+1319,(vlSelf->difftest_top__DOT__u_ref__DOT__add2),32);
        bufp->chgIData(oldp+1320,(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst),32);
        bufp->chgIData(oldp+1321,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   - vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
        bufp->chgIData(oldp+1322,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
        bufp->chgIData(oldp+1323,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                   ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
        bufp->chgIData(oldp+1324,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   | vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
        bufp->chgIData(oldp+1325,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                   | vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
        bufp->chgIData(oldp+1326,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
        bufp->chgIData(oldp+1327,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                   & vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
        bufp->chgIData(oldp+1328,(VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
        bufp->chgIData(oldp+1329,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   < vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
        bufp->chgIData(oldp+1330,(VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__immI)),32);
        bufp->chgIData(oldp+1331,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   < vlSelf->difftest_top__DOT__u_ref__DOT__immI)),32);
        bufp->chgCData(oldp+1332,((0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),5);
        bufp->chgIData(oldp+1333,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   << (0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
        bufp->chgIData(oldp+1334,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   << (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x14U)))),32);
        bufp->chgIData(oldp+1335,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   >> (0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
        bufp->chgIData(oldp+1336,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                   >> (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                >> 0x14U)))),32);
        bufp->chgIData(oldp+1337,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                                 (0x1fU 
                                                  & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
        bufp->chgIData(oldp+1338,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                                 (0x1fU 
                                                  & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 0x14U)))),32);
        bufp->chgIData(oldp+1339,(vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst),32);
        bufp->chgIData(oldp+1340,(vlSelf->difftest_top__DOT__u_ref__DOT__read_rst),32);
        bufp->chgIData(oldp+1341,(vlSelf->difftest_top__DOT__u_ref__DOT__lw_rst),32);
        bufp->chgIData(oldp+1342,(vlSelf->difftest_top__DOT__u_ref__DOT__lbu_rst),32);
        bufp->chgIData(oldp+1343,(vlSelf->difftest_top__DOT__u_ref__DOT__lhu_rst),32);
        bufp->chgIData(oldp+1344,(vlSelf->difftest_top__DOT__u_ref__DOT__lb_rst),32);
        bufp->chgIData(oldp+1345,(vlSelf->difftest_top__DOT__u_ref__DOT__lh_rst),32);
        bufp->chgCData(oldp+1346,((0x7fU & vlSelf->difftest_top__DOT__u_ref__DOT__instr)),7);
        bufp->chgCData(oldp+1347,((7U & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1348,((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                   >> 0x19U)),7);
        bufp->chgIData(oldp+1349,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0]),32);
        bufp->chgIData(oldp+1350,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[1]),32);
        bufp->chgIData(oldp+1351,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[2]),32);
        bufp->chgIData(oldp+1352,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[3]),32);
        bufp->chgIData(oldp+1353,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[4]),32);
        bufp->chgIData(oldp+1354,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[5]),32);
        bufp->chgIData(oldp+1355,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[6]),32);
        bufp->chgIData(oldp+1356,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[7]),32);
        bufp->chgIData(oldp+1357,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[8]),32);
        bufp->chgIData(oldp+1358,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[9]),32);
        bufp->chgIData(oldp+1359,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[10]),32);
        bufp->chgIData(oldp+1360,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[11]),32);
        bufp->chgIData(oldp+1361,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[12]),32);
        bufp->chgIData(oldp+1362,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[13]),32);
        bufp->chgIData(oldp+1363,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[14]),32);
        bufp->chgIData(oldp+1364,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[15]),32);
        bufp->chgCData(oldp+1365,((0xfU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                           >> 0xfU))),4);
        bufp->chgCData(oldp+1366,((0xfU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1367,((0xfU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                           >> 7U))),4);
        bufp->chgIData(oldp+1368,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgIData(oldp+1369,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
        bufp->chgBit(oldp+1370,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write));
        bufp->chgIData(oldp+1371,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
        bufp->chgCData(oldp+1372,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgIData(oldp+1373,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
        bufp->chgIData(oldp+1374,((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
        bufp->chgBit(oldp+1375,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write))));
        bufp->chgBit(oldp+1376,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0));
        bufp->chgBit(oldp+1377,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1));
        bufp->chgBit(oldp+1378,((0U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+1379,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3));
        bufp->chgBit(oldp+1380,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4));
        bufp->chgBit(oldp+1381,((2U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 0x1cU)))));
        bufp->chgIData(oldp+1382,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save),32);
        bufp->chgIData(oldp+1383,((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgIData(oldp+1384,(((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                   - (IData)(0x10002000U))),32);
        bufp->chgCData(oldp+1385,((0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),4);
        bufp->chgCData(oldp+1386,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync),2);
        bufp->chgCData(oldp+1387,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync),2);
        bufp->chgBit(oldp+1388,((IData)((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))));
        bufp->chgBit(oldp+1389,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                       >> 1U))));
        bufp->chgCData(oldp+1390,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+1391,((0xffU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                             ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata
                                             : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
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
                                                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata))))))),8);
        bufp->chgCData(oldp+1392,((0xffU & ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                             ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                >> 8U)
                                             : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                >> 0x18U)))),8);
        bufp->chgCData(oldp+1393,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1394,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+1395,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata),32);
        bufp->chgIData(oldp+1396,((0xfffffcU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1397,((0xffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
        bufp->chgIData(oldp+1398,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
        bufp->chgBit(oldp+1399,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel));
        bufp->chgCData(oldp+1400,((7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
        bufp->chgCData(oldp+1401,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
        bufp->chgCData(oldp+1402,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
        bufp->chgIData(oldp+1403,((0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                               >> 2U))),19);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgCData(oldp+1404,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+1405,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+1406,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
        bufp->chgBit(oldp+1407,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgCData(oldp+1408,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state),3);
        bufp->chgCData(oldp+1409,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter),8);
        bufp->chgIData(oldp+1410,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data),32);
        bufp->chgBit(oldp+1411,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                 & (0x17U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgIData(oldp+1412,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr),32);
        bufp->chgCData(oldp+1413,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                    ? 0U : 3U)),8);
        bufp->chgCData(oldp+1414,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize),3);
        bufp->chgCData(oldp+1415,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                    ? 0U : 1U)),2);
        bufp->chgIData(oldp+1416,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save),32);
        bufp->chgIData(oldp+1417,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata),32);
        bufp->chgCData(oldp+1418,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb),4);
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
        bufp->chgBit(oldp+1420,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1421,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+1422,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1423,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
        bufp->chgCData(oldp+1424,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
        bufp->chgWData(oldp+1425,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg),512);
        bufp->chgBit(oldp+1441,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid));
        bufp->chgIData(oldp+1442,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
        bufp->chgBit(oldp+1443,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_flush));
        bufp->chgBit(oldp+1444,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bt_valid));
        bufp->chgIData(oldp+1445,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc),32);
        bufp->chgBit(oldp+1446,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__taken));
        bufp->chgBit(oldp+1447,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0));
        bufp->chgBit(oldp+1448,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1));
        bufp->chgIData(oldp+1449,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
        bufp->chgIData(oldp+1450,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
        bufp->chgBit(oldp+1451,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd));
        bufp->chgBit(oldp+1452,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de));
        bufp->chgBit(oldp+1453,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__compulsory_branch_instrs));
        bufp->chgBit(oldp+1454,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi));
        bufp->chgBit(oldp+1455,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti));
        bufp->chgBit(oldp+1456,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu));
        bufp->chgBit(oldp+1457,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori));
        bufp->chgBit(oldp+1458,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori));
        bufp->chgBit(oldp+1459,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi));
        bufp->chgBit(oldp+1460,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli));
        bufp->chgBit(oldp+1461,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli));
        bufp->chgBit(oldp+1462,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai));
        bufp->chgBit(oldp+1463,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__add));
        bufp->chgBit(oldp+1464,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub));
        bufp->chgBit(oldp+1465,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll));
        bufp->chgBit(oldp+1466,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt));
        bufp->chgBit(oldp+1467,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu));
        bufp->chgBit(oldp+1468,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst));
        bufp->chgBit(oldp+1469,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl));
        bufp->chgBit(oldp+1470,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra));
        bufp->chgBit(oldp+1471,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst));
        bufp->chgBit(oldp+1472,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst));
        bufp->chgBit(oldp+1473,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb));
        bufp->chgBit(oldp+1474,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh));
        bufp->chgBit(oldp+1475,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw));
        bufp->chgBit(oldp+1476,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu));
        bufp->chgBit(oldp+1477,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu));
        bufp->chgBit(oldp+1478,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb));
        bufp->chgBit(oldp+1479,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh));
        bufp->chgBit(oldp+1480,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw));
        bufp->chgBit(oldp+1481,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq));
        bufp->chgBit(oldp+1482,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne));
        bufp->chgBit(oldp+1483,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt));
        bufp->chgBit(oldp+1484,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge));
        bufp->chgBit(oldp+1485,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu));
        bufp->chgBit(oldp+1486,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu));
        bufp->chgBit(oldp+1487,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal));
        bufp->chgBit(oldp+1488,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr));
        bufp->chgBit(oldp+1489,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui));
        bufp->chgBit(oldp+1490,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc));
        bufp->chgBit(oldp+1491,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak));
        bufp->chgBit(oldp+1492,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall));
        bufp->chgBit(oldp+1493,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw));
        bufp->chgBit(oldp+1494,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs));
        bufp->chgBit(oldp+1495,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc));
        bufp->chgBit(oldp+1496,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret));
        bufp->chgBit(oldp+1497,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i));
        bufp->chgBit(oldp+1498,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_0));
        bufp->chgBit(oldp+1499,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_1));
        bufp->chgBit(oldp+1500,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2));
        bufp->chgCData(oldp+1501,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1502,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1503,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                            >> 0x14U))),5);
        bufp->chgIData(oldp+1504,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w),32);
        bufp->chgBit(oldp+1505,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls));
        bufp->chgBit(oldp+1506,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ren));
        bufp->chgBit(oldp+1507,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el));
        bufp->chgBit(oldp+1508,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el));
        bufp->chgBit(oldp+1509,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)))));
        bufp->chgCData(oldp+1510,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save))
                                    ? 2U : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save)) 
                                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save))
                                             ? 1U : 
                                            ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                                               | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save)) 
                                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save))
                                              ? 0U : 3U)))),2);
        bufp->chgBit(oldp+1511,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save))));
        bufp->chgCData(oldp+1512,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save),5);
        bufp->chgCData(oldp+1513,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save),5);
        bufp->chgCData(oldp+1514,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save),5);
        bufp->chgIData(oldp+1515,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2),32);
        bufp->chgIData(oldp+1516,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1),32);
        bufp->chgBit(oldp+1517,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
        bufp->chgCData(oldp+1518,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu),5);
        bufp->chgIData(oldp+1519,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[0]),32);
        bufp->chgIData(oldp+1520,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[1]),32);
        bufp->chgIData(oldp+1521,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[2]),32);
        bufp->chgIData(oldp+1522,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[3]),32);
        bufp->chgIData(oldp+1523,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[4]),32);
        bufp->chgIData(oldp+1524,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[5]),32);
        bufp->chgIData(oldp+1525,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[6]),32);
        bufp->chgIData(oldp+1526,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[7]),32);
        bufp->chgIData(oldp+1527,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[8]),32);
        bufp->chgIData(oldp+1528,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[9]),32);
        bufp->chgIData(oldp+1529,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[10]),32);
        bufp->chgIData(oldp+1530,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[11]),32);
        bufp->chgIData(oldp+1531,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[12]),32);
        bufp->chgIData(oldp+1532,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[13]),32);
        bufp->chgIData(oldp+1533,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[14]),32);
        bufp->chgIData(oldp+1534,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[15]),32);
        bufp->chgCData(oldp+1535,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save))),4);
        bufp->chgCData(oldp+1536,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save))),4);
        bufp->chgCData(oldp+1537,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu))),4);
        bufp->chgBit(oldp+1538,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end));
        bufp->chgIData(oldp+1539,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list),32);
        bufp->chgIData(oldp+1540,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt),32);
        bufp->chgBit(oldp+1541,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save));
        bufp->chgCData(oldp+1542,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save),5);
        bufp->chgIData(oldp+1543,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus),32);
        bufp->chgIData(oldp+1544,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc),32);
        bufp->chgIData(oldp+1545,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause),32);
        bufp->chgIData(oldp+1546,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec),32);
        bufp->chgIData(oldp+1547,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save),32);
        bufp->chgIData(oldp+1548,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save),32);
        bufp->chgIData(oldp+1549,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save),32);
        bufp->chgBit(oldp+1550,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save));
        bufp->chgBit(oldp+1551,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save));
        bufp->chgBit(oldp+1552,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save));
        bufp->chgBit(oldp+1553,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save));
        bufp->chgBit(oldp+1554,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save));
        bufp->chgBit(oldp+1555,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save));
        bufp->chgBit(oldp+1556,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save));
        bufp->chgBit(oldp+1557,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save));
        bufp->chgBit(oldp+1558,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save));
        bufp->chgBit(oldp+1559,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save));
        bufp->chgBit(oldp+1560,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save));
        bufp->chgBit(oldp+1561,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save));
        bufp->chgBit(oldp+1562,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save));
        bufp->chgBit(oldp+1563,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save));
        bufp->chgBit(oldp+1564,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save));
        bufp->chgBit(oldp+1565,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save));
        bufp->chgBit(oldp+1566,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save));
        bufp->chgBit(oldp+1567,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save));
        bufp->chgBit(oldp+1568,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save));
        bufp->chgBit(oldp+1569,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save));
        bufp->chgBit(oldp+1570,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save));
        bufp->chgBit(oldp+1571,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save));
        bufp->chgBit(oldp+1572,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save));
        bufp->chgBit(oldp+1573,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save));
        bufp->chgBit(oldp+1574,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save));
        bufp->chgBit(oldp+1575,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save));
        bufp->chgBit(oldp+1576,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save));
        bufp->chgBit(oldp+1577,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save));
        bufp->chgBit(oldp+1578,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save));
        bufp->chgBit(oldp+1579,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save));
        bufp->chgBit(oldp+1580,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save));
        bufp->chgBit(oldp+1581,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save));
        bufp->chgBit(oldp+1582,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save));
        bufp->chgBit(oldp+1583,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save));
        bufp->chgBit(oldp+1584,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save));
        bufp->chgBit(oldp+1585,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save));
        bufp->chgBit(oldp+1586,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save));
        bufp->chgBit(oldp+1587,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save));
        bufp->chgBit(oldp+1588,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save));
        bufp->chgBit(oldp+1589,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save));
        bufp->chgBit(oldp+1590,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save));
        bufp->chgBit(oldp+1591,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save));
        bufp->chgBit(oldp+1592,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save));
        bufp->chgBit(oldp+1593,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save));
        bufp->chgBit(oldp+1594,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_0_save));
        bufp->chgBit(oldp+1595,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_1_save));
        bufp->chgBit(oldp+1596,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_2_save));
        bufp->chgIData(oldp+1597,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save),32);
        bufp->chgIData(oldp+1598,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrw_rst),32);
        bufp->chgBit(oldp+1599,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__taken_save));
        bufp->chgCData(oldp+1600,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),3);
        bufp->chgCData(oldp+1601,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next),3);
        bufp->chgBit(oldp+1602,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read));
        bufp->chgBit(oldp+1603,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write));
        bufp->chgBit(oldp+1604,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb));
        bufp->chgBit(oldp+1605,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception));
        bufp->chgBit(oldp+1606,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0)))))));
        bufp->chgBit(oldp+1607,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save) 
                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save) 
                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save) 
                                          | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save) 
                                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save) 
                                                         | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save))))))))))));
        bufp->chgBit(oldp+1608,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save) 
                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save)))));
        bufp->chgBit(oldp+1609,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type));
        bufp->chgBit(oldp+1610,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type));
        bufp->chgBit(oldp+1611,((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type)) 
                                       & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                                                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0))))))))));
        bufp->chgBit(oldp+1612,((1U & (~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type) 
                                           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0) 
                                              | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                                                 >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save)))) 
                                          | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type)) 
                                              & (~ 
                                                 ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                                  | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                                                     | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                                        | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                                                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0))))))) 
                                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0)))))));
        bufp->chgCData(oldp+1613,((0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),5);
        bufp->chgCData(oldp+1614,((0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),5);
        bufp->chgIData(oldp+1615,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                          | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
        bufp->chgIData(oldp+1616,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2
                                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
        bufp->chgIData(oldp+1617,(((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                     | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                        | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                     ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                     : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1) 
                                   + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                       ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2
                                       : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
        bufp->chgIData(oldp+1618,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   - vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
        bufp->chgIData(oldp+1619,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
        bufp->chgIData(oldp+1620,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                   ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
        bufp->chgIData(oldp+1621,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
        bufp->chgIData(oldp+1622,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                   | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
        bufp->chgIData(oldp+1623,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
        bufp->chgIData(oldp+1624,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                   & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
        bufp->chgIData(oldp+1625,(VL_LTS_III(32, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
        bufp->chgIData(oldp+1626,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   < vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
        bufp->chgIData(oldp+1627,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
        bufp->chgIData(oldp+1628,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
        bufp->chgIData(oldp+1629,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
        bufp->chgIData(oldp+1630,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                   >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
        bufp->chgIData(oldp+1631,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                                 (0x1fU 
                                                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
        bufp->chgIData(oldp+1632,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                                 (0x1fU 
                                                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
        bufp->chgIData(oldp+1633,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb),32);
        bufp->chgCData(oldp+1634,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en),3);
        bufp->chgIData(oldp+1635,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                   >> 7U)),25);
        bufp->chgCData(oldp+1636,((7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                         >> 4U))),3);
        bufp->chgIData(oldp+1637,((3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                         >> 2U))),32);
        bufp->chgIData(oldp+1638,((0xfffffff0U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc)),32);
        bufp->chgCData(oldp+1639,((0x7fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),7);
        bufp->chgCData(oldp+1640,((7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                         >> 0xcU))),3);
        bufp->chgCData(oldp+1641,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                   >> 0x19U)),7);
        bufp->chgIData(oldp+1642,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w),32);
        bufp->chgIData(oldp+1643,((0xfffff000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
        bufp->chgIData(oldp+1644,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+1645,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                         >> 7U)))))),32);
        bufp->chgIData(oldp+1646,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                                 | ((0x800U 
                                                     & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                          >> 0x14U)))))),32);
        bufp->chgIData(oldp+1647,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                   >> 0x14U)),32);
        bufp->chgIData(oldp+1648,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc[0]),32);
        bufp->chgIData(oldp+1649,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc[1]),32);
        bufp->chgIData(oldp+1650,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target[0]),32);
        bufp->chgIData(oldp+1651,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target[1]),32);
        bufp->chgCData(oldp+1652,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid),2);
        bufp->chgBit(oldp+1653,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save));
        bufp->chgIData(oldp+1654,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save),32);
        bufp->chgCData(oldp+1655,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
        bufp->chgIData(oldp+1656,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted),32);
        bufp->chgCData(oldp+1657,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next),2);
        bufp->chgCData(oldp+1658,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state),2);
        bufp->chgBit(oldp+1659,((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))));
        bufp->chgBit(oldp+1660,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))));
        bufp->chgBit(oldp+1661,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid));
        bufp->chgBit(oldp+1662,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgBit(oldp+1663,(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck));
        bufp->chgBit(oldp+1664,(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n));
        bufp->chgBit(oldp+1665,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready));
        bufp->chgIData(oldp+1666,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
        bufp->chgBit(oldp+1667,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
        bufp->chgBit(oldp+1668,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
        bufp->chgBit(oldp+1669,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
        bufp->chgBit(oldp+1670,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
        bufp->chgIData(oldp+1671,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_prdata),32);
        bufp->chgBit(oldp+1672,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
        bufp->chgCData(oldp+1673,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next),2);
        bufp->chgBit(oldp+1674,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
        bufp->chgBit(oldp+1675,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
        bufp->chgBit(oldp+1676,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))));
        bufp->chgBit(oldp+1677,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
        bufp->chgBit(oldp+1678,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
        bufp->chgBit(oldp+1679,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_pready));
        bufp->chgIData(oldp+1680,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
        bufp->chgBit(oldp+1681,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
        bufp->chgBit(oldp+1682,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
        bufp->chgBit(oldp+1683,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pready));
        bufp->chgBit(oldp+1684,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pslverr));
        bufp->chgIData(oldp+1685,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata),32);
        bufp->chgBit(oldp+1686,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
        bufp->chgBit(oldp+1687,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
        bufp->chgBit(oldp+1688,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
        bufp->chgBit(oldp+1689,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
        bufp->chgIData(oldp+1690,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                    ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                        << 0x18U) | 
                                       (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                            << 8U) 
                                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                    : 0U)),32);
        bufp->chgBit(oldp+1691,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
        bufp->chgBit(oldp+1692,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
        bufp->chgBit(oldp+1693,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
        bufp->chgCData(oldp+1694,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
        bufp->chgBit(oldp+1695,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
        bufp->chgCData(oldp+1696,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U)),2);
        bufp->chgBit(oldp+1697,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1698,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1699,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access));
        bufp->chgCData(oldp+1700,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
        bufp->chgCData(oldp+1701,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
        bufp->chgBit(oldp+1702,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
        bufp->chgBit(oldp+1703,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
        bufp->chgBit(oldp+1704,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
        bufp->chgBit(oldp+1705,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
        bufp->chgBit(oldp+1706,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
        bufp->chgBit(oldp+1707,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
        bufp->chgBit(oldp+1708,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr));
        bufp->chgBit(oldp+1709,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
        bufp->chgCData(oldp+1710,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT),8);
        bufp->chgCData(oldp+1711,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr),5);
        bufp->chgIData(oldp+1712,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i),32);
        bufp->chgCData(oldp+1713,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel),4);
        bufp->chgBit(oldp+1714,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we));
        bufp->chgBit(oldp+1715,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
        bufp->chgBit(oldp+1716,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc));
        bufp->chgIData(oldp+1717,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
        bufp->chgBit(oldp+1718,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x14U == (0x1cU 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
        bufp->chgBit(oldp+1719,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x10U == (0x1cU 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
        bufp->chgCData(oldp+1720,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
        bufp->chgBit(oldp+1721,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0x18U == (0x1cU 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
        bufp->chgCData(oldp+1722,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
        bufp->chgCData(oldp+1723,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
        bufp->chgCData(oldp+1724,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+1725,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
        bufp->chgSData(oldp+1726,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
        bufp->chgCData(oldp+1727,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
        bufp->chgCData(oldp+1728,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
        bufp->chgBit(oldp+1729,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
        bufp->chgCData(oldp+1730,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
        bufp->chgIData(oldp+1731,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
        bufp->chgWData(oldp+1732,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
        bufp->chgBit(oldp+1735,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen));
        bufp->chgCData(oldp+1736,((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
        bufp->chgCData(oldp+1737,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                         >> 2U))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgIData(oldp+1738,(vlSelf->difftest_top__DOT__soc__DOT___dq_wire),32);
        bufp->chgSData(oldp+1739,((0xffffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire)),16);
        bufp->chgSData(oldp+1740,((vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                   >> 0x10U)),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+1741,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
        bufp->chgIData(oldp+1742,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgBit(oldp+1743,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
        bufp->chgIData(oldp+1744,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgCData(oldp+1745,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
        bufp->chgBit(oldp+1746,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+1747,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
        bufp->chgIData(oldp+1748,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+1749,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+1750,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgBit(oldp+1751,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1752,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
        bufp->chgBit(oldp+1753,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
        bufp->chgQData(oldp+1754,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                    << 4U) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
        bufp->chgBit(oldp+1756,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
        bufp->chgBit(oldp+1757,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
        bufp->chgBit(oldp+1758,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
        bufp->chgBit(oldp+1759,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
        bufp->chgBit(oldp+1760,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
        bufp->chgBit(oldp+1761,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
        bufp->chgBit(oldp+1762,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+1763,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+1764,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1765,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))))));
        bufp->chgCData(oldp+1766,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+1767,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgIData(oldp+1768,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+1769,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+1770,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgIData(oldp+1771,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+1772,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgBit(oldp+1773,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+1774,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgBit(oldp+1775,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+1776,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+1777,((0xfffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+1778,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 2U))));
        bufp->chgBit(oldp+1779,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+1780,((0xfffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+1781,((0x7800U == (0x7fffU 
                                             & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xdU)))));
        bufp->chgSData(oldp+1782,((0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                             >> 2U))),11);
        bufp->chgSData(oldp+1783,((0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 2U))),11);
        bufp->chgBit(oldp+1784,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
        bufp->chgBit(oldp+1785,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
        bufp->chgCData(oldp+1786,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
        bufp->chgBit(oldp+1787,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+1788,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+1789,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                 & (0U == ((6U & (4U 
                                                  ^ 
                                                  (0x1eU 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1bU)))) 
                                           | (1U & 
                                              (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x18U)))))));
        bufp->chgBit(oldp+1790,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                    >> 1U))));
        bufp->chgBit(oldp+1791,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+1792,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+1793,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+1794,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+1795,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+1796,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+1797,((0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+1798,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+1799,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+1800,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+1801,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgCData(oldp+1802,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+1803,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+1804,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgIData(oldp+1805,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_target),32);
        bufp->chgBit(oldp+1806,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush));
        bufp->chgIData(oldp+1807,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush),32);
        bufp->chgIData(oldp+1808,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata),32);
        bufp->chgBit(oldp+1809,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__br_taken));
        bufp->chgIData(oldp+1810,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+1811,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+1812,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgCData(oldp+1813,(vlSelf->difftest_top__DOT__soc__DOT___dio_wire),4);
        bufp->chgCData(oldp+1814,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next),3);
        bufp->chgCData(oldp+1815,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgBit(oldp+1816,((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1817,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready));
        bufp->chgBit(oldp+1818,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready));
        bufp->chgBit(oldp+1819,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_wready));
        bufp->chgBit(oldp+1820,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
        bufp->chgBit(oldp+1821,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
        bufp->chgBit(oldp+1822,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
        bufp->chgBit(oldp+1823,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
        bufp->chgBit(oldp+1824,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
        bufp->chgBit(oldp+1825,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
        bufp->chgBit(oldp+1826,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
        bufp->chgIData(oldp+1827,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
        bufp->chgCData(oldp+1828,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
        bufp->chgBit(oldp+1829,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
        bufp->chgBit(oldp+1830,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+1831,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
        bufp->chgBit(oldp+1832,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
        bufp->chgCData(oldp+1833,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
        bufp->chgCData(oldp+1834,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
        bufp->chgSData(oldp+1835,((0x1ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                             >> 2U))),13);
        bufp->chgSData(oldp+1836,((0x1fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                              >> 0xdU))),13);
        bufp->chgCData(oldp+1837,((3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 0xbU))),2);
        bufp->chgCData(oldp+1838,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
        bufp->chgCData(oldp+1839,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl),4);
        bufp->chgCData(oldp+1840,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1fU])) {
        bufp->chgCData(oldp+1841,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next),3);
        bufp->chgCData(oldp+1842,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next),3);
        bufp->chgCData(oldp+1843,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next),3);
        bufp->chgCData(oldp+1844,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next),3);
    }
    bufp->chgBit(oldp+1845,(vlSelf->clock));
    bufp->chgBit(oldp+1846,(vlSelf->reset));
    bufp->chgBit(oldp+1847,(vlSelf->ref_clk));
    bufp->chgBit(oldp+1848,(vlSelf->ref_rst));
    bufp->chgIData(oldp+1849,(vlSelf->ref_pc),32);
    bufp->chgWData(oldp+1850,(vlSelf->ref_gpr),512);
    bufp->chgBit(oldp+1866,(vlSelf->ref_wen));
    bufp->chgIData(oldp+1867,(vlSelf->ref_instr),32);
    bufp->chgIData(oldp+1868,(vlSelf->ref_last_pc),32);
    bufp->chgBit(oldp+1869,(((IData)(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso) 
                             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                | ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                     ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                     : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                   >> 0x1fU)))));
    bufp->chgBit(oldp+1870,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->chgIData(oldp+1871,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                               [(0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                             >> 2U))]
                                : 0U)),32);
    bufp->chgBit(oldp+1872,((IData)(((0U == (0x30000000U 
                                             & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->chgBit(oldp+1873,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->chgBit(oldp+1874,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                              ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    bufp->chgIData(oldp+1875,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)),32);
    bufp->chgIData(oldp+1876,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->chgCData(oldp+1877,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->chgQData(oldp+1878,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                << 0x23U) | (((QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
                                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                   << 1U))))))),39);
    bufp->chgQData(oldp+1880,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->chgQData(oldp+1882,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->chgBit(oldp+1884,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->chgBit(oldp+1885,(((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
                             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                 ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->chgBit(oldp+1886,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->chgBit(oldp+1887,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->chgBit(oldp+1888,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->chgBit(oldp+1889,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->chgCData(oldp+1890,((3U & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                        ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                        : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
                                       ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                          | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                              << 0x14U) 
                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                    << 0x10U) 
                                                                   | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                       << 0xeU) 
                                                                      | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                          << 0xcU) 
                                                                         | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                             << 0xaU) 
                                                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                    << 1U))))
                                       : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                 ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                 : 0U)))),2);
    bufp->chgBit(oldp+1891,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready)))));
    bufp->chgCData(oldp+1892,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->chgCData(oldp+1893,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->chgCData(oldp+1894,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->chgBit(oldp+1895,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->chgBit(oldp+1896,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->chgBit(oldp+1897,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                              ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->chgBit(oldp+1898,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->chgIData(oldp+1899,(((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save
                                : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out
                                    : ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                           & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                              >> 0xfU))))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                        : ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                                  >> 7U))))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                            : 0U))))),32);
    bufp->chgIData(oldp+1900,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out
                                : ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                       & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                          >> 0xfU))))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                    : ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                           & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                              >> 7U))))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                        : 0U)))),32);
    bufp->chgBit(oldp+1901,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                             & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))));
    bufp->chgBit(oldp+1902,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                              ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->chgCData(oldp+1903,((0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                        <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? 1U : 7U))
                                        ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                            ? ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                ? 8U
                                                : 3U)
                                            : (1U & 
                                               (0x38U 
                                                >> 
                                                (7U 
                                                 & ((IData)(7U) 
                                                    - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))
                                        : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                            <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 7U
                                                 : 0xdU))
                                            ? ((4U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                     ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                     : 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 4U)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                     ? 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0xcU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                     ? 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0x14U))))
                                            : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                                <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                                    ? 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                                    >> 
                                                    (0x18U 
                                                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                        << 2U)))
                                                    : 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (0x18U 
                                                         & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                            << 2U))))))
                                                : 0U))))),4);
    bufp->chgBit(oldp+1904,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgCData(oldp+1905,(((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd)
                                    ? 2U : 0U) : ((1U 
                                                   == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                   ? 
                                                  (((7U 
                                                     == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                                                     ? 0U
                                                     : 2U)
                                                    : 0U)))),2);
    bufp->chgCData(oldp+1906,((0xfU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                        ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                           >> (0x18U 
                                               & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                  << 2U)))
                                        : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                           >> (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x18U 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                      << 2U)))))))),4);
    bufp->chgCData(oldp+1907,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid)
                                ? 0U : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid)
                                         ? ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                             ? 0U : 3U)
                                         : 0U))),8);
    bufp->chgCData(oldp+1908,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                ? (0x20U | ((0U == 
                                             ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                               ? 0U
                                               : 3U)) 
                                            << 4U))
                                : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                    ? 0x10U : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                << 5U) 
                                               | (((0U 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->chgBit(oldp+1909,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid))));
    bufp->chgSData(oldp+1910,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0))),11);
    bufp->chgCData(oldp+1911,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                              [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->chgBit(oldp+1912,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->chgBit(oldp+1913,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))));
    bufp->chgBit(oldp+1914,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                   | ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                        ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                        : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                      >> 0x1fU)))));
    bufp->chgCData(oldp+1915,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd),8);
    bufp->chgIData(oldp+1916,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr),24);
    bufp->chgIData(oldp+1917,(((0xfffffeU & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr 
                                             << 1U)) 
                               | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi))),32);
    bufp->chgIData(oldp+1918,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap),32);
    bufp->chgBit(oldp+1919,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U) | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd)) 
                                              & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                 >> 0x1aU))))));
    bufp->chgBit(oldp+1920,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U) | ((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0x1aU)) 
                                              & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd)))))));
    __Vtemp_hf4c6a2b0__0[0U] = vlSelf->ref_gpr[0U];
    __Vtemp_hf4c6a2b0__0[1U] = vlSelf->ref_gpr[1U];
    __Vtemp_hf4c6a2b0__0[2U] = vlSelf->ref_gpr[2U];
    __Vtemp_hf4c6a2b0__0[3U] = vlSelf->ref_gpr[3U];
    __Vtemp_hf4c6a2b0__0[4U] = vlSelf->ref_gpr[4U];
    __Vtemp_hf4c6a2b0__0[5U] = vlSelf->ref_gpr[5U];
    __Vtemp_hf4c6a2b0__0[6U] = vlSelf->ref_gpr[6U];
    __Vtemp_hf4c6a2b0__0[7U] = vlSelf->ref_gpr[7U];
    __Vtemp_hf4c6a2b0__0[8U] = vlSelf->ref_gpr[8U];
    __Vtemp_hf4c6a2b0__0[9U] = vlSelf->ref_gpr[9U];
    __Vtemp_hf4c6a2b0__0[0xaU] = vlSelf->ref_gpr[0xaU];
    __Vtemp_hf4c6a2b0__0[0xbU] = vlSelf->ref_gpr[0xbU];
    __Vtemp_hf4c6a2b0__0[0xcU] = vlSelf->ref_gpr[0xcU];
    __Vtemp_hf4c6a2b0__0[0xdU] = vlSelf->ref_gpr[0xdU];
    __Vtemp_hf4c6a2b0__0[0xeU] = vlSelf->ref_gpr[0xeU];
    __Vtemp_hf4c6a2b0__0[0xfU] = vlSelf->ref_gpr[0xfU];
    __Vtemp_hf4c6a2b0__0[0x10U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x11U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x12U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x13U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x14U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x15U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x16U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x17U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x18U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x19U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1aU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1bU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1cU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1dU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1eU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1fU] = 0U;
    bufp->chgWData(oldp+1921,(__Vtemp_hf4c6a2b0__0),1024);
    bufp->chgBit(oldp+1953,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
                             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready)
                                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready)))));
    bufp->chgIData(oldp+1954,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                ? vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata
                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
    bufp->chgCData(oldp+1955,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp)
                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp))),2);
    bufp->chgCData(oldp+1956,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                ? 0U : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->chgBit(oldp+1957,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                              ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast)
                              : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->chgBit(oldp+1958,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
}
