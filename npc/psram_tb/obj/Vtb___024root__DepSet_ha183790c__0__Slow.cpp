// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    // Body
    Vtb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb___024root___eval_static__TOP(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__clock = 0U;
    vlSelf->tb__DOT__reset = 1U;
    vlSelf->tb__DOT__in_paddr = 0U;
    vlSelf->tb__DOT__in_psel = 0U;
    vlSelf->tb__DOT__in_pwrite = 0U;
    vlSelf->tb__DOT__in_pwdata = 0U;
    vlSelf->tb__DOT__in_pstrb = 0U;
    vlSelf->tb__DOT__fails = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb__DOT__u_psram__DOT__state = 0U;
    vlSelf->tb__DOT__u_psram__DOT__counter = 0U;
    vlSelf->tb__DOT__u_psram__DOT__ctrl = 0U;
    vlSelf->tb__DOT__u_psram__DOT__addr = 0U;
    vlSelf->tb__DOT__u_psram__DOT__dout = 0U;
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_psram.v", 5, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__dout;
    tb__DOT__u_ctrl__DOT__dout = 0;
    CData/*3:0*/ tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout;
    tb__DOT__u_ctrl__DOT__u0__DOT__mw_dout = 0;
    CData/*7:0*/ tb__DOT__u_psram__DOT__ctrl_done;
    tb__DOT__u_psram__DOT__ctrl_done = 0;
    // Body
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_done 
        = (0x1cU == (IData)(vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter));
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

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clock or posedge tb.reset)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb.clock)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb.qspi_ce_n or posedge tb.qspi_sck)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clock or posedge tb.reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb.clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb.qspi_ce_n or posedge tb.qspi_sck)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__in_paddr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__in_psel = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__in_pwrite = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__in_pwdata = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__in_pstrb = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__in_pready = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__qspi_sck = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__qspi_ce_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__qspi_dio = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__fails = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__u_ctrl__DOT__douten = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out0 = 0;
    vlSelf->tb__DOT__u_ctrl__DOT__qspi_dio__out__strong__out1 = 0;
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_sck = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_ce_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_sck = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_ce_n = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_rd = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mr_done = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_wr = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__mw_done = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_we = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__wb_re = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__size = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__saddr = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MR__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__nstate = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_ctrl__DOT__u0__DOT__MW__DOT__saddr = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->tb__DOT__u_psram__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb__DOT__u_psram__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__u_psram__DOT__next = VL_RAND_RESET_I(3);
    vlSelf->tb__DOT__u_psram__DOT__ctrl = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_psram__DOT__addr = VL_RAND_RESET_I(24);
    vlSelf->tb__DOT__u_psram__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_psram__DOT__dout = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_psram__DOT__wr_hi = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__u_psram__DOT__read_index = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__u_psram__DOT__wcnt = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__u_psram__DOT__rd_index = VL_RAND_RESET_I(22);
    vlSelf->tb__DOT__u_psram__DOT__wr_index = VL_RAND_RESET_I(22);
    vlSelf->tb__DOT__u_psram__DOT____Vlvbound_ha318c80c__0 = VL_RAND_RESET_I(4);
    vlSelf->__VdfgTmp_h8db20435__0 = 0;
    vlSelf->__VdfgTmp_he0e7798e__0 = 0;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_ce_n = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_sck = VL_RAND_RESET_I(1);
}
