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
    ysyx_26040135_AXI4.slave  ifu_s,

    // 2. LSU Master 接口 (来自 CPU 内部访存单元，使用 slave modport 接收)
    ysyx_26040135_AXI4.slave  lsu_s,

    // 3. 对外主接口 (连接到 ysyxSoC，使用 master modport 发出)
    ysyx_26040135_AXI4.master m_m,

    // 4. CLINT (0x0200_0000~0x0200_ffff)
    ysyx_26040135_AXI4.master clint_m
);

    // 地址译码: 0x0200_0000~0x0200_ffff 正好就是 addr[31:16] == 16'h0200
    wire aw_to_clint = (lsu_s.awaddr[31:16] == 16'h0200);

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
    assign clint_m.awaddr  = lsu_s.awaddr;
    assign clint_m.awid    = lsu_s.awid;
    assign clint_m.awlen   = lsu_s.awlen;
    assign clint_m.awsize  = lsu_s.awsize;
    assign clint_m.awburst = lsu_s.awburst;
    assign clint_m.awvalid = lsu_s.awvalid && !w_busy &&  w_sel_clint;

    assign m_m.awaddr  = lsu_s.awaddr;
    assign m_m.awid    = lsu_s.awid;
    assign m_m.awlen   = lsu_s.awlen;
    assign m_m.awsize  = lsu_s.awsize;
    assign m_m.awburst = lsu_s.awburst;
    assign m_m.awvalid = lsu_s.awvalid && !w_busy && !w_sel_clint;

    // w_busy 时不再收新的 AW, 否则会把上一笔还在等 B 的事务状态搞乱
    assign lsu_s.awready = w_busy ? 1'b0 :
                           (w_sel_clint ? clint_m.awready : m_m.awready);

    // ---- 写数据通道 (W) ----
    // 和 AW 一起发, 不串行化(原因见文件头注释)
    assign clint_m.wdata  = lsu_s.wdata;
    assign clint_m.wstrb  = lsu_s.wstrb;
    assign clint_m.wlast  = lsu_s.wlast;
    assign clint_m.wvalid = lsu_s.wvalid &&  w_sel_clint;

    assign m_m.wdata  = lsu_s.wdata;
    assign m_m.wstrb  = lsu_s.wstrb;
    assign m_m.wlast  = lsu_s.wlast;
    assign m_m.wvalid = lsu_s.wvalid && !w_sel_clint;

    assign lsu_s.wready = w_sel_clint ? clint_m.wready : m_m.wready;

    // ---- 写响应通道 (B) ----
    assign lsu_s.bid    = w_clint ? clint_m.bid    : m_m.bid;
    assign lsu_s.bresp  = w_clint ? clint_m.bresp  : m_m.bresp;
    assign lsu_s.bvalid = w_busy && (w_clint ? clint_m.bvalid : m_m.bvalid);

    assign clint_m.bready = (w_busy &&  w_clint) ? lsu_s.bready : 1'b0;
    assign m_m.bready     = (w_busy && !w_clint) ? lsu_s.bready : 1'b0;

    // 写事务生命周期: AW 握手时开始, B 握手时结束
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            w_busy  <= 1'b0;
            w_clint <= 1'b0;
        end else begin
            if (lsu_s.awvalid && lsu_s.awready) begin
                w_busy  <= 1'b1;
                w_clint <= aw_to_clint;
            end
            if (w_busy && lsu_s.bready &&
                (w_clint ? clint_m.bvalid : m_m.bvalid)) begin
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

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            r_current_state <= R_IDLE;
            r_sel_clint     <= 1'b0;
        end else begin
            r_current_state <= r_next_state;
            // 只在 IDLE(定归属)那一拍更新, 事务进行中保持不变
            if (r_current_state == R_IDLE) begin
                if (lsu_s.arvalid)      r_sel_clint <= (lsu_s.araddr[31:16] == 16'h0200);
                else if (ifu_s.arvalid) r_sel_clint <= (ifu_s.araddr[31:16] == 16'h0200);
            end
        end
    end

    wire sel_lsu = (r_current_state == R_LSU);
    wire sel_ifu = (r_current_state == R_IFU);

    // 被服务的那一笔读, 数据来自哪个目标(组合; 事务期间地址和 r_sel_clint 都稳定)
    wire r_tgt_rvalid = r_sel_clint ? clint_m.rvalid : m_m.rvalid;
    wire r_tgt_rlast  = r_sel_clint ? clint_m.rlast  : m_m.rlast;

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
                if (r_tgt_rvalid && ifu_s.rready && r_tgt_rlast) begin
                    r_next_state = R_IDLE;
                end
            end
            R_LSU: begin
                if (r_tgt_rvalid && lsu_s.rready && r_tgt_rlast) begin
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
    assign clint_m.araddr  = sel_lsu ? lsu_s.araddr  : ifu_s.araddr;
    assign clint_m.arid    = sel_lsu ? lsu_s.arid    : ifu_s.arid;
    assign clint_m.arlen   = sel_lsu ? lsu_s.arlen   : ifu_s.arlen;
    assign clint_m.arsize  = sel_lsu ? lsu_s.arsize  : ifu_s.arsize;
    assign clint_m.arburst = sel_lsu ? lsu_s.arburst : ifu_s.arburst;
    assign clint_m.arvalid = r_sel_clint && ((sel_lsu && lsu_s.arvalid) ||
                                             (sel_ifu && ifu_s.arvalid));

    assign m_m.araddr  = sel_lsu ? lsu_s.araddr  : ifu_s.araddr;
    assign m_m.arid    = sel_lsu ? lsu_s.arid    : ifu_s.arid;
    assign m_m.arlen   = sel_lsu ? lsu_s.arlen   : ifu_s.arlen;
    assign m_m.arsize  = sel_lsu ? lsu_s.arsize  : ifu_s.arsize;
    assign m_m.arburst = sel_lsu ? lsu_s.arburst : ifu_s.arburst;
    assign m_m.arvalid = !r_sel_clint && ((sel_lsu && lsu_s.arvalid) ||
                                          (sel_ifu && ifu_s.arvalid));

    // arready 反馈分发: 只在仲裁结果已经锁定到某个 master 之后, 才把它回给那个 master
    // (arready 是电平信号, 绝不能在 R_IDLE 就对 master 透出, 否则会变成假握手)
    assign lsu_s.arready = sel_lsu ? (r_sel_clint ? clint_m.arready : m_m.arready) : 1'b0;
    assign ifu_s.arready = sel_ifu ? (r_sel_clint ? clint_m.arready : m_m.arready) : 1'b0;


    // ==========================================
    // 3. 读数据通道 (R) 路由
    //    根据当前状态 + r_sel_clint 把目标返回的 R 数据分发给对应的发起者
    // ==========================================

    assign lsu_s.rdata  = r_sel_clint ? clint_m.rdata : m_m.rdata;
    assign lsu_s.rid    = r_sel_clint ? clint_m.rid   : m_m.rid;
    assign lsu_s.rresp  = r_sel_clint ? clint_m.rresp : m_m.rresp;
    assign lsu_s.rlast  = r_sel_clint ? clint_m.rlast : m_m.rlast;

    assign ifu_s.rdata  = r_sel_clint ? clint_m.rdata : m_m.rdata;
    assign ifu_s.rid    = r_sel_clint ? clint_m.rid   : m_m.rid;
    assign ifu_s.rresp  = r_sel_clint ? clint_m.rresp : m_m.rresp;
    assign ifu_s.rlast  = r_sel_clint ? clint_m.rlast : m_m.rlast;

    // rvalid 控制：只有当状态匹配时才有效
    assign lsu_s.rvalid = sel_lsu && r_tgt_rvalid;
    assign ifu_s.rvalid = sel_ifu && r_tgt_rvalid;

    // rready 控制：把对应 Master 的 rready 反压给被选中的目标
    assign clint_m.rready = (r_sel_clint && sel_lsu) ? lsu_s.rready :
                            (r_sel_clint && sel_ifu) ? ifu_s.rready : 1'b0;

    assign m_m.rready = (!r_sel_clint && sel_lsu) ? lsu_s.rready :
                        (!r_sel_clint && sel_ifu) ? ifu_s.rready : 1'b0;

endmodule
