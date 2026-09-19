// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxbar_tb.h for the primary calling header

#include "verilated.h"

#include "Vxbar_tb__Syms.h"
#include "Vxbar_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vxbar_tb___024root___eval_initial__TOP__0(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ xbar_tb__DOT__d0;
    xbar_tb__DOT__d0 = 0;
    IData/*31:0*/ xbar_tb__DOT__d1;
    xbar_tb__DOT__d1 = 0;
    IData/*31:0*/ xbar_tb__DOT__dh;
    xbar_tb__DOT__dh = 0;
    IData/*31:0*/ xbar_tb__DOT__dmem;
    xbar_tb__DOT__dmem = 0;
    CData/*1:0*/ xbar_tb__DOT__r0;
    xbar_tb__DOT__r0 = 0;
    CData/*1:0*/ xbar_tb__DOT__r1;
    xbar_tb__DOT__r1 = 0;
    CData/*1:0*/ xbar_tb__DOT__rh;
    xbar_tb__DOT__rh = 0;
    CData/*1:0*/ xbar_tb__DOT__rbad;
    xbar_tb__DOT__rbad = 0;
    CData/*1:0*/ xbar_tb__DOT__rmem;
    xbar_tb__DOT__rmem = 0;
    CData/*1:0*/ xbar_tb__DOT__bw1;
    xbar_tb__DOT__bw1 = 0;
    CData/*1:0*/ xbar_tb__DOT__bw2;
    xbar_tb__DOT__bw2 = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__0__addr;
    __Vtask_xbar_tb__DOT__do_read__0__addr = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__0__data;
    __Vtask_xbar_tb__DOT__do_read__0__data = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_read__0__resp;
    __Vtask_xbar_tb__DOT__do_read__0__resp = 0;
    std::string __Vtask_xbar_tb__DOT__check__1__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__1__cond;
    __Vtask_xbar_tb__DOT__check__1__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__2__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__2__cond;
    __Vtask_xbar_tb__DOT__check__2__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__3__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__3__cond;
    __Vtask_xbar_tb__DOT__check__3__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__4__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__4__cond;
    __Vtask_xbar_tb__DOT__check__4__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__5__addr;
    __Vtask_xbar_tb__DOT__do_read__5__addr = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__5__data;
    __Vtask_xbar_tb__DOT__do_read__5__data = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_read__5__resp;
    __Vtask_xbar_tb__DOT__do_read__5__resp = 0;
    std::string __Vtask_xbar_tb__DOT__check__6__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__6__cond;
    __Vtask_xbar_tb__DOT__check__6__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__7__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__7__cond;
    __Vtask_xbar_tb__DOT__check__7__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__8__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__8__cond;
    __Vtask_xbar_tb__DOT__check__8__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__9__addr;
    __Vtask_xbar_tb__DOT__do_read__9__addr = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__9__data;
    __Vtask_xbar_tb__DOT__do_read__9__data = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_read__9__resp;
    __Vtask_xbar_tb__DOT__do_read__9__resp = 0;
    std::string __Vtask_xbar_tb__DOT__check__10__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__10__cond;
    __Vtask_xbar_tb__DOT__check__10__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__11__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__11__cond;
    __Vtask_xbar_tb__DOT__check__11__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__12__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__12__cond;
    __Vtask_xbar_tb__DOT__check__12__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__13__addr;
    __Vtask_xbar_tb__DOT__do_read__13__addr = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_read__13__resp;
    __Vtask_xbar_tb__DOT__do_read__13__resp = 0;
    std::string __Vtask_xbar_tb__DOT__check__14__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__14__cond;
    __Vtask_xbar_tb__DOT__check__14__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__15__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__15__cond;
    __Vtask_xbar_tb__DOT__check__15__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__16__addr;
    __Vtask_xbar_tb__DOT__do_read__16__addr = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__16__data;
    __Vtask_xbar_tb__DOT__do_read__16__data = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_read__16__resp;
    __Vtask_xbar_tb__DOT__do_read__16__resp = 0;
    std::string __Vtask_xbar_tb__DOT__check__17__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__17__cond;
    __Vtask_xbar_tb__DOT__check__17__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__18__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__18__cond;
    __Vtask_xbar_tb__DOT__check__18__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__19__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__19__cond;
    __Vtask_xbar_tb__DOT__check__19__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_write__20__addr;
    __Vtask_xbar_tb__DOT__do_write__20__addr = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_write__20__resp_in;
    __Vtask_xbar_tb__DOT__do_write__20__resp_in = 0;
    std::string __Vtask_xbar_tb__DOT__check__21__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__21__cond;
    __Vtask_xbar_tb__DOT__check__21__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_write__22__addr;
    __Vtask_xbar_tb__DOT__do_write__22__addr = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_write__22__resp_in;
    __Vtask_xbar_tb__DOT__do_write__22__resp_in = 0;
    std::string __Vtask_xbar_tb__DOT__check__23__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__23__cond;
    __Vtask_xbar_tb__DOT__check__23__cond = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__24__addr;
    __Vtask_xbar_tb__DOT__do_read__24__addr = 0;
    IData/*31:0*/ __Vtask_xbar_tb__DOT__do_read__24__data;
    __Vtask_xbar_tb__DOT__do_read__24__data = 0;
    CData/*1:0*/ __Vtask_xbar_tb__DOT__do_read__24__resp;
    __Vtask_xbar_tb__DOT__do_read__24__resp = 0;
    std::string __Vtask_xbar_tb__DOT__check__25__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__25__cond;
    __Vtask_xbar_tb__DOT__check__25__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__26__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__26__cond;
    __Vtask_xbar_tb__DOT__check__26__cond = 0;
    std::string __Vtask_xbar_tb__DOT__check__27__name;
    CData/*0:0*/ __Vtask_xbar_tb__DOT__check__27__cond;
    __Vtask_xbar_tb__DOT__check__27__cond = 0;
    // Body
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = 0U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid = 0U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.awaddr = 0U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid = 0U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.bready = 0U;
    vlSymsp->TOP__xbar_tb__DOT__ifu.arvalid = 0U;
    vlSymsp->TOP__xbar_tb__DOT__ifu.araddr = 0U;
    vlSymsp->TOP__xbar_tb__DOT__ifu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       97);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       97);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       97);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       97);
    vlSelf->xbar_tb__DOT__reset = 0U;
    VL_WRITEF("--- 1. \350\257\273 CLINT mtime (0x0200_0000) \345\272\224\350\257\245\350\265\260 clint_m ---\n");
    __Vtask_xbar_tb__DOT__do_read__0__addr = 0x2000000U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = __Vtask_xbar_tb__DOT__do_read__0__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       52);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                         ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready)
                         : (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend))))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           53);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       55);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           56);
    }
    __Vtask_xbar_tb__DOT__check__1__cond = (1U & ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                                  | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)));
    __Vtask_xbar_tb__DOT__check__1__name = std::string{"rlast=1"};
    if (vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) {
        __Vtask_xbar_tb__DOT__do_read__0__data = vlSymsp->TOP__xbar_tb__DOT__cm.rdata;
        __Vtask_xbar_tb__DOT__do_read__0__resp = vlSymsp->TOP__xbar_tb__DOT__cm.rresp;
    } else {
        __Vtask_xbar_tb__DOT__do_read__0__data = (0xcafe0000U 
                                                  | (0xffU 
                                                     & vlSymsp->TOP__xbar_tb__DOT__mm.araddr));
        __Vtask_xbar_tb__DOT__do_read__0__resp = 0U;
    }
    if (__Vtask_xbar_tb__DOT__check__1__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__1__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__1__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       60);
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       62);
    xbar_tb__DOT__d0 = __Vtask_xbar_tb__DOT__do_read__0__data;
    xbar_tb__DOT__r0 = __Vtask_xbar_tb__DOT__do_read__0__resp;
    __Vtask_xbar_tb__DOT__check__2__cond = (0U == (IData)(xbar_tb__DOT__r0));
    __Vtask_xbar_tb__DOT__check__2__name = std::string{"resp = OKAY"};
    if (__Vtask_xbar_tb__DOT__check__2__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__2__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__2__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    __Vtask_xbar_tb__DOT__check__3__cond = (0xcafeU 
                                            != (xbar_tb__DOT__d0 
                                                >> 0x10U));
    __Vtask_xbar_tb__DOT__check__3__name = std::string{"\344\270\215\346\230\257 m_m \347\232\204\345\201\207\346\225\260\346\215\256(\350\257\264\346\230\216\346\262\241\350\265\260\351\224\231\350\267\257)"};
    if (__Vtask_xbar_tb__DOT__check__3__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__3__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__3__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    __Vtask_xbar_tb__DOT__check__4__cond = (0U != xbar_tb__DOT__d0);
    __Vtask_xbar_tb__DOT__check__4__name = std::string{"mtime \351\235\236 0"};
    if (__Vtask_xbar_tb__DOT__check__4__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__4__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__4__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 2. \345\206\215\350\257\273\344\270\200\346\254\241, mtime \345\272\224\350\257\245\345\234\250\346\266\250 ---\n");
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       107);
    __Vtask_xbar_tb__DOT__do_read__5__addr = 0x2000000U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = __Vtask_xbar_tb__DOT__do_read__5__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       52);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                         ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready)
                         : (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend))))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           53);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       55);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           56);
    }
    __Vtask_xbar_tb__DOT__check__6__cond = (1U & ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                                  | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)));
    __Vtask_xbar_tb__DOT__check__6__name = std::string{"rlast=1"};
    if (vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) {
        __Vtask_xbar_tb__DOT__do_read__5__data = vlSymsp->TOP__xbar_tb__DOT__cm.rdata;
        __Vtask_xbar_tb__DOT__do_read__5__resp = vlSymsp->TOP__xbar_tb__DOT__cm.rresp;
    } else {
        __Vtask_xbar_tb__DOT__do_read__5__data = (0xcafe0000U 
                                                  | (0xffU 
                                                     & vlSymsp->TOP__xbar_tb__DOT__mm.araddr));
        __Vtask_xbar_tb__DOT__do_read__5__resp = 0U;
    }
    if (__Vtask_xbar_tb__DOT__check__6__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__6__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__6__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       60);
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       62);
    xbar_tb__DOT__d1 = __Vtask_xbar_tb__DOT__do_read__5__data;
    xbar_tb__DOT__r1 = __Vtask_xbar_tb__DOT__do_read__5__resp;
    __Vtask_xbar_tb__DOT__check__7__cond = (0U == (IData)(xbar_tb__DOT__r1));
    __Vtask_xbar_tb__DOT__check__7__name = std::string{"resp = OKAY"};
    if (__Vtask_xbar_tb__DOT__check__7__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__7__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__7__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    __Vtask_xbar_tb__DOT__check__8__cond = (xbar_tb__DOT__d1 
                                            > xbar_tb__DOT__d0);
    __Vtask_xbar_tb__DOT__check__8__name = std::string{"mtime \351\200\222\345\242\236"};
    if (__Vtask_xbar_tb__DOT__check__8__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__8__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__8__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 3. \350\257\273 mtimeh (0x0200_0004) ---\n");
    __Vtask_xbar_tb__DOT__do_read__9__addr = 0x2000004U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = __Vtask_xbar_tb__DOT__do_read__9__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       52);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                         ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready)
                         : (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend))))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           53);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       55);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           56);
    }
    __Vtask_xbar_tb__DOT__check__10__cond = (1U & (
                                                   (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                                   | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)));
    __Vtask_xbar_tb__DOT__check__10__name = std::string{"rlast=1"};
    if (vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) {
        __Vtask_xbar_tb__DOT__do_read__9__data = vlSymsp->TOP__xbar_tb__DOT__cm.rdata;
        __Vtask_xbar_tb__DOT__do_read__9__resp = vlSymsp->TOP__xbar_tb__DOT__cm.rresp;
    } else {
        __Vtask_xbar_tb__DOT__do_read__9__data = (0xcafe0000U 
                                                  | (0xffU 
                                                     & vlSymsp->TOP__xbar_tb__DOT__mm.araddr));
        __Vtask_xbar_tb__DOT__do_read__9__resp = 0U;
    }
    if (__Vtask_xbar_tb__DOT__check__10__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__10__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__10__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       60);
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       62);
    xbar_tb__DOT__dh = __Vtask_xbar_tb__DOT__do_read__9__data;
    xbar_tb__DOT__rh = __Vtask_xbar_tb__DOT__do_read__9__resp;
    __Vtask_xbar_tb__DOT__check__11__cond = (0U == (IData)(xbar_tb__DOT__rh));
    __Vtask_xbar_tb__DOT__check__11__name = std::string{"resp = OKAY"};
    if (__Vtask_xbar_tb__DOT__check__11__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__11__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__11__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    __Vtask_xbar_tb__DOT__check__12__cond = (0U == xbar_tb__DOT__dh);
    __Vtask_xbar_tb__DOT__check__12__name = std::string{"\345\210\232\344\270\212\347\224\265\351\253\230\344\275\215\344\270\272 0"};
    if (__Vtask_xbar_tb__DOT__check__12__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__12__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__12__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 4. \350\257\273 CLINT \350\214\203\345\233\264\351\207\214\347\232\204\351\224\231\345\234\260\345\235\200 0x0200_0010 ---\n");
    __Vtask_xbar_tb__DOT__do_read__13__addr = 0x2000010U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = __Vtask_xbar_tb__DOT__do_read__13__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       52);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                         ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready)
                         : (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend))))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           53);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       55);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           56);
    }
    __Vtask_xbar_tb__DOT__check__14__cond = (1U & (
                                                   (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                                   | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)));
    __Vtask_xbar_tb__DOT__check__14__name = std::string{"rlast=1"};
    __Vtask_xbar_tb__DOT__do_read__13__resp = ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                                                ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rresp)
                                                : 0U);
    if (__Vtask_xbar_tb__DOT__check__14__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__14__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__14__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       60);
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       62);
    xbar_tb__DOT__rbad = __Vtask_xbar_tb__DOT__do_read__13__resp;
    __Vtask_xbar_tb__DOT__check__15__cond = (2U == (IData)(xbar_tb__DOT__rbad));
    __Vtask_xbar_tb__DOT__check__15__name = std::string{"resp = SLVERR (\347\224\261 CLINT \345\210\244\346\226\255, \344\270\215\346\230\257 xbar)"};
    if (__Vtask_xbar_tb__DOT__check__15__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__15__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__15__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 5. \350\257\273\346\231\256\351\200\232\345\206\205\345\255\230 0x3000_0000 \345\272\224\350\257\245\350\265\260 m_m ---\n");
    __Vtask_xbar_tb__DOT__do_read__16__addr = 0x30000000U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = __Vtask_xbar_tb__DOT__do_read__16__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       52);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                         ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready)
                         : (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend))))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           53);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       55);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           56);
    }
    __Vtask_xbar_tb__DOT__check__17__cond = (1U & (
                                                   (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                                   | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)));
    __Vtask_xbar_tb__DOT__check__17__name = std::string{"rlast=1"};
    if (vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) {
        __Vtask_xbar_tb__DOT__do_read__16__data = vlSymsp->TOP__xbar_tb__DOT__cm.rdata;
        __Vtask_xbar_tb__DOT__do_read__16__resp = vlSymsp->TOP__xbar_tb__DOT__cm.rresp;
    } else {
        __Vtask_xbar_tb__DOT__do_read__16__data = (0xcafe0000U 
                                                   | (0xffU 
                                                      & vlSymsp->TOP__xbar_tb__DOT__mm.araddr));
        __Vtask_xbar_tb__DOT__do_read__16__resp = 0U;
    }
    if (__Vtask_xbar_tb__DOT__check__17__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__17__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__17__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       60);
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       62);
    xbar_tb__DOT__dmem = __Vtask_xbar_tb__DOT__do_read__16__data;
    xbar_tb__DOT__rmem = __Vtask_xbar_tb__DOT__do_read__16__resp;
    __Vtask_xbar_tb__DOT__check__18__cond = (0U == (IData)(xbar_tb__DOT__rmem));
    __Vtask_xbar_tb__DOT__check__18__name = std::string{"resp = OKAY"};
    if (__Vtask_xbar_tb__DOT__check__18__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__18__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__18__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    __Vtask_xbar_tb__DOT__check__19__cond = (0xcafeU 
                                             == (xbar_tb__DOT__dmem 
                                                 >> 0x10U));
    __Vtask_xbar_tb__DOT__check__19__name = std::string{"\346\213\277\345\210\260 m_m \347\232\204\345\201\207\346\225\260\346\215\256"};
    if (__Vtask_xbar_tb__DOT__check__19__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__19__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__19__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 6. \345\206\231 CLINT (\345\217\252\350\257\273\350\256\276\345\244\207) ---\n");
    __Vtask_xbar_tb__DOT__do_write__20__addr = 0x2000000U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.awaddr = __Vtask_xbar_tb__DOT__do_write__20__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid = 1U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       70);
    while ((1U & (~ (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awready)))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           71);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid = 0U;
    while ((1U & (~ ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint)) 
                     | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.wready))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           73);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       75);
    while ((1U & (~ ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy) 
                     & ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)) 
                        | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.bvalid)))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           76);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.bready = 1U;
    __Vtask_xbar_tb__DOT__do_write__20__resp_in = ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)
                                                    ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.bresp)
                                                    : 0U);
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       79);
    vlSymsp->TOP__xbar_tb__DOT__lsu.bready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       81);
    xbar_tb__DOT__bw1 = __Vtask_xbar_tb__DOT__do_write__20__resp_in;
    __Vtask_xbar_tb__DOT__check__21__cond = (2U == (IData)(xbar_tb__DOT__bw1));
    __Vtask_xbar_tb__DOT__check__21__name = std::string{"bresp = SLVERR"};
    if (__Vtask_xbar_tb__DOT__check__21__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__21__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__21__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 7. \345\206\231\346\231\256\351\200\232\345\206\205\345\255\230\345\272\224\350\257\245\350\265\260 m_m \344\270\224 OKAY ---\n");
    __Vtask_xbar_tb__DOT__do_write__22__addr = 0x30000000U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.awaddr = __Vtask_xbar_tb__DOT__do_write__22__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid = 1U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       70);
    while ((1U & (~ (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awready)))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           71);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid = 0U;
    while ((1U & (~ ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint)) 
                     | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.wready))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           73);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       75);
    while ((1U & (~ ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy) 
                     & ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)) 
                        | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.bvalid)))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           76);
    }
    __Vtask_xbar_tb__DOT__do_write__22__resp_in = ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)
                                                    ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.bresp)
                                                    : 0U);
    vlSymsp->TOP__xbar_tb__DOT__lsu.bready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       79);
    vlSymsp->TOP__xbar_tb__DOT__lsu.bready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       81);
    xbar_tb__DOT__bw2 = __Vtask_xbar_tb__DOT__do_write__22__resp_in;
    __Vtask_xbar_tb__DOT__check__23__cond = (0U == (IData)(xbar_tb__DOT__bw2));
    __Vtask_xbar_tb__DOT__check__23__name = std::string{"bresp = OKAY"};
    if (__Vtask_xbar_tb__DOT__check__23__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__23__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__23__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    VL_WRITEF("--- 8. \345\207\272\351\224\231\344\271\213\345\220\216\350\277\230\350\203\275\344\270\215\350\203\275\347\273\247\347\273\255\350\257\273(\344\270\215\350\203\275\351\224\201\346\255\273) ---\n");
    __Vtask_xbar_tb__DOT__do_read__24__addr = 0x2000000U;
    vlSymsp->TOP__xbar_tb__DOT__lsu.araddr = __Vtask_xbar_tb__DOT__do_read__24__addr;
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       52);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)
                         ? (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready)
                         : (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend))))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           53);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       55);
    while ((1U & (~ ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                     & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_tgt_rvalid))))) {
        co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                           "@(posedge xbar_tb.clock)", 
                                                           ".xbar_tb/xbar_tb.sv", 
                                                           56);
    }
    if (vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) {
        __Vtask_xbar_tb__DOT__do_read__24__data = vlSymsp->TOP__xbar_tb__DOT__cm.rdata;
        __Vtask_xbar_tb__DOT__do_read__24__resp = vlSymsp->TOP__xbar_tb__DOT__cm.rresp;
    } else {
        __Vtask_xbar_tb__DOT__do_read__24__data = (0xcafe0000U 
                                                   | (0xffU 
                                                      & vlSymsp->TOP__xbar_tb__DOT__mm.araddr));
        __Vtask_xbar_tb__DOT__do_read__24__resp = 0U;
    }
    __Vtask_xbar_tb__DOT__check__25__cond = (1U & (
                                                   (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                                                   | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.rlast)));
    __Vtask_xbar_tb__DOT__check__25__name = std::string{"rlast=1"};
    if (__Vtask_xbar_tb__DOT__check__25__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__25__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__25__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 1U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       60);
    vlSymsp->TOP__xbar_tb__DOT__lsu.rready = 0U;
    co_await vlSelf->__VtrigSched_hb236363d__0.trigger(
                                                       "@(posedge xbar_tb.clock)", 
                                                       ".xbar_tb/xbar_tb.sv", 
                                                       62);
    xbar_tb__DOT__dmem = __Vtask_xbar_tb__DOT__do_read__24__data;
    xbar_tb__DOT__rmem = __Vtask_xbar_tb__DOT__do_read__24__resp;
    __Vtask_xbar_tb__DOT__check__26__cond = (0U == (IData)(xbar_tb__DOT__rmem));
    __Vtask_xbar_tb__DOT__check__26__name = std::string{"resp = OKAY"};
    if (__Vtask_xbar_tb__DOT__check__26__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__26__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__26__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    __Vtask_xbar_tb__DOT__check__27__cond = (xbar_tb__DOT__dmem 
                                             > xbar_tb__DOT__d1);
    __Vtask_xbar_tb__DOT__check__27__name = std::string{"mtime \350\277\230\345\234\250\346\266\250"};
    if (__Vtask_xbar_tb__DOT__check__27__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_xbar_tb__DOT__check__27__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_xbar_tb__DOT__check__27__name));
        vlSelf->xbar_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelf->xbar_tb__DOT__errors);
    }
    if ((0U == vlSelf->xbar_tb__DOT__errors)) {
        VL_WRITEF("\n==== \345\205\250\351\203\250\351\200\232\350\277\207 ====\n");
    } else {
        VL_WRITEF("\n==== \345\244\261\350\264\245 %0d \351\241\271 ====\n",
                  32,vlSelf->xbar_tb__DOT__errors);
    }
    VL_FINISH_MT(".xbar_tb/xbar_tb.sv", 141, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vxbar_tb___024root___dump_triggers__act(Vxbar_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vxbar_tb___024root___eval_triggers__act(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->xbar_tb__DOT__clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__clock))) 
                                      | ((IData)(vlSelf->xbar_tb__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__reset))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->xbar_tb__DOT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__clock)));
    vlSelf->__VactTriggered.at(2U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__clock 
        = vlSelf->xbar_tb__DOT__clock;
    vlSelf->__Vtrigrprev__TOP__xbar_tb__DOT__reset 
        = vlSelf->xbar_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vxbar_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 256> Vxbar_tb__ConstPool__TABLE_h7b8cc13a_0;

VL_INLINE_OPT void Vxbar_tb___024root___act_sequent__TOP__0(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ TOP__xbar_tb__DOT__cm__DOT__araddr;
    TOP__xbar_tb__DOT__cm__DOT__araddr = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__awvalid;
    TOP__xbar_tb__DOT__cm__DOT__awvalid = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__awready;
    TOP__xbar_tb__DOT__cm__DOT__awready = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__wvalid;
    TOP__xbar_tb__DOT__cm__DOT__wvalid = 0;
    // Body
    if ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state))) {
        vlSymsp->TOP__xbar_tb__DOT__mm.araddr = vlSymsp->TOP__xbar_tb__DOT__lsu.araddr;
        TOP__xbar_tb__DOT__cm__DOT__araddr = vlSymsp->TOP__xbar_tb__DOT__lsu.araddr;
    } else {
        vlSymsp->TOP__xbar_tb__DOT__mm.araddr = vlSymsp->TOP__xbar_tb__DOT__ifu.araddr;
        TOP__xbar_tb__DOT__cm__DOT__araddr = vlSymsp->TOP__xbar_tb__DOT__ifu.araddr;
    }
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
    vlSymsp->TOP__xbar_tb__DOT__cm.arready = 0U;
    TOP__xbar_tb__DOT__cm__DOT__wvalid = ((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid) 
                                          & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint));
    TOP__xbar_tb__DOT__cm__DOT__awvalid = (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid) 
                                            & (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy))) 
                                           & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint));
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
        if ((1U & (~ (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state)))) {
            if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
                vlSymsp->TOP__xbar_tb__DOT__cm.wready = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
            if ((((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy) 
                  & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)) 
                 & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.bready))) {
                vlSelf->xbar_tb__DOT__clint__DOT__next = 0U;
            }
        } else if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
            vlSelf->xbar_tb__DOT__clint__DOT__next = 3U;
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

