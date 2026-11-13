/*
    这里的 AXI Xbar 把访问分成两路:
        CLINT  0x0200_0000~0x0200_ffff   -> clint_m
        其他                              -> m_m (送到 ysyxSoC)

    ⭐ 写通道为什么不做 AW→W 串行化:
        axi_lsu.sv 的注释里写了, SoC 里 SRAM 的 awready 本身就依赖 wvalid。
        如果 xbar 先把 AW 发给目标、等握手完成再放 W, 碰上这种从设备就是双向死锁。
        所以这里 AW 和 W 都是**按地址组合透传**的: 同一笔事务的 awaddr 在
        wvalid 拉高期间是稳定的(LSU 一直举着, 见 axi_lsu.sv 的 aw_done/w_done),
        用组合译码选目标既不会死锁也不会走错路。
        w_busy/w_clint 只用来记住"当前这笔写事务归谁", 供 B 通道回响应时使用。
*/

module ysyx_26040135_AXI4_Xbar (
    input  logic clock,
    input  logic reset,

    // 1. IFU Master 接口 (来自 CPU 内部取指单元，使用 slave modport 接收)
        input  logic [31:0] ifu_s_araddr,
    input  logic [3:0]  ifu_s_arid,
    input  logic [7:0]  ifu_s_arlen,
    input  logic [2:0]  ifu_s_arsize,
    input  logic [1:0]  ifu_s_arburst,
    input  logic        ifu_s_arvalid,
    output logic        ifu_s_arready,
    output logic [31:0] ifu_s_rdata,
    output logic [3:0]  ifu_s_rid,
    output logic [1:0]  ifu_s_rresp,
    output logic        ifu_s_rlast,
    output logic        ifu_s_rvalid,
    input  logic        ifu_s_rready,
    input  logic [31:0] ifu_s_awaddr,
    input  logic [3:0]  ifu_s_awid,
    input  logic [7:0]  ifu_s_awlen,
    input  logic [2:0]  ifu_s_awsize,
    input  logic [1:0]  ifu_s_awburst,
    input  logic        ifu_s_awvalid,
    output logic        ifu_s_awready,
    input  logic [31:0] ifu_s_wdata,
    input  logic [3:0]  ifu_s_wstrb,
    input  logic        ifu_s_wlast,
    input  logic        ifu_s_wvalid,
    output logic        ifu_s_wready,
    output logic [3:0]  ifu_s_bid,
    output logic [1:0]  ifu_s_bresp,
    output logic        ifu_s_bvalid,
    input  logic        ifu_s_bready,

    // 2. LSU Master 接口 (来自 CPU 内部访存单元，使用 slave modport 接收)
        input  logic [31:0] lsu_s_araddr,
    input  logic [3:0]  lsu_s_arid,
    input  logic [7:0]  lsu_s_arlen,
    input  logic [2:0]  lsu_s_arsize,
    input  logic [1:0]  lsu_s_arburst,
    input  logic        lsu_s_arvalid,
    output logic        lsu_s_arready,
    output logic [31:0] lsu_s_rdata,
    output logic [3:0]  lsu_s_rid,
    output logic [1:0]  lsu_s_rresp,
    output logic        lsu_s_rlast,
    output logic        lsu_s_rvalid,
    input  logic        lsu_s_rready,
    input  logic [31:0] lsu_s_awaddr,
    input  logic [3:0]  lsu_s_awid,
    input  logic [7:0]  lsu_s_awlen,
    input  logic [2:0]  lsu_s_awsize,
    input  logic [1:0]  lsu_s_awburst,
    input  logic        lsu_s_awvalid,
    output logic        lsu_s_awready,
    input  logic [31:0] lsu_s_wdata,
    input  logic [3:0]  lsu_s_wstrb,
    input  logic        lsu_s_wlast,
    input  logic        lsu_s_wvalid,
    output logic        lsu_s_wready,
    output logic [3:0]  lsu_s_bid,
    output logic [1:0]  lsu_s_bresp,
    output logic        lsu_s_bvalid,
    input  logic        lsu_s_bready,

    // 3. 对外主接口 (连接到 ysyxSoC，使用 master modport 发出)
        output logic [31:0] m_m_araddr,
    output logic [3:0]  m_m_arid,
    output logic [7:0]  m_m_arlen,
    output logic [2:0]  m_m_arsize,
    output logic [1:0]  m_m_arburst,
    output logic        m_m_arvalid,
    input  logic        m_m_arready,
    input  logic [31:0] m_m_rdata,
    input  logic [3:0]  m_m_rid,
    input  logic [1:0]  m_m_rresp,
    input  logic        m_m_rlast,
    input  logic        m_m_rvalid,
    output logic        m_m_rready,
    output logic [31:0] m_m_awaddr,
    output logic [3:0]  m_m_awid,
    output logic [7:0]  m_m_awlen,
    output logic [2:0]  m_m_awsize,
    output logic [1:0]  m_m_awburst,
    output logic        m_m_awvalid,
    input  logic        m_m_awready,
    output logic [31:0] m_m_wdata,
    output logic [3:0]  m_m_wstrb,
    output logic        m_m_wlast,
    output logic        m_m_wvalid,
    input  logic        m_m_wready,
    input  logic [3:0]  m_m_bid,
    input  logic [1:0]  m_m_bresp,
    input  logic        m_m_bvalid,
    output logic        m_m_bready,

    // 4. CLINT (0x0200_0000~0x0200_ffff)
        output logic [31:0] clint_m_araddr,
    output logic [3:0]  clint_m_arid,
    output logic [7:0]  clint_m_arlen,
    output logic [2:0]  clint_m_arsize,
    output logic [1:0]  clint_m_arburst,
    output logic        clint_m_arvalid,
    input  logic        clint_m_arready,
    input  logic [31:0] clint_m_rdata,
    input  logic [3:0]  clint_m_rid,
    input  logic [1:0]  clint_m_rresp,
    input  logic        clint_m_rlast,
    input  logic        clint_m_rvalid,
    output logic        clint_m_rready,
    output logic [31:0] clint_m_awaddr,
    output logic [3:0]  clint_m_awid,
    output logic [7:0]  clint_m_awlen,
    output logic [2:0]  clint_m_awsize,
    output logic [1:0]  clint_m_awburst,
    output logic        clint_m_awvalid,
    input  logic        clint_m_awready,
    output logic [31:0] clint_m_wdata,
    output logic [3:0]  clint_m_wstrb,
    output logic        clint_m_wlast,
    output logic        clint_m_wvalid,
    input  logic        clint_m_wready,
    input  logic [3:0]  clint_m_bid,
    input  logic [1:0]  clint_m_bresp,
    input  logic        clint_m_bvalid,
    output logic        clint_m_bready);

    // 地址译码: 0x0200_0000~0x0200_ffff 正好就是 addr[31:16] == 16'h0200
    wire aw_to_clint = (lsu_s_awaddr[31:16] == 16'h0200);

    // ==========================================
    // 1. 写通道（AW / W / B）
    //    原来只有 LSU 独占透传给 m_m; 现在按地址分成 m_m / clint_m 两路。
    //    只有一个写 master(LSU), 所以不需要仲裁, 只要记住"这笔事务归谁"。
    // ==========================================

    logic w_busy;    // 有一笔写事务的 AW 已经被收下, 正在等 W/B
    logic w_clint;   // 这笔写事务的目标是 CLINT

    // 当前这笔写事务的目标: AW 还没被收下时用组合译码, 收下之后用寄存值
    wire w_sel_clint = w_busy ? w_clint : aw_to_clint;

    // ---- 写地址通道 (AW) ----
    assign clint_m_awaddr  = lsu_s_awaddr;
    assign clint_m_awid    = lsu_s_awid;
    assign clint_m_awlen   = lsu_s_awlen;
    assign clint_m_awsize  = lsu_s_awsize;
    assign clint_m_awburst = lsu_s_awburst;
    assign clint_m_awvalid = lsu_s_awvalid && !w_busy &&  w_sel_clint;

    assign m_m_awaddr  = lsu_s_awaddr;
    assign m_m_awid    = lsu_s_awid;
    assign m_m_awlen   = lsu_s_awlen;
    assign m_m_awsize  = lsu_s_awsize;
    assign m_m_awburst = lsu_s_awburst;
    assign m_m_awvalid = lsu_s_awvalid && !w_busy && !w_sel_clint;

    // w_busy 时不再收新的 AW, 否则会把上一笔还在等 B 的事务状态搞乱
    assign lsu_s_awready = w_busy ? 1'b0 :
                           (w_sel_clint ? clint_m_awready : m_m_awready);

    // ---- 写数据通道 (W) ----
    // 和 AW 一起发, 不串行化(原因见文件头注释)
    assign clint_m_wdata  = lsu_s_wdata;
    assign clint_m_wstrb  = lsu_s_wstrb;
    assign clint_m_wlast  = lsu_s_wlast;
    assign clint_m_wvalid = lsu_s_wvalid &&  w_sel_clint;

    assign m_m_wdata  = lsu_s_wdata;
    assign m_m_wstrb  = lsu_s_wstrb;
    assign m_m_wlast  = lsu_s_wlast;
    assign m_m_wvalid = lsu_s_wvalid && !w_sel_clint;

    assign lsu_s_wready = w_sel_clint ? clint_m_wready : m_m_wready;

    // ---- 写响应通道 (B) ----
    assign lsu_s_bid    = w_clint ? clint_m_bid    : m_m_bid;
    assign lsu_s_bresp  = w_clint ? clint_m_bresp  : m_m_bresp;
    assign lsu_s_bvalid = w_busy && (w_clint ? clint_m_bvalid : m_m_bvalid);

    assign clint_m_bready = (w_busy &&  w_clint) ? lsu_s_bready : 1'b0;
    assign m_m_bready     = (w_busy && !w_clint) ? lsu_s_bready : 1'b0;

    // 写事务生命周期: AW 握手时开始, B 握手时结束
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            w_busy  <= 1'b0;
            w_clint <= 1'b0;
        end else begin
            if (lsu_s_awvalid && lsu_s_awready) begin
                w_busy  <= 1'b1;
                w_clint <= aw_to_clint;
            end
            if (w_busy && lsu_s_bready &&
                (w_clint ? clint_m_bvalid : m_m_bvalid)) begin
                w_busy <= 1'b0;
            end
        end
    end


    // ==========================================
    // 2. 读通道（AR / R）仲裁与状态机
    //    原来:LSU 优先, 谁抢到就锁住总线直到最后一拍。
    //    现在:抢到之后还要按地址决定这笔读是去 m_m 还是 clint_m,
    //         所以多一个 r_sel_clint 寄存器跟着事务走。
    // ==========================================

    typedef enum logic [1:0] {
        R_IDLE = 2'b00,
        R_IFU  = 2'b01,
        R_LSU  = 2'b10
    } r_state_t;

    r_state_t r_current_state, r_next_state;
    logic     r_sel_clint;      // 当前读事务的目标是不是 CLINT

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            r_current_state <= R_IDLE;
            r_sel_clint     <= 1'b0;
        end else begin
            r_current_state <= r_next_state;
            // 只在 IDLE(定归属)那一拍更新, 事务进行中保持不变
            if (r_current_state == R_IDLE) begin
                if (lsu_s_arvalid)      r_sel_clint <= (lsu_s_araddr[31:16] == 16'h0200);
                else if (ifu_s_arvalid) r_sel_clint <= (ifu_s_araddr[31:16] == 16'h0200);
            end
        end
    end

    wire sel_lsu = (r_current_state == R_LSU);
    wire sel_ifu = (r_current_state == R_IFU);

    // 被服务的那一笔读, 数据来自哪个目标(组合; 事务期间地址和 r_sel_clint 都稳定)
    wire r_tgt_rvalid = r_sel_clint ? clint_m_rvalid : m_m_rvalid;
    wire r_tgt_rlast  = r_sel_clint ? clint_m_rlast  : m_m_rlast;

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
                if (r_tgt_rvalid && ifu_s_rready && r_tgt_rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            R_LSU: begin
                if (r_tgt_rvalid && lsu_s_rready && r_tgt_rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            default: r_next_state = R_IDLE;
        endcase
    end

    // 读地址通道 (AR) 信号复用与多路选择
    // ⭐ arvalid 只能用"已经寄存下来的仲裁结果"来发, 不能走 R_IDLE 那条快路径。
    //    原因: IFU/LSU 都是在 IDLE 态拉起 arvalid, 进到 AR/AW 态才去检查 arready。
    //    如果在 R_IDLE 就把 AR 发给目标, 目标会当场吃掉这笔事务并立刻开始给 rvalid;
    //    而 master 那一拍状态还是 R_IDLE、收不到 arready, 要等下一拍进了 AR 态
    //    才去等 arready —— 可这时目标已经在等 rready 了 -> 双向死锁, 谁都动不了。
    //    代价是每次 AR 多一拍, 换来与 master 的 AR 握手时序一致。
    assign clint_m_araddr  = sel_lsu ? lsu_s_araddr  : ifu_s_araddr;
    assign clint_m_arid    = sel_lsu ? lsu_s_arid    : ifu_s_arid;
    assign clint_m_arlen   = sel_lsu ? lsu_s_arlen   : ifu_s_arlen;
    assign clint_m_arsize  = sel_lsu ? lsu_s_arsize  : ifu_s_arsize;
    assign clint_m_arburst = sel_lsu ? lsu_s_arburst : ifu_s_arburst;
    assign clint_m_arvalid = r_sel_clint && ((sel_lsu && lsu_s_arvalid) ||
                                             (sel_ifu && ifu_s_arvalid));

    assign m_m_araddr  = sel_lsu ? lsu_s_araddr  : ifu_s_araddr;
    assign m_m_arid    = sel_lsu ? lsu_s_arid    : ifu_s_arid;
    assign m_m_arlen   = sel_lsu ? lsu_s_arlen   : ifu_s_arlen;
    assign m_m_arsize  = sel_lsu ? lsu_s_arsize  : ifu_s_arsize;
    assign m_m_arburst = sel_lsu ? lsu_s_arburst : ifu_s_arburst;
    assign m_m_arvalid = !r_sel_clint && ((sel_lsu && lsu_s_arvalid) ||
                                          (sel_ifu && ifu_s_arvalid));

    // arready 反馈分发: 只在仲裁结果已经锁定到某个 master 之后, 才把它回给那个 master
    // (arready 是电平信号, 绝不能在 R_IDLE 就对 master 透出, 否则会变成假握手)
    assign lsu_s_arready = sel_lsu ? (r_sel_clint ? clint_m_arready : m_m_arready) : 1'b0;
    assign ifu_s_arready = sel_ifu ? (r_sel_clint ? clint_m_arready : m_m_arready) : 1'b0;


    // ==========================================
    // 3. 读数据通道 (R) 路由
    //    根据当前状态 + r_sel_clint 把目标返回的 R 数据分发给对应的发起者
    // ==========================================

    assign lsu_s_rdata  = r_sel_clint ? clint_m_rdata : m_m_rdata;
    assign lsu_s_rid    = r_sel_clint ? clint_m_rid   : m_m_rid;
    assign lsu_s_rresp  = r_sel_clint ? clint_m_rresp : m_m_rresp;
    assign lsu_s_rlast  = r_sel_clint ? clint_m_rlast : m_m_rlast;

    assign ifu_s_rdata  = r_sel_clint ? clint_m_rdata : m_m_rdata;
    assign ifu_s_rid    = r_sel_clint ? clint_m_rid   : m_m_rid;
    assign ifu_s_rresp  = r_sel_clint ? clint_m_rresp : m_m_rresp;
    assign ifu_s_rlast  = r_sel_clint ? clint_m_rlast : m_m_rlast;

    // rvalid 控制：只有当状态匹配时才有效
    assign lsu_s_rvalid = sel_lsu && r_tgt_rvalid;
    assign ifu_s_rvalid = sel_ifu && r_tgt_rvalid;

    // rready 控制：把对应 Master 的 rready 反压给被选中的目标
    assign clint_m_rready = (r_sel_clint && sel_lsu) ? lsu_s_rready :
                            (r_sel_clint && sel_ifu) ? ifu_s_rready : 1'b0;

    assign m_m_rready = (!r_sel_clint && sel_lsu) ? lsu_s_rready :
                        (!r_sel_clint && sel_ifu) ? ifu_s_rready : 1'b0;

    // IFU 只读: 写通道的响应恒 0(vsrc 里这几根本来悬空, 综合前必须给驱动)
    assign ifu_s_awready = 1'b0;
    assign ifu_s_wready  = 1'b0;
    assign ifu_s_bvalid  = 1'b0;
    assign ifu_s_bid     = 4'b0;
    assign ifu_s_bresp   = 2'b0;

endmodule
