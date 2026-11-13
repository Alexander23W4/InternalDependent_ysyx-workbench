/*
 * Simplified AXI interconnect kept in plain Verilog form for Yosys 0.9 compatibility.
 * It performs the minimum routing needed by the SoC: CLINT addresses stay local,
 * everything else is forwarded to the external master port.
 */

module ysyx_26040135_AXI4_Xbar (
    input  logic clock,
    input  logic reset,

    input  logic [31:0] ifu_s_araddr,
    input  logic        ifu_s_arvalid,
    output logic        ifu_s_arready,
    input  logic [3:0]  ifu_s_arid,
    input  logic [7:0]  ifu_s_arlen,
    input  logic [2:0]  ifu_s_arsize,
    input  logic [1:0]  ifu_s_arburst,
    output logic [31:0] ifu_s_rdata,
    output logic [1:0]  ifu_s_rresp,
    output logic        ifu_s_rvalid,
    input  logic        ifu_s_rready,
    output logic [3:0]  ifu_s_rid,
    output logic        ifu_s_rlast,

    input  logic [31:0] ifu_s_awaddr,
    input  logic        ifu_s_awvalid,
    output logic        ifu_s_awready,
    input  logic [3:0]  ifu_s_awid,
    input  logic [7:0]  ifu_s_awlen,
    input  logic [2:0]  ifu_s_awsize,
    input  logic [1:0]  ifu_s_awburst,
    input  logic [31:0] ifu_s_wdata,
    input  logic [3:0]  ifu_s_wstrb,
    input  logic        ifu_s_wvalid,
    input  logic        ifu_s_wlast,
    output logic        ifu_s_wready,
    output logic [3:0]  ifu_s_bid,
    output logic [1:0]  ifu_s_bresp,
    output logic        ifu_s_bvalid,
    input  logic        ifu_s_bready,

    input  logic [31:0] lsu_s_araddr,
    input  logic        lsu_s_arvalid,
    output logic        lsu_s_arready,
    input  logic [3:0]  lsu_s_arid,
    input  logic [7:0]  lsu_s_arlen,
    input  logic [2:0]  lsu_s_arsize,
    input  logic [1:0]  lsu_s_arburst,
    output logic [31:0] lsu_s_rdata,
    output logic [1:0]  lsu_s_rresp,
    output logic        lsu_s_rvalid,
    input  logic        lsu_s_rready,
    output logic [3:0]  lsu_s_rid,
    output logic        lsu_s_rlast,

    input  logic [31:0] lsu_s_awaddr,
    input  logic        lsu_s_awvalid,
    output logic        lsu_s_awready,
    input  logic [3:0]  lsu_s_awid,
    input  logic [7:0]  lsu_s_awlen,
    input  logic [2:0]  lsu_s_awsize,
    input  logic [1:0]  lsu_s_awburst,
    input  logic [31:0] lsu_s_wdata,
    input  logic [3:0]  lsu_s_wstrb,
    input  logic        lsu_s_wvalid,
    input  logic        lsu_s_wlast,
    output logic        lsu_s_wready,
    output logic [3:0]  lsu_s_bid,
    output logic [1:0]  lsu_s_bresp,
    output logic        lsu_s_bvalid,
    input  logic        lsu_s_bready,

    output logic [31:0] m_m_araddr,
    output logic        m_m_arvalid,
    input  logic        m_m_arready,
    output logic [3:0]  m_m_arid,
    output logic [7:0]  m_m_arlen,
    output logic [2:0]  m_m_arsize,
    output logic [1:0]  m_m_arburst,
    input  logic [31:0] m_m_rdata,
    input  logic [1:0]  m_m_rresp,
    input  logic        m_m_rvalid,
    output logic        m_m_rready,
    input  logic [3:0]  m_m_rid,
    input  logic        m_m_rlast,

    output logic [31:0] m_m_awaddr,
    output logic        m_m_awvalid,
    input  logic        m_m_awready,
    output logic [3:0]  m_m_awid,
    output logic [7:0]  m_m_awlen,
    output logic [2:0]  m_m_awsize,
    output logic [1:0]  m_m_awburst,
    output logic [31:0] m_m_wdata,
    output logic [3:0]  m_m_wstrb,
    output logic        m_m_wvalid,
    output logic        m_m_wlast,
    input  logic        m_m_wready,
    input  logic [3:0]  m_m_bid,
    input  logic [1:0]  m_m_bresp,
    input  logic        m_m_bvalid,
    output logic        m_m_bready,

    output logic [31:0] clint_m_araddr,
    output logic        clint_m_arvalid,
    input  logic        clint_m_arready,
    output logic [3:0]  clint_m_arid,
    output logic [7:0]  clint_m_arlen,
    output logic [2:0]  clint_m_arsize,
    output logic [1:0]  clint_m_arburst,
    input  logic [31:0] clint_m_rdata,
    input  logic [1:0]  clint_m_rresp,
    input  logic        clint_m_rvalid,
    output logic        clint_m_rready,
    input  logic [3:0]  clint_m_rid,
    input  logic        clint_m_rlast,

    output logic [31:0] clint_m_awaddr,
    output logic        clint_m_awvalid,
    input  logic        clint_m_awready,
    output logic [3:0]  clint_m_awid,
    output logic [7:0]  clint_m_awlen,
    output logic [2:0]  clint_m_awsize,
    output logic [1:0]  clint_m_awburst,
    output logic [31:0] clint_m_wdata,
    output logic [3:0]  clint_m_wstrb,
    output logic        clint_m_wvalid,
    output logic        clint_m_wlast,
    input  logic        clint_m_wready,
    input  logic [3:0]  clint_m_bid,
    input  logic [1:0]  clint_m_bresp,
    input  logic        clint_m_bvalid,
    output logic        clint_m_bready
);

    wire ifu_clint = (ifu_s_araddr[31:16] == 16'h0200) || (ifu_s_awaddr[31:16] == 16'h0200);
    wire lsu_clint = (lsu_s_araddr[31:16] == 16'h0200) || (lsu_s_awaddr[31:16] == 16'h0200);

    wire read_dst_clint = lsu_s_arvalid ? lsu_clint : ifu_s_arvalid ? ifu_clint : 1'b0;
    wire write_dst_clint = lsu_s_awvalid ? lsu_clint : ifu_s_awvalid ? ifu_clint : 1'b0;

    assign ifu_s_arready = read_dst_clint ? clint_m_arready : m_m_arready;
    assign lsu_s_arready = read_dst_clint ? clint_m_arready : m_m_arready;
    assign ifu_s_rdata = read_dst_clint ? clint_m_rdata : m_m_rdata;
    assign lsu_s_rdata = read_dst_clint ? clint_m_rdata : m_m_rdata;
    assign ifu_s_rresp = read_dst_clint ? clint_m_rresp : m_m_rresp;
    assign lsu_s_rresp = read_dst_clint ? clint_m_rresp : m_m_rresp;
    assign ifu_s_rvalid = read_dst_clint ? clint_m_rvalid : m_m_rvalid;
    assign lsu_s_rvalid = read_dst_clint ? clint_m_rvalid : m_m_rvalid;
    assign ifu_s_rid = read_dst_clint ? clint_m_rid : m_m_rid;
    assign lsu_s_rid = read_dst_clint ? clint_m_rid : m_m_rid;
    assign ifu_s_rlast = read_dst_clint ? clint_m_rlast : m_m_rlast;
    assign lsu_s_rlast = read_dst_clint ? clint_m_rlast : m_m_rlast;
    assign clint_m_rready = read_dst_clint ? (ifu_s_rready | lsu_s_rready) : 1'b0;
    assign m_m_rready = !read_dst_clint ? (ifu_s_rready | lsu_s_rready) : 1'b0;

    assign clint_m_araddr = lsu_s_arvalid ? lsu_s_araddr : ifu_s_araddr;
    assign clint_m_arid = lsu_s_arvalid ? lsu_s_arid : ifu_s_arid;
    assign clint_m_arlen = lsu_s_arvalid ? lsu_s_arlen : ifu_s_arlen;
    assign clint_m_arsize = lsu_s_arvalid ? lsu_s_arsize : ifu_s_arsize;
    assign clint_m_arburst = lsu_s_arvalid ? lsu_s_arburst : ifu_s_arburst;
    assign clint_m_arvalid = (lsu_s_arvalid && lsu_clint) || (ifu_s_arvalid && ifu_clint);

    assign m_m_araddr = lsu_s_arvalid ? lsu_s_araddr : ifu_s_araddr;
    assign m_m_arid = lsu_s_arvalid ? lsu_s_arid : ifu_s_arid;
    assign m_m_arlen = lsu_s_arvalid ? lsu_s_arlen : ifu_s_arlen;
    assign m_m_arsize = lsu_s_arvalid ? lsu_s_arsize : ifu_s_arsize;
    assign m_m_arburst = lsu_s_arvalid ? lsu_s_arburst : ifu_s_arburst;
    assign m_m_arvalid = (lsu_s_arvalid && !lsu_clint) || (ifu_s_arvalid && !ifu_clint);

    assign ifu_s_awready = write_dst_clint ? clint_m_awready : m_m_awready;
    assign lsu_s_awready = write_dst_clint ? clint_m_awready : m_m_awready;
    assign ifu_s_wready = write_dst_clint ? clint_m_wready : m_m_wready;
    assign lsu_s_wready = write_dst_clint ? clint_m_wready : m_m_wready;
    assign ifu_s_bvalid = m_m_bvalid || clint_m_bvalid;
    assign lsu_s_bvalid = m_m_bvalid || clint_m_bvalid;
    assign ifu_s_bid = ifu_s_awvalid ? (write_dst_clint ? clint_m_bid : m_m_bid) : 4'b0;
    assign lsu_s_bid = lsu_s_awvalid ? (write_dst_clint ? clint_m_bid : m_m_bid) : 4'b0;
    assign ifu_s_bresp = ifu_s_awvalid ? (write_dst_clint ? clint_m_bresp : m_m_bresp) : 2'b0;
    assign lsu_s_bresp = lsu_s_awvalid ? (write_dst_clint ? clint_m_bresp : m_m_bresp) : 2'b0;
    assign clint_m_bready = write_dst_clint ? (ifu_s_bready || lsu_s_bready) : 1'b0;
    assign m_m_bready = !write_dst_clint ? (ifu_s_bready || lsu_s_bready) : 1'b0;

    assign clint_m_awvalid = (lsu_s_awvalid && lsu_clint) || (ifu_s_awvalid && ifu_clint);
    assign m_m_awvalid     = (lsu_s_awvalid && !lsu_clint) || (ifu_s_awvalid && !ifu_clint);

    assign clint_m_awaddr = lsu_s_awvalid ? lsu_s_awaddr : ifu_s_awaddr;
    assign clint_m_awid = lsu_s_awvalid ? lsu_s_awid : ifu_s_awid;
    assign clint_m_awlen = lsu_s_awvalid ? lsu_s_awlen : ifu_s_awlen;
    assign clint_m_awsize = lsu_s_awvalid ? lsu_s_awsize : ifu_s_awsize;
    assign clint_m_awburst = lsu_s_awvalid ? lsu_s_awburst : ifu_s_awburst;
    assign clint_m_wdata = lsu_s_awvalid ? lsu_s_wdata : ifu_s_wdata;
    assign clint_m_wstrb = lsu_s_awvalid ? lsu_s_wstrb : ifu_s_wstrb;
    assign clint_m_wlast = lsu_s_awvalid ? lsu_s_wlast : ifu_s_wlast;
    assign clint_m_wvalid = (lsu_s_awvalid && lsu_clint) || (ifu_s_awvalid && ifu_clint);

    assign m_m_awaddr = lsu_s_awvalid ? lsu_s_awaddr : ifu_s_awaddr;
    assign m_m_awid = lsu_s_awvalid ? lsu_s_awid : ifu_s_awid;
    assign m_m_awlen = lsu_s_awvalid ? lsu_s_awlen : ifu_s_awlen;
    assign m_m_awsize = lsu_s_awvalid ? lsu_s_awsize : ifu_s_awsize;
    assign m_m_awburst = lsu_s_awvalid ? lsu_s_awburst : ifu_s_awburst;
    assign m_m_wdata = lsu_s_awvalid ? lsu_s_wdata : ifu_s_wdata;
    assign m_m_wstrb = lsu_s_awvalid ? lsu_s_wstrb : ifu_s_wstrb;
    assign m_m_wlast = lsu_s_awvalid ? lsu_s_wlast : ifu_s_wlast;
    assign m_m_wvalid = (lsu_s_awvalid && !lsu_clint) || (ifu_s_awvalid && !ifu_clint);

endmodule