VL_INLINE_OPT void Vxbar_tb___024root___nba_sequent__TOP__0(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__xbar_tb__DOT__xbar__DOT__w_busy;
    __Vdly__xbar_tb__DOT__xbar__DOT__w_busy = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__rvalid;
    TOP__xbar_tb__DOT__cm__DOT__rvalid = 0;
    // Body
    __Vdly__xbar_tb__DOT__xbar__DOT__w_busy = vlSelf->xbar_tb__DOT__xbar__DOT__w_busy;
    if (vlSelf->xbar_tb__DOT__reset) {
        vlSelf->xbar_tb__DOT__clint__DOT__mtime = 0ULL;
        __Vdly__xbar_tb__DOT__xbar__DOT__w_busy = 0U;
        vlSelf->xbar_tb__DOT__clint__DOT__rdata_save = 0U;
        vlSelf->xbar_tb__DOT__clint__DOT__rresp_save = 0U;
        vlSelf->xbar_tb__DOT__mm_rpend = 0U;
        vlSelf->xbar_tb__DOT__xbar__DOT__w_clint = 0U;
        vlSelf->xbar_tb__DOT__clint__DOT__state = 0U;
        vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint = 0U;
        vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state = 0U;
    } else {
        vlSelf->xbar_tb__DOT__clint__DOT__mtime = (1ULL 
                                                   + vlSelf->xbar_tb__DOT__clint__DOT__mtime);
        if (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid) 
             & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awready))) {
            __Vdly__xbar_tb__DOT__xbar__DOT__w_busy = 1U;
        }
        if ((((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy) 
              & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.bready)) 
             & ((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)) 
                | (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.bvalid)))) {
            __Vdly__xbar_tb__DOT__xbar__DOT__w_busy = 0U;
        }
        if (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid) 
             & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awready))) {
            vlSelf->xbar_tb__DOT__xbar__DOT__w_clint 
                = (0x200U == (vlSymsp->TOP__xbar_tb__DOT__lsu.awaddr 
                              >> 0x10U));
        }
        if ((((0U == (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state)) 
              & (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arvalid)) 
             & (IData)(vlSymsp->TOP__xbar_tb__DOT__cm.arready))) {
            vlSelf->xbar_tb__DOT__clint__DOT__rdata_save 
                = vlSelf->xbar_tb__DOT__clint__DOT__rdata_now;
            vlSelf->xbar_tb__DOT__clint__DOT__rresp_save 
                = vlSelf->xbar_tb__DOT__clint__DOT__rresp_now;
        }
        if ((((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
              & (((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                  & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid)) 
                 | ((1U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                    & (IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.arvalid)))) 
             & (IData)(vlSymsp->TOP__xbar_tb__DOT__mm.arready))) {
            vlSelf->xbar_tb__DOT__mm_rpend = 1U;
        }
        if (((IData)(vlSymsp->TOP__xbar_tb__DOT__mm.rvalid) 
             & (((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                 & (2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)))
                 ? (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.rready)
                 : (((~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint)) 
                     & (1U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state))) 
                    & (IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.rready))))) {
            vlSelf->xbar_tb__DOT__mm_rpend = 0U;
        }
        vlSelf->xbar_tb__DOT__clint__DOT__state = vlSelf->xbar_tb__DOT__clint__DOT__next;
        if ((0U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state))) {
            if (vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid) {
                vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint 
                    = (0x200U == (vlSymsp->TOP__xbar_tb__DOT__lsu.araddr 
                                  >> 0x10U));
            } else if (vlSymsp->TOP__xbar_tb__DOT__ifu.arvalid) {
                vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint 
                    = (0x200U == (vlSymsp->TOP__xbar_tb__DOT__ifu.araddr 
                                  >> 0x10U));
            }
        }
        vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state 
            = vlSelf->xbar_tb__DOT__xbar__DOT__r_next_state;
    }
    vlSelf->xbar_tb__DOT__xbar__DOT__w_busy = __Vdly__xbar_tb__DOT__xbar__DOT__w_busy;
    vlSymsp->TOP__xbar_tb__DOT__mm.arready = (1U & 
                                              (~ (IData)(vlSelf->xbar_tb__DOT__mm_rpend)));
    vlSymsp->TOP__xbar_tb__DOT__mm.rvalid = vlSelf->xbar_tb__DOT__mm_rpend;
    vlSymsp->TOP__xbar_tb__DOT__cm.bresp = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.bvalid = 0U;
    if ((2U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
        if ((1U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
            vlSymsp->TOP__xbar_tb__DOT__cm.bresp = 2U;
            vlSymsp->TOP__xbar_tb__DOT__cm.bvalid = 1U;
        }
    }
    vlSymsp->TOP__xbar_tb__DOT__cm.rresp = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.rdata = 0U;
    vlSymsp->TOP__xbar_tb__DOT__cm.rlast = 0U;
    TOP__xbar_tb__DOT__cm__DOT__rvalid = 0U;
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
}

VL_INLINE_OPT void Vxbar_tb___024root___nba_comb__TOP__0(Vxbar_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vxbar_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ TOP__xbar_tb__DOT__cm__DOT__araddr;
    TOP__xbar_tb__DOT__cm__DOT__araddr = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__awvalid;
    TOP__xbar_tb__DOT__cm__DOT__awvalid = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__awready;
    TOP__xbar_tb__DOT__cm__DOT__awready = 0;
    CData/*0:0*/ TOP__xbar_tb__DOT__cm__DOT__wvalid;
    TOP__xbar_tb__DOT__cm__DOT__wvalid = 0;
    // Body
    vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint = 
        ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy)
          ? (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)
          : (0x200U == (vlSymsp->TOP__xbar_tb__DOT__lsu.awaddr 
                        >> 0x10U)));
    if ((2U == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state))) {
        vlSymsp->TOP__xbar_tb__DOT__mm.araddr = vlSymsp->TOP__xbar_tb__DOT__lsu.araddr;
        TOP__xbar_tb__DOT__cm__DOT__araddr = vlSymsp->TOP__xbar_tb__DOT__lsu.araddr;
    } else {
        vlSymsp->TOP__xbar_tb__DOT__mm.araddr = vlSymsp->TOP__xbar_tb__DOT__ifu.araddr;
        TOP__xbar_tb__DOT__cm__DOT__araddr = vlSymsp->TOP__xbar_tb__DOT__ifu.araddr;
    }
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
    vlSymsp->TOP__xbar_tb__DOT__cm.arvalid = ((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_sel_clint) 
                                              & (((2U 
                                                   == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                                                  & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.arvalid)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__r_current_state)) 
                                                    & (IData)(vlSymsp->TOP__xbar_tb__DOT__ifu.arvalid))));
    TOP__xbar_tb__DOT__cm__DOT__wvalid = ((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.wvalid) 
                                          & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint));
    TOP__xbar_tb__DOT__cm__DOT__awvalid = (((IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.awvalid) 
                                            & (~ (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy))) 
                                           & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_sel_clint));
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
    vlSymsp->TOP__xbar_tb__DOT__cm.arready = 0U;
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
        if ((1U & (~ (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state)))) {
            if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
                vlSymsp->TOP__xbar_tb__DOT__cm.wready = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->xbar_tb__DOT__clint__DOT__state))) {
            if ((((IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_busy) 
                  & (IData)(vlSelf->xbar_tb__DOT__xbar__DOT__w_clint)) 
                 & (IData)(vlSymsp->TOP__xbar_tb__DOT__lsu.bready))) {
                vlSelf->xbar_tb__DOT__clint__DOT__next = 0U;
            }
        } else if (TOP__xbar_tb__DOT__cm__DOT__wvalid) {
            vlSelf->xbar_tb__DOT__clint__DOT__next = 3U;
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
