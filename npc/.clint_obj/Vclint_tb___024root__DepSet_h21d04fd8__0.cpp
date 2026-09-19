// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclint_tb.h for the primary calling header

#include "verilated.h"

#include "Vclint_tb__Syms.h"
#include "Vclint_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vclint_tb___024root___eval_initial__TOP__0(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ clint_tb__DOT__d0;
    clint_tb__DOT__d0 = 0;
    IData/*31:0*/ clint_tb__DOT__d1;
    clint_tb__DOT__d1 = 0;
    IData/*31:0*/ clint_tb__DOT__dh;
    clint_tb__DOT__dh = 0;
    IData/*31:0*/ clint_tb__DOT__dx;
    clint_tb__DOT__dx = 0;
    CData/*1:0*/ clint_tb__DOT__r0;
    clint_tb__DOT__r0 = 0;
    CData/*1:0*/ clint_tb__DOT__r1;
    clint_tb__DOT__r1 = 0;
    CData/*1:0*/ clint_tb__DOT__rh;
    clint_tb__DOT__rh = 0;
    CData/*1:0*/ clint_tb__DOT__rx;
    clint_tb__DOT__rx = 0;
    CData/*1:0*/ clint_tb__DOT__bw;
    clint_tb__DOT__bw = 0;
    CData/*1:0*/ clint_tb__DOT__bw2;
    clint_tb__DOT__bw2 = 0;
    CData/*0:0*/ clint_tb__DOT__l0;
    clint_tb__DOT__l0 = 0;
    CData/*0:0*/ clint_tb__DOT__lx;
    clint_tb__DOT__lx = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__0__addr;
    __Vtask_clint_tb__DOT__do_read__0__addr = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__0__data;
    __Vtask_clint_tb__DOT__do_read__0__data = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_read__0__resp;
    __Vtask_clint_tb__DOT__do_read__0__resp = 0;
    CData/*0:0*/ __Vtask_clint_tb__DOT__do_read__0__last;
    __Vtask_clint_tb__DOT__do_read__0__last = 0;
    std::string __Vtask_clint_tb__DOT__check__1__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__1__cond;
    __Vtask_clint_tb__DOT__check__1__cond = 0;
    std::string __Vtask_clint_tb__DOT__check__2__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__2__cond;
    __Vtask_clint_tb__DOT__check__2__cond = 0;
    std::string __Vtask_clint_tb__DOT__check__3__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__3__cond;
    __Vtask_clint_tb__DOT__check__3__cond = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__4__addr;
    __Vtask_clint_tb__DOT__do_read__4__addr = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__4__data;
    __Vtask_clint_tb__DOT__do_read__4__data = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_read__4__resp;
    __Vtask_clint_tb__DOT__do_read__4__resp = 0;
    std::string __Vtask_clint_tb__DOT__check__5__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__5__cond;
    __Vtask_clint_tb__DOT__check__5__cond = 0;
    std::string __Vtask_clint_tb__DOT__check__6__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__6__cond;
    __Vtask_clint_tb__DOT__check__6__cond = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__7__addr;
    __Vtask_clint_tb__DOT__do_read__7__addr = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__7__data;
    __Vtask_clint_tb__DOT__do_read__7__data = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_read__7__resp;
    __Vtask_clint_tb__DOT__do_read__7__resp = 0;
    std::string __Vtask_clint_tb__DOT__check__8__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__8__cond;
    __Vtask_clint_tb__DOT__check__8__cond = 0;
    std::string __Vtask_clint_tb__DOT__check__9__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__9__cond;
    __Vtask_clint_tb__DOT__check__9__cond = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__10__addr;
    __Vtask_clint_tb__DOT__do_read__10__addr = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__10__data;
    __Vtask_clint_tb__DOT__do_read__10__data = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_read__10__resp;
    __Vtask_clint_tb__DOT__do_read__10__resp = 0;
    CData/*0:0*/ __Vtask_clint_tb__DOT__do_read__10__last;
    __Vtask_clint_tb__DOT__do_read__10__last = 0;
    std::string __Vtask_clint_tb__DOT__check__11__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__11__cond;
    __Vtask_clint_tb__DOT__check__11__cond = 0;
    std::string __Vtask_clint_tb__DOT__check__12__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__12__cond;
    __Vtask_clint_tb__DOT__check__12__cond = 0;
    CData/*0:0*/ __Vtask_clint_tb__DOT__do_write__13__same_cycle;
    __Vtask_clint_tb__DOT__do_write__13__same_cycle = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_write__13__resp_in;
    __Vtask_clint_tb__DOT__do_write__13__resp_in = 0;
    std::string __Vtask_clint_tb__DOT__check__14__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__14__cond;
    __Vtask_clint_tb__DOT__check__14__cond = 0;
    CData/*0:0*/ __Vtask_clint_tb__DOT__do_write__15__same_cycle;
    __Vtask_clint_tb__DOT__do_write__15__same_cycle = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_write__15__resp_in;
    __Vtask_clint_tb__DOT__do_write__15__resp_in = 0;
    std::string __Vtask_clint_tb__DOT__check__16__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__16__cond;
    __Vtask_clint_tb__DOT__check__16__cond = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__17__addr;
    __Vtask_clint_tb__DOT__do_read__17__addr = 0;
    IData/*31:0*/ __Vtask_clint_tb__DOT__do_read__17__data;
    __Vtask_clint_tb__DOT__do_read__17__data = 0;
    CData/*1:0*/ __Vtask_clint_tb__DOT__do_read__17__resp;
    __Vtask_clint_tb__DOT__do_read__17__resp = 0;
    CData/*0:0*/ __Vtask_clint_tb__DOT__do_read__17__last;
    __Vtask_clint_tb__DOT__do_read__17__last = 0;
    std::string __Vtask_clint_tb__DOT__check__18__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__18__cond;
    __Vtask_clint_tb__DOT__check__18__cond = 0;
    std::string __Vtask_clint_tb__DOT__check__19__name;
    CData/*0:0*/ __Vtask_clint_tb__DOT__check__19__cond;
    __Vtask_clint_tb__DOT__check__19__cond = 0;
    // Body
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.araddr = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.awvalid = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.bready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       93);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       93);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       93);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       93);
    vlSelf->clint_tb__DOT__reset = 0U;
    VL_WRITEF("--- 1. \350\257\273 mtime[31:0] (0x0200_0000) ---\n");
    __Vtask_clint_tb__DOT__do_read__0__addr = 0x2000000U;
    vlSymsp->TOP__clint_tb__DOT__bus.araddr = __Vtask_clint_tb__DOT__do_read__0__addr;
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       33);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           34);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       36);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.rvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           37);
    }
    __Vtask_clint_tb__DOT__do_read__0__data = vlSymsp->TOP__clint_tb__DOT__bus.rdata;
    __Vtask_clint_tb__DOT__do_read__0__resp = vlSymsp->TOP__clint_tb__DOT__bus.rresp;
    __Vtask_clint_tb__DOT__do_read__0__last = vlSymsp->TOP__clint_tb__DOT__bus.rlast;
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       40);
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       42);
    clint_tb__DOT__d0 = __Vtask_clint_tb__DOT__do_read__0__data;
    clint_tb__DOT__r0 = __Vtask_clint_tb__DOT__do_read__0__resp;
    clint_tb__DOT__l0 = __Vtask_clint_tb__DOT__do_read__0__last;
    __Vtask_clint_tb__DOT__check__1__cond = (0U == (IData)(clint_tb__DOT__r0));
    __Vtask_clint_tb__DOT__check__1__name = std::string{"resp = OKAY"};
    if (__Vtask_clint_tb__DOT__check__1__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__1__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__1__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    __Vtask_clint_tb__DOT__check__2__cond = clint_tb__DOT__l0;
    __Vtask_clint_tb__DOT__check__2__name = std::string{"rlast = 1"};
    if (__Vtask_clint_tb__DOT__check__2__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__2__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__2__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    __Vtask_clint_tb__DOT__check__3__cond = (0U != clint_tb__DOT__d0);
    __Vtask_clint_tb__DOT__check__3__name = std::string{"\344\270\215\346\230\257 stuck \345\234\250 0"};
    if (__Vtask_clint_tb__DOT__check__3__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__3__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__3__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    VL_WRITEF("--- 2. \351\232\224\345\207\240\346\213\215\345\206\215\350\257\273\344\270\200\346\254\241, mtime \345\272\224\350\257\245\345\234\250\346\266\250 ---\n");
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       103);
    __Vtask_clint_tb__DOT__do_read__4__addr = 0x2000000U;
    vlSymsp->TOP__clint_tb__DOT__bus.araddr = __Vtask_clint_tb__DOT__do_read__4__addr;
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       33);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           34);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       36);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.rvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           37);
    }
    __Vtask_clint_tb__DOT__do_read__4__data = vlSymsp->TOP__clint_tb__DOT__bus.rdata;
    __Vtask_clint_tb__DOT__do_read__4__resp = vlSymsp->TOP__clint_tb__DOT__bus.rresp;
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       40);
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       42);
    clint_tb__DOT__d1 = __Vtask_clint_tb__DOT__do_read__4__data;
    clint_tb__DOT__r1 = __Vtask_clint_tb__DOT__do_read__4__resp;
    __Vtask_clint_tb__DOT__check__5__cond = (0U == (IData)(clint_tb__DOT__r1));
    __Vtask_clint_tb__DOT__check__5__name = std::string{"resp = OKAY"};
    if (__Vtask_clint_tb__DOT__check__5__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__5__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__5__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    __Vtask_clint_tb__DOT__check__6__cond = (clint_tb__DOT__d1 
                                             > clint_tb__DOT__d0);
    __Vtask_clint_tb__DOT__check__6__name = std::string{"mtime \351\200\222\345\242\236"};
    if (__Vtask_clint_tb__DOT__check__6__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__6__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__6__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    VL_WRITEF("--- 3. \350\257\273 mtime[63:32] (0x0200_0004) ---\n");
    __Vtask_clint_tb__DOT__do_read__7__addr = 0x2000004U;
    vlSymsp->TOP__clint_tb__DOT__bus.araddr = __Vtask_clint_tb__DOT__do_read__7__addr;
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       33);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           34);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       36);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.rvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           37);
    }
    __Vtask_clint_tb__DOT__do_read__7__data = vlSymsp->TOP__clint_tb__DOT__bus.rdata;
    __Vtask_clint_tb__DOT__do_read__7__resp = vlSymsp->TOP__clint_tb__DOT__bus.rresp;
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       40);
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       42);
    clint_tb__DOT__dh = __Vtask_clint_tb__DOT__do_read__7__data;
    clint_tb__DOT__rh = __Vtask_clint_tb__DOT__do_read__7__resp;
    __Vtask_clint_tb__DOT__check__8__cond = (0U == (IData)(clint_tb__DOT__rh));
    __Vtask_clint_tb__DOT__check__8__name = std::string{"resp = OKAY"};
    if (__Vtask_clint_tb__DOT__check__8__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__8__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__8__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    __Vtask_clint_tb__DOT__check__9__cond = (0U == clint_tb__DOT__dh);
    __Vtask_clint_tb__DOT__check__9__name = std::string{"\351\253\230\344\275\215\345\276\210\345\260\217(\345\210\232\344\270\212\347\224\265)"};
    if (__Vtask_clint_tb__DOT__check__9__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__9__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__9__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    VL_WRITEF("--- 4. \351\224\231\350\257\257\350\256\277\351\227\256\345\234\260\345\235\200 0x0200_0010 ---\n");
    __Vtask_clint_tb__DOT__do_read__10__addr = 0x2000010U;
    vlSymsp->TOP__clint_tb__DOT__bus.araddr = __Vtask_clint_tb__DOT__do_read__10__addr;
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       33);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           34);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       36);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.rvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           37);
    }
    __Vtask_clint_tb__DOT__do_read__10__data = vlSymsp->TOP__clint_tb__DOT__bus.rdata;
    __Vtask_clint_tb__DOT__do_read__10__resp = vlSymsp->TOP__clint_tb__DOT__bus.rresp;
    __Vtask_clint_tb__DOT__do_read__10__last = vlSymsp->TOP__clint_tb__DOT__bus.rlast;
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       40);
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       42);
    clint_tb__DOT__dx = __Vtask_clint_tb__DOT__do_read__10__data;
    clint_tb__DOT__rx = __Vtask_clint_tb__DOT__do_read__10__resp;
    clint_tb__DOT__lx = __Vtask_clint_tb__DOT__do_read__10__last;
    __Vtask_clint_tb__DOT__check__11__cond = (2U == (IData)(clint_tb__DOT__rx));
    __Vtask_clint_tb__DOT__check__11__name = std::string{"resp = SLVERR"};
    if (__Vtask_clint_tb__DOT__check__11__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__11__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__11__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    __Vtask_clint_tb__DOT__check__12__cond = clint_tb__DOT__lx;
    __Vtask_clint_tb__DOT__check__12__name = std::string{"rlast = 1"};
    if (__Vtask_clint_tb__DOT__check__12__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__12__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__12__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    VL_WRITEF("--- 5. \345\206\231 mtime (\345\217\252\350\257\273\350\256\276\345\244\207, \345\272\224\350\257\245\346\212\245\351\224\231) ---\n");
    __Vtask_clint_tb__DOT__do_write__13__same_cycle = 1U;
    vlSymsp->TOP__clint_tb__DOT__bus.awvalid = 1U;
    vlSymsp->TOP__clint_tb__DOT__bus.wvalid = __Vtask_clint_tb__DOT__do_write__13__same_cycle;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       58);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.awready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           59);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.awvalid = 0U;
    if (__Vtask_clint_tb__DOT__do_write__13__same_cycle) {
        while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.wready)))) {
            co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                               "@(posedge clint_tb.clock)", 
                                                               ".clint_tb/clint_tb.sv", 
                                                               68);
        }
        vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 0U;
    } else {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           62);
        vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 1U;
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           64);
        while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.wready)))) {
            co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                               "@(posedge clint_tb.clock)", 
                                                               ".clint_tb/clint_tb.sv", 
                                                               65);
        }
        vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 0U;
    }
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       71);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.bvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           72);
    }
    __Vtask_clint_tb__DOT__do_write__13__resp_in = vlSymsp->TOP__clint_tb__DOT__bus.bresp;
    vlSymsp->TOP__clint_tb__DOT__bus.bready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       75);
    vlSymsp->TOP__clint_tb__DOT__bus.bready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       77);
    clint_tb__DOT__bw = __Vtask_clint_tb__DOT__do_write__13__resp_in;
    __Vtask_clint_tb__DOT__check__14__cond = (2U == (IData)(clint_tb__DOT__bw));
    __Vtask_clint_tb__DOT__check__14__name = std::string{"bresp = SLVERR"};
    if (__Vtask_clint_tb__DOT__check__14__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__14__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__14__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    VL_WRITEF("--- 6. \345\206\231\351\224\231\350\257\257\345\234\260\345\235\200, \344\270\224 AW/W \345\210\206\344\270\244\346\213\215\345\217\221 ---\n");
    __Vtask_clint_tb__DOT__do_write__15__same_cycle = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.awvalid = 1U;
    vlSymsp->TOP__clint_tb__DOT__bus.wvalid = __Vtask_clint_tb__DOT__do_write__15__same_cycle;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       58);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.awready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           59);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.awvalid = 0U;
    if (__Vtask_clint_tb__DOT__do_write__15__same_cycle) {
        while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.wready)))) {
            co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                               "@(posedge clint_tb.clock)", 
                                                               ".clint_tb/clint_tb.sv", 
                                                               68);
        }
        vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 0U;
    } else {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           62);
        vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 1U;
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           64);
        while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.wready)))) {
            co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                               "@(posedge clint_tb.clock)", 
                                                               ".clint_tb/clint_tb.sv", 
                                                               65);
        }
        vlSymsp->TOP__clint_tb__DOT__bus.wvalid = 0U;
    }
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       71);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.bvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           72);
    }
    __Vtask_clint_tb__DOT__do_write__15__resp_in = vlSymsp->TOP__clint_tb__DOT__bus.bresp;
    vlSymsp->TOP__clint_tb__DOT__bus.bready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       75);
    vlSymsp->TOP__clint_tb__DOT__bus.bready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       77);
    clint_tb__DOT__bw2 = __Vtask_clint_tb__DOT__do_write__15__resp_in;
    __Vtask_clint_tb__DOT__check__16__cond = (2U == (IData)(clint_tb__DOT__bw2));
    __Vtask_clint_tb__DOT__check__16__name = std::string{"bresp = SLVERR"};
    if (__Vtask_clint_tb__DOT__check__16__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__16__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__16__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    VL_WRITEF("--- 7. \345\207\272\351\224\231\344\271\213\345\220\216\346\200\273\347\272\277\350\277\230\350\203\275\344\270\215\350\203\275\347\224\250(\344\270\215\350\203\275\351\224\201\346\255\273) ---\n");
    __Vtask_clint_tb__DOT__do_read__17__addr = 0x2000000U;
    vlSymsp->TOP__clint_tb__DOT__bus.araddr = __Vtask_clint_tb__DOT__do_read__17__addr;
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       33);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arready)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           34);
    }
    vlSymsp->TOP__clint_tb__DOT__bus.arvalid = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       36);
    while ((1U & (~ (IData)(vlSymsp->TOP__clint_tb__DOT__bus.rvalid)))) {
        co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                           "@(posedge clint_tb.clock)", 
                                                           ".clint_tb/clint_tb.sv", 
                                                           37);
    }
    __Vtask_clint_tb__DOT__do_read__17__data = vlSymsp->TOP__clint_tb__DOT__bus.rdata;
    __Vtask_clint_tb__DOT__do_read__17__resp = vlSymsp->TOP__clint_tb__DOT__bus.rresp;
    __Vtask_clint_tb__DOT__do_read__17__last = vlSymsp->TOP__clint_tb__DOT__bus.rlast;
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 1U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       40);
    vlSymsp->TOP__clint_tb__DOT__bus.rready = 0U;
    co_await vlSelf->__VtrigSched_hfd9fd719__0.trigger(
                                                       "@(posedge clint_tb.clock)", 
                                                       ".clint_tb/clint_tb.sv", 
                                                       42);
    clint_tb__DOT__dx = __Vtask_clint_tb__DOT__do_read__17__data;
    clint_tb__DOT__rx = __Vtask_clint_tb__DOT__do_read__17__resp;
    clint_tb__DOT__lx = __Vtask_clint_tb__DOT__do_read__17__last;
    __Vtask_clint_tb__DOT__check__18__cond = (0U == (IData)(clint_tb__DOT__rx));
    __Vtask_clint_tb__DOT__check__18__name = std::string{"resp = OKAY"};
    if (__Vtask_clint_tb__DOT__check__18__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__18__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__18__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    __Vtask_clint_tb__DOT__check__19__cond = (clint_tb__DOT__dx 
                                              > clint_tb__DOT__d1);
    __Vtask_clint_tb__DOT__check__19__name = std::string{"mtime \350\277\230\345\234\250\346\266\250"};
    if (__Vtask_clint_tb__DOT__check__19__cond) {
        VL_WRITEF("  ok    %@\n",-1,&(__Vtask_clint_tb__DOT__check__19__name));
    } else {
        VL_WRITEF("  FAIL  %@\n",-1,&(__Vtask_clint_tb__DOT__check__19__name));
        vlSelf->clint_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelf->clint_tb__DOT__errors);
    }
    if ((0U == vlSelf->clint_tb__DOT__errors)) {
        VL_WRITEF("\n==== \345\205\250\351\203\250\351\200\232\350\277\207 ====\n");
    } else {
        VL_WRITEF("\n==== \345\244\261\350\264\245 %0d \351\241\271 ====\n",
                  32,vlSelf->clint_tb__DOT__errors);
    }
    VL_FINISH_MT(".clint_tb/clint_tb.sv", 133, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclint_tb___024root___dump_triggers__act(Vclint_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vclint_tb___024root___eval_triggers__act(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clint_tb__DOT__clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clint_tb__DOT__clock))) 
                                      | ((IData)(vlSelf->clint_tb__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clint_tb__DOT__reset))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clint_tb__DOT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clint_tb__DOT__clock)));
    vlSelf->__VactTriggered.at(2U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__clint_tb__DOT__clock 
        = vlSelf->clint_tb__DOT__clock;
    vlSelf->__Vtrigrprev__TOP__clint_tb__DOT__reset 
        = vlSelf->clint_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclint_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vclint_tb___024root___act_sequent__TOP__0(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___act_sequent__TOP__0\n"); );
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
    vlSymsp->TOP__clint_tb__DOT__bus.arready = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.awready = 0U;
    if ((1U & (~ ((IData)(vlSelf->clint_tb__DOT__dut__DOT__state) 
                  >> 1U)))) {
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
        if ((1U & (~ (IData)(vlSelf->clint_tb__DOT__dut__DOT__state)))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
                vlSymsp->TOP__clint_tb__DOT__bus.wready = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.bready) {
                vlSelf->clint_tb__DOT__dut__DOT__next = 0U;
            }
        } else if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
            vlSelf->clint_tb__DOT__dut__DOT__next = 3U;
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

VL_INLINE_OPT void Vclint_tb___024root___nba_sequent__TOP__0(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->clint_tb__DOT__reset) {
        vlSelf->clint_tb__DOT__dut__DOT__mtime = 0ULL;
        vlSelf->clint_tb__DOT__dut__DOT__rdata_save = 0U;
        vlSelf->clint_tb__DOT__dut__DOT__rresp_save = 0U;
        vlSelf->clint_tb__DOT__dut__DOT__state = 0U;
    } else {
        vlSelf->clint_tb__DOT__dut__DOT__mtime = (1ULL 
                                                  + vlSelf->clint_tb__DOT__dut__DOT__mtime);
        if ((((0U == (IData)(vlSelf->clint_tb__DOT__dut__DOT__state)) 
              & (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arvalid)) 
             & (IData)(vlSymsp->TOP__clint_tb__DOT__bus.arready))) {
            vlSelf->clint_tb__DOT__dut__DOT__rdata_save 
                = vlSelf->clint_tb__DOT__dut__DOT__rdata_now;
            vlSelf->clint_tb__DOT__dut__DOT__rresp_save 
                = vlSelf->clint_tb__DOT__dut__DOT__rresp_now;
        }
        vlSelf->clint_tb__DOT__dut__DOT__state = vlSelf->clint_tb__DOT__dut__DOT__next;
    }
    vlSymsp->TOP__clint_tb__DOT__bus.bresp = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.bvalid = 0U;
    if ((2U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
            vlSymsp->TOP__clint_tb__DOT__bus.bresp = 2U;
            vlSymsp->TOP__clint_tb__DOT__bus.bvalid = 1U;
        }
    }
    vlSymsp->TOP__clint_tb__DOT__bus.rlast = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rvalid = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rresp = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.rdata = 0U;
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
    }
}

