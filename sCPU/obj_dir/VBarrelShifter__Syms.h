// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBARRELSHIFTER__SYMS_H_
#define VERILATED_VBARRELSHIFTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBarrelShifter.h"

// INCLUDE MODULE CLASSES
#include "VBarrelShifter___024root.h"

// SYMS CLASS (contains all model state)
class VBarrelShifter__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBarrelShifter* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBarrelShifter___024root       TOP;

    // CONSTRUCTORS
    VBarrelShifter__Syms(VerilatedContext* contextp, const char* namep, VBarrelShifter* modelp);
    ~VBarrelShifter__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
