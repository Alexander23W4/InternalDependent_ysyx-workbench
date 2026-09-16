// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__0(vlSelf);
    Vtb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb__DOT__clock = vlSelf->tb__DOT__clock;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__reset = vlSelf->tb__DOT__reset;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_ce_n = vlSelf->tb__DOT__qspi_ce_n;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_sck = vlSelf->tb__DOT__qspi_sck;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb__DOT__apb_write__Vstatic__guard;
    tb__DOT__apb_write__Vstatic__guard = 0;
    IData/*31:0*/ tb__DOT__apb_read__Vstatic__guard;
    tb__DOT__apb_read__Vstatic__guard = 0;
    IData/*31:0*/ tb__DOT__r;
    tb__DOT__r = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__0__addr;
    __Vtask_tb__DOT__apb_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__0__data;
    __Vtask_tb__DOT__apb_write__0__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__0__strb;
    __Vtask_tb__DOT__apb_write__0__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__1__addr;
    __Vtask_tb__DOT__check__1__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__1__exp;
    __Vtask_tb__DOT__check__1__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__2__addr;
    __Vtask_tb__DOT__apb_read__2__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__2__data;
    __Vtask_tb__DOT__apb_read__2__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__3__addr;
    __Vtask_tb__DOT__apb_write__3__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__3__data;
    __Vtask_tb__DOT__apb_write__3__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__3__strb;
    __Vtask_tb__DOT__apb_write__3__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__4__addr;
    __Vtask_tb__DOT__check__4__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__4__exp;
    __Vtask_tb__DOT__check__4__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__5__addr;
    __Vtask_tb__DOT__apb_read__5__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__5__data;
    __Vtask_tb__DOT__apb_read__5__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__6__addr;
    __Vtask_tb__DOT__apb_write__6__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__6__data;
    __Vtask_tb__DOT__apb_write__6__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__6__strb;
    __Vtask_tb__DOT__apb_write__6__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__7__addr;
    __Vtask_tb__DOT__check__7__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__7__exp;
    __Vtask_tb__DOT__check__7__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__8__addr;
    __Vtask_tb__DOT__apb_read__8__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__8__data;
    __Vtask_tb__DOT__apb_read__8__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__9__addr;
    __Vtask_tb__DOT__apb_write__9__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__9__data;
    __Vtask_tb__DOT__apb_write__9__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__9__strb;
    __Vtask_tb__DOT__apb_write__9__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__10__addr;
    __Vtask_tb__DOT__check__10__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__10__exp;
    __Vtask_tb__DOT__check__10__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__11__addr;
    __Vtask_tb__DOT__apb_read__11__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__11__data;
    __Vtask_tb__DOT__apb_read__11__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__12__addr;
    __Vtask_tb__DOT__apb_write__12__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__12__data;
    __Vtask_tb__DOT__apb_write__12__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__12__strb;
    __Vtask_tb__DOT__apb_write__12__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__13__addr;
    __Vtask_tb__DOT__check__13__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__13__exp;
    __Vtask_tb__DOT__check__13__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__14__addr;
    __Vtask_tb__DOT__apb_read__14__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__14__data;
    __Vtask_tb__DOT__apb_read__14__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__15__addr;
    __Vtask_tb__DOT__apb_write__15__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__15__data;
    __Vtask_tb__DOT__apb_write__15__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__15__strb;
    __Vtask_tb__DOT__apb_write__15__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__16__addr;
    __Vtask_tb__DOT__check__16__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__16__exp;
    __Vtask_tb__DOT__check__16__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__17__addr;
    __Vtask_tb__DOT__apb_read__17__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__17__data;
    __Vtask_tb__DOT__apb_read__17__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__18__addr;
    __Vtask_tb__DOT__apb_write__18__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__18__data;
    __Vtask_tb__DOT__apb_write__18__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__18__strb;
    __Vtask_tb__DOT__apb_write__18__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__19__addr;
    __Vtask_tb__DOT__apb_write__19__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_write__19__data;
    __Vtask_tb__DOT__apb_write__19__data = 0;
    CData/*3:0*/ __Vtask_tb__DOT__apb_write__19__strb;
    __Vtask_tb__DOT__apb_write__19__strb = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__20__addr;
    __Vtask_tb__DOT__check__20__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__20__exp;
    __Vtask_tb__DOT__check__20__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__21__addr;
    __Vtask_tb__DOT__apb_read__21__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__21__data;
    __Vtask_tb__DOT__apb_read__21__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__22__addr;
    __Vtask_tb__DOT__check__22__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__22__exp;
    __Vtask_tb__DOT__check__22__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__23__addr;
    __Vtask_tb__DOT__apb_read__23__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__23__data;
    __Vtask_tb__DOT__apb_read__23__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__24__addr;
    __Vtask_tb__DOT__check__24__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__24__exp;
    __Vtask_tb__DOT__check__24__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__25__addr;
    __Vtask_tb__DOT__apb_read__25__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__25__data;
    __Vtask_tb__DOT__apb_read__25__data = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__26__addr;
    __Vtask_tb__DOT__check__26__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__check__26__exp;
    __Vtask_tb__DOT__check__26__exp = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__27__addr;
    __Vtask_tb__DOT__apb_read__27__addr = 0;
    IData/*31:0*/ __Vtask_tb__DOT__apb_read__27__data;
    __Vtask_tb__DOT__apb_read__27__data = 0;
    // Body
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       85);
    vlSelf->tb__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       87);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       87);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       87);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       87);
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       87);
    __Vtask_tb__DOT__apb_write__0__strb = 0xfU;
    __Vtask_tb__DOT__apb_write__0__data = 0xdeadbeefU;
    __Vtask_tb__DOT__apb_write__0__addr = 0x80000000U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__0__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__0__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__0__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__0__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__1__exp = 0xdeadbeefU;
    __Vtask_tb__DOT__check__1__addr = 0x80000000U;
    __Vtask_tb__DOT__apb_read__2__addr = __Vtask_tb__DOT__check__1__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__2__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__2__addr);
    }
    __Vtask_tb__DOT__apb_read__2__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                           [3U] << 0x18U) 
                                          | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                              [2U] 
                                              << 0x10U) 
                                             | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [1U] 
                                                 << 8U) 
                                                | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__2__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__1__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__1__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__1__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__1__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__apb_write__3__strb = 0xfU;
    __Vtask_tb__DOT__apb_write__3__data = 0xaa55U;
    __Vtask_tb__DOT__apb_write__3__addr = 0x80000004U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__3__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__3__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__3__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__3__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__4__exp = 0xaa55U;
    __Vtask_tb__DOT__check__4__addr = 0x80000004U;
    __Vtask_tb__DOT__apb_read__5__addr = __Vtask_tb__DOT__check__4__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__5__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__5__addr);
    }
    __Vtask_tb__DOT__apb_read__5__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                           [3U] << 0x18U) 
                                          | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                              [2U] 
                                              << 0x10U) 
                                             | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [1U] 
                                                 << 8U) 
                                                | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__5__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__4__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__4__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__4__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__4__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__apb_write__6__strb = 0xfU;
    __Vtask_tb__DOT__apb_write__6__data = 0x11223344U;
    __Vtask_tb__DOT__apb_write__6__addr = 0x80000000U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__6__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__6__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__6__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__6__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__7__exp = 0x11223344U;
    __Vtask_tb__DOT__check__7__addr = 0x80000000U;
    __Vtask_tb__DOT__apb_read__8__addr = __Vtask_tb__DOT__check__7__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__8__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__8__addr);
    }
    __Vtask_tb__DOT__apb_read__8__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                           [3U] << 0x18U) 
                                          | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                              [2U] 
                                              << 0x10U) 
                                             | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [1U] 
                                                 << 8U) 
                                                | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__8__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__7__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__7__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__7__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__7__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__apb_write__9__strb = 2U;
    __Vtask_tb__DOT__apb_write__9__data = 0xbb00U;
    __Vtask_tb__DOT__apb_write__9__addr = 0x80000011U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__9__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__9__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__9__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__9__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__10__exp = 0xbb00U;
    __Vtask_tb__DOT__check__10__addr = 0x80000010U;
    __Vtask_tb__DOT__apb_read__11__addr = __Vtask_tb__DOT__check__10__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__11__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__11__addr);
    }
    __Vtask_tb__DOT__apb_read__11__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__11__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__10__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__10__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__10__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__10__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__apb_write__12__strb = 1U;
    __Vtask_tb__DOT__apb_write__12__data = 0xccU;
    __Vtask_tb__DOT__apb_write__12__addr = 0x80000020U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__12__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__12__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__12__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__12__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__13__exp = 0xccU;
    __Vtask_tb__DOT__check__13__addr = 0x80000020U;
    __Vtask_tb__DOT__apb_read__14__addr = __Vtask_tb__DOT__check__13__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__14__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__14__addr);
    }
    __Vtask_tb__DOT__apb_read__14__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__14__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__13__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__13__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__13__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__13__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__apb_write__15__strb = 3U;
    __Vtask_tb__DOT__apb_write__15__data = 0xddeeU;
    __Vtask_tb__DOT__apb_write__15__addr = 0x80000030U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__15__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__15__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__15__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__15__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__16__exp = 0xddeeU;
    __Vtask_tb__DOT__check__16__addr = 0x80000030U;
    __Vtask_tb__DOT__apb_read__17__addr = __Vtask_tb__DOT__check__16__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__17__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__17__addr);
    }
    __Vtask_tb__DOT__apb_read__17__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__17__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__16__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__16__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__16__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__16__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__apb_write__18__strb = 0xfU;
    __Vtask_tb__DOT__apb_write__18__data = 0x12345678U;
    __Vtask_tb__DOT__apb_write__18__addr = 0x80000100U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__18__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__18__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__18__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__18__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__apb_write__19__strb = 0xfU;
    __Vtask_tb__DOT__apb_write__19__data = 0x87654321U;
    __Vtask_tb__DOT__apb_write__19__addr = 0x80000200U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       39);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_write__19__addr;
    vlSelf->tb__DOT__in_pwdata = __Vtask_tb__DOT__apb_write__19__data;
    vlSelf->tb__DOT__in_pstrb = __Vtask_tb__DOT__apb_write__19__strb;
    vlSelf->tb__DOT__in_pwrite = 1U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       42);
    tb__DOT__apb_write__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           45);
        tb__DOT__apb_write__Vstatic__guard = ((IData)(1U) 
                                              + tb__DOT__apb_write__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_write__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] write @%08x\n",32,__Vtask_tb__DOT__apb_write__19__addr);
    }
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       47);
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       49);
    __Vtask_tb__DOT__check__20__exp = 0x12345678U;
    __Vtask_tb__DOT__check__20__addr = 0x80000100U;
    __Vtask_tb__DOT__apb_read__21__addr = __Vtask_tb__DOT__check__20__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__21__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__21__addr);
    }
    __Vtask_tb__DOT__apb_read__21__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__21__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__20__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__20__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__20__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__20__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__check__22__exp = 0x87654321U;
    __Vtask_tb__DOT__check__22__addr = 0x80000200U;
    __Vtask_tb__DOT__apb_read__23__addr = __Vtask_tb__DOT__check__22__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__23__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__23__addr);
    }
    __Vtask_tb__DOT__apb_read__23__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__23__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__22__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__22__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__22__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__22__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__check__24__exp = 0xaa55U;
    __Vtask_tb__DOT__check__24__addr = 0x80000004U;
    __Vtask_tb__DOT__apb_read__25__addr = __Vtask_tb__DOT__check__24__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__25__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__25__addr);
    }
    __Vtask_tb__DOT__apb_read__25__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__25__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__24__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__24__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__24__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__24__addr,
                  32,tb__DOT__r);
    }
    __Vtask_tb__DOT__check__26__exp = 0xaa55U;
    __Vtask_tb__DOT__check__26__addr = 0x80000004U;
    __Vtask_tb__DOT__apb_read__27__addr = __Vtask_tb__DOT__check__26__addr;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       56);
    vlSelf->tb__DOT__in_paddr = __Vtask_tb__DOT__apb_read__27__addr;
    vlSelf->tb__DOT__in_pstrb = 0xfU;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_psel = 1U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       58);
    tb__DOT__apb_read__Vstatic__guard = 0U;
    while (((~ (IData)(vlSelf->tb__DOT__in_pready)) 
            & VL_GTS_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                           "@(posedge tb.clock)", 
                                                           "tb_psram.v", 
                                                           61);
        tb__DOT__apb_read__Vstatic__guard = ((IData)(1U) 
                                             + tb__DOT__apb_read__Vstatic__guard);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x186a0U, tb__DOT__apb_read__Vstatic__guard))) {
        VL_WRITEF("  [TIMEOUT] read @%08x\n",32,__Vtask_tb__DOT__apb_read__27__addr);
    }
    __Vtask_tb__DOT__apb_read__27__data = ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                                                 [0U])));
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       64);
    vlSelf->tb__DOT__in_psel = 0U;
    co_await vlSelf->__VtrigSched_habebf077__0.trigger(
                                                       "@(posedge tb.clock)", 
                                                       "tb_psram.v", 
                                                       66);
    tb__DOT__r = __Vtask_tb__DOT__apb_read__27__data;
    if ((tb__DOT__r != __Vtask_tb__DOT__check__26__exp)) {
        VL_WRITEF("FAIL @%08x : got %08x expect %08x\n",
                  32,__Vtask_tb__DOT__check__26__addr,
                  32,tb__DOT__r,32,__Vtask_tb__DOT__check__26__exp);
        vlSelf->tb__DOT__fails = ((IData)(1U) + vlSelf->tb__DOT__fails);
    } else {
        VL_WRITEF("ok   @%08x = %08x\n",32,__Vtask_tb__DOT__check__26__addr,
                  32,tb__DOT__r);
    }
    if ((0U == vlSelf->tb__DOT__fails)) {
        VL_WRITEF("\n==== ALL PASS ====\n");
    } else {
        VL_WRITEF("\n==== %0d FAIL ====\n",32,vlSelf->tb__DOT__fails);
    }
    VL_FINISH_MT("tb_psram.v", 126, "");
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           "tb_psram.v", 
                                           8);
        vlSelf->tb__DOT__clock = (1U & (~ (IData)(vlSelf->tb__DOT__clock)));
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__dout;
    tb__DOT__u_ctrl__DOT__dout = 0;
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout;
    tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout = 0;
    CData/*7:0*/ tb__DOT__u_psram__DOT__ctrl_done;
    tb__DOT__u_psram__DOT__ctrl_done = 0;
    // Body
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re = 
        ((~ (IData)(vlSelf->tb__DOT__in_pwrite)) & (IData)(vlSelf->tb__DOT__in_psel));
    vlSelf->__VdfgTmp_h8db20435__0 = (0xffU & ((2U 
                                                & (IData)(vlSelf->tb__DOT__in_pstrb))
                                                ? (vlSelf->tb__DOT__in_pwdata 
                                                   >> 8U)
                                                : (vlSelf->tb__DOT__in_pwdata 
                                                   >> 0x18U)));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size = (
                                                   (1U 
                                                    == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                      ? 1U
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                        ? 2U
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                         ? 2U
                                                         : 4U))))));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we = 
        ((IData)(vlSelf->tb__DOT__in_pwrite) & (IData)(vlSelf->tb__DOT__in_psel));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd = 
        ((~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state)) 
         & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size) 
                                          << 1U)))));
    vlSelf->__VdfgTmp_he0e7798e__0 = (0xffU & ((1U 
                                                & (IData)(vlSelf->tb__DOT__in_pstrb))
                                                ? vlSelf->tb__DOT__in_pwdata
                                                : (
                                                   (((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                     >> 1U) 
                                                    & (1U 
                                                       == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                    ? 
                                                   (vlSelf->tb__DOT__in_pwdata 
                                                    >> 8U)
                                                    : 
                                                   ((((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                      >> 2U) 
                                                     & (1U 
                                                        == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                     ? 
                                                    (vlSelf->tb__DOT__in_pwdata 
                                                     >> 0x10U)
                                                     : 
                                                    ((((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                       >> 3U) 
                                                      & (1U 
                                                         == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                      ? 
                                                     (vlSelf->tb__DOT__in_pwdata 
                                                      >> 0x18U)
                                                      : 
                                                     ((((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                        >> 2U) 
                                                       & (2U 
                                                          == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                       ? 
                                                      (vlSelf->tb__DOT__in_pwdata 
                                                       >> 0x10U)
                                                       : vlSelf->tb__DOT__in_pwdata))))));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr = 
        ((~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state)) 
         & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we));
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate 
                = (0x1cU != (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd;
    }
    vlSelf->tb__DOT__in_pready = (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we)
                                    ? (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done)
                                    : (0x1cU == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))) 
                                  & (IData)(vlSelf->tb__DOT__in_psel));
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we)) 
                            | ((0x1cU == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__nstate 
            = vlSelf->tb__DOT__in_psel;
    }
    tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout = (0xfU 
                                              & ((8U 
                                                  > (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (1U 
                                                  & (0x38U 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter)))))
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U)
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 0x10U)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0xcU)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                      >> 8U)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                       >> 4U)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                        ? vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgTmp_he0e7798e__0) 
                                                         >> 4U)
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                          ? (IData)(vlSelf->__VdfgTmp_he0e7798e__0)
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          ((IData)(vlSelf->__VdfgTmp_h8db20435__0) 
                                                           >> 4U)
                                                           : 
                                                          ((0x11U 
                                                            == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                            ? (IData)(vlSelf->__VdfgTmp_h8db20435__0)
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                             ? 
                                                            (vlSelf->tb__DOT__in_pwdata 
                                                             >> 0x14U)
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                              ? 
                                                             (vlSelf->tb__DOT__in_pwdata 
                                                              >> 0x10U)
                                                              : 
                                                             ((0x14U 
                                                               == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                               ? 
                                                              (vlSelf->tb__DOT__in_pwdata 
                                                               >> 0x1cU)
                                                               : 
                                                              (vlSelf->tb__DOT__in_pwdata 
                                                               >> 0x18U))))))))))))))));
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we) {
        vlSelf->tb__DOT__qspi_sck = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck;
        vlSelf->tb__DOT__qspi_ce_n = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n;
        vlSelf->tb__DOT__u_ctrl__DOT__douten = (0xfU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n))))));
        tb__DOT__u_ctrl__DOT__dout = (0xfU & (IData)(tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout));
    } else {
        vlSelf->tb__DOT__qspi_sck = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck;
        vlSelf->tb__DOT__qspi_ce_n = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_ce_n;
        vlSelf->tb__DOT__u_ctrl__DOT__douten = (0xfU 
                                                & (- (IData)(
                                                             (0xeU 
                                                              > (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)))));
        tb__DOT__u_ctrl__DOT__dout = (0xfU & ((8U > (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                               ? (1U 
                                                  & (0xebU 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)))))
                                               : ((8U 
                                                   == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x14U)
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x10U)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0xcU)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 8U)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 4U)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                        ? vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr
                                                        : 0U))))))));
    }
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr;
    }
    vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten) 
                    & (IData)(tb__DOT__u_ctrl__DOT__dout))));
    vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten) 
                      & (IData)(tb__DOT__u_ctrl__DOT__dout))));
    vlSelf->tb__DOT__qspi_dio = ((0xfU & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten) 
                                          & ((3U & 
                                              ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0) 
                                               & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten))) 
                                             | (0xcU 
                                                & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1) 
                                                   & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten)))))) 
                                 | (((4U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))
                                      ? 0xfU : 0U) 
                                    & (((4U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))
                                         ? (IData)(vlSelf->tb__DOT__u_psram__DOT__dout)
                                         : 0U) & ((4U 
                                                   == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))
                                                   ? 0xfU
                                                   : 0U))));
    tb__DOT__u_psram__DOT__ctrl_done = ((0xfeU & (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl)) 
                                        | (1U & (IData)(vlSelf->tb__DOT__qspi_dio)));
    vlSelf->tb__DOT__u_psram__DOT__next = vlSelf->tb__DOT__u_psram__DOT__state;
    if (vlSelf->tb__DOT__qspi_ce_n) {
        vlSelf->tb__DOT__u_psram__DOT__next = 0U;
    } else if ((4U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            vlSelf->tb__DOT__u_psram__DOT__next = 0U;
        } else if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            if ((0x15U == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 0U;
            }
        } else if ((0x1cU == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
            vlSelf->tb__DOT__u_psram__DOT__next = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            if ((0x13U == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
                if ((0xebU == (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl))) {
                    vlSelf->tb__DOT__u_psram__DOT__next = 4U;
                }
            }
        } else if ((0xdU == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
            if ((0x38U == (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 5U;
            } else if ((0xebU == (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
        if ((7U == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
            if (((0xebU == (IData)(tb__DOT__u_psram__DOT__ctrl_done)) 
                 | (0x38U == (IData)(tb__DOT__u_psram__DOT__ctrl_done)))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 2U;
            }
        }
    } else {
        vlSelf->tb__DOT__u_psram__DOT__next = 1U;
    }
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdlyvdim0__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvdim0__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvval__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0;
    __Vdlyvset__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 = 0;
    // Body
    __Vdlyvset__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 = 0U;
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re = 
        ((~ (IData)(vlSelf->tb__DOT__in_pwrite)) & (IData)(vlSelf->tb__DOT__in_psel));
    vlSelf->__VdfgTmp_h8db20435__0 = (0xffU & ((2U 
                                                & (IData)(vlSelf->tb__DOT__in_pstrb))
                                                ? (vlSelf->tb__DOT__in_pwdata 
                                                   >> 8U)
                                                : (vlSelf->tb__DOT__in_pwdata 
                                                   >> 0x18U)));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size = (
                                                   (1U 
                                                    == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                     ? 1U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                      ? 1U
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                        ? 2U
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->tb__DOT__in_pstrb))
                                                         ? 2U
                                                         : 4U))))));
    if (((0x14U <= (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)) 
         & (0x1bU >= (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)))) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck) {
            __Vdlyvval__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 
                = ((0xf0U & (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data
                             [(3U & (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))] 
                             << 4U)) | (IData)(vlSelf->tb__DOT__qspi_dio));
            __Vdlyvset__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 = 1U;
            __Vdlyvdim0__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0 
                = (3U & (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter) 
                          >> 1U) - (IData)(2U)));
        }
    }
    vlSelf->__VdfgTmp_he0e7798e__0 = (0xffU & ((1U 
                                                & (IData)(vlSelf->tb__DOT__in_pstrb))
                                                ? vlSelf->tb__DOT__in_pwdata
                                                : (
                                                   (((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                     >> 1U) 
                                                    & (1U 
                                                       == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                    ? 
                                                   (vlSelf->tb__DOT__in_pwdata 
                                                    >> 8U)
                                                    : 
                                                   ((((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                      >> 2U) 
                                                     & (1U 
                                                        == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                     ? 
                                                    (vlSelf->tb__DOT__in_pwdata 
                                                     >> 0x10U)
                                                     : 
                                                    ((((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                       >> 3U) 
                                                      & (1U 
                                                         == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                      ? 
                                                     (vlSelf->tb__DOT__in_pwdata 
                                                      >> 0x18U)
                                                      : 
                                                     ((((IData)(vlSelf->tb__DOT__in_pstrb) 
                                                        >> 2U) 
                                                       & (2U 
                                                          == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size)))
                                                       ? 
                                                      (vlSelf->tb__DOT__in_pwdata 
                                                       >> 0x10U)
                                                       : vlSelf->tb__DOT__in_pwdata))))));
    if (__Vdlyvset__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0) {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data[__Vdlyvdim0__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0] 
            = __Vdlyvval__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data__v0;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter = 0;
    // Body
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck;
    __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter;
    if (vlSelf->tb__DOT__reset) {
        __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter = 0U;
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr = 0U;
    } else {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck)));
        }
        if (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done)))) {
            __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck)));
        }
        if (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_done)))) {
            __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if (((~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd))) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                = (0xfffffcU & vlSelf->tb__DOT__in_paddr);
        }
        if (((~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr))) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                = (0xffffffU & vlSelf->tb__DOT__in_paddr);
        }
    }
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state = 
        ((~ (IData)(vlSelf->tb__DOT__reset)) & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__nstate));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck = __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck;
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck = __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck;
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->tb__DOT__reset) | 
                 (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->tb__DOT__reset) | 
                 (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state))));
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we) {
        vlSelf->tb__DOT__qspi_sck = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck;
        vlSelf->tb__DOT__u_ctrl__DOT__douten = (0xfU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n))))));
    } else {
        vlSelf->tb__DOT__qspi_sck = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck;
        vlSelf->tb__DOT__u_ctrl__DOT__douten = (0xfU 
                                                & (- (IData)(
                                                             (0xeU 
                                                              > (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)))));
    }
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr = 
        ((~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state)) 
         & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->tb__DOT__reset)) & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->tb__DOT__reset)) & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__2(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vdly__tb__DOT__u_psram__DOT__counter;
    __Vdly__tb__DOT__u_psram__DOT__counter = 0;
    IData/*21:0*/ __Vdlyvdim0__tb__DOT__u_psram__DOT__memory__v0;
    __Vdlyvdim0__tb__DOT__u_psram__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb__DOT__u_psram__DOT__memory__v0;
    __Vdlyvval__tb__DOT__u_psram__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__u_psram__DOT__memory__v0;
    __Vdlyvset__tb__DOT__u_psram__DOT__memory__v0 = 0;
    // Body
    __Vdlyvset__tb__DOT__u_psram__DOT__memory__v0 = 0U;
    __Vdly__tb__DOT__u_psram__DOT__counter = vlSelf->tb__DOT__u_psram__DOT__counter;
    if (vlSelf->tb__DOT__qspi_ce_n) {
        __Vdly__tb__DOT__u_psram__DOT__counter = 0U;
        vlSelf->tb__DOT__u_psram__DOT__ctrl = 0U;
        vlSelf->tb__DOT__u_psram__DOT__dout = 0U;
        vlSelf->tb__DOT__u_psram__DOT__state = 0U;
    } else {
        __Vdly__tb__DOT__u_psram__DOT__counter = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->tb__DOT__u_psram__DOT__counter)));
        if ((((0U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state)) 
              | (1U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) 
             & (7U >= (IData)(vlSelf->tb__DOT__u_psram__DOT__counter)))) {
            vlSelf->tb__DOT__u_psram__DOT__ctrl = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))))) 
                                                    & (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & (IData)(vlSelf->tb__DOT__qspi_dio)) 
                                                         << 
                                                         (7U 
                                                          & ((IData)(7U) 
                                                             - (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))))));
        }
        if ((4U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            vlSelf->tb__DOT__u_psram__DOT__dout = (0xfU 
                                                   & ((IData)(vlSelf->tb__DOT__u_psram__DOT__read_index)
                                                       ? 
                                                      vlSelf->tb__DOT__u_psram__DOT__memory
                                                      [vlSelf->tb__DOT__u_psram__DOT__rd_index]
                                                       : 
                                                      (vlSelf->tb__DOT__u_psram__DOT__memory
                                                       [vlSelf->tb__DOT__u_psram__DOT__rd_index] 
                                                       >> 4U)));
        }
        if ((2U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            vlSelf->tb__DOT__u_psram__DOT____Vlvbound_ha318c80c__0 
                = vlSelf->tb__DOT__qspi_dio;
            if ((0x17U >= (0x1fU & (((IData)(0xdU) 
                                     - (IData)(vlSelf->tb__DOT__u_psram__DOT__counter)) 
                                    << 2U)))) {
                vlSelf->tb__DOT__u_psram__DOT__addr 
                    = (((~ ((IData)(0xfU) << (0x1fU 
                                              & (((IData)(0xdU) 
                                                  - (IData)(vlSelf->tb__DOT__u_psram__DOT__counter)) 
                                                 << 2U)))) 
                        & vlSelf->tb__DOT__u_psram__DOT__addr) 
                       | (0xffffffU & ((IData)(vlSelf->tb__DOT__u_psram__DOT____Vlvbound_ha318c80c__0) 
                                       << (0x1fU & 
                                           (((IData)(0xdU) 
                                             - (IData)(vlSelf->tb__DOT__u_psram__DOT__counter)) 
                                            << 2U)))));
            }
        }
        if ((5U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__wcnt))) {
                __Vdlyvval__tb__DOT__u_psram__DOT__memory__v0 
                    = (((IData)(vlSelf->tb__DOT__u_psram__DOT__wr_hi) 
                        << 4U) | (IData)(vlSelf->tb__DOT__qspi_dio));
                __Vdlyvset__tb__DOT__u_psram__DOT__memory__v0 = 1U;
                __Vdlyvdim0__tb__DOT__u_psram__DOT__memory__v0 
                    = vlSelf->tb__DOT__u_psram__DOT__wr_index;
            } else {
                vlSelf->tb__DOT__u_psram__DOT__wr_hi 
                    = vlSelf->tb__DOT__qspi_dio;
            }
        }
        vlSelf->tb__DOT__u_psram__DOT__state = vlSelf->tb__DOT__u_psram__DOT__next;
    }
    if (__Vdlyvset__tb__DOT__u_psram__DOT__memory__v0) {
        vlSelf->tb__DOT__u_psram__DOT__memory[__Vdlyvdim0__tb__DOT__u_psram__DOT__memory__v0] 
            = __Vdlyvval__tb__DOT__u_psram__DOT__memory__v0;
    }
    vlSelf->tb__DOT__u_psram__DOT__counter = __Vdly__tb__DOT__u_psram__DOT__counter;
    vlSelf->tb__DOT__u_psram__DOT__wcnt = (0xffU & 
                                           ((IData)(vlSelf->tb__DOT__u_psram__DOT__counter) 
                                            - (IData)(0xeU)));
    vlSelf->tb__DOT__u_psram__DOT__read_index = (1U 
                                                 & (IData)(vlSelf->tb__DOT__u_psram__DOT__counter));
    vlSelf->tb__DOT__u_psram__DOT__wr_index = (0x3fffffU 
                                               & (vlSelf->tb__DOT__u_psram__DOT__addr 
                                                  + 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb__DOT__u_psram__DOT__counter) 
                                                       - (IData)(0xeU)) 
                                                      >> 1U))));
    vlSelf->tb__DOT__u_psram__DOT__rd_index = (0x3fffffU 
                                               & (vlSelf->tb__DOT__u_psram__DOT__addr 
                                                  + 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb__DOT__u_psram__DOT__counter) 
                                                       - (IData)(0x14U)) 
                                                      >> 1U))));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__dout;
    tb__DOT__u_ctrl__DOT__dout = 0;
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout;
    tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout = 0;
    // Body
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done 
        = ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter) 
           == ((IData)(1U) + (0xffU & ((IData)(0xdU) 
                                       + ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size) 
                                          << 1U)))));
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd = 
        ((~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state)) 
         & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re));
    tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout = (0xfU 
                                              & ((8U 
                                                  > (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                  ? 
                                                 (1U 
                                                  & (0x38U 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter)))))
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                   ? 
                                                  (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U)
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                    ? 
                                                   (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                    >> 0x10U)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                     ? 
                                                    (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                     >> 0xcU)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                      ? 
                                                     (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                      >> 8U)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                       ? 
                                                      (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr 
                                                       >> 4U)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                        ? vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr
                                                        : 
                                                       ((0xeU 
                                                         == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                         ? 
                                                        ((IData)(vlSelf->__VdfgTmp_he0e7798e__0) 
                                                         >> 4U)
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                          ? (IData)(vlSelf->__VdfgTmp_he0e7798e__0)
                                                          : 
                                                         ((0x10U 
                                                           == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                           ? 
                                                          ((IData)(vlSelf->__VdfgTmp_h8db20435__0) 
                                                           >> 4U)
                                                           : 
                                                          ((0x11U 
                                                            == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                            ? (IData)(vlSelf->__VdfgTmp_h8db20435__0)
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                             ? 
                                                            (vlSelf->tb__DOT__in_pwdata 
                                                             >> 0x14U)
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                              ? 
                                                             (vlSelf->tb__DOT__in_pwdata 
                                                              >> 0x10U)
                                                              : 
                                                             ((0x14U 
                                                               == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter))
                                                               ? 
                                                              (vlSelf->tb__DOT__in_pwdata 
                                                               >> 0x1cU)
                                                               : 
                                                              (vlSelf->tb__DOT__in_pwdata 
                                                               >> 0x18U))))))))))))))));
    vlSelf->tb__DOT__in_pready = (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we)
                                    ? (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done)
                                    : (0x1cU == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))) 
                                  & (IData)(vlSelf->tb__DOT__in_psel));
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__nstate 
                = (1U & (~ (((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done) 
                             & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we)) 
                            | ((0x1cU == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)) 
                               & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re)))));
        }
    } else {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__nstate 
            = vlSelf->tb__DOT__in_psel;
    }
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate 
                = (1U & (~ (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done)));
        }
    } else {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate 
            = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr;
    }
    if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state) {
        if (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state) {
            vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate 
                = (0x1cU != (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter));
        }
    } else {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate 
            = vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd;
    }
    tb__DOT__u_ctrl__DOT__dout = (0xfU & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we)
                                           ? (IData)(tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout)
                                           : ((8U > (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                               ? (1U 
                                                  & (0xebU 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter)))))
                                               : ((8U 
                                                   == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 
                                                  (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x14U)
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x10U)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0xcU)
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 8U)
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 4U)
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter))
                                                        ? vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr
                                                        : 0U)))))))));
    vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0 
        = ((0xcU & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0)) 
           | (3U & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten) 
                    & (IData)(tb__DOT__u_ctrl__DOT__dout))));
    vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1 
        = ((3U & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1)) 
           | (0xcU & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten) 
                      & (IData)(tb__DOT__u_ctrl__DOT__dout))));
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__3(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb__DOT__qspi_ce_n = ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we)
                                   ? (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n)
                                   : (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_ce_n));
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*7:0*/ tb__DOT__u_psram__DOT__ctrl_done;
    tb__DOT__u_psram__DOT__ctrl_done = 0;
    // Body
    vlSelf->tb__DOT__qspi_dio = ((0xfU & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten) 
                                          & ((3U & 
                                              ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0) 
                                               & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten))) 
                                             | (0xcU 
                                                & ((IData)(vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1) 
                                                   & (IData)(vlSelf->tb__DOT__u_ctrl__DOT__douten)))))) 
                                 | (((4U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))
                                      ? 0xfU : 0U) 
                                    & (((4U == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))
                                         ? (IData)(vlSelf->tb__DOT__u_psram__DOT__dout)
                                         : 0U) & ((4U 
                                                   == (IData)(vlSelf->tb__DOT__u_psram__DOT__state))
                                                   ? 0xfU
                                                   : 0U))));
    tb__DOT__u_psram__DOT__ctrl_done = ((0xfeU & (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl)) 
                                        | (1U & (IData)(vlSelf->tb__DOT__qspi_dio)));
    vlSelf->tb__DOT__u_psram__DOT__next = vlSelf->tb__DOT__u_psram__DOT__state;
    if (vlSelf->tb__DOT__qspi_ce_n) {
        vlSelf->tb__DOT__u_psram__DOT__next = 0U;
    } else if ((4U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            vlSelf->tb__DOT__u_psram__DOT__next = 0U;
        } else if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            if ((0x15U == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 0U;
            }
        } else if ((0x1cU == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
            vlSelf->tb__DOT__u_psram__DOT__next = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
            if ((0x13U == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
                if ((0xebU == (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl))) {
                    vlSelf->tb__DOT__u_psram__DOT__next = 4U;
                }
            }
        } else if ((0xdU == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
            if ((0x38U == (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 5U;
            } else if ((0xebU == (IData)(vlSelf->tb__DOT__u_psram__DOT__ctrl))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->tb__DOT__u_psram__DOT__state))) {
        if ((7U == (IData)(vlSelf->tb__DOT__u_psram__DOT__counter))) {
            if (((0xebU == (IData)(tb__DOT__u_psram__DOT__ctrl_done)) 
                 | (0x38U == (IData)(tb__DOT__u_psram__DOT__ctrl_done)))) {
                vlSelf->tb__DOT__u_psram__DOT__next = 2U;
            }
        }
    } else {
        vlSelf->tb__DOT__u_psram__DOT__next = 1U;
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);
void Vtb___024root___timing_commit(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb___024root___timing_resume(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
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
            Vtb___024root___eval_triggers__act(vlSelf);
            Vtb___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_psram.v", 5, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb___024root___timing_resume(vlSelf);
                Vtb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_psram.v", 5, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_habebf077__0.commit("@(posedge tb.clock)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_habebf077__0.resume("@(posedge tb.clock)");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
