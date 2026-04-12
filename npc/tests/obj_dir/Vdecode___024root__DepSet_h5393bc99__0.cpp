// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode.h for the primary calling header

#include "verilated.h"

#include "Vdecode___024root.h"

extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_he1109882_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_h52b4fff8_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_h0473b325_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_h9abe3f28_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_h00ef5455_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_hd66787bc_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_h1853747b_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_hd0aca139_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vdecode__ConstPool__TABLE_h5d2ccd33_0;

VL_INLINE_OPT void Vdecode___024root___ico_sequent__TOP__0(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->rs1 = (0x1fU & (vlSelf->instr >> 0xfU));
    vlSelf->rs2 = (0x1fU & (vlSelf->instr >> 0x14U));
    vlSelf->immI = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                     << 0xcU) | (vlSelf->instr >> 0x14U));
    vlSelf->immU = (0xfffff000U & vlSelf->instr);
    vlSelf->rd = (0x1fU & (vlSelf->instr >> 7U));
    __Vtableidx1 = ((0x380U & (vlSelf->instr >> 5U)) 
                    | (0x7fU & vlSelf->instr));
    vlSelf->addi = Vdecode__ConstPool__TABLE_he1109882_0
        [__Vtableidx1];
    vlSelf->add = Vdecode__ConstPool__TABLE_h52b4fff8_0
        [__Vtableidx1];
    vlSelf->jalr = Vdecode__ConstPool__TABLE_h0473b325_0
        [__Vtableidx1];
    vlSelf->lui = Vdecode__ConstPool__TABLE_h9abe3f28_0
        [__Vtableidx1];
    vlSelf->lw = Vdecode__ConstPool__TABLE_h00ef5455_0
        [__Vtableidx1];
    vlSelf->lbu = Vdecode__ConstPool__TABLE_hd66787bc_0
        [__Vtableidx1];
    vlSelf->sw = Vdecode__ConstPool__TABLE_h1853747b_0
        [__Vtableidx1];
    vlSelf->sb = Vdecode__ConstPool__TABLE_hd0aca139_0
        [__Vtableidx1];
    vlSelf->ebreak = Vdecode__ConstPool__TABLE_h5d2ccd33_0
        [__Vtableidx1];
    vlSelf->immS = (((- (IData)((vlSelf->instr >> 0x1fU))) 
                     << 0xcU) | ((0xfe0U & (vlSelf->instr 
                                            >> 0x14U)) 
                                 | (IData)(vlSelf->rd)));
}

void Vdecode___024root___eval_ico(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vdecode___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdecode___024root___eval_act(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_act\n"); );
}

void Vdecode___024root___eval_nba(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_nba\n"); );
}

void Vdecode___024root___eval_triggers__ico(Vdecode___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__ico(Vdecode___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode___024root___eval_triggers__act(Vdecode___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__act(Vdecode___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode___024root___dump_triggers__nba(Vdecode___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecode___024root___eval(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vdecode___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vdecode___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("test_v/decode.v", 33, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vdecode___024root___eval_ico(vlSelf);
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
            Vdecode___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdecode___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("test_v/decode.v", 33, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vdecode___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdecode___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("test_v/decode.v", 33, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdecode___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vdecode___024root___eval_debug_assertions(Vdecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
