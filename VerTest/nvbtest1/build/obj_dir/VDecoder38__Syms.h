// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODER38__SYMS_H_
#define VERILATED_VDECODER38__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDecoder38.h"

// INCLUDE MODULE CLASSES
#include "VDecoder38___024root.h"

// SYMS CLASS (contains all model state)
class VDecoder38__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDecoder38* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDecoder38___024root           TOP;

    // CONSTRUCTORS
    VDecoder38__Syms(VerilatedContext* contextp, const char* namep, VDecoder38* modelp);
    ~VDecoder38__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
