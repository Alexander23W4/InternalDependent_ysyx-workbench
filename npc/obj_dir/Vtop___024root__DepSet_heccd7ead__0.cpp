// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__ram_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ amount, IData/*31:0*/ &ram_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ebreak = 0U;
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
    vlSelf->top__DOT____VdfgTmp_heb8827dd__0 = ((IData)(vlSelf->top__DOT__blt) 
                                                | ((IData)(vlSelf->top__DOT__bltu) 
                                                   | ((IData)(vlSelf->top__DOT__bge) 
                                                      | ((IData)(vlSelf->top__DOT__bgeu) 
                                                         | ((IData)(vlSelf->top__DOT__beq) 
                                                            | (IData)(vlSelf->top__DOT__bne))))));
    vlSelf->top__DOT____VdfgTmp_h71776512__0 = ((IData)(vlSelf->top__DOT__add) 
                                                | (IData)(vlSelf->top__DOT__addi));
    vlSelf->top__DOT__add_rst = ((((- (IData)(((IData)(vlSelf->top__DOT__auipc) 
                                               | ((IData)(vlSelf->top__DOT__jal) 
                                                  | (IData)(vlSelf->top__DOT____VdfgTmp_heb8827dd__0))))) 
                                   & vlSelf->top__DOT__pc) 
                                  | vlSelf->top__DOT__rdata1) 
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
                                                                                | ((- (IData)((IData)(vlSelf->top__DOT__sltiu))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                < vlSelf->top__DOT__immI))))))))))))))))))))))))));
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
    if ((((IData)(vlSelf->top__DOT____VdfgTmp_h71776512__0) 
          | ((IData)(vlSelf->top__DOT__sub) | ((IData)(vlSelf->top__DOT__lui) 
                                               | ((IData)(vlSelf->top__DOT__auipc) 
                                                  | ((IData)(vlSelf->top__DOT__and_inst) 
                                                     | ((IData)(vlSelf->top__DOT__or_inst) 
                                                        | ((IData)(vlSelf->top__DOT__xor_inst) 
                                                           | ((IData)(vlSelf->top__DOT__andi) 
                                                              | ((IData)(vlSelf->top__DOT__ori) 
                                                                 | ((IData)(vlSelf->top__DOT__xori) 
                                                                    | ((IData)(vlSelf->top__DOT__sll) 
                                                                       | ((IData)(vlSelf->top__DOT__srl) 
                                                                          | ((IData)(vlSelf->top__DOT__sra) 
                                                                             | ((IData)(vlSelf->top__DOT__slli) 
                                                                                | ((IData)(vlSelf->top__DOT__srli) 
                                                                                | ((IData)(vlSelf->top__DOT__srai) 
                                                                                | ((IData)(vlSelf->top__DOT__slt) 
                                                                                | ((IData)(vlSelf->top__DOT__sltu) 
                                                                                | ((IData)(vlSelf->top__DOT__slti) 
                                                                                | ((IData)(vlSelf->top__DOT__sltiu) 
                                                                                | ((IData)(vlSelf->top__DOT__jal) 
                                                                                | ((IData)(vlSelf->top__DOT__jalr) 
                                                                                | ((IData)(vlSelf->top__DOT__lb) 
                                                                                | ((IData)(vlSelf->top__DOT__lh) 
                                                                                | ((IData)(vlSelf->top__DOT__lw) 
                                                                                | ((IData)(vlSelf->top__DOT__lbu) 
                                                                                | (IData)(vlSelf->top__DOT__lhu))))))))))))))))))))))))))) 
         & (0U != (0x1fU & (vlSelf->instr >> 7U))))) {
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
        } else if (vlSelf->top__DOT__sh) {
            Vtop___024root____Vdpiimwrap_top__DOT__ram_write_TOP(vlSelf->top__DOT__add_rst, vlSelf->top__DOT__rdata2, 2U);
        }
        vlSelf->top__DOT__pc = ((IData)(vlSelf->top__DOT__jalr)
                                 ? (0xfffffffeU & vlSelf->top__DOT__add_rst)
                                 : ((IData)(vlSelf->top__DOT__jal)
                                     ? vlSelf->top__DOT__add_rst
                                     : ((IData)(vlSelf->top__DOT__blt)
                                         ? (VL_LTS_III(32, vlSelf->top__DOT__rdata1, vlSelf->top__DOT__rdata2)
                                             ? vlSelf->top__DOT__add_rst
                                             : vlSelf->top__DOT__pc_next_dft)
                                         : ((IData)(vlSelf->top__DOT__beq)
                                             ? ((vlSelf->top__DOT__rdata1 
                                                 == vlSelf->top__DOT__rdata2)
                                                 ? vlSelf->top__DOT__add_rst
                                                 : vlSelf->top__DOT__pc_next_dft)
                                             : ((IData)(vlSelf->top__DOT__bne)
                                                 ? 
                                                ((vlSelf->top__DOT__rdata1 
                                                  != vlSelf->top__DOT__rdata2)
                                                  ? vlSelf->top__DOT__add_rst
                                                  : vlSelf->top__DOT__pc_next_dft)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__bge)
                                                  ? 
                                                 (VL_GTES_III(32, vlSelf->top__DOT__rdata1, vlSelf->top__DOT__rdata2)
                                                   ? vlSelf->top__DOT__add_rst
                                                   : vlSelf->top__DOT__pc_next_dft)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__bltu)
                                                   ? 
                                                  ((vlSelf->top__DOT__rdata1 
                                                    < vlSelf->top__DOT__rdata2)
                                                    ? vlSelf->top__DOT__add_rst
                                                    : vlSelf->top__DOT__pc_next_dft)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__bgeu)
                                                    ? 
                                                   ((vlSelf->top__DOT__rdata1 
                                                     >= vlSelf->top__DOT__rdata2)
                                                     ? vlSelf->top__DOT__add_rst
                                                     : vlSelf->top__DOT__pc_next_dft)
                                                    : vlSelf->top__DOT__pc_next_dft))))))));
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
    vlSelf->top__DOT__rdata1 = vlSelf->top__DOT__GPR__DOT__gpr
        [(0x1fU & (vlSelf->instr >> 0xfU))];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__add_rst = ((((- (IData)(((IData)(vlSelf->top__DOT__auipc) 
                                               | ((IData)(vlSelf->top__DOT__jal) 
                                                  | (IData)(vlSelf->top__DOT____VdfgTmp_heb8827dd__0))))) 
                                   & vlSelf->top__DOT__pc) 
                                  | vlSelf->top__DOT__rdata1) 
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
                                                                                | ((- (IData)((IData)(vlSelf->top__DOT__sltiu))) 
                                                                                & (vlSelf->top__DOT__rdata1 
                                                                                < vlSelf->top__DOT__immI))))))))))))))))))))))))));
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
                VL_FATAL_MT("vsrc/top.v", 2, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("vsrc/top.v", 2, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/top.v", 2, "", "NBA region did not converge.");
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
