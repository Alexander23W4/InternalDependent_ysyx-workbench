// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->tb__DOT__clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb__DOT__clock))) 
                                      | ((IData)(vlSelf->tb__DOT__reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb__DOT__reset))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->tb__DOT__clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb__DOT__clock)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->tb__DOT__qspi_ce_n) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_ce_n))) 
                                      | ((IData)(vlSelf->tb__DOT__qspi_sck) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_sck))));
    vlSelf->__VactTriggered.at(3U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__tb__DOT__clock = vlSelf->tb__DOT__clock;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__reset = vlSelf->tb__DOT__reset;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_ce_n = vlSelf->tb__DOT__qspi_ce_n;
    vlSelf->__Vtrigrprev__TOP__tb__DOT__qspi_sck = vlSelf->tb__DOT__qspi_sck;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
