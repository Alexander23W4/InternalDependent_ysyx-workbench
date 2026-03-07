// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VT_INS_ADD__SYMS_H_
#define VERILATED_VT_INS_ADD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VT_ins_add.h"

// INCLUDE MODULE CLASSES
#include "VT_ins_add___024root.h"

// SYMS CLASS (contains all model state)
class VT_ins_add__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VT_ins_add* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VT_ins_add___024root           TOP;

    // CONSTRUCTORS
    VT_ins_add__Syms(VerilatedContext* contextp, const char* namep, VT_ins_add* modelp);
    ~VT_ins_add__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
