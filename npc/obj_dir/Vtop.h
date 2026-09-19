// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class Vtop___024unit;
class Vtop_ysyx_26040135_AXI4;


// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&externalPins_gpio_seg_0,7,0);
    VL_OUT8(&externalPins_gpio_seg_1,7,0);
    VL_OUT8(&externalPins_gpio_seg_2,7,0);
    VL_OUT8(&externalPins_gpio_seg_3,7,0);
    VL_OUT8(&externalPins_gpio_seg_4,7,0);
    VL_OUT8(&externalPins_gpio_seg_5,7,0);
    VL_OUT8(&externalPins_gpio_seg_6,7,0);
    VL_OUT8(&externalPins_gpio_seg_7,7,0);
    VL_IN8(&externalPins_ps2_clk,0,0);
    VL_IN8(&externalPins_ps2_data,0,0);
    VL_OUT8(&externalPins_vga_r,7,0);
    VL_OUT8(&externalPins_vga_g,7,0);
    VL_OUT8(&externalPins_vga_b,7,0);
    VL_OUT8(&externalPins_vga_hsync,0,0);
    VL_OUT8(&externalPins_vga_vsync,0,0);
    VL_OUT8(&externalPins_vga_valid,0,0);
    VL_IN8(&externalPins_uart_rx,0,0);
    VL_OUT8(&externalPins_uart_tx,0,0);
    VL_OUT16(&externalPins_gpio_out,15,0);
    VL_IN16(&externalPins_gpio_in,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop___024unit* const __PVT____024unit;
    Vtop_ysyx_26040135_AXI4* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu;
    Vtop_ysyx_26040135_AXI4* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu;
    Vtop_ysyx_26040135_AXI4* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master;
    Vtop_ysyx_26040135_AXI4* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint;
    Vtop_ysyx_26040135_AXI4* const __PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void check_end(int* period_end);
    static void check_error(int* ifu_error, int* lsu_error, int* master_validation_error);
    static void debug_read_all(int* dbg_regs, int* pc, int* mstatus, int* mepc, int* mcause, int* mtvec, long long* mcycle, int* instr);
    static void get_ifu_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_ifu_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_lsu_read_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_lsu_read_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_lsu_write_region_counts(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_lsu_write_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_region_cycles(unsigned long long* out_flash, unsigned long long* out_sram, unsigned long long* out_sdram, unsigned long long* out_other);
    static void get_unit_cycles(unsigned long long* out_ifu_cycles, unsigned long long* out_lsu_cycles, unsigned long long* out_lsu_read_cycles, unsigned long long* out_lsu_write_cycles);
    static void halt(int* endprog);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
