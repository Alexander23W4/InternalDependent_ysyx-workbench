/*
通过形式化验证测试 icache 的正确性

思路(讲义):
  - REF: 一个最简单的访存系统 —— 直接读存储器, 没有任何延迟
  - DUT: 让访存请求经过 cache
  - 验证条件: 无论有没有 cache, 读请求返回的结果必须一致

具体做法:
  1. 屏蔽写操作: DUT 的 awvalid/wvalid 恒接 0(没有写, 所以 DUT 和 REF 共用同一个存储器)
  2. REF 直接 mem[地址], DUT 要经过 icache, 延迟不确定 -> 用一个状态机同步:
       等 DUT 把 rvalid 拉起来那一拍, 再拿 DUT 的 rdata 和 REF 的值比
  3. 形式化工具会遍历每个周期所有输入组合, 所以 req_off / block_ar / block_r 都是自由输入,
     任何要跨周期用的东西(req_addr / req_off_q / m_addr_q)都必须先寄存下来
  4. block_ar / block_r 用来给存储器侧加随机反压:
       mbus_arready = ok & ~block_ar, mbus_rvalid = ok & ~block_r
     这样就能在"任意延迟"下检验 DUT 的 AXI 握手逻辑

⭐ 两处为了"让验证本身可信"而做的处理:
   a) 复位由测试台自己产生(不是顶层自由输入)。否则 solver 可以让 DUT 从一个
      "根本没复位过"的任意初始状态开始(比如 valid 位乱置), 产生假反例。
   b) 存储器内容必须用**常量**初始化: 实测 yosys 会报
      "Non-constant data in memory initialization", 所以内容用地址算出来的一组不同常数,
      这样"取错地址"的 bug 才查得出来。下面还有一条自检断言盯着存储器跨周期是否稳定。
*/

