// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxbar_tb.h for the primary calling header

#include "verilated.h"

#include "Vxbar_tb__Syms.h"
#include "Vxbar_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__stl(Vxbar_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vxbar_tb___024root___eval_triggers__stl(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vxbar_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 256> Vxbar_tb__ConstPool__TABLE_h7b8cc13a_0;

VL_ATTR_COLD void Vxbar_tb___024root___stl_sequent__TOP__0(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ TOP__xbar_tb__DOT__cm__DOT__araddr;
    TOP__xbar_tb__DOT__cm__DOT__araddr = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__rvalid;
    TOP__xbar_tb__DOT__cm__DOT__rvalid = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__awvalid;
    TOP__xbar_tb__DOT__cm__DOT__awvalid = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__awready;
    TOP__xbar_tb__DOT__cm__DOT__awready = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__wvalid;
    TOP__xbar_tb__DOT__cm__DOT__wvalid = 0;
    // Body
    vlSymsp->TOP__xbar_tb__DOT__mm.arready = (1U & 
                                              (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend)));
    vlSymsp->TOP__xbar_tb__DOT__mm.rvalid = vlSelf->xbar_tb__DOT__mm_rpend;
    vlSymsp->TOP__xbar_tb__DOT__cm.bresp = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.bvalid = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.rresp = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.rdata = 0U;
    if ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state))) {
        vlSymsp->TOP__xbar_tb__DOT__mm.araddr = vlSymsp->TOP__xbar_tb__DOT__lsu.araddr;
        TOP__xbar_tb__DOT__cm__DOT__araddr = vlSymsp->TOP__xbar_tb__DOT__lsu.araddr;
    } else {
        vlSymsp->TOP__xbar_tb__DOT__mm.araddr = vlSymsp->TOP__xbar_tb__DOT__ifu.araddr;
        TOP__xbar_tb__DOT__cm__DOT__araddr = vlSymsp->TOP__xbar_tb__DOT__ifu.araddr;
    }
    vlSymsp->TOP__xbar_tb__DOT__cm.rlast = 0U;
    TOP__xbar_tb__DOT__cm__DOT__rvalid = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.arvalid = ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) 
                                              & (((2U 
                                                   == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                                                  & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                                                    & (IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.arvalid))));
    vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint = 
        ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy)
          ? (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)
          : (0x200U == (vlSymsp->TOP__xbar_tb__DOT__lsu.awaddr 
                        >> 0x10U)));
    if ((0x2000000U == TOP__xbar_tb__DOT__cm__DOT__araddr)) {
        vlSelf->xbar_tb__DOT__clint__DOT__rresp_now = 0U;
        vlSelf->xbar_tb__DOT__clint__DOT__rdata_now 
            = (IData)(vlSelf->xbar_tb__DOT__clint__DOT__mtime);
    } else if ((0x2000004U == TOP__xbar_tb__DOT__cm__DOT__araddr)) {
        vlSelf->xbar_tb__DOT__clint__DOT__rresp_now = 0U;
        vlSelf->xbar_tb__DOT__clint__DOT__rdata_now 
            = (IData)((vlSelf->xbar_tb__DOT__clint__DOT__mtime 
                       >> 0x20U));
    } else {
        vlSelf->xbar_tb__DOT__clint__DOT__rresp_now = 2U;
        vlSelf->xbar_tb__DOT__clint__DOT__rdata_now = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->xbar_tb__DOT__clint__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
            vlSymsp->TOP__xbar_tb__DOT__cm.rresp = vlSelf->xbar_tb__DOT__clint__DOT__rresp_save;
            vlSymsp->TOP__xbar_tb__DOT__cm.rdata = vlSelf->xbar_tb__DOT__clint__DOT__rdata_save;
            vlSymsp->TOP__xbar_tb__DOT__cm.rlast = 1U;
            TOP__xbar_tb__DOT__cm__DOT__rvalid = 1U;
        }
    }
    vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid = 
        ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
          ? (IData)(TOP__xbar_tb__DOT__cm__DOT__rvalid)
          : (IData)(vlSelf->xbar_tb__DOT__mm_rpend));
    vlSymsp->TOP__xbar_tb__DOT__cm.arready = 0U;
    TOP__xbar_tb__DOT__cm__DOT__wvalid = ((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid) 
                                          & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint));
    TOP__xbar_tb__DOT__cm__DOT__awvalid = (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid) 
                                            & (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy))) 
                                           & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint));
    __Vtableidx1 = (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.rready) 
                     << 7U) | ((0x40U & (((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                          | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)) 
                                         << 6U)) | 
                               (((IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.rready) 
                                 << 5U) | (((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid) 
                                            << 4U) 
                                           | (((IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.arvalid) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)))))));
    vlSelf->xbar_tb__DOT__xbar__DOT__r_next_state = 
        Vxbar_tb__ConstPool__TABLE_h7b8cc13a_0[__Vtableidx1];
    vlSymsp->TOP__xbar_tb__DOT__cm.wready = 0U;
    TOP__xbar_tb__DOT__cm__DOT__awready = 0U;
    if ((1U & (~ ((IData)(vlSelf->xbar_tb__DOT__clint__DOT__state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state)))) {
            if (vlSymsp->TOP__xbar_tb__DOT__cm.arvalid) {
                vlSymsp->TOP__xbar_tb__DOT__cm.arready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arvalid)))) {
                if (TOP__xbar_tb__DOT__cm__DOT__awvalid) {
                    TOP__xbar_tb__DOT__cm__DOT__awready = 1U;
                }
            }
        }
    }
    vlSelf->xbar_tb__DOT__clint__DOT__next = vlSelf->xbar_tb__DOT__clint__DOT__state;
    if ((2U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
        if ((1U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
            vlSymsp->TOP__xbar_tb__DOT__cm.bresp = 2U;
            vlSymsp->TOP__xbar_tb__DOT__cm.bvalid = 1U;
            if ((((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy) 
                  & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)) 
                 & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.bready))) {
                vlSelf->xbar_tb__DOT__clint__DOT__next = 0U;
            }
        } else if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
            vlSelf->xbar_tb__DOT__clint__DOT__next = 3U;
        }
        if ((1U & (~ (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state)))) {
            if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
                vlSymsp->TOP__xbar_tb__DOT__cm.wready = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arvalid)))) {
                if (TOP__xbar_tb__DOT__cm__DOT__awvalid) {
                    if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
                        vlSymsp->TOP__xbar_tb__DOT__cm.wready = 1U;
                    }
                }
            }
        }
        if ((1U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
            if ((((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) 
                  & (2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)))
                  ? (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.rready)
                  : (((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) 
                      & (1U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state))) 
                     & (IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.rready)))) {
                vlSelf->xbar_tb__DOT__clint__DOT__next = 0U;
            }
        } else if (vlSymsp->TOP__xbar_tb__DOT__cm.arvalid) {
            vlSelf->xbar_tb__DOT__clint__DOT__next = 1U;
        } else if (TOP__xbar_tb__DOT__cm__DOT__awvalid) {
            vlSelf->xbar_tb__DOT__clint__DOT__next 
                = ((IData)(TOP__xbar_tb__DOT__cm__DOT__wvalid)
                    ? 3U : 2U);
        }
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.awready = (1U & 
                                               ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy)) 
                                                & ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint)) 
                                                   | (IData)(TOP__xbar_tb__DOT__cm__DOT__awready))));
}
