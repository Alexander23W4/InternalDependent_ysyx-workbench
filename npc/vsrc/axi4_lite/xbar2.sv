/*
 * AXI4-Lite XBAR
 * 2 Masters (IFU, LSU) -> 2 Slaves (UART, SRAM)
 * 地址映射：
 *   UART:  [0x1000_0000, 0x1000_0fff]
 *   SRAM:  [0x8000_0000, 0x80ff_ffff]
 * 仲裁策略：固定优先级 (IFU > LSU)
 */

 /*
 Xbar设计思想: 不关注每个master/slave 具体的要求 (比如RAM 无法同时处理读和写), 留给每个 master 和 slave 自己的接口层进行设定 和 限制 
 ⭐: 我的Xbar不进行更多具体的错误处理, 只处理 out of bound  
    Xbar 只实现最多 一个写和一个读 的总线匹配

 仲裁策略：固定优先级 (IFU > LSU), 这是现在的仲裁策略

 ⭐$$: 先版本默认两个master不会同时发送arvalid, 之后需要兼容这样的情况
 */

module AXI_XBAR (
    input clk,
    input reset,

    // Master 0 (IFU)
    input  [31:0] m0_araddr,
    input         m0_arvalid,
    output        m0_arready,
    output [31:0] m0_rdata,
    output [1:0]  m0_rresp,
    output        m0_rvalid,
    input         m0_rready,
    input  [31:0] m0_awaddr,
    input         m0_awvalid,
    output        m0_awready,
    input  [31:0] m0_wdata,
    input  [3:0]  m0_wstrb,
    input         m0_wvalid,
    output        m0_wready,
    input  [1:0]  m0_bresp,
    input         m0_bvalid,
    output        m0_bready,

    // Master 1 (LSU)
    input  [31:0] m1_araddr,
    input         m1_arvalid,
    output        m1_arready,
    output [31:0] m1_rdata,
    output [1:0]  m1_rresp,
    output        m1_rvalid,
    input         m1_rready,
    input  [31:0] m1_awaddr,
    input         m1_awvalid,
    output        m1_awready,
    input  [31:0] m1_wdata,
    input  [3:0]  m1_wstrb,
    input         m1_wvalid,
    output        m1_wready,
    output [1:0]  m1_bresp,
    output        m1_bvalid,
    input         m1_bready,

    // Slave 0 (UART)
    output [31:0] s0_araddr,
    output        s0_arvalid,
    input         s0_arready,
    input  [31:0] s0_rdata,
    input  [1:0]  s0_rresp,
    input         s0_rvalid,
    output        s0_rready,
    output [31:0] s0_awaddr,
    output        s0_awvalid,
    input         s0_awready,
    output [31:0] s0_wdata,
    output [3:0]  s0_wstrb,
    output        s0_wvalid,
    input         s0_wready,
    input  [1:0]  s0_bresp,
    input         s0_bvalid,
    output        s0_bready,

    // Slave 1 (SRAM)
    output [31:0] s1_araddr,
    output        s1_arvalid,
    input         s1_arready,
    input  [31:0] s1_rdata,
    input  [1:0]  s1_rresp,
    input         s1_rvalid,
    output        s1_rready,
    output [31:0] s1_awaddr,
    output        s1_awvalid,
    input         s1_awready,
    output [31:0] s1_wdata,
    output [3:0]  s1_wstrb,
    output        s1_wvalid,
    input         s1_wready,
    input  [1:0]  s1_bresp,
    input         s1_bvalid,
    output        s1_bready
);

    // ============================================================
    // 读状态机
    // ============================================================
    typedef enum logic [1:0] {
        R_IDLE,
        R_BUSY
    } r_state_t;
    r_state_t r_state, r_next;

    logic        r_latched_is_m0;
    logic [1:0]  r_latched_slave_sel;
    logic [31:0] r_latched_addr;

