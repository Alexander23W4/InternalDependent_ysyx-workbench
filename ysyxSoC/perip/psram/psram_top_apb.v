
/*

ysyxSoC集成了PSRAM控制器的实现, 并将PSRAM存储空间映射到CPU的地址空间0x8000_0000~0x9fff_ffff. 
PSRAM控制器的代码位于ysyxSoC/perip/psram/efabless/目录下, 采用wishbone总线协议, 
我们已经将其封装成APB总线协议 (见ysyxSoC/perip/psram/psram_top_apb.v), 并将其接入到ysyxSoC的APB Xbar中. 

AXI->APB->wishbone->psram

CPU
 │
 │ AXI
 ▼
AXI → APB Bridge
 │
 │ APB
 ▼
APB Xbar
 │
 │ 根据地址选择 PSRAM
 ▼
psram_top_apb
 │
 │ Wishbone
 ▼
EF_PSRAM_CTRL_wb
 │
 │ QSPI
 ▼
PSRAM

其实是 psram_top_apb 把APB信号翻译成 Wishbone 信号, 给到 EF_PSRAM_CTRL_sb(这是一个IP, 无需在意细节, 接受Wishbone信号, 返回QSPI master控制信号), 
后者分别调用read 和 write模块, 返回 QSPI 控制信号给 psram_top_apb, 再给到 PSRAM

所以现在就是只需要 我们实现一个能够接受 QSPI 信号的PSRAM即可 
*/
module psram_top_apb (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

// 这三个信号是转传给 PSRM 的
  output qspi_sck,
  output qspi_ce_n,
  inout  [3:0] qspi_dio
);

  wire [3:0] din, dout, douten;
  wire ack;
  EF_PSRAM_CTRL_wb u0 (
    .clk_i(clock),
    .rst_i(reset),
    .adr_i(in_paddr),
    .dat_i(in_pwdata),
    .dat_o(in_prdata),
    .sel_i(in_pstrb),
    .cyc_i(in_psel),
    .stb_i(in_psel),
    .ack_o(ack),
    .we_i(in_pwrite),
  
    .sck(qspi_sck),
    .ce_n(qspi_ce_n),
    .din(din),    // psram 回传给 cpu 的 数据 信号, qspi_dio -> din -> (给到控制器)dat_o -> in_paddr
    .dout(dout),  // 控制器给 psram 的 控制, 地址, 数据 信号
    .douten(douten)
  );
  
  assign in_pready = ack && in_psel;
  assign in_pslverr = 1'b0;
  assign qspi_dio[0] = douten[0] ? dout[0] : 1'bz;
  assign qspi_dio[1] = douten[1] ? dout[1] : 1'bz;
  assign qspi_dio[2] = douten[2] ? dout[2] : 1'bz;
  assign qspi_dio[3] = douten[3] ? dout[3] : 1'bz;
  assign din = qspi_dio;

endmodule
