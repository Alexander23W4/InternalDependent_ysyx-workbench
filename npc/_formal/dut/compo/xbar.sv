
module ysyx_26040135_AXI4_Xbar (
    input  logic clock,
    input  logic reset,

    // 1. IFU Master 接口 (来自 CPU 内部取指单元，使用 slave modport 接收)
    input  [31:0] ifu_s_araddr,
    input  [3:0] ifu_s_arid,
    input  [7:0] ifu_s_arlen,
    input  [2:0] ifu_s_arsize,
    input  [1:0] ifu_s_arburst,
    input         ifu_s_arvalid,
    output logic        ifu_s_arready,
    output logic [31:0] ifu_s_rdata,
    output logic [3:0] ifu_s_rid,
    output logic [1:0] ifu_s_rresp,
    output logic        ifu_s_rlast,
    output logic        ifu_s_rvalid,
    input         ifu_s_rready,
    input  [31:0] ifu_s_awaddr,
    input  [3:0] ifu_s_awid,
    input  [7:0] ifu_s_awlen,
    input  [2:0] ifu_s_awsize,
    input  [1:0] ifu_s_awburst,
    input         ifu_s_awvalid,
    output logic        ifu_s_awready,
    input  [31:0] ifu_s_wdata,
    input  [3:0] ifu_s_wstrb,
    input         ifu_s_wlast,
    input         ifu_s_wvalid,
    output logic        ifu_s_wready,
    output logic [3:0] ifu_s_bid,
    output logic [1:0] ifu_s_bresp,
    output logic        ifu_s_bvalid,
    input         ifu_s_bready,

    // 2. LSU Master 接口 (来自 CPU 内部访存单元，使用 slave modport 接收)
    input  [31:0] lsu_s_araddr,
    input  [3:0] lsu_s_arid,
    input  [7:0] lsu_s_arlen,
    input  [2:0] lsu_s_arsize,
    input  [1:0] lsu_s_arburst,
    input         lsu_s_arvalid,
    output logic        lsu_s_arready,
    output logic [31:0] lsu_s_rdata,
    output logic [3:0] lsu_s_rid,
    output logic [1:0] lsu_s_rresp,
    output logic        lsu_s_rlast,
    output logic        lsu_s_rvalid,
    input         lsu_s_rready,
    input  [31:0] lsu_s_awaddr,
    input  [3:0] lsu_s_awid,
    input  [7:0] lsu_s_awlen,
    input  [2:0] lsu_s_awsize,
    input  [1:0] lsu_s_awburst,
    input         lsu_s_awvalid,
    output logic        lsu_s_awready,
    input  [31:0] lsu_s_wdata,
    input  [3:0] lsu_s_wstrb,
    input         lsu_s_wlast,
    input         lsu_s_wvalid,
    output logic        lsu_s_wready,
    output logic [3:0] lsu_s_bid,
    output logic [1:0] lsu_s_bresp,
    output logic        lsu_s_bvalid,
    input         lsu_s_bready,

    // 3. 对外主接口 (唯一的目标)
    output logic [31:0] m_m_araddr,
    output logic [3:0] m_m_arid,
    output logic [7:0] m_m_arlen,
    output logic [2:0] m_m_arsize,
    output logic [1:0] m_m_arburst,
    output logic        m_m_arvalid,
    input         m_m_arready,
    input  [31:0] m_m_rdata,
    input  [3:0] m_m_rid,
    input  [1:0] m_m_rresp,
    input         m_m_rlast,
    input         m_m_rvalid,
    output logic        m_m_rready,
    output logic [31:0] m_m_awaddr,
    output logic [3:0] m_m_awid,
    output logic [7:0] m_m_awlen,
    output logic [2:0] m_m_awsize,
    output logic [1:0] m_m_awburst,
    output logic        m_m_awvalid,
    input         m_m_awready,
    output logic [31:0] m_m_wdata,
    output logic [3:0] m_m_wstrb,
    output logic        m_m_wlast,
    output logic        m_m_wvalid,
    input         m_m_wready,
    input  [3:0] m_m_bid,
    input  [1:0] m_m_bresp,
    input         m_m_bvalid,
    output logic        m_m_bready
);

    // ==========================================
    // 1. 写通道（AW / W / B）
    //    只有 LSU 会写, 只有一个目标 -> 纯组合透传
    // ==========================================

    // ---- 写地址通道 (AW) ----
    assign m_m_awaddr    = lsu_s_awaddr;
    assign m_m_awid      = lsu_s_awid;
    assign m_m_awlen     = lsu_s_awlen;
    assign m_m_awsize    = lsu_s_awsize;
    assign m_m_awburst   = lsu_s_awburst;
    assign m_m_awvalid   = lsu_s_awvalid;

    assign lsu_s_awready = m_m_awready;

    // ---- 写数据通道 (W) ----
    assign m_m_wdata     = lsu_s_wdata;
    assign m_m_wstrb     = lsu_s_wstrb;
    assign m_m_wlast     = lsu_s_wlast;
    assign m_m_wvalid    = lsu_s_wvalid;

    assign lsu_s_wready  = m_m_wready;

    // ---- 写响应通道 (B) ----
    assign lsu_s_bid     = m_m_bid;
    assign lsu_s_bresp   = m_m_bresp;
    assign lsu_s_bvalid  = m_m_bvalid;

    assign m_m_bready    = lsu_s_bready;


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
                if (lsu_s_arvalid) begin
                    r_next_state = R_LSU; // LSU 优先级更高
                end else if (ifu_s_arvalid) begin
                    r_next_state = R_IFU;
                end
            end
            R_IFU: begin
                // 收到 rvalid 且 rready 且 rlast 为高时, 代表当前事务结束
                if (m_m_rvalid && ifu_s_rready && m_m_rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            R_LSU: begin
                if (m_m_rvalid && lsu_s_rready && m_m_rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            default: r_next_state = R_IDLE;
        endcase
    end


    assign m_m_araddr  = sel_lsu ? lsu_s_araddr  : ifu_s_araddr;
    assign m_m_arid    = sel_lsu ? lsu_s_arid    : ifu_s_arid;
    assign m_m_arlen   = sel_lsu ? lsu_s_arlen   : ifu_s_arlen;
    assign m_m_arsize  = sel_lsu ? lsu_s_arsize  : ifu_s_arsize;
    assign m_m_arburst = sel_lsu ? lsu_s_arburst : ifu_s_arburst;
    assign m_m_arvalid = (sel_lsu && lsu_s_arvalid) ||
                         (sel_ifu && ifu_s_arvalid);

    // arready 反馈分发: 只在仲裁结果已经锁定到某个 master 之后, 才把它回给那个 master
    // (arready 是电平信号, 绝不能在 R_IDLE 就对 master 透出, 否则会变成假握手)
    assign lsu_s_arready = sel_lsu ? m_m_arready : 1'b0;
    assign ifu_s_arready = sel_ifu ? m_m_arready : 1'b0;


    // ==========================================
    // 3. 读数据通道 (R) 路由
    //    根据当前状态把目标返回的 R 数据分发给对应的发起者
    // ==========================================

    assign lsu_s_rdata  = m_m_rdata;
    assign lsu_s_rid    = m_m_rid;
    assign lsu_s_rresp  = m_m_rresp;
    assign lsu_s_rlast  = m_m_rlast;

    assign ifu_s_rdata  = m_m_rdata;
    assign ifu_s_rid    = m_m_rid;
    assign ifu_s_rresp  = m_m_rresp;
    assign ifu_s_rlast  = m_m_rlast;

    // rvalid 控制：只有当状态匹配时才有效
    assign lsu_s_rvalid = sel_lsu && m_m_rvalid;
    assign ifu_s_rvalid = sel_ifu && m_m_rvalid;

    // rready 控制：把对应 Master 的 rready 反压给目标
    assign m_m_rready = sel_lsu ? lsu_s_rready :
                        sel_ifu ? ifu_s_rready : 1'b0;

endmodule
