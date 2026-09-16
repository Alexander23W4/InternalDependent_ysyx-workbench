// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
// `define FAST_FLASH

/*

 ysyxSoC中的Xbar已经将       
 SPI master 的地址空间 0x1000_1000~0x1000_1fff 和 flash存储空间 0x3000_0000~0x3fff_ffff     
 都映射到 ysyxSoC/perip/spi/rtl/spi_top_apb.v模块中的APB端口, 
 也即, spi_top_apb.v模块中的APB端口能接收上述两段地址空间的请求, 你可以通过检查APB的目标地址区分它们.

若目标地址落在flash存储空间, 则进入XIP模式. 在XIP模式中, SPI master的输入信号由相应状态机决定
状态机依次往SPI master的设备寄存器中写入相应的值, 写入的值与flash_read()基本一致
状态机轮询SPI master的完成标志, 等待SPI master完成数据传输
状态机从SPI master的RX寄存器中读出flash返回的数据, 处理后通过APB返回, 并退出XIP模式
*/

// ---------------------------------------------------------------------------
// 实现 XIP(eXecute In Place)的思路:
//
//   · 目标地址落在 SPI master 地址空间 -> 正常访问, 请求透给 spi_top
//   · 目标地址落在 flash 地址空间      -> 进入 XIP 模式, SPI master 的输入信号改由状态机决定
//
//   XIP 状态机就是把软件版 flash_read()(am/src/riscv/ysyxsoc/trm.c)那套寄存器操作
//   搬到硬件里, 依次做:
//       DIV=1 -> SS=1(选中 flash) -> TX_1=命令+地址 -> TX_0=0 -> CTRL=64|GO
//       -> 轮询 CTRL 的完成标志 -> 读 RX 寄存器 -> 处理后经 APB 返回 -> 退出 XIP
//   flash 只支持读, 对 flash 空间的写请求直接回 pslverr 并报错。
//
// `define FAST_FLASH 时走上面那条"行为级捷径"(直接 DPI-C flash_read, 跳过 SPI, 快);
// 不定义时走真正的 XIP 状态机(慢, 但一个寄存器一个寄存器地打 SPI 时序)。
// ---------------------------------------------------------------------------

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
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

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

  // APB 目标地址是否落在 flash 空间
  wire xip_sel = (in_paddr >= flash_addr_start) && (in_paddr <= flash_addr_end);

  // SPI master 设备寄存器偏移(spi_defines.v: 寄存器由 wb_adr_i[4:2] 选择)
  localparam [4:0] REG_TX0  = 5'h00;
  localparam [4:0] REG_TX1  = 5'h04;
  localparam [4:0] REG_RX0  = 5'h00;
  localparam [4:0] REG_CTRL = 5'h10;
  localparam [4:0] REG_DIV  = 5'h14;
  localparam [4:0] REG_SS   = 5'h18;

  // CTRL: [6:0] CHAR_LEN, [8] GO。CHAR_LEN 就是传输位数本身,
  // 64 位 = 32 位(命令 0x03 + 24 位地址) + 32 位返回数据
  localparam [31:0] CTRL_XFER64 = 32'd64;
  localparam [31:0] CTRL_GO     = 32'h00000100;



  // spi_top 的输入: 正常模式由 APB 请求驱动, XIP 模式由状态机驱动
  wire [4:0]  spi_adr;
  wire [31:0] spi_dat_i;
  wire [3:0]  spi_sel;
  wire        spi_we;
  wire        spi_stb;
  wire        spi_cyc;
  wire [31:0] spi_dat_o;
  wire        spi_ack;
  wire        spi_err;

  spi_top u0_spi_top (
    .wb_clk_i(clock),
    .wb_rst_i(reset),
    .wb_adr_i(spi_adr),
    .wb_dat_i(spi_dat_i),
    .wb_dat_o(spi_dat_o),
    .wb_sel_i(spi_sel),
    .wb_we_i (spi_we),
    .wb_stb_i(spi_stb),
    .wb_cyc_i(spi_cyc),
    .wb_ack_o(spi_ack),
    .wb_err_o(spi_err),
    .wb_int_o(spi_irq_out),

    .ss_pad_o(spi_ss),
    .sclk_pad_o(spi_sck),
    .mosi_pad_o(spi_mosi),
    .miso_pad_i(spi_miso)
  );

