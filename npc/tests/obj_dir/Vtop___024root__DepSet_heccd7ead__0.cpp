// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_he1109882_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h52b4fff8_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h0473b325_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h9abe3f28_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h00ef5455_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hd66787bc_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h1853747b_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hd0aca139_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h5d2ccd33_0;
void Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ amount, IData/*31:0*/ &ram_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__immI = (((- (IData)((vlSelf->instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->instr 
                                           >> 0x14U));
    vlSelf->top__DOT__immS = (((- (IData)((vlSelf->instr 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->instr 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->instr 
                                                 >> 7U))));
    vlSelf->top__DOT__rdata1 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->top__DOT__rdata2 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0x14U))];
    vlSelf->__Vtableidx1 = ((0x380U & (vlSelf->instr 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->instr));
    vlSelf->top__DOT__addi = Vtop__ConstPool__TABLE_he1109882_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__add = Vtop__ConstPool__TABLE_h52b4fff8_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__jalr = Vtop__ConstPool__TABLE_h0473b325_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__lui = Vtop__ConstPool__TABLE_h9abe3f28_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__lw = Vtop__ConstPool__TABLE_h00ef5455_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__lbu = Vtop__ConstPool__TABLE_hd66787bc_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__sw = Vtop__ConstPool__TABLE_h1853747b_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__sb = Vtop__ConstPool__TABLE_hd0aca139_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__ebreak = Vtop__ConstPool__TABLE_h5d2ccd33_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__wen = ((IData)(vlSelf->top__DOT__add) 
                             | ((IData)(vlSelf->top__DOT__addi) 
                                | ((IData)(vlSelf->top__DOT__jalr) 
                                   | ((IData)(vlSelf->top__DOT__lui) 
                                      | ((IData)(vlSelf->top__DOT__lbu) 
                                         | (IData)(vlSelf->top__DOT__lw))))));
    vlSelf->top__DOT__add_rst = (vlSelf->top__DOT__rdata1 
                                 + ((IData)(vlSelf->top__DOT__add)
                                     ? vlSelf->top__DOT__rdata2
                                     : (((IData)(vlSelf->top__DOT__sb) 
                                         | (IData)(vlSelf->top__DOT__sw))
                                         ? vlSelf->top__DOT__immS
                                         : vlSelf->top__DOT__immI)));
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 4U, vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout);
    vlSelf->top__DOT__lw_rst = (((3U == (0x7fU & vlSelf->instr)) 
                                 & (IData)(vlSelf->top__DOT__lw))
                                 ? vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout
                                 : 0U);
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 1U, vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout);
    vlSelf->top__DOT__lbu_rst = (((3U == (0x7fU & vlSelf->instr)) 
                                  & (IData)(vlSelf->top__DOT__lbu))
                                  ? vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout
                                  : 0U);
    vlSelf->top__DOT__wdata = ((0xfffff000U & ((- (IData)((IData)(vlSelf->top__DOT__lui))) 
                                               & vlSelf->instr)) 
                               | (((- (IData)((IData)(vlSelf->top__DOT__add))) 
                                   & vlSelf->top__DOT__add_rst) 
                                  | (((- (IData)((IData)(vlSelf->top__DOT__addi))) 
                                      & vlSelf->top__DOT__add_rst) 
                                     | (((- (IData)((IData)(vlSelf->top__DOT__jalr))) 
                                         & ((IData)(4U) 
                                            + vlSelf->top__DOT__pc)) 
                                        | (((- (IData)((IData)(vlSelf->top__DOT__lw))) 
                                            & vlSelf->top__DOT__lw_rst) 
                                           | ((- (IData)((IData)(vlSelf->top__DOT__lbu))) 
                                              & vlSelf->top__DOT__lbu_rst))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__GPR__DOT__gpr__v0;
    __Vdlyvdim0__top__DOT__GPR__DOT__gpr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__GPR__DOT__gpr__v0;
    __Vdlyvval__top__DOT__GPR__DOT__gpr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__GPR__DOT__gpr__v0;
    __Vdlyvset__top__DOT__GPR__DOT__gpr__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__GPR__DOT__gpr__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__wen) & (0U != (0x1fU 
                                                  & (vlSelf->instr 
                                                     >> 7U))))) {
        __Vdlyvval__top__DOT__GPR__DOT__gpr__v0 = vlSelf->top__DOT__wdata;
        __Vdlyvset__top__DOT__GPR__DOT__gpr__v0 = 1U;
        __Vdlyvdim0__top__DOT__GPR__DOT__gpr__v0 = 
            (0x1fU & (vlSelf->instr >> 7U));
    }
    if (__Vdlyvset__top__DOT__GPR__DOT__gpr__v0) {
        vlSelf->top__DOT__GPR__DOT__gpr[__Vdlyvdim0__top__DOT__GPR__DOT__gpr__v0] 
            = __Vdlyvval__top__DOT__GPR__DOT__gpr__v0;
    }
    vlSelf->dbg_reg[0U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0U];
    vlSelf->dbg_reg[1U] = vlSelf->top__DOT__GPR__DOT__gpr
        [1U];
    vlSelf->dbg_reg[2U] = vlSelf->top__DOT__GPR__DOT__gpr
        [2U];
    vlSelf->dbg_reg[3U] = vlSelf->top__DOT__GPR__DOT__gpr
        [3U];
    vlSelf->dbg_reg[4U] = vlSelf->top__DOT__GPR__DOT__gpr
        [4U];
    vlSelf->dbg_reg[5U] = vlSelf->top__DOT__GPR__DOT__gpr
        [5U];
    vlSelf->dbg_reg[6U] = vlSelf->top__DOT__GPR__DOT__gpr
        [6U];
    vlSelf->dbg_reg[7U] = vlSelf->top__DOT__GPR__DOT__gpr
        [7U];
    vlSelf->dbg_reg[8U] = vlSelf->top__DOT__GPR__DOT__gpr
        [8U];
    vlSelf->dbg_reg[9U] = vlSelf->top__DOT__GPR__DOT__gpr
        [9U];
    vlSelf->dbg_reg[0xaU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0xaU];
    vlSelf->dbg_reg[0xbU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0xbU];
    vlSelf->dbg_reg[0xcU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0xcU];
    vlSelf->dbg_reg[0xdU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0xdU];
    vlSelf->dbg_reg[0xeU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0xeU];
    vlSelf->dbg_reg[0xfU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0xfU];
    vlSelf->dbg_reg[0x10U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x10U];
    vlSelf->dbg_reg[0x11U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x11U];
    vlSelf->dbg_reg[0x12U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x12U];
    vlSelf->dbg_reg[0x13U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x13U];
    vlSelf->dbg_reg[0x14U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x14U];
    vlSelf->dbg_reg[0x15U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x15U];
    vlSelf->dbg_reg[0x16U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x16U];
    vlSelf->dbg_reg[0x17U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x17U];
    vlSelf->dbg_reg[0x18U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x18U];
    vlSelf->dbg_reg[0x19U] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x19U];
    vlSelf->dbg_reg[0x1aU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x1aU];
    vlSelf->dbg_reg[0x1bU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x1bU];
    vlSelf->dbg_reg[0x1cU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x1cU];
    vlSelf->dbg_reg[0x1dU] = vlSelf->top__DOT__GPR__DOT__gpr
        [0x1dU];
    vlSelf->dbg_reg[0x1eU] = (IData)((((QData)((IData)(
                                                       vlSelf->top__DOT__GPR__DOT__gpr
                                                       [0x1fU])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__GPR__DOT__gpr
                                                                   [0x1eU]))));
    vlSelf->dbg_reg[0x1fU] = (IData)(((((QData)((IData)(
                                                        vlSelf->top__DOT__GPR__DOT__gpr
                                                        [0x1fU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__GPR__DOT__gpr
                                                                    [0x1eU]))) 
                                      >> 0x20U));
    vlSelf->top__DOT__rdata1 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0xfU))];
}

