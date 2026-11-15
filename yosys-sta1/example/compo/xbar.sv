
module ysyx_26040135_AXI4_Xbar (
    input  logic clock,
    input  logic reset,

    input   logic [31:0] ifu_s_araddr,
    input   logic [3:0] ifu_s_arid,
    input   logic [7:0] ifu_s_arlen,
    input   logic [2:0] ifu_s_arsize,
    input   logic [1:0] ifu_s_arburst,
    input   logic        ifu_s_arvalid,
    output  logic        ifu_s_arready,
    output  logic [31:0] ifu_s_rdata,
    output  logic [3:0] ifu_s_rid,
    output  logic [1:0] ifu_s_rresp,
    output  logic        ifu_s_rlast,
    output  logic        ifu_s_rvalid,
    input   logic        ifu_s_rready,

    input   logic [31:0] lsu_s_araddr,
    input   logic [3:0] lsu_s_arid,
    input   logic [7:0] lsu_s_arlen,
    input   logic [2:0] lsu_s_arsize,
    input   logic [1:0] lsu_s_arburst,
    input   logic        lsu_s_arvalid,
    output  logic        lsu_s_arready,
    output  logic [31:0] lsu_s_rdata,
    output  logic [3:0] lsu_s_rid,
    output  logic [1:0] lsu_s_rresp,
    output  logic        lsu_s_rlast,
    output  logic        lsu_s_rvalid,
    input   logic        lsu_s_rready,
    input   logic [31:0] lsu_s_awaddr,
    input   logic [3:0] lsu_s_awid,
    input   logic [7:0] lsu_s_awlen,
    input   logic [2:0] lsu_s_awsize,
    input   logic [1:0] lsu_s_awburst,
    input   logic        lsu_s_awvalid,
    output  logic        lsu_s_awready,
    input   logic [31:0] lsu_s_wdata,
    input   logic [3:0] lsu_s_wstrb,
    input   logic        lsu_s_wlast,
    input   logic        lsu_s_wvalid,
    output  logic        lsu_s_wready,
    output  logic [3:0] lsu_s_bid,
    output  logic [1:0] lsu_s_bresp,
    output  logic        lsu_s_bvalid,
    input   logic        lsu_s_bready,

    output  logic [31:0] m_m_araddr,
    output  logic [3:0] m_m_arid,
    output  logic [7:0] m_m_arlen,
    output  logic [2:0] m_m_arsize,
    output  logic [1:0] m_m_arburst,
    output  logic        m_m_arvalid,
    input   logic        m_m_arready,
    input   logic [31:0] m_m_rdata,
    input   logic [3:0] m_m_rid,
    input   logic [1:0] m_m_rresp,
    input   logic        m_m_rlast,
    input   logic        m_m_rvalid,
    output  logic        m_m_rready,
    output  logic [31:0] m_m_awaddr,
    output  logic [3:0] m_m_awid,
    output  logic [7:0] m_m_awlen,
    output  logic [2:0] m_m_awsize,
    output  logic [1:0] m_m_awburst,
    output  logic        m_m_awvalid,
    input   logic        m_m_awready,
    output  logic [31:0] m_m_wdata,
    output  logic [3:0] m_m_wstrb,
    output  logic        m_m_wlast,
    output  logic        m_m_wvalid,
    input   logic        m_m_wready,
    input   logic [3:0] m_m_bid,
    input   logic [1:0] m_m_bresp,
    input   logic        m_m_bvalid,
    output  logic        m_m_bready,

    output  logic [31:0] clint_m_araddr,
    output  logic [3:0] clint_m_arid,
    output  logic [7:0] clint_m_arlen,
    output  logic [2:0] clint_m_arsize,
    output  logic [1:0] clint_m_arburst,
    output  logic        clint_m_arvalid,
    input   logic        clint_m_arready,
    input   logic [31:0] clint_m_rdata,
    input   logic [3:0] clint_m_rid,
    input   logic [1:0] clint_m_rresp,
    input   logic        clint_m_rlast,
    input   logic        clint_m_rvalid,
    output  logic        clint_m_rready
);

    assign m_m_awaddr = lsu_s_awaddr;
    assign m_m_awid = lsu_s_awid;
    assign m_m_awlen = lsu_s_awlen;
    assign m_m_awsize = lsu_s_awsize;
    assign m_m_awburst = lsu_s_awburst;
    assign m_m_awvalid = lsu_s_awvalid;
    assign lsu_s_awready = m_m_awready;

    assign m_m_wdata = lsu_s_wdata;
    assign m_m_wstrb = lsu_s_wstrb;
    assign m_m_wlast = lsu_s_wlast;
    assign m_m_wvalid = lsu_s_wvalid;
    assign lsu_s_wready = m_m_wready;

    assign lsu_s_bid = m_m_bid;
    assign lsu_s_bresp = m_m_bresp;
    assign lsu_s_bvalid = m_m_bvalid;
    assign m_m_bready = lsu_s_bready;



