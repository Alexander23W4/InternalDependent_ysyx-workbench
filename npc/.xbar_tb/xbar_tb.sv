// 临时 testbench: 验证 xbar 把 CLINT 和"送到 SoC 的 m_m"分对了路, 且不会死锁。
// 验完就删。
`timescale 1ns/1ps

module xbar_tb;
    logic clock = 1'b0;
    logic reset = 1'b1;
    always #5 clock = ~clock;

    ysyx_26040135_AXI4 ifu(), lsu(), mm(), cm();

    ysyx_26040135_AXI4_Xbar xbar (
        .clock(clock), .reset(reset),
        .ifu_s(ifu.slave), .lsu_s(lsu.slave),
        .m_m(mm.master), .clint_m(cm.master)
    );

    ysyx_26040135_AXI_CLINT clint (.bus(cm.slave), .clock(clock), .reset(reset));

    // ---- 假 m_m 从设备: 读返回 0xCAFE_0000|addr[7:0], 写回 OKAY ----
    logic mm_rpend;
    always_ff @(posedge clock or posedge reset) begin
        if (reset) mm_rpend <= 1'b0;
        else begin
            if (mm.arvalid && mm.arready) mm_rpend <= 1'b1;
            if (mm.rvalid  && mm.rready ) mm_rpend <= 1'b0;
        end
    end
    assign mm.arready = !mm_rpend;
    assign mm.rvalid  = mm_rpend;
    assign mm.rdata   = 32'hCAFE_0000 | {24'b0, mm.araddr[7:0]};
    assign mm.rresp   = 2'b00;
    assign mm.rlast   = 1'b1;
    assign mm.rid     = mm.arid;

    assign mm.awready = 1'b1;
    assign mm.wready  = 1'b1;
    assign mm.bvalid  = 1'b1;
    assign mm.bresp   = 2'b00;
    assign mm.bid     = mm.awid;

    int errors = 0;
    task automatic check(input string name, input logic cond);
        if (!cond) begin $display("  FAIL  %s", name); errors++; end
        else             $display("  ok    %s", name);
    endtask

    task automatic do_read(input [31:0] addr, output [31:0] data, output [1:0] resp);
        lsu.araddr = addr; lsu.arid = 4'h1; lsu.arlen = 8'h0;
        lsu.arsize = 3'b010; lsu.arburst = 2'b01;
        lsu.arvalid = 1'b1;
        @(posedge clock);
        while (!lsu.arready) @(posedge clock);
        lsu.arvalid = 1'b0;
        @(posedge clock);
        while (!lsu.rvalid) @(posedge clock);
        data = lsu.rdata; resp = lsu.rresp;
        check("rlast=1", lsu.rlast === 1'b1);
        lsu.rready = 1'b1;
        @(posedge clock);
        lsu.rready = 1'b0;
        @(posedge clock);
    endtask

    task automatic do_write(input [31:0] addr, output [1:0] resp_in);
        lsu.awaddr = addr; lsu.awid = 4'h2; lsu.awlen = 8'h0;
        lsu.awsize = 3'b010; lsu.awburst = 2'b01;
        lsu.wdata = 32'h1234_5678; lsu.wstrb = 4'hF; lsu.wlast = 1'b1;
        lsu.awvalid = 1'b1; lsu.wvalid = 1'b1;   // 和 axi_lsu.sv 一样一起发
        @(posedge clock);
        while (!lsu.awready) @(posedge clock);
        lsu.awvalid = 1'b0;
        while (!lsu.wready) @(posedge clock);
        lsu.wvalid = 1'b0;
        @(posedge clock);
        while (!lsu.bvalid) @(posedge clock);
        resp_in = lsu.bresp;
        lsu.bready = 1'b1;
        @(posedge clock);
        lsu.bready = 1'b0;
        @(posedge clock);
    endtask

    logic [31:0] d0, d1, dh, dbad, dmem;
    logic [1:0]  r0, r1, rh, rbad, rmem, bw1, bw2;

    initial begin
        lsu.arvalid=0; lsu.araddr=0; lsu.arid=0; lsu.arlen=0; lsu.arsize=0; lsu.arburst=0;
        lsu.rready=0;
        lsu.awvalid=0; lsu.awaddr=0; lsu.awid=0; lsu.awlen=0; lsu.awsize=0; lsu.awburst=0;
        lsu.wvalid=0; lsu.wdata=0; lsu.wstrb=0; lsu.wlast=0; lsu.bready=0;
        ifu.arvalid=0; ifu.araddr=0; ifu.arid=0; ifu.arlen=0; ifu.arsize=0; ifu.arburst=0;
        ifu.rready=0; ifu.awvalid=0; ifu.awaddr=0; ifu.awid=0; ifu.awlen=0;
        ifu.awsize=0; ifu.awburst=0; ifu.wvalid=0; ifu.wdata=0; ifu.wstrb=0;
        ifu.wlast=0; ifu.bready=0;

        repeat (4) @(posedge clock);
        reset = 1'b0;

        $display("--- 1. 读 CLINT mtime (0x0200_0000) 应该走 clint_m ---");
        do_read(32'h0200_0000, d0, r0);
        check("resp = OKAY", r0 == 2'b00);
        check("不是 m_m 的假数据(说明没走错路)", d0[31:16] != 16'hCAFE);
        check("mtime 非 0", d0 != 32'h0);

        $display("--- 2. 再读一次, mtime 应该在涨 ---");
        repeat (20) @(posedge clock);
        do_read(32'h0200_0000, d1, r1);
        check("resp = OKAY", r1 == 2'b00);
        check("mtime 递增", d1 > d0);

        $display("--- 3. 读 mtimeh (0x0200_0004) ---");
        do_read(32'h0200_0004, dh, rh);
        check("resp = OKAY", rh == 2'b00);
        check("刚上电高位为 0", dh == 32'h0);

        $display("--- 4. 读 CLINT 范围里的错地址 0x0200_0010 ---");
        do_read(32'h0200_0010, dbad, rbad);
        check("resp = SLVERR (由 CLINT 判断, 不是 xbar)", rbad == 2'b10);

        $display("--- 5. 读普通内存 0x3000_0000 应该走 m_m ---");
        do_read(32'h3000_0000, dmem, rmem);
        check("resp = OKAY", rmem == 2'b00);
        check("拿到 m_m 的假数据", dmem[31:16] == 16'hCAFE);

        $display("--- 6. 写 CLINT (只读设备) ---");
        do_write(32'h0200_0000, bw1);
        check("bresp = SLVERR", bw1 == 2'b10);

        $display("--- 7. 写普通内存应该走 m_m 且 OKAY ---");
        do_write(32'h3000_0000, bw2);
        check("bresp = OKAY", bw2 == 2'b00);

        $display("--- 8. 出错之后还能不能继续读(不能锁死) ---");
        do_read(32'h0200_0000, dmem, rmem);
        check("resp = OKAY", rmem == 2'b00);
        check("mtime 还在涨", dmem > d1);

        if (errors == 0) $display("\n==== 全部通过 ====");
        else             $display("\n==== 失败 %0d 项 ====", errors);
        $finish;
    end
endmodule
