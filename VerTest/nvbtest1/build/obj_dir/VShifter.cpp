// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VShifter.h"
#include "VShifter__Syms.h"

//============================================================
// Constructors

VShifter::VShifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VShifter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , mode{vlSymsp->TOP.mode}
    , in{vlSymsp->TOP.in}
    , value{vlSymsp->TOP.value}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VShifter::VShifter(const char* _vcname__)
    : VShifter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VShifter::~VShifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VShifter___024root___eval_debug_assertions(VShifter___024root* vlSelf);
#endif  // VL_DEBUG
void VShifter___024root___eval_static(VShifter___024root* vlSelf);
void VShifter___024root___eval_initial(VShifter___024root* vlSelf);
void VShifter___024root___eval_settle(VShifter___024root* vlSelf);
void VShifter___024root___eval(VShifter___024root* vlSelf);

void VShifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VShifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VShifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VShifter___024root___eval_static(&(vlSymsp->TOP));
        VShifter___024root___eval_initial(&(vlSymsp->TOP));
        VShifter___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VShifter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VShifter::eventsPending() { return false; }

uint64_t VShifter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VShifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VShifter___024root___eval_final(VShifter___024root* vlSelf);

VL_ATTR_COLD void VShifter::final() {
    VShifter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VShifter::hierName() const { return vlSymsp->name(); }
const char* VShifter::modelName() const { return "VShifter"; }
unsigned VShifter::threads() const { return 1; }
