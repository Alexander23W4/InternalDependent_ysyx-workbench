// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root____Vdpiexp_top__DOT__halt_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__halt_TOP\n"); );
    // Init
    // Body
    endprog = vlSymsp->TOP.top__DOT__ebreak;
}

void Vtop___024root____Vdpiexp_top__DOT__check_ram_op_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &ram_op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__check_ram_op_TOP\n"); );
    // Init
    // Body
    ram_op = ((((((IData)(vlSymsp->TOP.top__DOT__lb) 
                  | (IData)(vlSymsp->TOP.top__DOT__lh)) 
                 | (IData)(vlSymsp->TOP.top__DOT__lw)) 
                | (IData)(vlSymsp->TOP.top__DOT__lbu)) 
               | (IData)(vlSymsp->TOP.top__DOT__lhu))
               ? 1U : ((((IData)(vlSymsp->TOP.top__DOT__sb) 
                         | (IData)(vlSymsp->TOP.top__DOT__sh)) 
                        | (IData)(vlSymsp->TOP.top__DOT__sw))
                        ? 2U : 0U));
}

extern "C" unsigned int ram_read(unsigned int addr, int amount);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ amount, IData/*31:0*/ &ram_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP\n"); );
    // Body
    unsigned int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int amount__Vcvt;
    for (size_t amount__Vidx = 0; amount__Vidx < 1; ++amount__Vidx) amount__Vcvt = amount;
    unsigned int ram_read__Vfuncrtn__Vcvt;
    ram_read__Vfuncrtn__Vcvt = ram_read(addr__Vcvt, amount__Vcvt);
    ram_read__Vfuncrtn = ram_read__Vfuncrtn__Vcvt;
}

extern "C" void ram_write(unsigned int addr, unsigned int data, int amount);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ amount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ram_write_TOP\n"); );
    // Body
    unsigned int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    unsigned int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int amount__Vcvt;
    for (size_t amount__Vidx = 0; amount__Vidx < 1; ++amount__Vidx) amount__Vcvt = amount;
    ram_write(addr__Vcvt, data__Vcvt, amount__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
