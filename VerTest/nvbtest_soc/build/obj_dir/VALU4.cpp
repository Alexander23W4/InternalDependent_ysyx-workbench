// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALU4.h"
#include "VALU4__Syms.h"

//============================================================
// Constructors

VALU4::VALU4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALU4__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , opcode{vlSymsp->TOP.opcode}
    , out{vlSymsp->TOP.out}
    , carry{vlSymsp->TOP.carry}
    , overflow{vlSymsp->TOP.overflow}
    , zero{vlSymsp->TOP.zero}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALU4::VALU4(const char* _vcname__)
    : VALU4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALU4::~VALU4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALU4___024root___eval_debug_assertions(VALU4___024root* vlSelf);
#endif  // VL_DEBUG
void VALU4___024root___eval_static(VALU4___024root* vlSelf);
void VALU4___024root___eval_initial(VALU4___024root* vlSelf);
void VALU4___024root___eval_settle(VALU4___024root* vlSelf);
void VALU4___024root___eval(VALU4___024root* vlSelf);

void VALU4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALU4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALU4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALU4___024root___eval_static(&(vlSymsp->TOP));
        VALU4___024root___eval_initial(&(vlSymsp->TOP));
        VALU4___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALU4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VALU4::eventsPending() { return false; }

uint64_t VALU4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VALU4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALU4___024root___eval_final(VALU4___024root* vlSelf);

VL_ATTR_COLD void VALU4::final() {
    VALU4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALU4::hierName() const { return vlSymsp->name(); }
const char* VALU4::modelName() const { return "VALU4"; }
unsigned VALU4::threads() const { return 1; }
