
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



// 现在这个xbar的渡口带宽受限, 不支持并行读

    typedef enum logic [1:0] {
        IDLE = 2'b00,
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

            if (state == IDLE) begin
                if (lsu_s.arvalid) begin
                    sel_clint <= (lsu_s.araddr[31:16] == 16'h0200);
                end else begin
                    sel_clint <= 1'b0;
                end
            end
        end
    end

    wire sel_lsu = (state == R_LSU);
    wire sel_ifu = (state == R_IFU);


    // 状态跳转逻辑
    always_comb begin
        next = state;

        case (state)
            IDLE: begin
                if (ifu_s.arvalid) begin   // ifu优先
                    next = R_IFU;
                end else if (lsu_s.arvalid) begin
                    next = R_LSU; 
                end 
            end
            R_IFU: begin   // IFU只对接系统总线
                if (ifu_s.rvalid && ifu_s.rready && ifu_s.rlast) begin
                    next = IDLE;
                end
            end
            R_LSU: begin  // 根据地址选择和clint或者系统总线握手
                if (lsu_s.rvalid && lsu_s.rready && lsu_s.rlast) begin
                    next = IDLE;
                end
            end
            default: ;
        endcase
    end

    assign clint_m.arvalid = sel_clint & sel_lsu & lsu_s.arvalid;   // 到了LSU状态, sel_clint才有效, 这个时候如果地址是clint的地址, 才把arvalid转发给clint
    assign clint_m.araddr = lsu_s.araddr;
    assign clint_m.arid = lsu_s.arid;
    assign clint_m.arlen = lsu_s.arlen;
    assign clint_m.arsize = lsu_s.arsize;
    assign clint_m.arburst = lsu_s.arburst;
    assign clint_m.rready = lsu_s.rready;

    assign m_m.arvalid = !sel_clint & ((sel_lsu & lsu_s.arvalid) | (sel_ifu && ifu_s.arvalid));  // 同样, 到状态才允许握手
    assign m_m.araddr = sel_lsu ? lsu_s.araddr : ifu_s.araddr;
    assign m_m.arid = sel_lsu ? lsu_s.arid : ifu_s.arid;
    assign m_m.arlen = sel_lsu ? lsu_s.arlen : ifu_s.arlen;
    assign m_m.arsize = sel_lsu ? lsu_s.arsize : ifu_s.arsize;
    assign m_m.arburst = sel_lsu ? lsu_s.arburst : ifu_s.arburst;
    assign m_m.rready =  sel_lsu ? lsu_s.rready : ifu_s.rready;

    // 确定状态才把ready信号放出来允许握手
    assign lsu_s.arready = sel_lsu & (sel_clint ? clint_m.arready : m_m.arready);
    assign lsu_s.rdata = sel_clint ? clint_m.rdata : m_m.rdata;
    assign lsu_s.rid = sel_clint ? clint_m.rid : m_m.rid;
    assign lsu_s.rresp = sel_clint ? clint_m.rresp : m_m.rresp;
    assign lsu_s.rlast = sel_clint ? clint_m.rlast : m_m.rlast;
    assign lsu_s.rvalid = sel_clint ? clint_m.rvalid : m_m.rvalid;

    assign ifu_s.arready = sel_ifu & m_m.arready;
    assign ifu_s.rdata = m_m.rdata;
    assign ifu_s.rid = m_m.rid;
    assign ifu_s.rresp = m_m.rresp;
    assign ifu_s.rlast = m_m.rlast;
    assign ifu_s.rvalid = m_m.rvalid;

endmodule
