// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode.h"
#include "Vdecode__Syms.h"

//============================================================
// Constructors

Vdecode::Vdecode(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecode__Syms(contextp(), _vcname__, this)}
    , addi{vlSymsp->TOP.addi}
    , add{vlSymsp->TOP.add}
    , jalr{vlSymsp->TOP.jalr}
    , lui{vlSymsp->TOP.lui}
    , lw{vlSymsp->TOP.lw}
    , lbu{vlSymsp->TOP.lbu}
    , sw{vlSymsp->TOP.sw}
    , sb{vlSymsp->TOP.sb}
    , ebreak{vlSymsp->TOP.ebreak}
    , rd{vlSymsp->TOP.rd}
    , rs1{vlSymsp->TOP.rs1}
    , rs2{vlSymsp->TOP.rs2}
    , instr{vlSymsp->TOP.instr}
    , immI{vlSymsp->TOP.immI}
    , immU{vlSymsp->TOP.immU}
    , immS{vlSymsp->TOP.immS}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecode::Vdecode(const char* _vcname__)
    : Vdecode(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecode::~Vdecode() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecode___024root___eval_debug_assertions(Vdecode___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode___024root___eval_static(Vdecode___024root* vlSelf);
void Vdecode___024root___eval_initial(Vdecode___024root* vlSelf);
void Vdecode___024root___eval_settle(Vdecode___024root* vlSelf);
void Vdecode___024root___eval(Vdecode___024root* vlSelf);

void Vdecode::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecode___024root___eval_static(&(vlSymsp->TOP));
        Vdecode___024root___eval_initial(&(vlSymsp->TOP));
        Vdecode___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecode___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecode::eventsPending() { return false; }

uint64_t Vdecode::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecode::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecode___024root___eval_final(Vdecode___024root* vlSelf);

VL_ATTR_COLD void Vdecode::final() {
    Vdecode___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecode::hierName() const { return vlSymsp->name(); }
const char* Vdecode::modelName() const { return "Vdecode"; }
unsigned Vdecode::threads() const { return 1; }
