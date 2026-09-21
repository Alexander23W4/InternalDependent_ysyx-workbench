
/*
读写用两套不同的计数器

将valid信号有效的时刻视为事务的开始.

假设一个AXI突发读事务从t0时刻开始, 设备端分别在t1, t2时刻返回数据, AXI延迟模块在t1', t2'时刻向上游返回数据, 
则应有等式(t1 - t0) * r = t1' - t0和(t2 - t0) * r = t2' - t0.

目前可暂不实现突发写事务的校准, 但对于单个写事务, 则仍需校准  (写现在不支持突发)


现在最多支持 4 拍, 只支持每拍 4 字节, 只支持 2'b01 突发
        mbus.arlen <= 4
        mbus.arsize = 3'b010;           // 每拍 4 字节
        mbus.arburst = 2'b01;           // INCR: 多拍时地址要递增

依然只支持 SDRAM 的延迟, 其他的透传
*/

module axi4_delayer(
  input         clock,
  input         reset,

  output        in_arready,
  input         in_arvalid,
  input  [3:0]  in_arid,
  input  [31:0] in_araddr,
  input  [7:0]  in_arlen,
  input  [2:0]  in_arsize,
  input  [1:0]  in_arburst,
  input         in_rready,
  output        in_rvalid,
  output [3:0]  in_rid,
  output [31:0] in_rdata,
  output [1:0]  in_rresp,
  output        in_rlast,
  output        in_awready,
  input         in_awvalid,
  input  [3:0]  in_awid,
  input  [31:0] in_awaddr,
  input  [7:0]  in_awlen,
  input  [2:0]  in_awsize,
  input  [1:0]  in_awburst,
  output        in_wready,
  input         in_wvalid,
  input  [31:0] in_wdata,
  input  [3:0]  in_wstrb,
  input         in_wlast,
                in_bready,
  output        in_bvalid,
  output [3:0]  in_bid,
  output [1:0]  in_bresp,

  input         out_arready,
  output        out_arvalid,
  output [3:0]  out_arid,
  output [31:0] out_araddr,
  output [7:0]  out_arlen,
  output [2:0]  out_arsize,
  output [1:0]  out_arburst,
  output        out_rready,
  input         out_rvalid,
  input  [3:0]  out_rid,
  input  [31:0] out_rdata,
  input  [1:0]  out_rresp,
  input         out_rlast,
  input         out_awready,
  output        out_awvalid,
  output [3:0]  out_awid,
  output [31:0] out_awaddr,
  output [7:0]  out_awlen,
  output [2:0]  out_awsize,
  output [1:0]  out_awburst,
  input         out_wready,
  output        out_wvalid,
  output [31:0] out_wdata,
  output [3:0]  out_wstrb,
  output        out_wlast,
                out_bready,
  input         out_bvalid,
  input  [3:0]  out_bid,
  input  [1:0]  out_bresp
);

  assign in_arready = out_arready;
  assign out_arvalid = in_arvalid;
  assign out_arid = in_arid;
  assign out_araddr = in_araddr;
  assign out_arlen = in_arlen;
  assign out_arsize = in_arsize;
  assign out_arburst = in_arburst;
  assign out_rready = in_rready;
  assign in_rvalid = out_rvalid;
  assign in_rid = out_rid;
  assign in_rdata = out_rdata;
  assign in_rresp = out_rresp;
  assign in_rlast = out_rlast;
  assign in_awready = out_awready;
  assign out_awvalid = in_awvalid;
  assign out_awid = in_awid;
  assign out_awaddr = in_awaddr;
  assign out_awlen = in_awlen;
  assign out_awsize = in_awsize;
  assign out_awburst = in_awburst;
  assign in_wready = out_wready;
  assign out_wvalid = in_wvalid;
  assign out_wdata = in_wdata;
  assign out_wstrb = in_wstrb;
  assign out_wlast = in_wlast;
  assign out_bready = in_bready;
  assign in_bvalid = out_bvalid;
  assign in_bid = out_bid;
  assign in_bresp = out_bresp;


  parameter SDRAM_PERIOD = 100;
  parameter CPU_PERIOD   = 1000;
  parameter R = CPU_PERIOD / SDRAM_PERIOD;
  parameter SDRAM_LOW = 32'ha0000000, SDRAM_HIGH = 32'hbfffffff;   

  parameter MAX_ALLOWED_BURST_LEN = 4;


  reg [32:0] read_counters [0: MAX_ALLOWED_BURST_LEN - 1];   // 最多支持 4 拍
  reg [32:0] write_coutner;

  localparam IDLE = 2'b00, READ = 2'b01, WRITE = 2'b10;
  reg [1:0] state, next;

  always @(posedge clock or posedge reset) begin
    if(reset) begin
      state <= IDLE;
      for (int i = 0; i < MAX_ALLOWED_BURST_LEN ; i++) begin
        read_counters[i] <= '0;
      end
      write_coutner <= '0;

    end else begin
      state <= next;
      
    end
  end



endmodule