module CacheTest (
    input logic       clock,

    input logic [4:0] req_off,      // 请求的字偏移(0~31) -> 地址 = BASE + req_off*4
    input logic       block_ar,     // 自由输入: 存储器"暂时不收" AR
    input logic       block_r       // 自由输入: 存储器"暂时不回"  R
);

    // ------------------------------------------------------------------
    // 存储器与请求地址
    // ------------------------------------------------------------------
    localparam int          MEM_WORDS = 32;                 // 128 字节
    localparam logic [31:0] BASE      = 32'ha000_0000;      // 放在 SDRAM 区间(可缓存)
    localparam int          RST_CYC   = 4;

    logic [31:0] mem [0:MEM_WORDS-1];

    initial begin
        for (int i = 0; i < MEM_WORDS; i = i + 1)
            mem[i] = 32'hA5A5_0000 ^ (32'h9E37_79B9 * i);   // 每个字都不一样
    end

    // ------------------------------------------------------------------
    // 复位(测试台自己产生)
    // ------------------------------------------------------------------
    logic [3:0] boot_cnt = 4'd0;
    logic       reset    = 1'b1;

    always_ff @(posedge clock) begin
        if (boot_cnt != 4'hF) boot_cnt <= boot_cnt + 4'd1;
        reset <= (boot_cnt < RST_CYC);
    end

    // ------------------------------------------------------------------
    // 状态机: 测试台当 AXI master, 一笔一笔地发读请求
    // ------------------------------------------------------------------
    localparam logic [1:0] T_IDLE = 2'd0, T_AR = 2'd1, T_R = 2'd2;

    logic [1:0]  tst;
    logic [31:0] req_addr_r;
    logic [4:0]  req_off_q;         // 这一笔请求的字偏移(REF 用它查存储器)
    logic        req_arvalid_r;
    logic        req_rready_r;

    // ------------------------------------------------------------------
    // DUT
    // ------------------------------------------------------------------
    logic        bus_arready, bus_rvalid, bus_rlast, bus_awready, bus_wready, bus_bvalid;
    logic [31:0] bus_rdata;
    logic [1:0]  bus_rresp, bus_bresp;
    logic [3:0]  bus_rid, bus_bid;

    logic        mbus_arvalid, mbus_rready;
    logic        mbus_arready, mbus_rvalid, mbus_rlast;
    logic [31:0] mbus_araddr, mbus_rdata;
    logic [3:0]  mbus_arid;
    logic [7:0]  mbus_arlen;
    logic [2:0]  mbus_arsize;
    logic [1:0]  mbus_arburst, mbus_rresp;

    ysyx_26040135_AXI_ICACHE dut (
        .clock  (clock),
        .reset  (reset),

        .bus_araddr  (req_addr_r),
        .bus_arvalid (req_arvalid_r),
        .bus_arready (bus_arready),

        .bus_rdata   (bus_rdata),
        .bus_rresp   (bus_rresp),
        .bus_rvalid  (bus_rvalid),
        .bus_rlast   (bus_rlast),
        .bus_rid     (bus_rid),
        .bus_rready  (req_rready_r),

        // 讲义要求: 屏蔽写操作
        .bus_awvalid (1'b0),
        .bus_awid    (4'b0),
        .bus_awaddr  (32'b0),
        .bus_awlen   (8'b0),
        .bus_awsize  (3'b0),
        .bus_awburst (2'b0),
        .bus_awready (bus_awready),

        .bus_wdata   (32'b0),
        .bus_wstrb   (4'b0),
        .bus_wvalid  (1'b0),
        .bus_wready  (bus_wready),

        .bus_bresp   (bus_bresp),
        .bus_bvalid  (bus_bvalid),
        .bus_bid     (bus_bid),
        .bus_bready  (1'b0),

        // mbus: 接到下面的"存储器"上
        .mbus_araddr  (mbus_araddr),
        .mbus_arvalid (mbus_arvalid),
        .mbus_arready (mbus_arready),
        .mbus_arid    (mbus_arid),
        .mbus_arlen   (mbus_arlen),
        .mbus_arsize  (mbus_arsize),
        .mbus_arburst (mbus_arburst),

        .mbus_rdata   (mbus_rdata),
        .mbus_rresp   (mbus_rresp),
        .mbus_rvalid  (mbus_rvalid),
        .mbus_rlast   (mbus_rlast),
        .mbus_rready  (mbus_rready),

        // icache 不会写内存, 这几个输出不接
        .mbus_awvalid (),
        .mbus_awready (1'b0),
        .mbus_awaddr  (),
        .mbus_awid    (),
        .mbus_awlen   (),
        .mbus_awsize  (),
        .mbus_awburst (),
        .mbus_wdata   (),
        .mbus_wstrb   (),
        .mbus_wvalid  (),
        .mbus_wready  (1'b0),
        .mbus_bresp   (2'b0),
        .mbus_bvalid  (1'b0),
        .mbus_bid     (4'b0),
        .mbus_bready  ()
    );

    // ------------------------------------------------------------------
    // 一个最简 AXI 从设备当作"存储器": 收一笔 AR, 下一拍回一拍 R
    //   随机反压就是在这里加的(讲义提示的 block 信号)
    // ------------------------------------------------------------------
    logic        m_pend;
    logic [31:0] m_addr_q;

    assign mbus_arready = (~m_pend) & ~block_ar;     // 随机: 有时不收 AR
    assign mbus_rvalid  = m_pend    & ~block_r;      // 随机: 有时不回 R
    assign mbus_rlast   = 1'b1;                      // 单拍
    assign mbus_rresp   = 2'b00;
    assign mbus_rdata   = mem[m_addr_q[6:2]];        // 128 字节 -> 字地址是 5 位

    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            m_pend   <= 1'b0;
            m_addr_q <= 32'b0;
        end else begin
            if (mbus_arvalid && mbus_arready) begin
                m_pend   <= 1'b1;
                m_addr_q <= mbus_araddr;             // ⭐ 地址必须寄存
            end
            if (mbus_rvalid && mbus_rready) begin
                m_pend <= 1'b0;
            end
        end
    end

    // ------------------------------------------------------------------
    // master 状态机
    // ------------------------------------------------------------------
    always_ff @(posedge clock or posedge reset) begin
        if (reset) begin
            tst           <= T_IDLE;
            req_addr_r    <= BASE;
            req_off_q     <= 5'd0;
            req_arvalid_r <= 1'b0;
            req_rready_r  <= 1'b0;
        end else begin
            case (tst)
                T_IDLE: begin
                    // ⭐ req_off 是自由输入, 每周期都在变, 所以和地址一起寄存下来
                    req_addr_r    <= BASE + {req_off, 2'b00};
                    req_off_q     <= req_off;
                    req_arvalid_r <= 1'b1;
                    req_rready_r  <= 1'b0;
                    tst           <= T_AR;
                end

                T_AR: begin
                    if (bus_arready) begin
                        req_arvalid_r <= 1'b0;
                        req_rready_r  <= 1'b1;
                        tst           <= T_R;
                    end
                end

                T_R: begin
                    if (bus_rvalid) begin
                        req_rready_r <= 1'b0;
                        tst          <= T_IDLE;
                    end
                end

                default: tst <= T_IDLE;
            endcase
        end
    end

    // ------------------------------------------------------------------
    // ⭐ 验证条件: DUT 返回读数据那一拍, 必须和 REF 直接读存储器一样
    //    用带名字的 assert(不带 else): yosys 会把它报成
    //    "failed assertion <名字> at icache.sv:行号", 反例波形里能看到具体数值
    // ------------------------------------------------------------------
    always_ff @(posedge clock) begin
        if (!reset && tst == T_R && bus_rvalid && req_rready_r) begin
            a_rresp_okay : assert (bus_rresp == 2'b00);
            a_data_match : assert (bus_rdata == mem[req_off_q]);
        end
    end

    // ------------------------------------------------------------------
    // 自检: 存储器内容必须跨周期稳定, 否则 REF 和 DUT 看到的不是同一份数据,
    //       整个验证就不可信了(用一个每周期都在变的自由地址持续盯着)
    // ------------------------------------------------------------------
    logic [4:0]  mon_idx_q;
    logic [31:0] mon_val_q;

    always_ff @(posedge clock) begin
        mon_idx_q <= req_off;
        mon_val_q <= mem[req_off];
        if (!reset)
            a_mem_stable : assert (mem[mon_idx_q] == mon_val_q);
    end

endmodule