// 加一个状态机, 这样就避免一个master正在交互, 另一个master直接发arvalid抢占总线的情况
    always_comb begin
        r_next = r_state;
        case (r_state)
            R_IDLE: begin
                if (m0_arvalid || m1_arvalid) begin
                    r_next = R_BUSY;
                end
            end
            R_BUSY: begin
                if (r_latched_slave_sel == 2'b01) begin
                    if (s0_rvalid && s0_rready) r_next = R_IDLE;
                end else if (r_latched_slave_sel == 2'b10) begin
                    if (s1_rvalid && s1_rready) r_next = R_IDLE;
                end else begin
                    r_next = R_IDLE;  // DECERR
                end
            end
        endcase
    end

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            r_state <= R_IDLE;
            r_latched_is_m0 <= 1'b0;
            r_latched_slave_sel <= 2'b00;
            r_latched_addr <= '0;
        end else begin
            r_state <= r_next;
            if (r_state == R_IDLE) begin
                if (m0_arvalid) begin
                    r_latched_is_m0 <= 1'b1;
                    r_latched_addr <= m0_araddr;
                    if (m0_araddr >= 32'h10000000 && m0_araddr <= 32'h10000007)
                        r_latched_slave_sel <= 2'b01;
                    else if (m0_araddr >= 32'h80000000 && m0_araddr <= 32'h87ffffff)
                        r_latched_slave_sel <= 2'b10;
                    else
                        r_latched_slave_sel <= 2'b11;
                end 
                else if (m1_arvalid) begin
                    r_latched_is_m0 <= 1'b0;
                    r_latched_addr <= m1_araddr;
                    if (m1_araddr >= 32'h10000000 && m1_araddr <= 32'h10000007)
                        r_latched_slave_sel <= 2'b01;
                    else if (m1_araddr >= 32'h80000000 && m1_araddr <= 32'h87ffffff)
                        r_latched_slave_sel <= 2'b10;
                    else
                        r_latched_slave_sel <= 2'b11;
                end
            end
        end
    end

    // ----- 读通道组合逻辑 -----
    assign s0_araddr  = (r_latched_slave_sel == 2'b01) ? r_latched_addr : '0;
    assign s0_arvalid = (r_latched_slave_sel == 2'b01) && (r_state == R_BUSY);
    assign s1_araddr  = (r_latched_slave_sel == 2'b10) ? r_latched_addr : '0;
    assign s1_arvalid = (r_latched_slave_sel == 2'b10) && (r_state == R_BUSY);

    assign m0_arready = (r_state == R_IDLE) ? 1'b1 : 1'b0;
    assign m1_arready = (r_state == R_IDLE) ? 1'b1 : 1'b0;

    assign m0_rdata  = (r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0_rdata : (r_latched_slave_sel == 2'b10) ? s1_rdata : '0) : '0;
    assign m0_rresp  = (r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0_rresp : (r_latched_slave_sel == 2'b10) ? s1_rresp : (r_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m0_rvalid = (r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0_rvalid : (r_latched_slave_sel == 2'b10) ? s1_rvalid : (r_latched_slave_sel == 2'b11)) : 1'b0;

    assign m1_rdata  = (!r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0_rdata : (r_latched_slave_sel == 2'b10) ? s1_rdata : '0) : '0;
    assign m1_rresp  = (!r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0_rresp : (r_latched_slave_sel == 2'b10) ? s1_rresp : (r_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m1_rvalid = (!r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0_rvalid : (r_latched_slave_sel == 2'b10) ? s1_rvalid : (r_latched_slave_sel == 2'b11)) : 1'b0;

    assign s0_rready = (r_latched_slave_sel == 2'b01) ? (r_latched_is_m0 ? m0_rready : m1_rready) : 1'b0;
    assign s1_rready = (r_latched_slave_sel == 2'b10) ? (r_latched_is_m0 ? m0_rready : m1_rready) : 1'b0;


    // ============================================================
    // 写状态机
    // ============================================================
    typedef enum logic [1:0] {
        W_IDLE,
        W_BUSY
    } w_state_t;
    w_state_t w_state, w_next;

    logic        w_latched_is_m0;
    logic [1:0]  w_latched_slave_sel;
    logic [31:0] w_latched_addr;

    always_comb begin
        w_next = w_state;
        case (w_state)
            W_IDLE: begin
                if (m0_awvalid || m1_awvalid) begin
                    w_next = W_BUSY;
                end
            end
            W_BUSY: begin
                if (w_latched_slave_sel == 2'b01) begin
                    if (s0_bvalid && s0_bready) w_next = W_IDLE;
                end else if (w_latched_slave_sel == 2'b10) begin
                    if (s1_bvalid && s1_bready) w_next = W_IDLE;
                end else begin
                    w_next = W_IDLE;  // DECERR
                end
            end
        endcase
    end

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            w_state <= W_IDLE;
            w_latched_is_m0 <= 1'b0;
            w_latched_slave_sel <= 2'b00;
            w_latched_addr <= '0;
        end else begin
            w_state <= w_next;
            if (w_state == W_IDLE) begin
                if (m0_awvalid) begin
                    w_latched_is_m0 <= 1'b1;
                    w_latched_addr <= m0_awaddr;
                    if (m0_awaddr >= 32'h10000000 && m0_awaddr <= 32'h10000007)
                        w_latched_slave_sel <= 2'b01;
                    else if (m0_awaddr >= 32'h80000000 && m0_awaddr <= 32'h87ffffff)
                        w_latched_slave_sel <= 2'b10;
                    else
                        w_latched_slave_sel <= 2'b11;
                end else if (m1_awvalid) begin
                    w_latched_is_m0 <= 1'b0;
                    w_latched_addr <= m1_awaddr;
                    if (m1_awaddr >= 32'h10000000 && m1_awaddr <= 32'h10000007)
                        w_latched_slave_sel <= 2'b01;
                    else if (m1_awaddr >= 32'h80000000 && m1_awaddr <= 32'h87ffffff)
                        w_latched_slave_sel <= 2'b10;
                    else
                        w_latched_slave_sel <= 2'b11;
                end
            end
        end
    end

    // ----- 写通道组合逻辑 -----
// ----- 写通道组合逻辑 -----
    assign s0_awaddr  = (w_latched_slave_sel == 2'b01) ? w_latched_addr : '0;
    assign s0_awvalid = (w_latched_slave_sel == 2'b01) && (w_state == W_BUSY);
    assign s1_awaddr  = (w_latched_slave_sel == 2'b10) ? w_latched_addr : '0;
    assign s1_awvalid = (w_latched_slave_sel == 2'b10) && (w_state == W_BUSY);

    assign m0_awready = (w_state == W_IDLE) ? 1'b1 : 1'b0;
    assign m1_awready = (w_state == W_IDLE) ? 1'b1 : 1'b0;

    assign s0_wdata  = (w_latched_slave_sel == 2'b01) ? (w_latched_is_m0 ? m0_wdata : m1_wdata) : '0;
    assign s0_wstrb  = (w_latched_slave_sel == 2'b01) ? (w_latched_is_m0 ? m0_wstrb : m1_wstrb) : '0;
    assign s0_wvalid = (w_latched_slave_sel == 2'b01) && (w_state == W_BUSY) && (w_latched_is_m0 ? m0_wvalid : m1_wvalid);
    assign s1_wdata  = (w_latched_slave_sel == 2'b10) ? (w_latched_is_m0 ? m0_wdata : m1_wdata) : '0;
    assign s1_wstrb  = (w_latched_slave_sel == 2'b10) ? (w_latched_is_m0 ? m0_wstrb : m1_wstrb) : '0;
    assign s1_wvalid = (w_latched_slave_sel == 2'b10) && (w_state == W_BUSY) && (w_latched_is_m0 ? m0_wvalid : m1_wvalid);

    assign m0_wready = (w_state == W_BUSY && w_latched_is_m0) ? 1'b1 : 1'b0;
    assign m1_wready = (w_state == W_BUSY && !w_latched_is_m0) ? 1'b1 : 1'b0;

    assign m0_bresp  = (w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0_bresp : (w_latched_slave_sel == 2'b10) ? s1_bresp : (w_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m0_bvalid = (w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0_bvalid : (w_latched_slave_sel == 2'b10) ? s1_bvalid : (w_latched_slave_sel == 2'b11)) : 1'b0;

    assign m1_bresp  = (!w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0_bresp : (w_latched_slave_sel == 2'b10) ? s1_bresp : (w_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m1_bvalid = (!w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0_bvalid : (w_latched_slave_sel == 2'b10) ? s1_bvalid : (w_latched_slave_sel == 2'b11)) : 1'b0;

    assign s0_bready = (w_latched_slave_sel == 2'b01) ? (w_latched_is_m0 ? m0_bready : m1_bready) : 1'b0;
    assign s1_bready = (w_latched_slave_sel == 2'b10) ? (w_latched_is_m0 ? m0_bready : m1_bready) : 1'b0;
endmodule