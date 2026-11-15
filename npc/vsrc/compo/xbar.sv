
module ysyx_26040135_AXI4_Xbar (
    input  logic clock,
    input  logic reset,

    ysyx_26040135_AXI4.slave  ifu_s,   // l
    ysyx_26040135_AXI4.slave  lsu_s,   // ls
    ysyx_26040135_AXI4.master m_m,     // ls
    ysyx_26040135_AXI4.master clint_m  // l
);

    assign clint_m.awaddr = 32'b0;
    assign clint_m.awid = 4'h0;
    assign clint_m.awlen = 8'h00;
    assign clint_m.awsize = 3'b000;
    assign clint_m.awburst = 2'b00
    assign clint_m.awvalid = 1'b0;
    assign clint_m.wdata = 32'b0;
    assign clint_m.wstrb = 2'b00;
    assign clint_m.wlast = 1'b0;
    assign clint_m.wvalid = 1'b0;
    assign clint_m.bready = 1'b0;

    assign m_m.awaddr = lsu_s.awaddr;
    assign m_m.awid = lsu_s.awid;
    assign m_m.awlen = lsu_s.awlen;
    assign m_m.awsize = lsu_s.awsize;
    assign m_m.awburst = lsu_s.awburst;
    assign m_m.awvalid = lsu_s.awvalid;
    assign lsu_s.awready = m_m.awready;

    assign m_m.wdata = lsu_s.wdata;
    assign m_m.wstrb = lsu_s.wstrb;
    assign m_m.wlast = lsu_s.wlast;
    assign m_m.wvalid = lsu_s.wvalid;
    assign lsu_s.wready = m_m.wready;

    assign lsu_s.bid = m_m.bid;
    assign lsu_s.bresp = m_m.bresp;
    assign lsu_s.bvalid = m_m.bvalid;
    assign m_m.bready = lsu_s.bready;




    typedef enum logic [1:0] {
        R_IDLE = 2'b00,
        R_IFU = 2'b01,
        R_LSU = 2'b10
    } state_t;

    state_t state, next;
    logic sel_clint;      

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            sel_clint <= 1'b0;
        end else begin
            state <= next;

            if (state == R_IDLE) begin
                if (lsu_s.arvalid)      sel_clint <= (lsu_s.araddr[31:16] == 16'h0200);
                else if (ifu_s.arvalid) sel_clint <= (ifu_s.araddr[31:16] == 16'h0200);
            end
        end
    end

    wire sel_lsu = (state == R_LSU);
    wire sel_ifu = (state == R_IFU);

    // 被服务的那一笔读, 数据来自哪个目标(组合; 事务期间地址和 sel_clint 都稳定)
    wire r_tgt_rvalid = sel_clint ? clint_m.rvalid : m_m.rvalid;
    wire r_tgt_rlast  = sel_clint ? clint_m.rlast  : m_m.rlast;

    // 状态跳转逻辑
    always_comb begin
        next = state;
        case (state)
            R_IDLE: begin
                if (ifu_s.arvalid) begin   // ifu优先
                    next = R_IFU;
                end else if (lsu_s.arvalid) begin
                    next = R_LSU; 
                end 
            end
            R_IFU: begin   // IFU只对接系统总线
                // 收到 rvalid 且 rready 且 rlast 为高时, 代表当前事务结束
                if (r_tgt_rvalid && ifu_s.rready && r_tgt_rlast) begin
                    next = R_IDLE;
                end
            end
            R_LSU: begin  // 根据地址选择和clint或者系统总线握手
                if (r_tgt_rvalid && lsu_s.rready && r_tgt_rlast) begin
                    next = R_IDLE;
                end
            end
            default: next = R_IDLE;
        endcase
    end


    assign clint_m.araddr  = sel_lsu ? lsu_s.araddr  : ifu_s.araddr;
    assign clint_m.arid    = sel_lsu ? lsu_s.arid    : ifu_s.arid;
    assign clint_m.arlen   = sel_lsu ? lsu_s.arlen   : ifu_s.arlen;
    assign clint_m.arsize  = sel_lsu ? lsu_s.arsize  : ifu_s.arsize;
    assign clint_m.arburst = sel_lsu ? lsu_s.arburst : ifu_s.arburst;
    assign clint_m.arvalid = sel_clint && ((sel_lsu && lsu_s.arvalid) ||
                                             (sel_ifu && ifu_s.arvalid));

    assign m_m.araddr  = sel_lsu ? lsu_s.araddr  : ifu_s.araddr;
    assign m_m.arid    = sel_lsu ? lsu_s.arid    : ifu_s.arid;
    assign m_m.arlen   = sel_lsu ? lsu_s.arlen   : ifu_s.arlen;
    assign m_m.arsize  = sel_lsu ? lsu_s.arsize  : ifu_s.arsize;
    assign m_m.arburst = sel_lsu ? lsu_s.arburst : ifu_s.arburst;
    assign m_m.arvalid = !sel_clint && ((sel_lsu && lsu_s.arvalid) ||
                                          (sel_ifu && ifu_s.arvalid));

    // arready 反馈分发: 只在仲裁结果已经锁定到某个 master 之后, 才把它回给那个 master
    // (arready 是电平信号, 绝不能在 R_IDLE 就对 master 透出, 否则会变成假握手)
    assign lsu_s.arready = sel_lsu ? (sel_clint ? clint_m.arready : m_m.arready) : 1'b0;
    assign ifu_s.arready = sel_ifu ? (sel_clint ? clint_m.arready : m_m.arready) : 1'b0;




    assign lsu_s.rdata  = sel_clint ? clint_m.rdata : m_m.rdata;
    assign lsu_s.rid    = sel_clint ? clint_m.rid   : m_m.rid;
    assign lsu_s.rresp  = sel_clint ? clint_m.rresp : m_m.rresp;
    assign lsu_s.rlast  = sel_clint ? clint_m.rlast : m_m.rlast;

    assign ifu_s.rdata  = sel_clint ? clint_m.rdata : m_m.rdata;
    assign ifu_s.rid    = sel_clint ? clint_m.rid   : m_m.rid;
    assign ifu_s.rresp  = sel_clint ? clint_m.rresp : m_m.rresp;
    assign ifu_s.rlast  = sel_clint ? clint_m.rlast : m_m.rlast;

    // rvalid 控制：只有当状态匹配时才有效
    assign lsu_s.rvalid = sel_lsu && r_tgt_rvalid;
    assign ifu_s.rvalid = sel_ifu && r_tgt_rvalid;

    // rready 控制：把对应 Master 的 rready 反压给被选中的目标
    assign clint_m.rready = (sel_clint && sel_lsu) ? lsu_s.rready :
                            (sel_clint && sel_ifu) ? ifu_s.rready : 1'b0;

    assign m_m.rready = (!sel_clint && sel_lsu) ? lsu_s.rready :
                        (!sel_clint && sel_ifu) ? ifu_s.rready : 1'b0;

endmodule
