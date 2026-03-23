// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkeyboard_sim.h"
#include "Vkeyboard_sim__Syms.h"

//============================================================
// Constructors

Vkeyboard_sim::Vkeyboard_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkeyboard_sim__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkeyboard_sim::Vkeyboard_sim(const char* _vcname__)
    : Vkeyboard_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkeyboard_sim::~Vkeyboard_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkeyboard_sim___024root___eval_debug_assertions(Vkeyboard_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vkeyboard_sim___024root___eval_static(Vkeyboard_sim___024root* vlSelf);
void Vkeyboard_sim___024root___eval_initial(Vkeyboard_sim___024root* vlSelf);
void Vkeyboard_sim___024root___eval_settle(Vkeyboard_sim___024root* vlSelf);
void Vkeyboard_sim___024root___eval(Vkeyboard_sim___024root* vlSelf);

void Vkeyboard_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkeyboard_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkeyboard_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkeyboard_sim___024root___eval_static(&(vlSymsp->TOP));
        Vkeyboard_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vkeyboard_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkeyboard_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkeyboard_sim::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vkeyboard_sim::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vkeyboard_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkeyboard_sim___024root___eval_final(Vkeyboard_sim___024root* vlSelf);

VL_ATTR_COLD void Vkeyboard_sim::final() {
    Vkeyboard_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkeyboard_sim::hierName() const { return vlSymsp->name(); }
const char* Vkeyboard_sim::modelName() const { return "Vkeyboard_sim"; }
unsigned Vkeyboard_sim::threads() const { return 1; }
