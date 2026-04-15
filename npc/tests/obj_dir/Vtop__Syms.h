// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop__Vcb_get_decode_signals_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &instr_val, IData/*31:0*/ &addi_s, IData/*31:0*/ &add_s, IData/*31:0*/ &jalr_s, IData/*31:0*/ &lui_s, IData/*31:0*/ &lw_s, IData/*31:0*/ &lbu_s, IData/*31:0*/ &sw_s, IData/*31:0*/ &sb_s, IData/*31:0*/ &ebreak_s, IData/*31:0*/ &rd_val, IData/*31:0*/ &rs1_val, IData/*31:0*/ &rs2_val, IData/*31:0*/ &immI_val, IData/*31:0*/ &immU_val, IData/*31:0*/ &immS_val, IData/*31:0*/ &wdata_val, IData/*31:0*/ &rdata1_val, IData/*31:0*/ &rdata2_val, IData/*31:0*/ &wen_val);
using Vtop__Vcb_halt_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &endprog);

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_top;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
