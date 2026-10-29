
module ysyx_26040135_AXI4_Xbar (
    input  logic clock,
    input  logic reset,

    // 1. IFU Master 接口 (来自 CPU 内部取指单元，使用 slave modport 接收)
    ysyx_26040135_AXI4.slave  ifu_s,

    // 2. LSU Master 接口 (来自 CPU 内部访存单元，使用 slave modport 接收)
    ysyx_26040135_AXI4.slave  lsu_s,

    // 3. 对外主接口 (唯一的目标)
    ysyx_26040135_AXI4.master m_m
);

    // ==========================================
    // 1. 写通道（AW / W / B）
    //    只有 LSU 会写, 只有一个目标 -> 纯组合透传
    // ==========================================

    // ---- 写地址通道 (AW) ----
    assign m_m.awaddr    = lsu_s.awaddr;
    assign m_m.awid      = lsu_s.awid;
    assign m_m.awlen     = lsu_s.awlen;
    assign m_m.awsize    = lsu_s.awsize;
    assign m_m.awburst   = lsu_s.awburst;
    assign m_m.awvalid   = lsu_s.awvalid;

    assign lsu_s.awready = m_m.awready;

    // ---- 写数据通道 (W) ----
    assign m_m.wdata     = lsu_s.wdata;
    assign m_m.wstrb     = lsu_s.wstrb;
    assign m_m.wlast     = lsu_s.wlast;
    assign m_m.wvalid    = lsu_s.wvalid;

    assign lsu_s.wready  = m_m.wready;

    // ---- 写响应通道 (B) ----
    assign lsu_s.bid     = m_m.bid;
    assign lsu_s.bresp   = m_m.bresp;
    assign lsu_s.bvalid  = m_m.bvalid;

    assign m_m.bready    = lsu_s.bready;


    // ==========================================
    // 2. 读通道（AR / R）仲裁与状态机
    //    LSU 优先, 谁抢到就锁住总线直到最后一拍。
    // ==========================================

    typedef enum logic [1:0] {
        R_IDLE = 2'b00,
        R_IFU  = 2'b01,
        R_LSU  = 2'b10
    } r_state_t;

    r_state_t r_current_state, r_next_state;

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            r_current_state <= R_IDLE;
        end else begin
            r_current_state <= r_next_state;
        end
    end

    wire sel_lsu = (r_current_state == R_LSU);
    wire sel_ifu = (r_current_state == R_IFU);

    // 状态跳转逻辑
    always_comb begin
        r_next_state = r_current_state;
        case (r_current_state)
            R_IDLE: begin
                if (lsu_s.arvalid) begin
                    r_next_state = R_LSU; // LSU 优先级更高
                end else if (ifu_s.arvalid) begin
                    r_next_state = R_IFU;
                end
            end
            R_IFU: begin
                // 收到 rvalid 且 rready 且 rlast 为高时, 代表当前事务结束
                if (m_m.rvalid && ifu_s.rready && m_m.rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            R_LSU: begin
                if (m_m.rvalid && lsu_s.rready && m_m.rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            default: r_next_state = R_IDLE;
        endcase
    end


    assign m_m.araddr  = sel_lsu ? lsu_s.araddr  : ifu_s.araddr;
    assign m_m.arid    = sel_lsu ? lsu_s.arid    : ifu_s.arid;
    assign m_m.arlen   = sel_lsu ? lsu_s.arlen   : ifu_s.arlen;
    assign m_m.arsize  = sel_lsu ? lsu_s.arsize  : ifu_s.arsize;
    assign m_m.arburst = sel_lsu ? lsu_s.arburst : ifu_s.arburst;
    assign m_m.arvalid = (sel_lsu && lsu_s.arvalid) ||
                         (sel_ifu && ifu_s.arvalid);

    // arready 反馈分发: 只在仲裁结果已经锁定到某个 master 之后, 才把它回给那个 master
    // (arready 是电平信号, 绝不能在 R_IDLE 就对 master 透出, 否则会变成假握手)
    assign lsu_s.arready = sel_lsu ? m_m.arready : 1'b0;
    assign ifu_s.arready = sel_ifu ? m_m.arready : 1'b0;


    // ==========================================
    // 3. 读数据通道 (R) 路由
    //    根据当前状态把目标返回的 R 数据分发给对应的发起者
    // ==========================================

    assign lsu_s.rdata  = m_m.rdata;
    assign lsu_s.rid    = m_m.rid;
    assign lsu_s.rresp  = m_m.rresp;
    assign lsu_s.rlast  = m_m.rlast;

    assign ifu_s.rdata  = m_m.rdata;
    assign ifu_s.rid    = m_m.rid;
    assign ifu_s.rresp  = m_m.rresp;
    assign ifu_s.rlast  = m_m.rlast;

    // rvalid 控制：只有当状态匹配时才有效
    assign lsu_s.rvalid = sel_lsu && m_m.rvalid;
    assign ifu_s.rvalid = sel_ifu && m_m.rvalid;

    // rready 控制：把对应 Master 的 rready 反压给目标
    assign m_m.rready = sel_lsu ? lsu_s.rready :
                        sel_ifu ? ifu_s.rready : 1'b0;

endmodule
