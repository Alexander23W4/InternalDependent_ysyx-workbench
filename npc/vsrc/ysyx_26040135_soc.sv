// Wrapper module to adapt existing top to ysyxSoC cpu-interface naming
// This module exposes the `io_master_*` and `io_slave_*` AXI interfaces as
// required by ysyxSoC/spec/cpu-interface.md and instantiates the original
// `ysyx_26040135` CPU which currently uses `auto_master_out_*` and
// `auto_slave_in_*` naming.

module ysyx_26040135_soc(
    input  clock,
    input  reset,
    input  io_interrupt,

    // Master AXI interface (to SoC)
    output        io_master_awvalid,
    input         io_master_awready,
    output [3:0]  io_master_awid,
    output [31:0] io_master_awaddr,
    output [7:0]  io_master_awlen,
    output [2:0]  io_master_awsize,
    output [1:0]  io_master_awburst,

    output        io_master_wvalid,
    input         io_master_wready,
    output [31:0] io_master_wdata,
    output [3:0]  io_master_wstrb,
    output        io_master_wlast,

    input         io_master_bvalid,
    output        io_master_bready,
    input  [3:0]  io_master_bid,
    input  [1:0]  io_master_bresp,

    output        io_master_arvalid,
    input         io_master_arready,
    output [3:0]  io_master_arid,
    output [31:0] io_master_araddr,
    output [7:0]  io_master_arlen,
    output [2:0]  io_master_arsize,
    output [1:0]  io_master_arburst,

    input         io_master_rvalid,
    output        io_master_rready,
    input  [3:0]  io_master_rid,
    input  [31:0] io_master_rdata,
    input  [1:0]  io_master_rresp,
    input         io_master_rlast,

    // Slave AXI interface (from SoC)
    input         io_slave_awvalid,
    output        io_slave_awready,
    input  [3:0]  io_slave_awid,
    input  [31:0] io_slave_awaddr,
    input  [7:0]  io_slave_awlen,
    input  [2:0]  io_slave_awsize,
    input  [1:0]  io_slave_awburst,

    input         io_slave_wvalid,
    output        io_slave_wready,
    input  [31:0] io_slave_wdata,
    input  [3:0]  io_slave_wstrb,
    input         io_slave_wlast,

    output        io_slave_bvalid,
    input         io_slave_bready,
    output [3:0]  io_slave_bid,
    output [1:0]  io_slave_bresp,

    input         io_slave_arvalid,
    output        io_slave_arready,
    input  [3:0]  io_slave_arid,
    input  [31:0] io_slave_araddr,
    input  [7:0]  io_slave_arlen,
    input  [2:0]  io_slave_arsize,
    input  [1:0]  io_slave_arburst,

    output        io_slave_rvalid,
    input         io_slave_rready,
    output [3:0]  io_slave_rid,
    output [31:0] io_slave_rdata,
    output [1:0]  io_slave_rresp,
    output        io_slave_rlast
);

    // Instantiate original CPU (keeps existing port names)
    ysyx_26040135 cpu_inst (
        .clock(clock),
        .reset(reset),
        .io_interrupt(io_interrupt),

        // map master -> internal auto_master_out_
        .auto_master_out_awvalid(io_master_awvalid),
        .auto_master_out_awready(io_master_awready),
        .auto_master_out_awid(io_master_awid),
        .auto_master_out_awaddr(io_master_awaddr),
        .auto_master_out_awlen(io_master_awlen),
        .auto_master_out_awsize(io_master_awsize),
        .auto_master_out_awburst(io_master_awburst),

        .auto_master_out_wvalid(io_master_wvalid),
        .auto_master_out_wready(io_master_wready),
        .auto_master_out_wdata(io_master_wdata),
        .auto_master_out_wstrb(io_master_wstrb),
        .auto_master_out_wlast(io_master_wlast),

        .auto_master_out_bvalid(io_master_bvalid),
        .auto_master_out_bready(io_master_bready),
        .auto_master_out_bid(io_master_bid),
        .auto_master_out_bresp(io_master_bresp),

        .auto_master_out_arvalid(io_master_arvalid),
        .auto_master_out_arready(io_master_arready),
        .auto_master_out_arid(io_master_arid),
        .auto_master_out_araddr(io_master_araddr),
        .auto_master_out_arlen(io_master_arlen),
        .auto_master_out_arsize(io_master_arsize),
        .auto_master_out_arburst(io_master_arburst),

        .auto_master_out_rvalid(io_master_rvalid),
        .auto_master_out_rready(io_master_rready),
        .auto_master_out_rid(io_master_rid),
        .auto_master_out_rdata(io_master_rdata),
        .auto_master_out_rresp(io_master_rresp),
        .auto_master_out_rlast(io_master_rlast),

        // map slave -> internal auto_slave_in_
        .auto_slave_in_awvalid(io_slave_awvalid),
        .auto_slave_in_awready(io_slave_awready),
        .auto_slave_in_awid(io_slave_awid),
        .auto_slave_in_awaddr(io_slave_awaddr),
        .auto_slave_in_awlen(io_slave_awlen),
        .auto_slave_in_awsize(io_slave_awsize),
        .auto_slave_in_awburst(io_slave_awburst),

        .auto_slave_in_wvalid(io_slave_wvalid),
        .auto_slave_in_wready(io_slave_wready),
        .auto_slave_in_wdata(io_slave_wdata),
        .auto_slave_in_wstrb(io_slave_wstrb),
        .auto_slave_in_wlast(io_slave_wlast),

        .auto_slave_in_bvalid(io_slave_bvalid),
        .auto_slave_in_bready(io_slave_bready),
        .auto_slave_in_bid(io_slave_bid),
        .auto_slave_in_bresp(io_slave_bresp),

        .auto_slave_in_arvalid(io_slave_arvalid),
        .auto_slave_in_arready(io_slave_arready),
        .auto_slave_in_arid(io_slave_arid),
        .auto_slave_in_araddr(io_slave_araddr),
        .auto_slave_in_arlen(io_slave_arlen),
        .auto_slave_in_arsize(io_slave_arsize),
        .auto_slave_in_arburst(io_slave_arburst),

        .auto_slave_in_rvalid(io_slave_rvalid),
        .auto_slave_in_rready(io_slave_rready),
        .auto_slave_in_rid(io_slave_rid),
        .auto_slave_in_rdata(io_slave_rdata),
        .auto_slave_in_rresp(io_slave_rresp),
        .auto_slave_in_rlast(io_slave_rlast)
    );

endmodule