void Vtop___024root____Vdpiimwrap_top__DOT__ram_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ amount);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__pc = 0x80000000U;
    } else {
        if (vlSelf->top__DOT__sw) {
            Vtop___024root____Vdpiimwrap_top__DOT__ram_write_TOP(vlSelf->top__DOT__add_rst, vlSelf->top__DOT__rdata2, 4U);
        } else if (vlSelf->top__DOT__sb) {
            Vtop___024root____Vdpiimwrap_top__DOT__ram_write_TOP(vlSelf->top__DOT__add_rst, vlSelf->top__DOT__rdata2, 1U);
        }
        vlSelf->top__DOT__pc = ((IData)(vlSelf->top__DOT__jalr)
                                 ? (0xfffffffeU & vlSelf->top__DOT__add_rst)
                                 : vlSelf->top__DOT__pc_next_dft);
    }
    vlSelf->_pc = vlSelf->top__DOT__pc;
    vlSelf->top__DOT__pc_next_dft = ((IData)(4U) + vlSelf->top__DOT__pc);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__rdata2 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0x14U))];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__add_rst = (vlSelf->top__DOT__rdata1 
                                 + ((IData)(vlSelf->top__DOT__add)
                                     ? vlSelf->top__DOT__rdata2
                                     : (((IData)(vlSelf->top__DOT__sb) 
                                         | (IData)(vlSelf->top__DOT__sw))
                                         ? vlSelf->top__DOT__immS
                                         : vlSelf->top__DOT__immI)));
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 4U, vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout);
    vlSelf->top__DOT__lw_rst = (((3U == (0x7fU & vlSelf->instr)) 
                                 & (IData)(vlSelf->top__DOT__lw))
                                 ? vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout
                                 : 0U);
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 1U, vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout);
    vlSelf->top__DOT__lbu_rst = (((3U == (0x7fU & vlSelf->instr)) 
                                  & (IData)(vlSelf->top__DOT__lbu))
                                  ? vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout
                                  : 0U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__wdata = ((0xfffff000U & ((- (IData)((IData)(vlSelf->top__DOT__lui))) 
                                               & vlSelf->instr)) 
                               | (((- (IData)((IData)(vlSelf->top__DOT__add))) 
                                   & vlSelf->top__DOT__add_rst) 
                                  | (((- (IData)((IData)(vlSelf->top__DOT__addi))) 
                                      & vlSelf->top__DOT__add_rst) 
                                     | (((- (IData)((IData)(vlSelf->top__DOT__jalr))) 
                                         & ((IData)(4U) 
                                            + vlSelf->top__DOT__pc)) 
                                        | (((- (IData)((IData)(vlSelf->top__DOT__lw))) 
                                            & vlSelf->top__DOT__lw_rst) 
                                           | ((- (IData)((IData)(vlSelf->top__DOT__lbu))) 
                                              & vlSelf->top__DOT__lbu_rst))))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("test_v/top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("test_v/top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("test_v/top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
