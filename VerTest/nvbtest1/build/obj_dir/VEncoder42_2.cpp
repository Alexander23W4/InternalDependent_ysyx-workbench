// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VEncoder42_2.h"
#include "VEncoder42_2__Syms.h"

//============================================================
// Constructors

VEncoder42_2::VEncoder42_2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VEncoder42_2__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VEncoder42_2::VEncoder42_2(const char* _vcname__)
    : VEncoder42_2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VEncoder42_2::~VEncoder42_2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VEncoder42_2___024root___eval_debug_assertions(VEncoder42_2___024root* vlSelf);
#endif  // VL_DEBUG
void VEncoder42_2___024root___eval_static(VEncoder42_2___024root* vlSelf);
void VEncoder42_2___024root___eval_initial(VEncoder42_2___024root* vlSelf);
void VEncoder42_2___024root___eval_settle(VEncoder42_2___024root* vlSelf);
void VEncoder42_2___024root___eval(VEncoder42_2___024root* vlSelf);

void VEncoder42_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEncoder42_2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VEncoder42_2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VEncoder42_2___024root___eval_static(&(vlSymsp->TOP));
        VEncoder42_2___024root___eval_initial(&(vlSymsp->TOP));
        VEncoder42_2___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VEncoder42_2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VEncoder42_2::eventsPending() { return false; }

uint64_t VEncoder42_2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VEncoder42_2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VEncoder42_2___024root___eval_final(VEncoder42_2___024root* vlSelf);

VL_ATTR_COLD void VEncoder42_2::final() {
    VEncoder42_2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VEncoder42_2::hierName() const { return vlSymsp->name(); }
const char* VEncoder42_2::modelName() const { return "VEncoder42_2"; }
unsigned VEncoder42_2::threads() const { return 1; }
