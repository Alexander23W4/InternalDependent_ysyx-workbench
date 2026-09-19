// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclint_tb.h for the primary calling header

#include "verilated.h"

#include "Vclint_tb__Syms.h"
#include "Vclint_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclint_tb___024root___dump_triggers__stl(Vclint_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclint_tb___024root___eval_triggers__stl(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclint_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vclint_tb___024root___stl_sequent__TOP__0(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    if ((0x2000000U == vlSymsp->TOP__clint_tb__DOT__bus.araddr)) {
        vlSelf->clint_tb__DOT__dut__DOT__rresp_now = 0U;
        vlSelf->clint_tb__DOT__dut__DOT__rdata_now 
            = (IData)(vlSelf->clint_tb__DOT__dut__DOT__mtime);
    } else if ((0x2000004U == vlSymsp->TOP__clint_tb__DOT__bus.araddr)) {
        vlSelf->clint_tb__DOT__dut__DOT__rresp_now = 0U;
        vlSelf->clint_tb__DOT__dut__DOT__rdata_now 
            = (IData)((vlSelf->clint_tb__DOT__dut__DOT__mtime 
                       >> 0x20U));
    } else {
        vlSelf->clint_tb__DOT__dut__DOT__rresp_now = 2U;
        vlSelf->clint_tb__DOT__dut__DOT__rdata_now = 0U;
    }
    vlSymsp->TOP__clint_tb__DOT__bus.bresp = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.bvalid = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rlast = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rvalid = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rresp = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rdata = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.arready = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.awready = 0U;
    if ((1U & (~ ((IData)(vlSelf->clint_tb__DOT__dut__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
            vlSymsp->TOP__clint_tb__DOT__bus.rlast = 1U;
            vlSymsp->TOP__clint_tb__DOT__bus.rvalid = 1U;
            vlSymsp->TOP__clint_tb__DOT__bus.rresp 
                = vlSelf->clint_tb__DOT__dut__DOT__rresp_save;
            vlSymsp->TOP__clint_tb__DOT__bus.rdata 
                = vlSelf->clint_tb__DOT__dut__DOT__rdata_save;
        }
        if ((1U & (~ (IData)(vlSelf->clint_tb__DOT__dut__DOT__state)))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.arvalid) {
                vlSymsp->TOP__clint_tb__DOT__bus.arready = 1U;
            }
            if ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arvalid)))) {
                if (vlSymsp->TOP__clint_tb__DOT__bus.awvalid) {
                    vlSymsp->TOP__clint_tb__DOT__bus.awready = 1U;
                }
            }
        }
    }
    vlSymsp->TOP__clint_tb__DOT__bus.wready = 0U;
    vlSelf->clint_tb__DOT__dut__DOT__next = vlSelf->clint_tb__DOT__dut__DOT__state;
    if ((2U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
            vlSymsp->TOP__clint_tb__DOT__bus.bresp = 2U;
            vlSymsp->TOP__clint_tb__DOT__bus.bvalid = 1U;
            if (vlSymsp->TOP__clint_tb__DOT__bus.bready) {
                vlSelf->clint_tb__DOT__dut__DOT__next = 0U;
            }
        } else if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
            vlSelf->clint_tb__DOT__dut__DOT__next = 3U;
        }
        if ((1U & (~ (IData)(vlSelf->clint_tb__DOT__dut__DOT__state)))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
                vlSymsp->TOP__clint_tb__DOT__bus.wready = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->clint_tb__DOT__dut__DOT__state)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arvalid)))) {
                if (vlSymsp->TOP__clint_tb__DOT__bus.awvalid) {
                    if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
                        vlSymsp->TOP__clint_tb__DOT__bus.wready = 1U;
                    }
                }
            }
        }
        if ((1U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.rready) {
                vlSelf->clint_tb__DOT__dut__DOT__next = 0U;
            }
        } else if (vlSymsp->TOP__clint_tb__DOT__bus.arvalid) {
            vlSelf->clint_tb__DOT__dut__DOT__next = 1U;
        } else if (vlSymsp->TOP__clint_tb__DOT__bus.awvalid) {
            vlSelf->clint_tb__DOT__dut__DOT__next = 
                ((IData)(vlSymsp->TOP__clint_tb__DOT__bus.wvalid)
                  ? 3U : 2U);
        }
    }
}
