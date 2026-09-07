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

module ysyx_26040135_AXI_XBAR (
    input clock,
    input reset,

    // Master 0 (IFU)
    AXI4_Lite.master m0,
    
    // Master 1 (LSU)
    AXI4_Lite.master m1,

    // Slave 0 (UART)
    AXI4_Lite.slave s0,

    // Slave 1 (SRAM)
    AXI4_Lite.slave s1
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

    always_comb begin
        r_next = r_state;
        case (r_state)
            R_IDLE: begin
                if (m0.arvalid || m1.arvalid) begin
                    r_next = R_BUSY;
                end
            end
            R_BUSY: begin
                if (r_latched_slave_sel == 2'b01) begin
                    if (s0.rvalid && s0.rready) r_next = R_IDLE;
                end else if (r_latched_slave_sel == 2'b10) begin
                    if (s1.rvalid && s1.rready) r_next = R_IDLE;
                end else begin
                    r_next = R_IDLE;  // DECERR
                end
            end
        endcase
    end

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            r_state <= R_IDLE;
            r_latched_is_m0 <= 1'b0;
            r_latched_slave_sel <= 2'b00;
            r_latched_addr <= '0;
        end else begin
            r_state <= r_next;
            if (r_state == R_IDLE) begin
                if (m0.arvalid) begin
                    r_latched_is_m0 <= 1'b1;
                    r_latched_addr <= m0.araddr;
                    if (m0.araddr >= 32'h10000000 && m0.araddr <= 32'h10000007)
                        r_latched_slave_sel <= 2'b01;
                    else if (m0.araddr >= 32'h80000000 && m0.araddr <= 32'h87ffffff)
                        r_latched_slave_sel <= 2'b10;
                    else
                        r_latched_slave_sel <= 2'b11;
                end 
                else if (m1.arvalid) begin
                    r_latched_is_m0 <= 1'b0;
                    r_latched_addr <= m1.araddr;
                    if (m1.araddr >= 32'h10000000 && m1.araddr <= 32'h10000007)
                        r_latched_slave_sel <= 2'b01;
                    else if (m1.araddr >= 32'h80000000 && m1.araddr <= 32'h87ffffff)
                        r_latched_slave_sel <= 2'b10;
                    else
                        r_latched_slave_sel <= 2'b11;
                end
            end
        end
    end

    // ----- 读通道组合逻辑 -----
    assign s0.araddr  = (r_latched_slave_sel == 2'b01) ? r_latched_addr : '0;
    assign s0.arvalid = (r_latched_slave_sel == 2'b01) && (r_state == R_BUSY);
    assign s1.araddr  = (r_latched_slave_sel == 2'b10) ? r_latched_addr : '0;
    assign s1.arvalid = (r_latched_slave_sel == 2'b10) && (r_state == R_BUSY);

    assign m0.arready = (r_state == R_IDLE) ? 1'b1 : 1'b0;
    assign m1.arready = (r_state == R_IDLE) ? 1'b1 : 1'b0;

    assign m0.rdata  = (r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0.rdata : (r_latched_slave_sel == 2'b10) ? s1.rdata : '0) : '0;
    assign m0.rresp  = (r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0.rresp : (r_latched_slave_sel == 2'b10) ? s1.rresp : (r_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m0.rvalid = (r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0.rvalid : (r_latched_slave_sel == 2'b10) ? s1.rvalid : (r_latched_slave_sel == 2'b11)) : 1'b0;

    assign m1.rdata  = (!r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0.rdata : (r_latched_slave_sel == 2'b10) ? s1.rdata : '0) : '0;
    assign m1.rresp  = (!r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0.rresp : (r_latched_slave_sel == 2'b10) ? s1.rresp : (r_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m1.rvalid = (!r_latched_is_m0) ? ((r_latched_slave_sel == 2'b01) ? s0.rvalid : (r_latched_slave_sel == 2'b10) ? s1.rvalid : (r_latched_slave_sel == 2'b11)) : 1'b0;

    assign s0.rready = (r_latched_slave_sel == 2'b01) ? (r_latched_is_m0 ? m0.rready : m1.rready) : 1'b0;
    assign s1.rready = (r_latched_slave_sel == 2'b10) ? (r_latched_is_m0 ? m0.rready : m1.rready) : 1'b0;


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
                if (m0.awvalid || m1.awvalid) begin
                    w_next = W_BUSY;
                end
            end
            W_BUSY: begin
                if (w_latched_slave_sel == 2'b01) begin
                    if (s0.bvalid && s0.bready) w_next = W_IDLE;
                end else if (w_latched_slave_sel == 2'b10) begin
                    if (s1.bvalid && s1.bready) w_next = W_IDLE;
                end else begin
                    w_next = W_IDLE;  // DECERR
                end
            end
        endcase
    end

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            w_state <= W_IDLE;
            w_latched_is_m0 <= 1'b0;
            w_latched_slave_sel <= 2'b00;
            w_latched_addr <= '0;
        end else begin
            w_state <= w_next;
            if (w_state == W_IDLE) begin
                if (m0.awvalid) begin
                    w_latched_is_m0 <= 1'b1;
                    w_latched_addr <= m0.awaddr;
                    if (m0.awaddr >= 32'h10000000 && m0.awaddr <= 32'h10000007)
                        w_latched_slave_sel <= 2'b01;
                    else if (m0.awaddr >= 32'h80000000 && m0.awaddr <= 32'h87ffffff)
                        w_latched_slave_sel <= 2'b10;
                    else
                        w_latched_slave_sel <= 2'b11;
                end else if (m1.awvalid) begin
                    w_latched_is_m0 <= 1'b0;
                    w_latched_addr <= m1.awaddr;
                    if (m1.awaddr >= 32'h10000000 && m1.awaddr <= 32'h10000007)
                        w_latched_slave_sel <= 2'b01;
                    else if (m1.awaddr >= 32'h80000000 && m1.awaddr <= 32'h87ffffff)
                        w_latched_slave_sel <= 2'b10;
                    else
                        w_latched_slave_sel <= 2'b11;
                end
            end
        end
    end

    // ----- 写通道组合逻辑 -----
    assign s0.awaddr  = (w_latched_slave_sel == 2'b01) ? w_latched_addr : '0;
    assign s0.awvalid = (w_latched_slave_sel == 2'b01) && (w_state == W_BUSY);
    assign s1.awaddr  = (w_latched_slave_sel == 2'b10) ? w_latched_addr : '0;
    assign s1.awvalid = (w_latched_slave_sel == 2'b10) && (w_state == W_BUSY);

    assign m0.awready = (w_state == W_IDLE) ? 1'b1 : 1'b0;
    assign m1.awready = (w_state == W_IDLE) ? 1'b1 : 1'b0;

    assign s0.wdata  = (w_latched_slave_sel == 2'b01) ? (w_latched_is_m0 ? m0.wdata : m1.wdata) : '0;
    assign s0.wstrb  = (w_latched_slave_sel == 2'b01) ? (w_latched_is_m0 ? m0.wstrb : m1.wstrb) : '0;
    assign s0.wvalid = (w_latched_slave_sel == 2'b01) && (w_state == W_BUSY) && (w_latched_is_m0 ? m0.wvalid : m1.wvalid);
    assign s1.wdata  = (w_latched_slave_sel == 2'b10) ? (w_latched_is_m0 ? m0.wdata : m1.wdata) : '0;
    assign s1.wstrb  = (w_latched_slave_sel == 2'b10) ? (w_latched_is_m0 ? m0.wstrb : m1.wstrb) : '0;
    assign s1.wvalid = (w_latched_slave_sel == 2'b10) && (w_state == W_BUSY) && (w_latched_is_m0 ? m0.wvalid : m1.wvalid);

    assign m0.wready = (w_state == W_BUSY && w_latched_is_m0) ? 1'b1 : 1'b0;
    assign m1.wready = (w_state == W_BUSY && !w_latched_is_m0) ? 1'b1 : 1'b0;

    assign m0.bresp  = (w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0.bresp : (w_latched_slave_sel == 2'b10) ? s1.bresp : (w_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m0.bvalid = (w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0.bvalid : (w_latched_slave_sel == 2'b10) ? s1.bvalid : (w_latched_slave_sel == 2'b11)) : 1'b0;

    assign m1.bresp  = (!w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0.bresp : (w_latched_slave_sel == 2'b10) ? s1.bresp : (w_latched_slave_sel == 2'b11) ? 2'b11 : 2'b00) : 2'b00;
    assign m1.bvalid = (!w_latched_is_m0) ? ((w_latched_slave_sel == 2'b01) ? s0.bvalid : (w_latched_slave_sel == 2'b10) ? s1.bvalid : (w_latched_slave_sel == 2'b11)) : 1'b0;

    assign s0.bready = (w_latched_slave_sel == 2'b01) ? (w_latched_is_m0 ? m0.bready : m1.bready) : 1'b0;
    assign s1.bready = (w_latched_slave_sel == 2'b10) ? (w_latched_is_m0 ? m0.bready : m1.bready) : 1'b0;

endmodule









