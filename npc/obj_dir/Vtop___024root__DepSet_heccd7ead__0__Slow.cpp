// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 62, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ amount, IData/*31:0*/ &ram_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__mret = 0U;
    vlSelf->top__DOT__ecall = 0U;
    vlSelf->top__DOT__ebreak = 0U;
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
    vlSelf->_pc = vlSelf->top__DOT__pc;
    vlSelf->top__DOT__pc_next_dft = ((IData)(4U) + vlSelf->top__DOT__pc);
    vlSelf->_mstatus = vlSelf->top__DOT__mstatus;
    vlSelf->_mepc = vlSelf->top__DOT__mepc;
    vlSelf->_mcause = vlSelf->top__DOT__mcause;
    vlSelf->_mtvec = vlSelf->top__DOT__mtvec;
    vlSelf->_mcycle = vlSelf->top__DOT__mcycle;
    vlSelf->_mcycleh = vlSelf->top__DOT__mcycleh;
    vlSelf->_mvendorid = vlSelf->top__DOT__mvendorid;
    vlSelf->_marchid = vlSelf->top__DOT__marchid;
    vlSelf->top__DOT__lui = 0U;
    vlSelf->top__DOT__slt = 0U;
    vlSelf->top__DOT__sll = 0U;
    vlSelf->top__DOT__sub = 0U;
    vlSelf->top__DOT__srai = 0U;
    vlSelf->top__DOT__srli = 0U;
    vlSelf->top__DOT__slli = 0U;
    vlSelf->top__DOT__andi = 0U;
    vlSelf->top__DOT__ori = 0U;
    vlSelf->top__DOT__xori = 0U;
    vlSelf->top__DOT__sltiu = 0U;
    vlSelf->top__DOT__slti = 0U;
    vlSelf->top__DOT__sltu = 0U;
    vlSelf->top__DOT__xor_inst = 0U;
    vlSelf->top__DOT__srl = 0U;
    vlSelf->top__DOT__sra = 0U;
    vlSelf->top__DOT__or_inst = 0U;
    vlSelf->top__DOT__and_inst = 0U;
    vlSelf->top__DOT__csrrc = 0U;
    vlSelf->top__DOT__csrrs = 0U;
    vlSelf->top__DOT__csrrw = 0U;
    vlSelf->top__DOT__csrw_rst = (((((((((0x300U == 
                                          (vlSelf->instr 
                                           >> 0x14U)) 
                                         | (0x305U 
                                            == (vlSelf->instr 
                                                >> 0x14U))) 
                                        | (0x341U == 
                                           (vlSelf->instr 
                                            >> 0x14U))) 
                                       | (0x342U == 
                                          (vlSelf->instr 
                                           >> 0x14U))) 
                                      | (0xb00U == 
                                         (vlSelf->instr 
                                          >> 0x14U))) 
                                     | (0xb80U == (vlSelf->instr 
                                                   >> 0x14U))) 
                                    | (0xf11U == (vlSelf->instr 
                                                  >> 0x14U))) 
                                   | (0xf12U == (vlSelf->instr 
                                                 >> 0x14U)))
                                   ? ((0x300U == (vlSelf->instr 
                                                  >> 0x14U))
                                       ? vlSelf->top__DOT__mstatus
                                       : ((0x305U == 
                                           (vlSelf->instr 
                                            >> 0x14U))
                                           ? vlSelf->top__DOT__mtvec
                                           : ((0x341U 
                                               == (vlSelf->instr 
                                                   >> 0x14U))
                                               ? vlSelf->top__DOT__mepc
                                               : ((0x342U 
                                                   == 
                                                   (vlSelf->instr 
                                                    >> 0x14U))
                                                   ? vlSelf->top__DOT__mcause
                                                   : 
                                                  ((0xb00U 
                                                    == 
                                                    (vlSelf->instr 
                                                     >> 0x14U))
                                                    ? vlSelf->top__DOT__mcycle
                                                    : 
                                                   ((0xb80U 
                                                     == 
                                                     (vlSelf->instr 
                                                      >> 0x14U))
                                                     ? vlSelf->top__DOT__mcycleh
                                                     : 
                                                    ((0xf11U 
                                                      == 
                                                      (vlSelf->instr 
                                                       >> 0x14U))
                                                      ? vlSelf->top__DOT__mvendorid
                                                      : vlSelf->top__DOT__marchid)))))))
                                   : 0U);
    vlSelf->top__DOT__sb = 0U;
    vlSelf->top__DOT__sh = 0U;
    vlSelf->top__DOT__sw = 0U;
    vlSelf->top__DOT__bgeu = 0U;
    vlSelf->top__DOT__bltu = 0U;
    vlSelf->top__DOT__bge = 0U;
    vlSelf->top__DOT__blt = 0U;
    vlSelf->top__DOT__beq = 0U;
    vlSelf->top__DOT__bne = 0U;
    vlSelf->top__DOT__auipc = 0U;
    vlSelf->top__DOT__jalr = 0U;
    vlSelf->top__DOT__jal = 0U;
    if ((0x40U & vlSelf->instr)) {
        if ((0x20U & vlSelf->instr)) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                if ((1U & (~ (IData)(
                                                     (0x100000U 
                                                      == 
                                                      (0x107000U 
                                                       & vlSelf->instr)))))) {
                                    if ((0x604000U 
                                         == (vlSelf->instr 
                                             >> 7U))) {
                                        vlSelf->top__DOT__mret = 1U;
                                    }
                                    if ((0x604000U 
                                         != (vlSelf->instr 
                                             >> 7U))) {
                                        if ((0U == 
                                             (vlSelf->instr 
                                              >> 7U))) {
                                            vlSelf->top__DOT__ecall = 1U;
                                        }
                                        if ((0U != 
                                             (vlSelf->instr 
                                              >> 7U))) {
                                            if ((1U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->instr 
                                                     >> 0xcU)))) {
                                                if (
                                                    (2U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->instr 
                                                         >> 0xcU)))) {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->instr 
                                                             >> 0xcU)))) {
                                                        vlSelf->top__DOT__csrrc = 1U;
                                                    }
                                                }
                                                if (
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->instr 
                                                         >> 0xcU)))) {
                                                    vlSelf->top__DOT__csrrs = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->instr 
                                                     >> 0xcU)))) {
                                                vlSelf->top__DOT__csrrw = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((IData)((0x100000U 
                                             == (0x107000U 
                                                 & vlSelf->instr)))) {
                                    vlSelf->top__DOT__ebreak = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                if ((0x4000U & vlSelf->instr)) {
                                    if ((0x2000U & vlSelf->instr)) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__bgeu = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__bltu = 1U;
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__bge = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__blt = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__beq = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__bne = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->top__DOT__jalr = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->instr)) {
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->top__DOT__jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__lb = 0U;
    vlSelf->top__DOT__lh = 0U;
    vlSelf->top__DOT__lw = 0U;
    vlSelf->top__DOT__lbu = 0U;
    vlSelf->top__DOT__lhu = 0U;
    vlSelf->top__DOT__immI = (((- (IData)((vlSelf->instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->instr 
                                           >> 0x14U));
    vlSelf->top__DOT__rdata1 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->top__DOT__rdata2 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0x14U))];
    vlSelf->top__DOT__add = 0U;
    vlSelf->top__DOT__addi = 0U;
    if ((1U & (~ (vlSelf->instr >> 6U)))) {
        if ((0x20U & vlSelf->instr)) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->top__DOT__lui = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                if ((1U & (~ (vlSelf->instr 
                                              >> 0xeU)))) {
                                    if ((0x2000U & vlSelf->instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__slt = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__sltu = 1U;
                                        }
                                    }
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__sll = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            if ((0x40000000U 
                                                 & vlSelf->instr)) {
                                                vlSelf->top__DOT__sub = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr 
                                                     >> 0x1eU)))) {
                                                vlSelf->top__DOT__add = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((0x4000U & vlSelf->instr)) {
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__xor_inst = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr 
                                                     >> 0x1eU)))) {
                                                vlSelf->top__DOT__srl = 1U;
                                            }
                                            if ((0x40000000U 
                                                 & vlSelf->instr)) {
                                                vlSelf->top__DOT__sra = 1U;
                                            }
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__or_inst = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__and_inst = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                if ((0U == (7U & (vlSelf->instr 
                                                  >> 0xcU)))) {
                                    vlSelf->top__DOT__sb = 1U;
                                }
                                if ((0U != (7U & (vlSelf->instr 
                                                  >> 0xcU)))) {
                                    if ((1U == (7U 
                                                & (vlSelf->instr 
                                                   >> 0xcU)))) {
                                        vlSelf->top__DOT__sh = 1U;
                                    }
                                    if ((1U != (7U 
                                                & (vlSelf->instr 
                                                   >> 0xcU)))) {
                                        if ((2U == 
                                             (7U & 
                                              (vlSelf->instr 
                                               >> 0xcU)))) {
                                            vlSelf->top__DOT__sw = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->instr >> 5U)))) {
            if ((0x10U & vlSelf->instr)) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                if ((0x4000U & vlSelf->instr)) {
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            if ((0x40000000U 
                                                 & vlSelf->instr)) {
                                                vlSelf->top__DOT__srai = 1U;
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->instr 
                                                     >> 0x1eU)))) {
                                                vlSelf->top__DOT__srli = 1U;
                                            }
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__xori = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr)) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__andi = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__ori = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__slli = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__addi = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr)) {
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__sltiu = 1U;
                                        }
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__slti = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelf->instr)) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                vlSelf->top__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->instr >> 4U)))) {
                if ((1U & (~ (vlSelf->instr >> 3U)))) {
                    if ((1U & (~ (vlSelf->instr >> 2U)))) {
                        if ((2U & vlSelf->instr)) {
                            if ((1U & vlSelf->instr)) {
                                if ((1U & (~ (vlSelf->instr 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__lb = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__lh = 1U;
                                        }
                                    }
                                    if ((0x2000U & vlSelf->instr)) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__lw = 1U;
                                        }
                                    }
                                }
                                if ((0x4000U & vlSelf->instr)) {
                                    if ((1U & (~ (vlSelf->instr 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->instr 
                                                    >> 0xcU)))) {
                                            vlSelf->top__DOT__lbu = 1U;
                                        }
                                        if ((0x1000U 
                                             & vlSelf->instr)) {
                                            vlSelf->top__DOT__lhu = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT____VdfgTmp_haf3ac130__0 = ((IData)(vlSelf->top__DOT__csrrw) 
                                                | ((IData)(vlSelf->top__DOT__csrrc) 
                                                   | (IData)(vlSelf->top__DOT__csrrs)));
    vlSelf->top__DOT____VdfgTmp_heb8827dd__0 = ((IData)(vlSelf->top__DOT__blt) 
                                                | ((IData)(vlSelf->top__DOT__bltu) 
                                                   | ((IData)(vlSelf->top__DOT__bge) 
                                                      | ((IData)(vlSelf->top__DOT__bgeu) 
                                                         | ((IData)(vlSelf->top__DOT__beq) 
                                                            | (IData)(vlSelf->top__DOT__bne))))));
    vlSelf->top__DOT____VdfgTmp_h71776512__0 = ((IData)(vlSelf->top__DOT__add) 
                                                | (IData)(vlSelf->top__DOT__addi));
    vlSelf->top__DOT__add_rst = ((((IData)(vlSelf->top__DOT__auipc) 
                                   | ((IData)(vlSelf->top__DOT__jal) 
                                      | (IData)(vlSelf->top__DOT____VdfgTmp_heb8827dd__0)))
                                   ? vlSelf->top__DOT__pc
                                   : vlSelf->top__DOT__rdata1) 
                                 + (((- (IData)((IData)(vlSelf->top__DOT__add))) 
                                     & vlSelf->top__DOT__rdata2) 
                                    | (((- (IData)(
                                                   ((IData)(vlSelf->top__DOT__sw) 
                                                    | ((IData)(vlSelf->top__DOT__sb) 
                                                       | (IData)(vlSelf->top__DOT__sh))))) 
                                        & (((- (IData)(
                                                       (vlSelf->instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->instr 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->instr 
                                                    >> 7U))))) 
                                       | ((0xfffff000U 
                                           & ((- (IData)((IData)(vlSelf->top__DOT__auipc))) 
                                              & vlSelf->instr)) 
                                          | (((- (IData)((IData)(vlSelf->top__DOT__jal))) 
                                              & (((- (IData)(
                                                             (vlSelf->instr 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->instr 
                                                             >> 0x14U)))))) 
                                             | (((- (IData)(
                                                            ((IData)(vlSelf->top__DOT__jalr) 
                                                             | ((IData)(vlSelf->top__DOT__lbu) 
                                                                | ((IData)(vlSelf->top__DOT__lw) 
                                                                   | ((IData)(vlSelf->top__DOT__lhu) 
                                                                      | ((IData)(vlSelf->top__DOT__lh) 
                                                                         | ((IData)(vlSelf->top__DOT__addi) 
                                                                            | (IData)(vlSelf->top__DOT__lb))))))))) 
                                                 & vlSelf->top__DOT__immI) 
                                                | ((- (IData)((IData)(vlSelf->top__DOT____VdfgTmp_heb8827dd__0))) 
                                                   & (((- (IData)(
                                                                  (vlSelf->instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelf->instr 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->instr 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->instr 
                                                                  >> 7U))))))))))));
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 4U, vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout);
    vlSelf->top__DOT__lw_rst = vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout;
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 1U, vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout);
    vlSelf->top__DOT__lbu_rst = vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout;
    Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(vlSelf->top__DOT__add_rst, 2U, vlSelf->__Vfunc_top__DOT__ram_read__2__Vfuncout);
    vlSelf->top__DOT__lhu_rst = vlSelf->__Vfunc_top__DOT__ram_read__2__Vfuncout;
    vlSelf->top__DOT__wdata = ((0xfffff000U & ((- (IData)((IData)(vlSelf->top__DOT__lui))) 
                                               & vlSelf->instr)) 
                               | (((- (IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h71776512__0) 
                                               | (IData)(vlSelf->top__DOT__auipc)))) 
                                   & vlSelf->top__DOT__add_rst) 
                                  | (((- (IData)(((IData)(vlSelf->top__DOT__jal) 
                                                  | (IData)(vlSelf->top__DOT__jalr)))) 
                                      & ((IData)(4U) 
                                         + vlSelf->top__DOT__pc)) 
                                     | (((- (IData)((IData)(vlSelf->top__DOT__lw))) 
                                         & vlSelf->top__DOT__lw_rst) 
                                        | (((- (IData)((IData)(vlSelf->top__DOT__lbu))) 
                                            & vlSelf->top__DOT__lbu_rst) 
                                           | (((- (IData)((IData)(vlSelf->top__DOT__lhu))) 
                                               & vlSelf->top__DOT__lhu_rst) 
                                              | (((- (IData)((IData)(vlSelf->top__DOT__lb))) 
                                                  & (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__lbu_rst 
                                                                     >> 7U)))) 
                                                      << 7U) 
                                                     | (0x7fU 
                                                        & vlSelf->top__DOT__lbu_rst))) 
                                                 | (((- (IData)((IData)(vlSelf->top__DOT__lh))) 
                                                     & (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__lhu_rst 
                                                                        >> 0xfU)))) 
                                                         << 0xfU) 
                                                        | (0x7fffU 
                                                           & vlSelf->top__DOT__lhu_rst))) 
                                                    | (((- (IData)((IData)(vlSelf->top__DOT__sub))) 
                                                        & (vlSelf->top__DOT__rdata1 
                                                           - vlSelf->top__DOT__rdata2)) 
                                                       | (((- (IData)((IData)(vlSelf->top__DOT__xor_inst))) 
                                                           & (vlSelf->top__DOT__rdata1 
                                                              ^ vlSelf->top__DOT__rdata2)) 
                                                          | (((- (IData)((IData)(vlSelf->top__DOT__xori))) 
                                                              & (vlSelf->top__DOT__immI 
                                                                 ^ vlSelf->top__DOT__rdata1)) 
                                                             | (((- (IData)((IData)(vlSelf->top__DOT__or_inst))) 
                                                                 & (vlSelf->top__DOT__rdata1 
                                                                    | vlSelf->top__DOT__rdata2)) 
                                                                | (((- (IData)((IData)(vlSelf->top__DOT__ori))) 
                                                                    & (vlSelf->top__DOT__immI 
                                                                       | vlSelf->top__DOT__rdata1)) 
                                                                   | (((- (IData)((IData)(vlSelf->top__DOT__and_inst))) 
                                                                       & (vlSelf->top__DOT__rdata1 
                                                                          & vlSelf->top__DOT__rdata2)) 
                                                                      | (((- (IData)((IData)(vlSelf->top__DOT__andi))) 
                                                                          & (vlSelf->top__DOT__immI 
                                                                             & vlSelf->top__DOT__rdata1)) 
                                                                         | (((- (IData)((IData)(vlSelf->top__DOT__sll))) 
                                                                             & (vlSelf->top__DOT__rdata1 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->top__DOT__rdata2))) 
                                                                            | (((- (IData)((IData)(vlSelf->top__DOT__slli))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                << 
                                                                                (0x1fU 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U)))) 
                                                                               | (((- (IData)((IData)(vlSelf->top__DOT__srl))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->top__DOT__rdata2))) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__srli))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U)))) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__sra))) 
                                                                                & VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rdata1, 
                                                                                (0x1fU 
                                                                                & vlSelf->top__DOT__rdata2))) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__srai))) 
                                                                                & VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rdata1, 
                                                                                (0x1fU 
                                                                                & (vlSelf->instr 
                                                                                >> 0x14U)))) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__slt))) 
                                                                                & VL_LTS_III(32, vlSelf->top__DOT__rdata1, vlSelf->top__DOT__rdata2)) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__slti))) 
                                                                                & VL_LTS_III(32, vlSelf->top__DOT__rdata1, vlSelf->top__DOT__immI)) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__sltu))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                < vlSelf->top__DOT__rdata2)) 
                                                                                | (((- (IData)((IData)(vlSelf->top__DOT__sltiu))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                < vlSelf->top__DOT__immI)) 
                                                                                | ((- (IData)((IData)(vlSelf->top__DOT____VdfgTmp_haf3ac130__0))) 
                                                                                & vlSelf->top__DOT__csrw_rst))))))))))))))))))))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->dbg_reg);
    vlSelf->_pc = VL_RAND_RESET_I(32);
    vlSelf->_mstatus = VL_RAND_RESET_I(32);
    vlSelf->_mepc = VL_RAND_RESET_I(32);
    vlSelf->_mcause = VL_RAND_RESET_I(32);
    vlSelf->_mtvec = VL_RAND_RESET_I(32);
    vlSelf->_mcycle = VL_RAND_RESET_I(32);
    vlSelf->_mcycleh = VL_RAND_RESET_I(32);
    vlSelf->_mvendorid = VL_RAND_RESET_I(32);
    vlSelf->_marchid = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mcycle = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mcycleh = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__marchid = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__xor_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__or_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__and_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bgeu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csrrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rdata1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rdata2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc_next_dft = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__add_rst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csrw_rst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lw_rst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lbu_rst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__lhu_rst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____VdfgTmp_h71776512__0 = 0;
    vlSelf->top__DOT____VdfgTmp_haf3ac130__0 = 0;
    vlSelf->top__DOT____VdfgTmp_heb8827dd__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__GPR__DOT__gpr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vfunc_top__DOT__ram_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__ram_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__ram_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
}
