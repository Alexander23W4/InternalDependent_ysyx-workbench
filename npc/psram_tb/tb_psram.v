`timescale 1ns/1ps

// 独立验证 PSRAM 颗粒模型: 直接例化 psram_top_apb(控制器) + psram(颗粒), 手工发 APB 事务。
// 不经过 AM / SoC, 所以和 linker script 的状态无关。
module tb;
  reg clock = 0;
  reg reset = 1;
  always #1 clock = ~clock;

  reg  [31:0] in_paddr   = 0;
  reg         in_psel    = 0;
  reg         in_penable = 0;
  reg  [2:0]  in_pprot   = 3'b0;
  reg         in_pwrite  = 0;
  reg  [31:0] in_pwdata  = 0;
  reg  [3:0]  in_pstrb   = 0;
  wire        in_pready;
  wire [31:0] in_prdata;
  wire        in_pslverr;

  wire        qspi_sck, qspi_ce_n;
  wire [3:0]  qspi_dio;

  psram_top_apb u_ctrl (
    .clock(clock), .reset(reset),
    .in_paddr(in_paddr), .in_psel(in_psel), .in_penable(in_penable), .in_pprot(in_pprot),
    .in_pwrite(in_pwrite), .in_pwdata(in_pwdata), .in_pstrb(in_pstrb),
    .in_pready(in_pready), .in_prdata(in_prdata), .in_pslverr(in_pslverr),
    .qspi_sck(qspi_sck), .qspi_ce_n(qspi_ce_n), .qspi_dio(qspi_dio)
  );

  psram u_psram (
    .sck(qspi_sck), .ce_n(qspi_ce_n), .dio(qspi_dio)
  );

  task apb_write(input [31:0] addr, input [31:0] data, input [3:0] strb);
    integer guard;
    begin
      @(posedge clock);
      in_paddr = addr; in_pwdata = data; in_pstrb = strb;
      in_pwrite = 1'b1; in_psel = 1'b1; in_penable = 1'b0;
      @(posedge clock);
      in_penable = 1'b1;
      guard = 0;
      while (!in_pready && guard < 100000) begin @(posedge clock); guard = guard + 1; end
      if (guard >= 100000) $display("  [TIMEOUT] write @%08x", addr);
      @(posedge clock);
      in_psel = 1'b0; in_penable = 1'b0; in_pwrite = 1'b0;
      @(posedge clock);
    end
  endtask

  task apb_read(input [31:0] addr, output [31:0] data);
    integer guard;
    begin
      @(posedge clock);
      in_paddr = addr; in_pstrb = 4'hf; in_pwrite = 1'b0; in_psel = 1'b1; in_penable = 1'b0;
      @(posedge clock);
      in_penable = 1'b1;
      guard = 0;
      while (!in_pready && guard < 100000) begin @(posedge clock); guard = guard + 1; end
      if (guard >= 100000) $display("  [TIMEOUT] read @%08x", addr);
      data = in_prdata;
      @(posedge clock);
      in_psel = 1'b0; in_penable = 1'b0;
      @(posedge clock);
    end
  endtask

  reg [31:0] r;
  integer fails = 0;
  task check(input [31:0] addr, input [31:0] exp);
    begin
      apb_read(addr, r);
      if (r !== exp) begin
        $display("FAIL @%08x : got %08x expect %08x", addr, r, exp);
        fails = fails + 1;
      end else begin
        $display("ok   @%08x = %08x", addr, r);
      end
    end
  endtask

  initial begin
    repeat (10) @(posedge clock);
    reset = 0;
    repeat (5) @(posedge clock);

    // 1. 整字写 + 整字读
    apb_write(32'h80000000, 32'hDEADBEEF, 4'hf);
    check(32'h80000000, 32'hDEADBEEF);

    apb_write(32'h80000004, 32'h0000AA55, 4'hf);
    check(32'h80000004, 32'h0000AA55);

    // 2. 同一个字写两次, 确认能覆盖
    apb_write(32'h80000000, 32'h11223344, 4'hf);
    check(32'h80000000, 32'h11223344);

    // 3. 字节写: paddr 给的是完整字节地址, pstrb 只是指出数据在哪个 lane
    //    (控制器会把选中的那个字节放到 byte0, 再写到 paddr 指定的地址)
    //    写 0x80000011 这个字节 -> 回读 0x80000010 这个字应该是 0x0000BB00
    apb_write(32'h80000011, 32'h0000BB00, 4'b0010);
    check(32'h80000010, 32'h0000BB00);

    // 3b. 字节写 at offset 0
    apb_write(32'h80000020, 32'h000000CC, 4'b0001);
    check(32'h80000020, 32'h000000CC);

    // 3c. 半字写 at offset 0
    apb_write(32'h80000030, 32'h0000DDEE, 4'b0011);
    check(32'h80000030, 32'h0000DDEE);

    // 4. 地址线: 不同地址不能串
    apb_write(32'h80000100, 32'h12345678, 4'hf);
    apb_write(32'h80000200, 32'h87654321, 4'hf);
    check(32'h80000100, 32'h12345678);
    check(32'h80000200, 32'h87654321);

    // 5. 连续读同一个地址
    check(32'h80000004, 32'h0000AA55);
    check(32'h80000004, 32'h0000AA55);

    if (fails == 0) $display("\n==== ALL PASS ====");
    else            $display("\n==== %0d FAIL ====", fails);
    $finish;
  end
endmodule
