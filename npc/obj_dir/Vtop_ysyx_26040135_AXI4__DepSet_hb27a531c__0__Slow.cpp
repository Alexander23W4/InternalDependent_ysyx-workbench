// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_ysyx_26040135_AXI4.h"

VL_ATTR_COLD void Vtop_ysyx_26040135_AXI4___ctor_var_reset(Vtop_ysyx_26040135_AXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_ysyx_26040135_AXI4___ctor_var_reset\n"); );
    // Body
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->awsize = VL_RAND_RESET_I(3);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wstrb = VL_RAND_RESET_I(4);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
}
