// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBarrelShifter.h"
#include "VBarrelShifter__Syms.h"

//============================================================
// Constructors

VBarrelShifter::VBarrelShifter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBarrelShifter__Syms(contextp(), _vcname__, this)}
    , LR{vlSymsp->TOP.LR}
    , AL{vlSymsp->TOP.AL}
    , din{vlSymsp->TOP.din}
    , shamt{vlSymsp->TOP.shamt}
    , dout{vlSymsp->TOP.dout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBarrelShifter::VBarrelShifter(const char* _vcname__)
    : VBarrelShifter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBarrelShifter::~VBarrelShifter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBarrelShifter___024root___eval_debug_assertions(VBarrelShifter___024root* vlSelf);
#endif  // VL_DEBUG
void VBarrelShifter___024root___eval_static(VBarrelShifter___024root* vlSelf);
void VBarrelShifter___024root___eval_initial(VBarrelShifter___024root* vlSelf);
void VBarrelShifter___024root___eval_settle(VBarrelShifter___024root* vlSelf);
void VBarrelShifter___024root___eval(VBarrelShifter___024root* vlSelf);

void VBarrelShifter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBarrelShifter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBarrelShifter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBarrelShifter___024root___eval_static(&(vlSymsp->TOP));
        VBarrelShifter___024root___eval_initial(&(vlSymsp->TOP));
        VBarrelShifter___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBarrelShifter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBarrelShifter::eventsPending() { return false; }

uint64_t VBarrelShifter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBarrelShifter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBarrelShifter___024root___eval_final(VBarrelShifter___024root* vlSelf);

VL_ATTR_COLD void VBarrelShifter::final() {
    VBarrelShifter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBarrelShifter::hierName() const { return vlSymsp->name(); }
const char* VBarrelShifter::modelName() const { return "VBarrelShifter"; }
unsigned VBarrelShifter::threads() const { return 1; }
