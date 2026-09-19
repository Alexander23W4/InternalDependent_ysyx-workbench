// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vxbar_tb.h for the primary calling header

#include "verilated.h"

#include "Vxbar_tb_ysyx_26040135_AXI4.h"

VL_ATTR_COLD void Vxbar_tb_ysyx_26040135_AXI4___ctor_var_reset(Vxbar_tb_ysyx_26040135_AXI4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vxbar_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vxbar_tb_ysyx_26040135_AXI4___ctor_var_reset\n"); );
    // Body
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->awaddr = VL_RAND_RESET_I(32);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
}
