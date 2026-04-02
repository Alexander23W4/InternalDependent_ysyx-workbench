// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKEYBOARD_TOP__SYMS_H_
#define VERILATED_VKEYBOARD_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkeyboard_top.h"

// INCLUDE MODULE CLASSES
#include "Vkeyboard_top___024root.h"

// SYMS CLASS (contains all model state)
class Vkeyboard_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkeyboard_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkeyboard_top___024root        TOP;

    // CONSTRUCTORS
    Vkeyboard_top__Syms(VerilatedContext* contextp, const char* namep, Vkeyboard_top* modelp);
    ~Vkeyboard_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
