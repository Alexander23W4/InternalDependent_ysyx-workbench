// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkeyboard_top.h"
#include "Vkeyboard_top__Syms.h"

//============================================================
// Constructors

Vkeyboard_top::Vkeyboard_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkeyboard_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , ascii{vlSymsp->TOP.ascii}
    , ready{vlSymsp->TOP.ready}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkeyboard_top::Vkeyboard_top(const char* _vcname__)
    : Vkeyboard_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkeyboard_top::~Vkeyboard_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkeyboard_top___024root___eval_debug_assertions(Vkeyboard_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vkeyboard_top___024root___eval_static(Vkeyboard_top___024root* vlSelf);
void Vkeyboard_top___024root___eval_initial(Vkeyboard_top___024root* vlSelf);
void Vkeyboard_top___024root___eval_settle(Vkeyboard_top___024root* vlSelf);
void Vkeyboard_top___024root___eval(Vkeyboard_top___024root* vlSelf);

void Vkeyboard_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkeyboard_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkeyboard_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkeyboard_top___024root___eval_static(&(vlSymsp->TOP));
        Vkeyboard_top___024root___eval_initial(&(vlSymsp->TOP));
        Vkeyboard_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkeyboard_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkeyboard_top::eventsPending() { return false; }

uint64_t Vkeyboard_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vkeyboard_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkeyboard_top___024root___eval_final(Vkeyboard_top___024root* vlSelf);

VL_ATTR_COLD void Vkeyboard_top::final() {
    Vkeyboard_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkeyboard_top::hierName() const { return vlSymsp->name(); }
const char* Vkeyboard_top::modelName() const { return "Vkeyboard_top"; }
unsigned Vkeyboard_top::threads() const { return 1; }
