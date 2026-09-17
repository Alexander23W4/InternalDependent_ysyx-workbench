
/*
0xa000_0000~0xa7ff_ffff   (2 对 x32 颗粒字扩展, 每对 64MB)


*/
module sdram_top_apb (
  input         clock,        // APB 时钟
  input         reset,        // APB 复位，拉高时清空状态
  input  [31:0] in_paddr,     // APB 地址总线，访问 SDRAM 的目标地址
  input         in_psel,      // APB 选择信号，表示当前设备被选中
  input         in_penable,   // APB 使能信号，表示传输阶段有效
  input  [2:0]  in_pprot,     // APB 保护位，通常用于权限/安全信息
  input         in_pwrite,    // 1=写，0=读
  input  [31:0] in_pwdata,    // APB 写数据总线
  input  [3:0]  in_pstrb,     // 写字节掩码，控制 4 个字节是否写入
  output        in_pready,    // APB 传输准备好，表示当前传输已完成
  output [31:0] in_prdata,    // APB 读数据总线
  output        in_pslverr,   // APB 错误标志，1 表示访问错误

// 发给 SDRAM 的
  output        sdram_clk,
  output        sdram_cke,
  output        sdram_cs,
  output        sdram_ras,
  output        sdram_cas,
  output        sdram_we,

  output [12:0] sdram_a,
  output [ 1:0] sdram_ba,
  output [ 3:0] sdram_dqm,   // 位扩展: 2 片 x16, 每片 2 个 DQM
  inout  [31:0] sdram_dq,     // 位扩展: 32 位数据总线

  output        sdram_sel
);

  wire sdram_dout_en;
  wire [31:0] sdram_dout;
  assign sdram_dq = sdram_dout_en ? sdram_dout : 32'bz;

  typedef enum [1:0] { ST_IDLE, ST_WAIT_ACCEPT, ST_WAIT_ACK } state_t;
  reg [1:0] state;
  wire req_accept;

  always @(posedge clock) begin
    if (reset) state <= ST_IDLE;
    else
      case (state)
        ST_IDLE: state <= (is_read || is_write ? (req_accept ? ST_WAIT_ACK : ST_WAIT_ACCEPT) : ST_IDLE);
        ST_WAIT_ACCEPT: state <= req_accept ? ST_WAIT_ACK : ST_WAIT_ACCEPT;
        ST_WAIT_ACK: if (in_pready) state <= ST_IDLE;
        default: state <= state;
      endcase
  end

  wire is_read  = ((in_psel && !in_penable) || (state == ST_WAIT_ACCEPT)) && !in_pwrite;
  wire is_write = ((in_psel && !in_penable) || (state == ST_WAIT_ACCEPT)) &&  in_pwrite;

  sdram_axi_core #(
    .SDRAM_MHZ(100),
    .SDRAM_ADDR_W(25),
    .SDRAM_COL_W(9),
    .SDRAM_READ_LATENCY(2)
  ) u_sdram_ctrl(
    .clk_i(clock),
    .rst_i(reset),
    .inport_wr_i(is_write ? in_pstrb : 4'b0),
    .inport_rd_i(is_read),
    .inport_len_i(0),
    .inport_addr_i(in_paddr),
    .inport_write_data_i(in_pwdata),
    .inport_accept_o(req_accept),
    .inport_ack_o(in_pready),
    .inport_error_o(in_pslverr),
    .inport_read_data_o(in_prdata),

    .sdram_clk_o(sdram_clk),
    .sdram_cke_o(sdram_cke),
    .sdram_cs_o(sdram_cs),
    .sdram_ras_o(sdram_ras),
    .sdram_cas_o(sdram_cas),
    .sdram_we_o(sdram_we),

    .sdram_dqm_o(sdram_dqm),
    .sdram_addr_o(sdram_a),
    .sdram_ba_o(sdram_ba),
    .sdram_data_input_i(sdram_dq),
    .sdram_data_output_o(sdram_dout),
    .sdram_data_out_en_o(sdram_dout_en),

    .sdram_sel_o(sdram_sel)
  );

endmodule