// 现在这个xbar的渡口带宽受限, 不支持并行读

    typedef enum logic [1:0] {
        IDLE = 2'b00,
        R_IFU = 2'b01,
        R_LSU = 2'b10
    } state_t;

    state_t state, next;
    logic sel_clint;      

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            sel_clint <= 1'b0;
        end else begin
            state <= next;

            if (state == IDLE) begin
                if (state == IDLE) begin
                    if (ifu_s_arvalid) begin          
                        sel_clint <= 1'b0;
                    end 
                    else if (lsu_s_arvalid) begin
                        sel_clint <= (lsu_s_araddr[31:16] == 16'h0200);
                    end
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
                if (ifu_s_arvalid) begin   // ifu优先
                    next = R_IFU;
                end else if (lsu_s_arvalid) begin
                    next = R_LSU; 
                end 
            end
            R_IFU: begin   // IFU只对接系统总线
                if (ifu_s_rvalid && ifu_s_rready && ifu_s_rlast) begin
                    next = IDLE;
                end
            end
            R_LSU: begin  // 根据地址选择和clint或者系统总线握手
                if (lsu_s_rvalid && lsu_s_rready && lsu_s_rlast) begin
                    next = IDLE;
                end
            end
            default: ;
        endcase
    end

    assign clint_m_arvalid = sel_clint & sel_lsu & lsu_s_arvalid;   // 到了LSU状态, sel_clint才有效, 这个时候如果地址是clint的地址, 才把arvalid转发给clint
    assign clint_m_araddr = lsu_s_araddr;
    assign clint_m_arid = lsu_s_arid;
    assign clint_m_arlen = lsu_s_arlen;
    assign clint_m_arsize = lsu_s_arsize;
    assign clint_m_arburst = lsu_s_arburst;
    assign clint_m_rready = lsu_s_rready;

    assign m_m_arvalid = !sel_clint & ((sel_lsu & lsu_s_arvalid) | (sel_ifu && ifu_s_arvalid));  // 同样, 到状态才允许握手
    assign m_m_araddr = sel_lsu ? lsu_s_araddr : ifu_s_araddr;
    assign m_m_arid = sel_lsu ? lsu_s_arid : ifu_s_arid;
    assign m_m_arlen = sel_lsu ? lsu_s_arlen : ifu_s_arlen;
    assign m_m_arsize = sel_lsu ? lsu_s_arsize : ifu_s_arsize;
    assign m_m_arburst = sel_lsu ? lsu_s_arburst : ifu_s_arburst;
    assign m_m_rready =  sel_lsu ? lsu_s_rready : ifu_s_rready;

    // 确定状态才把ready信号放出来允许握手
    assign lsu_s_arready = sel_lsu & (sel_clint ? clint_m_arready : m_m_arready);
    assign lsu_s_rdata = sel_clint ? clint_m_rdata : m_m_rdata;
    assign lsu_s_rid = sel_clint ? clint_m_rid : m_m_rid;
    assign lsu_s_rresp = sel_clint ? clint_m_rresp : m_m_rresp;
    assign lsu_s_rlast = sel_clint ? clint_m_rlast : m_m_rlast;
    assign lsu_s_rvalid = sel_clint ? clint_m_rvalid : m_m_rvalid;

    assign ifu_s_arready = sel_ifu & m_m_arready;
    assign ifu_s_rdata = m_m_rdata;
    assign ifu_s_rid = m_m_rid;
    assign ifu_s_rresp = m_m_rresp;
    assign ifu_s_rlast = m_m_rlast;
    assign ifu_s_rvalid = m_m_rvalid;

endmodule