`ifdef FAST_FLASH

  // ------------------------------------------------------------------
  // 行为级捷径: flash 地址段的读直接翻译成 DPI-C flash_read(), 跳过 SPI。
  // 注意这里必须用 xip_sel 把 flash 的请求从 spi_top 那边挡掉,
  // 否则 XIP 取指会被当成对 SPI 寄存器的访问, 把 master 的状态搅乱。
  // ------------------------------------------------------------------
  wire [31:0] flash_data;
  parameter invalid_cmd = 8'h0;
  flash_cmd flash_cmd_i(
    .clock(clock),
    .valid(in_psel && !in_penable && xip_sel),
    .cmd(in_pwrite ? invalid_cmd : 8'h03),
    .addr({8'b0, in_paddr[23:2], 2'b0}),
    .data(flash_data)
  );

  assign spi_adr   = in_paddr[4:0];
  assign spi_dat_i = in_pwdata;
  assign spi_sel   = in_pstrb;
  assign spi_we    = in_pwrite;
  assign spi_stb   = in_psel    && !xip_sel;
  assign spi_cyc   = in_penable && !xip_sel;

  assign in_prdata  = xip_sel ? flash_data : spi_dat_o;
  assign in_pready  = xip_sel ? (in_psel && in_penable && !in_pwrite) : spi_ack;
  assign in_pslverr = xip_sel ? in_pwrite : spi_err;

`else

  // ------------------------------------------------------------------
  // 真正的 XIP: 用状态机按顺序访问 SPI master 的寄存器
  // ------------------------------------------------------------------
  localparam [3:0]
    S_IDLE  = 4'd0,   // 等 APB 上的 flash 读请求
    S_DIV   = 4'd1,   // 写 DIVIDER = 1
    S_SS    = 4'd2,   // 写 SS = 1, 选中 flash(spi.ss[0])
    S_TX1   = 4'd3,   // 写 TX_1 = 0x03 + 24 位地址
    S_TX0   = 4'd4,   // 写 TX_0 = 0(后面 32 拍在线上发什么无所谓)
    S_CTRL  = 4'd5,   // 写 CTRL = 64 | GO
    S_POLL  = 4'd6,   // 轮询 CTRL[GO], 等传输结束
    S_RX    = 4'd7,   // 把地址切到 RX_0
    S_RXLAT = 4'd8,   // 采样 RX_0
    S_UNSS  = 4'd9,   // 写 SS = 0, 放开片选
    S_DONE  = 4'd10;  // 把数据交给 APB

  reg [3:0]  state;
  reg [31:0] xip_addr;      // 锁存的 flash 地址
  reg [31:0] xip_rdata;     // 读回来的 32 位数据
  reg        xip_ready;     // 数据已就绪
  reg        poll_go_seen;  // 轮询用: 先确认见到 GO=1, 再等它掉 0
  reg        wr_err_seen;

  reg [4:0]  xip_adr;
  reg [31:0] xip_dat;
  reg        xip_we;
  reg        xip_req;       // 只拉高一拍, 代表一次寄存器访问

  wire xip_busy = (state != S_IDLE);

  assign spi_adr   = xip_busy ? xip_adr   : in_paddr[4:0];
  assign spi_dat_i = xip_busy ? xip_dat   : in_pwdata;
  assign spi_sel   = xip_busy ? 4'hf      : in_pstrb;
  assign spi_we    = xip_busy ? xip_we    : in_pwrite;
  assign spi_stb   = xip_busy ? xip_req   : (in_psel    && !xip_sel);
  assign spi_cyc   = xip_busy ? xip_req   : (in_penable && !xip_sel);

  // flash 只认 03h 读命令: 8 位命令 + 24 位地址
  wire [31:0] xip_cmd = {8'h03, xip_addr[23:0]};
  // 颗粒吐出来的是"低字节先出", 收完要翻一次字节序
  wire [31:0] rx_bswap = {spi_dat_o[7:0], spi_dat_o[15:8], spi_dat_o[23:16], spi_dat_o[31:24]};

  always @(*) begin
    xip_adr = REG_RX0;
    xip_dat = 32'b0;
    xip_we  = 1'b0;
    xip_req = 1'b0;                 // 默认不发访问, 只在下面这些状态拉高一拍
    case (state)
      S_DIV:  begin xip_adr = REG_DIV;  xip_dat = 32'd1;   xip_we = 1'b1; xip_req = 1'b1; end
      S_SS:   begin xip_adr = REG_SS;   xip_dat = 32'd1;   xip_we = 1'b1; xip_req = 1'b1; end
      S_TX1:  begin xip_adr = REG_TX1;  xip_dat = xip_cmd; xip_we = 1'b1; xip_req = 1'b1; end
      S_TX0:  begin xip_adr = REG_TX0;  xip_dat = 32'b0;   xip_we = 1'b1; xip_req = 1'b1; end
      S_CTRL: begin xip_adr = REG_CTRL; xip_dat = CTRL_XFER64 | CTRL_GO;
                                            xip_we = 1'b1; xip_req = 1'b1; end
      S_POLL:                                xip_adr = REG_CTRL;   // 只读, 不发总线访问
      S_RX,
      S_RXLAT:                               xip_adr = REG_RX0;
      S_UNSS: begin xip_adr = REG_SS;   xip_dat = 32'b0;   xip_we = 1'b1; xip_req = 1'b1; end
      default: ;
    endcase
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      state        <= S_IDLE;
      xip_addr     <= 32'b0;
      xip_rdata    <= 32'b0;
      xip_ready    <= 1'b0;
      poll_go_seen <= 1'b0;
      wr_err_seen  <= 1'b0;
    end else begin
      case (state)
        // APB 的 setup 阶段(psel=1, penable=0)代表一笔新事务的开始
        S_IDLE: begin
          xip_ready    <= 1'b0;
          poll_go_seen <= 1'b0;
          if (xip_sel && in_psel && !in_penable && !in_pwrite) begin
            xip_addr <= in_paddr;
            state    <= S_DIV;
          end
        end

        S_DIV:  state <= S_SS;
        S_SS:   state <= S_TX1;
        S_TX1:  state <= S_TX0;
        S_TX0:  state <= S_CTRL;
        S_CTRL: state <= S_POLL;

        // wb_dat_o 是打了拍的: 刚写完 CTRL 那一拍看到的 GO 还是旧值,
        // 所以先确认见到 GO=1, 再等它掉 0
        S_POLL: begin
          if (spi_dat_o[8]) poll_go_seen <= 1'b1;
          else if (poll_go_seen) state <= S_RX;
        end

        S_RX:    state <= S_RXLAT;
        S_RXLAT: begin
          xip_rdata <= rx_bswap;
          state     <= S_UNSS;
        end

        // flash 颗粒里是 "wire reset = ss;", 片选拉高才会复位它的状态机;
        // 不放开的话下一次事务它还停在 data_t, 会把命令也当数据。
        S_UNSS: state <= S_DONE;

        S_DONE: begin
          xip_ready <= 1'b1;
          if (in_psel && in_penable) state <= S_IDLE;   // 本拍 APB 把数据取走
        end

        default: state <= S_IDLE;
      endcase
    end
  end

  // flash 空间不支持写: 报错 + pslverr, 方便及时定位
  always @(posedge clock) begin
    if (xip_sel && in_psel && !in_penable && in_pwrite && !wr_err_seen) begin
      $display("ERROR: spi_top_apb: flash 空间(0x%08x)不支持写操作", in_paddr);
      wr_err_seen <= 1'b1;
    end
  end

  assign in_prdata  = xip_sel ? xip_rdata : spi_dat_o;
  assign in_pready  = xip_sel ? (in_psel && in_penable && (xip_ready || in_pwrite)) : spi_ack;
  assign in_pslverr = xip_sel ? in_pwrite : spi_err;

`endif // FAST_FLASH

endmodule
