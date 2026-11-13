
module ysyx_26040135_AXI_ICACHE (
    input  logic [31:0] bus_araddr,
    input  logic        bus_arvalid,
    output logic        bus_arready,
    input  logic [3:0]  bus_arid,
    input  logic [7:0]  bus_arlen,
    input  logic [2:0]  bus_arsize,
    input  logic [1:0]  bus_arburst,
    output logic [31:0] bus_rdata,
    output logic [1:0]  bus_rresp,
    output logic        bus_rvalid,
    input  logic        bus_rready,
    output logic [3:0]  bus_rid,
    output logic        bus_rlast,

    input  logic [31:0] bus_awaddr,
    input  logic        bus_awvalid,
    output logic        bus_awready,
    input  logic [3:0]  bus_awid,
    input  logic [7:0]  bus_awlen,
    input  logic [2:0]  bus_awsize,
    input  logic [1:0]  bus_awburst,
    input  logic [31:0] bus_wdata,
    input  logic [3:0]  bus_wstrb,
    input  logic        bus_wvalid,
    input  logic        bus_wlast,
    output logic        bus_wready,
    output logic [3:0]  bus_bid,
    output logic [1:0]  bus_bresp,
    output logic        bus_bvalid,
    input  logic        bus_bready,

    output logic [31:0] mbus_araddr,
    output logic        mbus_arvalid,
    input  logic        mbus_arready,
    output logic [3:0]  mbus_arid,
    output logic [7:0]  mbus_arlen,
    output logic [2:0]  mbus_arsize,
    output logic [1:0]  mbus_arburst,
    input  logic [31:0] mbus_rdata,
    input  logic [1:0]  mbus_rresp,
    input  logic        mbus_rvalid,
    output logic        mbus_rready,
    input  logic [3:0]  mbus_rid,
    input  logic        mbus_rlast,

    output logic [31:0] mbus_awaddr,
    output logic        mbus_awvalid,
    input  logic        mbus_awready,
    output logic [3:0]  mbus_awid,
    output logic [7:0]  mbus_awlen,
    output logic [2:0]  mbus_awsize,
    output logic [1:0]  mbus_awburst,
    output logic [31:0] mbus_wdata,
    output logic [3:0]  mbus_wstrb,
    output logic        mbus_wvalid,
    output logic        mbus_wlast,
    input  logic        mbus_wready,
    input  logic [3:0]  mbus_bid,
    input  logic [1:0]  mbus_bresp,
    input  logic        mbus_bvalid,
    output logic        mbus_bready,

    input clock, 
    input reset,

    input [31:0] sw_addr,
    input sw_avail
);


    `ifndef ICACHE_LINE_BYTES
        `define ICACHE_LINE_BYTES 4
    `endif

    `ifndef ICACHE_LINE_AMT
        `define ICACHE_LINE_AMT 16
    `endif

    parameter ICACHE_LINE_BYTES = `ICACHE_LINE_BYTES;
    parameter ICACHE_LINE_AMT   = `ICACHE_LINE_AMT;

    localparam OFFSET_LEN      = $clog2(ICACHE_LINE_BYTES);     // 块内偏移位数
    localparam INDEX_LEN       = $clog2(ICACHE_LINE_AMT);       // 块索引位数
    localparam TAG_LEN         = 32 - INDEX_LEN - OFFSET_LEN;  // 标签位数
    localparam CACHE_LINE_BITS = ICACHE_LINE_BYTES * 8;         // 一行多少位
    localparam LINE_WORDS      = ICACHE_LINE_BYTES / 4;         // 一行几个 32 位字 = 突发拍数
    localparam BEAT_LEN        = (LINE_WORDS > 1) ? $clog2(LINE_WORDS) : 1;
    localparam [7:0] ARLEN     = (LINE_WORDS > 0) ? (LINE_WORDS - 1) : 8'd0; // AXI 的 arlen = 拍数 - 1


    // 可缓存区域的地址高位(见 ysyxsoc.h 的地址表)。两个区间都正好是从 0x?000_0000
    // 开始的 256MB 对齐块, 所以直接看 addr[31:28] 就够了, 不用 32 位比较器。
    localparam [3:0] FLASH_TAG = 4'h3;                         // flash 0x3000_0000~0x3fff_ffff
    localparam [3:0] SDRAM_TAG0 = 4'hA, SDRAM_TAG1 = 4'hB;     // sdram 0xa000_0000~0xbfff_ffff


    logic [CACHE_LINE_BITS-1:0] icache [0:ICACHE_LINE_AMT-1];
    logic [TAG_LEN-1:0]         tag    [0:ICACHE_LINE_AMT-1];
    logic                       valid  [0:ICACHE_LINE_AMT-1];

    logic [31:0] araddr_save;
    logic [1:0]  rresp_save;
    logic [3:0]  bid_save;                  // 写通道要回同一个 awid
    logic [31:0] rdata_save;

    logic [BEAT_LEN-1:0] beat;              // 突发读收到第几拍了



    // 从锁存下来的地址算出的三段(给"发起访存/填入/返回"这些晚于请求拍的动作用)
    logic [TAG_LEN-1:0]   current_tag;
    logic [INDEX_LEN-1:0] current_index;
    logic [31:0]          current_word;     // 行内第几个 32 位字

    assign current_tag   = araddr_save[31:INDEX_LEN+OFFSET_LEN];
    assign current_index = araddr_save[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN];
    // 字序号 = 偏移 >> 2; 块 = 4B 时 offset 只有 2 位, 右移完恒为 0
    assign current_word  = araddr_save[OFFSET_LEN-1:0] >> 2;   // 直接按 32 位目标变量做零扩展

    // 突发读的起始地址: 对齐到这一行的开头
    wire [31:0] line_addr = {araddr_save[31:OFFSET_LEN], {OFFSET_LEN{1'b0}}};
    // 填入时用的位偏移
    wire [31:0] beat_bit  = beat * 32;

    // ⭐ 哪些取指允许写进 icache: 只有 flash 和 SDRAM。
    //    其他区域(SRAM / CLINT / MMIO ...)只是"借道访存": 照样发请求、照样把数据返回给
    //    IFU, 但不填行、不置 valid, 下次还要重新访存。
    //    ⭐ 判据必须用锁存下来的 araddr_save, 不能用 bus_araddr: 后者是 master 当前
    //      驱动的地址, 只在请求那一拍保证等于本笔事务的地址(现在 IFU 恰好一直举着 pc,
    //      所以碰巧也对), 事务后半段不保证还指着同一笔。
    //    ⭐ 只看高 4 位: 一行 4 位比较器, 比两个 32 位比较器省很多面积/延迟,
    //      而且它挂在 OPERATE 的组合路径上(命中判断要用)。
    wire [3:0] req_region = araddr_save[31:28];
    wire req_cacheable = (req_region == FLASH_TAG) ||
                         (req_region == SDRAM_TAG0) || (req_region == SDRAM_TAG1);


    localparam [2:0] IDLE     = 3'd0,
                     OPERATE  = 3'd1,
                     DRAM_AR  = 3'd2,
                     DRAM_R   = 3'd3,
                     RETURN   = 3'd4,
                     WRITE_W  = 3'd5,
                     WRITE_B  = 3'd6;
    reg [2:0] state, next;
    integer i;


    always @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            araddr_save <= '0;
            rresp_save <= '0;
            bid_save   <= '0;
            beat       <= '0;
            rdata_save <= '0;

            for (i = 0; i < ICACHE_LINE_AMT; i = i + 1) begin
                icache[i] <= '0;
                tag[i]    <= '0;
                valid[i]  <= 1'b0;
            end
        end else begin
            state <= next;

            // ---- 收下取指请求(AR), 把地址锁起来 ----
            // ⭐ 这里只能看 arvalid, 不能再 && arready: 拉 arready 的那一拍已经挪到
            //    OPERATE 态了, 在 IDLE 拿 arready 当条件永远不成立 ->
            //    araddr_save 一直是复位值 0, icache 会拿着地址 0x0 去访存 -> 挂死。
            if(state == IDLE && bus_arvalid) begin
                araddr_save <= bus_araddr;
                rresp_save  <= 2'b00;       // 清掉上一次留下的错误码
            end

            // ---- 收下写地址(AW): 本模块不支持写, 只记 awid 用来回 bresp ----
            if(state == IDLE && bus_awvalid) begin
                bid_save <= bus_awid;
            end

            // ---- 突发读刚发出去, 拍号清零 ----
            if(state == DRAM_AR && mbus_arvalid && mbus_arready) begin
                beat <= '0;
            end

            // ---- 突发读每一拍: 可缓存区域才按拍号填进这一行; 其他区域只把数据带回去 ----
            if(state == DRAM_R && mbus_rvalid) begin
                if(req_cacheable && mbus_rresp == 2'b00) begin
                    icache[current_index][beat_bit +: 32] <= mbus_rdata;
                    if(mbus_rlast) begin
                        valid[current_index] <= 1'b1;   // 整行收齐了才算有效
                        tag[current_index]   <= current_tag;
                    end
                end else begin
                    // 不属于可缓存区域, 或者从设备报错: 不填行,
                    // 数据/响应码直接存下来, RETURN 那拍原样交给 IFU
                    rresp_save <= mbus_rresp;
                    rdata_save <= mbus_rdata;
                end
                beat <= mbus_rlast ? '0 : beat + 1'b1;
            end


            if(sw_avail) begin
                if(tag[sw_addr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN]] == sw_addr[31:INDEX_LEN+OFFSET_LEN] && valid[sw_addr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN]]) begin
                    valid[sw_addr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN]] <= 1'b0;
                end
            end
        end
    end

    always_comb begin
        next = state;
        bus_arready = 1'b0;

        bus_rvalid  = 1'b0;
        bus_rdata   = 32'b0;
        bus_rresp   = 2'b00;
        bus_rid     = 4'b0;
        bus_rlast   = 1'b0;

        bus_awready = 1'b0;
        bus_wready  = 1'b0;

        bus_bvalid  = 1'b0;
        bus_bresp   = 2'b00;
        bus_bid     = 4'b0;

        mbus_arvalid = 1'b0;
        // 可缓存区域: 按行对齐发突发读, 一次把整行取回来;
        // 不可缓存区域: 只取需要的那一个字(单拍), 没必要多读
        mbus_araddr = req_cacheable ? line_addr : araddr_save;
        mbus_arid = 4'b0000;
        mbus_arlen = req_cacheable ? ARLEN : 8'h00;   // 一行几个字就发几拍; 4B 块时 = 0
        mbus_arsize = 3'b010;           // 每拍 4 字节
        mbus_arburst = 2'b01;           // INCR: 多拍时地址要递增
        mbus_rready = 1'b0;

        mbus_awvalid = 1'b0;
        mbus_awaddr = '0;
        mbus_wdata = '0;
        mbus_wstrb = '0;
        mbus_awid = 4'b0000;
        mbus_awsize = 3'b010;
        mbus_awlen = 8'h00;
        mbus_awburst = 2'b00;
        mbus_wvalid = 1'b0;
        mbus_bready = 1'b0;

        case (state)
            IDLE: begin
                // 取指优先: icache 的正事就是给 IFU 取指
                if(bus_arvalid) begin
                    next = OPERATE;
                end
                else if(bus_awvalid) begin
                    // 本模块不支持写, 但按讲义要求也要把事务走完, 最后用 bresp=SLVERR 报错
                    bus_awready = 1'b1;
                    if(bus_wvalid) begin
                        bus_wready = 1'b1;      // AW/W 同一拍来了就一起收下
                        next = WRITE_B;
                    end
                    else begin
                        next = WRITE_W;         // 只来了 AW, 去等写数据
                    end
                end
            end

            OPERATE: begin
                bus_arready = 1'b1;     
                // 只有可缓存区域才去查 tag/valid; 其他区域一律当 miss(而且也不会填行)
                if(req_cacheable && valid[current_index] == 1'b1 && current_tag == tag[current_index]) begin
                    next = RETURN;      // cache hit
                end else begin
                    next = DRAM_AR;     // cache miss(或者不在可缓存区域)
                end
            end

            DRAM_AR: begin
                mbus_arvalid = 1'b1;
                if(mbus_arready) begin
                    next = DRAM_R;
                end
            end

            DRAM_R: begin
                if(mbus_rvalid) begin
                    mbus_rready = 1'b1;
                    if(mbus_rlast) begin
                        next = RETURN;
                    end
                end
            end

            RETURN: begin
                bus_rvalid = 1'b1;
                // 可缓存的从 cache 行里按 offset 选字; 不可缓存的用访存直接带回来的数据
                bus_rdata = req_cacheable ? icache[current_index][current_word*32 +: 32]
                                          : rdata_save;
                bus_rresp = rresp_save;
                bus_rlast = 1'b1;               // 单拍返回: 这一拍就是最后一拍
                if(bus_rready) begin
                    next = IDLE;
                end
            end

            WRITE_W: begin
                // AW 已经收下了, 这里只等写数据(收下就丢)
                if(bus_wvalid) begin
                    bus_wready = 1'b1;
                    next = WRITE_B;
                end
            end

            WRITE_B: begin
                bus_bvalid = 1'b1;
                bus_bresp  = 2'b10;             // SLVERR: icache 只读, 不支持写
                bus_bid    = bid_save;
                if(bus_bready) begin
                    next = IDLE;
                end
            end

            default: next = IDLE;
        endcase
    end

endmodule
