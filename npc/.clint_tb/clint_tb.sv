// 临时 testbench: 验证 axi_clint.sv 的功能和"错误也走完状态机"。
// 不是要提交的东西, 验完就删。
`timescale 1ns/1ps

module clint_tb;
    logic clock = 1'b0;
    logic reset = 1'b1;

    always #5 clock = ~clock;

    ysyx_26040135_AXI4 bus();
    ysyx_26040135_AXI_CLINT dut (.bus(bus), .clock(clock), .reset(reset));

    int errors = 0;

    task automatic check(input string name, input logic cond);
        if (!cond) begin
            $display("  FAIL  %s", name);
            errors++;
        end else begin
            $display("  ok    %s", name);
        end
    endtask

    // 单拍读: 返回数据和响应
    task automatic do_read(input [31:0] addr, output [31:0] data, output [1:0] resp, output logic last);
        bus.araddr  = addr;
        bus.arid    = 4'h5;
        bus.arlen   = 8'h00;
        bus.arsize  = 3'b010;
        bus.arburst = 2'b01;
        bus.arvalid = 1'b1;
        @(posedge clock);
        while (!bus.arready) @(posedge clock);
        bus.arvalid = 1'b0;
        @(posedge clock);
        while (!bus.rvalid) @(posedge clock);
        data = bus.rdata; resp = bus.rresp; last = bus.rlast;
        bus.rready = 1'b1;
        @(posedge clock);
        bus.rready = 1'b0;
        @(posedge clock);
    endtask

    // 写: same_cycle=1 时 AW/W 同一拍发(和 axi_lsu.sv 一样), 否则先 AW 再 W
    task automatic do_write(input [31:0] addr, input [31:0] data, input logic same_cycle,
                            output [1:0] resp_in);
        bus.awaddr  = addr;
        bus.awid    = 4'h3;
        bus.awlen   = 8'h00;
        bus.awsize  = 3'b010;
        bus.awburst = 2'b01;
        bus.awvalid = 1'b1;
        bus.wdata   = data;
        bus.wstrb   = 4'b1111;
        bus.wlast   = 1'b1;
        bus.wvalid  = same_cycle;
        @(posedge clock);
        while (!bus.awready) @(posedge clock);
        bus.awvalid = 1'b0;
        if (!same_cycle) begin
            @(posedge clock);
            bus.wvalid = 1'b1;
            @(posedge clock);
            while (!bus.wready) @(posedge clock);
            bus.wvalid = 1'b0;
        end else begin
            while (!bus.wready) @(posedge clock);
            bus.wvalid = 1'b0;
        end
        @(posedge clock);
        while (!bus.bvalid) @(posedge clock);
        resp_in = bus.bresp;
        bus.bready = 1'b1;
        @(posedge clock);
        bus.bready = 1'b0;
        @(posedge clock);
    endtask

    logic [31:0] d0, d1, dh, dx;
    logic [1:0]  r0, r1, rh, rx, bw, bw2;
    logic        l0, l1, lh, lx;

    initial begin
        bus.arvalid = 1'b0; bus.araddr = 32'b0; bus.arid = 4'b0;
        bus.arlen = 8'b0; bus.arsize = 3'b0; bus.arburst = 2'b0;
        bus.rready = 1'b0;
        bus.awvalid = 1'b0; bus.awaddr = 32'b0; bus.awid = 4'b0;
        bus.awlen = 8'b0; bus.awsize = 3'b0; bus.awburst = 2'b0;
        bus.wvalid = 1'b0; bus.wdata = 32'b0; bus.wstrb = 4'b0; bus.wlast = 1'b0;
        bus.bready = 1'b0;

        repeat (4) @(posedge clock);
        reset = 1'b0;

        $display("--- 1. 读 mtime[31:0] (0x0200_0000) ---");
        do_read(32'h0200_0000, d0, r0, l0);
        check("resp = OKAY",   r0 == 2'b00);
        check("rlast = 1",     l0 == 1'b1);
        check("不是 stuck 在 0", d0 != 32'h0);

        $display("--- 2. 隔几拍再读一次, mtime 应该在涨 ---");
        repeat (10) @(posedge clock);
        do_read(32'h0200_0000, d1, r1, l1);
        check("resp = OKAY",   r1 == 2'b00);
        check("mtime 递增",    d1 > d0);

        $display("--- 3. 读 mtime[63:32] (0x0200_0004) ---");
        do_read(32'h0200_0004, dh, rh, lh);
        check("resp = OKAY",   rh == 2'b00);
        check("高位很小(刚上电)", dh == 32'h0);

        $display("--- 4. 错误访问地址 0x0200_0010 ---");
        do_read(32'h0200_0010, dx, rx, lx);
        check("resp = SLVERR", rx == 2'b10);
        check("rlast = 1",     lx == 1'b1);

        $display("--- 5. 写 mtime (只读设备, 应该报错) ---");
        do_write(32'h0200_0000, 32'hdead_beef, 1'b1, bw);
        check("bresp = SLVERR", bw == 2'b10);

        $display("--- 6. 写错误地址, 且 AW/W 分两拍发 ---");
        do_write(32'h0200_0099, 32'h1234_5678, 1'b0, bw2);
        check("bresp = SLVERR", bw2 == 2'b10);

        $display("--- 7. 出错之后总线还能不能用(不能锁死) ---");
        do_read(32'h0200_0000, dx, rx, lx);
        check("resp = OKAY",   rx == 2'b00);
        check("mtime 还在涨",  dx > d1);

        if (errors == 0) $display("\n==== 全部通过 ====");
        else             $display("\n==== 失败 %0d 项 ====", errors);
        $finish;
    end
endmodule