VL_INLINE_OPT void Vclint_tb___024root___nba_sequent__TOP__1(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->clint_tb__DOT__dut__DOT__rresp_now = ((0x2000000U 
                                                   == vlSymsp->TOP__clint_tb__DOT__bus.araddr)
                                                   ? 0U
                                                   : 
                                                  ((0x2000004U 
                                                    == vlSymsp->TOP__clint_tb__DOT__bus.araddr)
                                                    ? 0U
                                                    : 2U));
}

VL_INLINE_OPT void Vclint_tb___024root___nba_comb__TOP__0(Vclint_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclint_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclint_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->clint_tb__DOT__dut__DOT__rdata_now = ((0x2000000U 
                                                   == vlSymsp->TOP__clint_tb__DOT__bus.araddr)
                                                   ? (IData)(vlSelf->clint_tb__DOT__dut__DOT__mtime)
                                                   : 
                                                  ((0x2000004U 
                                                    == vlSymsp->TOP__clint_tb__DOT__bus.araddr)
                                                    ? (IData)(
                                                              (vlSelf->clint_tb__DOT__dut__DOT__mtime 
                                                               >> 0x20U))
                                                    : 0U));
    vlSymsp->TOP__clint_tb__DOT__bus.arready = 0U;
    vlSymsp->TOP__clint_tb__DOT__bus.awready = 0U;
    if ((1U & (~ ((IData)(vlSelf->clint_tb__DOT__dut__DOT__state) 
                  >> 1U)))) {
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
        if ((1U & (~ (IData)(vlSelf->clint_tb__DOT__dut__DOT__state)))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
                vlSymsp->TOP__clint_tb__DOT__bus.wready = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->clint_tb__DOT__dut__DOT__state))) {
            if (vlSymsp->TOP__clint_tb__DOT__bus.bready) {
                vlSelf->clint_tb__DOT__dut__DOT__next = 0U;
            }
        } else if (vlSymsp->TOP__clint_tb__DOT__bus.wvalid) {
            vlSelf->clint_tb__DOT__dut__DOT__next = 3U;
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
