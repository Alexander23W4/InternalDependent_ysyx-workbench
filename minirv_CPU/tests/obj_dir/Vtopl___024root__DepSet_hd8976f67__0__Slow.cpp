// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtopl.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtopl___024root.h"

VL_ATTR_COLD void Vtopl___024root___eval_static(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtopl___024root___eval_initial(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtopl___024root___eval_final(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtopl___024root___eval_triggers__stl(Vtopl___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___dump_triggers__stl(Vtopl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___eval_stl(Vtopl___024root* vlSelf);

VL_ATTR_COLD void Vtopl___024root___eval_settle(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtopl___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtopl___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("test_v/topl.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtopl___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___dump_triggers__stl(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_he1109882_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_h52b4fff8_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_h0473b325_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_h9abe3f28_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_h00ef5455_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_hd66787bc_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_h1853747b_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_hd0aca139_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtopl__ConstPool__TABLE_h5d2ccd33_0;
void Vtopl___024root____Vdpiimwrap_topl__DOT__ram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ amount, IData/*31:0*/ &ram_read__Vfuncrtn);

VL_ATTR_COLD void Vtopl___024root___stl_sequent__TOP__0(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->dbg_reg[0U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0U];
    vlSelf->dbg_reg[1U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [1U];
    vlSelf->dbg_reg[2U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [2U];
    vlSelf->dbg_reg[3U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [3U];
    vlSelf->dbg_reg[4U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [4U];
    vlSelf->dbg_reg[5U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [5U];
    vlSelf->dbg_reg[6U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [6U];
    vlSelf->dbg_reg[7U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [7U];
    vlSelf->dbg_reg[8U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [8U];
    vlSelf->dbg_reg[9U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [9U];
    vlSelf->dbg_reg[0xaU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0xaU];
    vlSelf->dbg_reg[0xbU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0xbU];
    vlSelf->dbg_reg[0xcU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0xcU];
    vlSelf->dbg_reg[0xdU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0xdU];
    vlSelf->dbg_reg[0xeU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0xeU];
    vlSelf->dbg_reg[0xfU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0xfU];
    vlSelf->dbg_reg[0x10U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x10U];
    vlSelf->dbg_reg[0x11U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x11U];
    vlSelf->dbg_reg[0x12U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x12U];
    vlSelf->dbg_reg[0x13U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x13U];
    vlSelf->dbg_reg[0x14U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x14U];
    vlSelf->dbg_reg[0x15U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x15U];
    vlSelf->dbg_reg[0x16U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x16U];
    vlSelf->dbg_reg[0x17U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x17U];
    vlSelf->dbg_reg[0x18U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x18U];
    vlSelf->dbg_reg[0x19U] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x19U];
    vlSelf->dbg_reg[0x1aU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x1aU];
    vlSelf->dbg_reg[0x1bU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x1bU];
    vlSelf->dbg_reg[0x1cU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x1cU];
    vlSelf->dbg_reg[0x1dU] = vlSelf->topl__DOT__GPR__DOT__gpr
        [0x1dU];
    vlSelf->dbg_reg[0x1eU] = (IData)((((QData)((IData)(
                                                       vlSelf->topl__DOT__GPR__DOT__gpr
                                                       [0x1fU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->topl__DOT__GPR__DOT__gpr
                                                                   [0x1eU]))));
    vlSelf->dbg_reg[0x1fU] = (IData)(((((QData)((IData)(
                                                        vlSelf->topl__DOT__GPR__DOT__gpr
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->topl__DOT__GPR__DOT__gpr
                                                                    [0x1eU]))) 
                                      >> 0x20U));
    vlSelf->_pc = vlSelf->topl__DOT__pc;
    vlSelf->topl__DOT__pc_next_dft = ((IData)(4U) + vlSelf->topl__DOT__pc);
    vlSelf->topl__DOT__immI = (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->instr 
                                            >> 0x14U));
    vlSelf->topl__DOT__immS = (((- (IData)((vlSelf->instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->instr 
                                                  >> 7U))));
    vlSelf->topl__DOT__rdata1 = vlSelf->topl__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->topl__DOT__rdata2 = vlSelf->topl__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0x14U))];
    vlSelf->__Vtableidx1 = ((0x380U & (vlSelf->instr 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->instr));
    vlSelf->topl__DOT__addi = Vtopl__ConstPool__TABLE_he1109882_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__add = Vtopl__ConstPool__TABLE_h52b4fff8_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__jalr = Vtopl__ConstPool__TABLE_h0473b325_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__lui = Vtopl__ConstPool__TABLE_h9abe3f28_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__lw = Vtopl__ConstPool__TABLE_h00ef5455_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__lbu = Vtopl__ConstPool__TABLE_hd66787bc_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__sw = Vtopl__ConstPool__TABLE_h1853747b_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__sb = Vtopl__ConstPool__TABLE_hd0aca139_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__ebreak = Vtopl__ConstPool__TABLE_h5d2ccd33_0
        [vlSelf->__Vtableidx1];
    vlSelf->topl__DOT__wen = ((IData)(vlSelf->topl__DOT__add) 
                              | ((IData)(vlSelf->topl__DOT__addi) 
                                 | ((IData)(vlSelf->topl__DOT__jalr) 
                                    | ((IData)(vlSelf->topl__DOT__lui) 
                                       | ((IData)(vlSelf->topl__DOT__lbu) 
                                          | (IData)(vlSelf->topl__DOT__lw))))));
    vlSelf->topl__DOT__add_rst = (vlSelf->topl__DOT__rdata1 
                                  + ((IData)(vlSelf->topl__DOT__add)
                                      ? vlSelf->topl__DOT__rdata2
                                      : (((IData)(vlSelf->topl__DOT__sb) 
                                          | (IData)(vlSelf->topl__DOT__sw))
                                          ? vlSelf->topl__DOT__immS
                                          : vlSelf->topl__DOT__immI)));
    Vtopl___024root____Vdpiimwrap_topl__DOT__ram_read_TOP(vlSelf->topl__DOT__add_rst, 4U, vlSelf->__Vfunc_topl__DOT__ram_read__0__Vfuncout);
    vlSelf->topl__DOT__lw_rst = (((3U == (0x7fU & vlSelf->instr)) 
                                  & (IData)(vlSelf->topl__DOT__lw))
                                  ? vlSelf->__Vfunc_topl__DOT__ram_read__0__Vfuncout
                                  : 0U);
    Vtopl___024root____Vdpiimwrap_topl__DOT__ram_read_TOP(vlSelf->topl__DOT__add_rst, 1U, vlSelf->__Vfunc_topl__DOT__ram_read__1__Vfuncout);
    vlSelf->topl__DOT__lbu_rst = (((3U == (0x7fU & vlSelf->instr)) 
                                   & (IData)(vlSelf->topl__DOT__lbu))
                                   ? vlSelf->__Vfunc_topl__DOT__ram_read__1__Vfuncout
                                   : 0U);
    vlSelf->topl__DOT__wdata = ((0xfffff000U & ((- (IData)((IData)(vlSelf->topl__DOT__lui))) 
                                                & vlSelf->instr)) 
                                | (((- (IData)((IData)(vlSelf->topl__DOT__add))) 
                                    & vlSelf->topl__DOT__add_rst) 
                                   | (((- (IData)((IData)(vlSelf->topl__DOT__addi))) 
                                       & vlSelf->topl__DOT__add_rst) 
                                      | (((- (IData)((IData)(vlSelf->topl__DOT__jalr))) 
                                          & ((IData)(4U) 
                                             + vlSelf->topl__DOT__pc)) 
                                         | (((- (IData)((IData)(vlSelf->topl__DOT__lw))) 
                                             & vlSelf->topl__DOT__lw_rst) 
                                            | ((- (IData)((IData)(vlSelf->topl__DOT__lbu))) 
                                               & vlSelf->topl__DOT__lbu_rst))))));
}

VL_ATTR_COLD void Vtopl___024root___eval_stl(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtopl___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___dump_triggers__ico(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___dump_triggers__act(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtopl___024root___dump_triggers__nba(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtopl___024root___ctor_var_reset(Vtopl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtopl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtopl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->dbg_reg);
    vlSelf->_pc = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__addi = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__add = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__immS = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__rdata2 = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->topl__DOT__pc_next_dft = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__add_rst = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__lw_rst = VL_RAND_RESET_I(32);
    vlSelf->topl__DOT__lbu_rst = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->topl__DOT__GPR__DOT__gpr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vfunc_topl__DOT__ram_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_topl__DOT__ram_read__1__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
}
