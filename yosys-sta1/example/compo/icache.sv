
module ysyx_26040135_AXI_ICACHE (
        input  logic [31:0] bus_araddr,
    input  logic [3:0]  bus_arid,
    input  logic [7:0]  bus_arlen,
    input  logic [2:0]  bus_arsize,
    input  logic [1:0]  bus_arburst,
    input  logic        bus_arvalid,
    output logic        bus_arready,
    output logic [31:0] bus_rdata,
    output logic [3:0]  bus_rid,
    output logic [1:0]  bus_rresp,
    output logic        bus_rlast,
    output logic        bus_rvalid,
    input  logic        bus_rready,
    input  logic [31:0] bus_awaddr,
    input  logic [3:0]  bus_awid,
    input  logic [7:0]  bus_awlen,
    input  logic [2:0]  bus_awsize,
    input  logic [1:0]  bus_awburst,
    input  logic        bus_awvalid,
    output logic        bus_awready,
    input  logic [31:0] bus_wdata,
    input  logic [3:0]  bus_wstrb,
    input  logic        bus_wlast,
    input  logic        bus_wvalid,
    output logic        bus_wready,
    output logic [3:0]  bus_bid,
    output logic [1:0]  bus_bresp,
    output logic        bus_bvalid,
    input  logic        bus_bready,
        output logic [31:0] mbus_araddr,
    output logic [3:0]  mbus_arid,
    output logic [7:0]  mbus_arlen,
    output logic [2:0]  mbus_arsize,
    output logic [1:0]  mbus_arburst,
    output logic        mbus_arvalid,
    input  logic        mbus_arready,
    input  logic [31:0] mbus_rdata,
    input  logic [3:0]  mbus_rid,
    input  logic [1:0]  mbus_rresp,
    input  logic        mbus_rlast,
    input  logic        mbus_rvalid,
    output logic        mbus_rready,
    output logic [31:0] mbus_awaddr,
    output logic [3:0]  mbus_awid,
    output logic [7:0]  mbus_awlen,
    output logic [2:0]  mbus_awsize,
    output logic [1:0]  mbus_awburst,
    output logic        mbus_awvalid,
    input  logic        mbus_awready,
    output logic [31:0] mbus_wdata,
    output logic [3:0]  mbus_wstrb,
    output logic        mbus_wlast,
    output logic        mbus_wvalid,
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
    localparam [7:0] ARLEN     = LINE_WORDS[7:0] - 8'd1;           // AXI 的 arlen = 拍数 - 1


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
    assign current_word  = {{(32-OFFSET_LEN){1'b0}}, araddr_save[OFFSET_LEN-1:0]} >> 2;   // 显式零扩展到 32 位再移位

    // 突发读的起始地址: 对齐到这一行的开头
    wire [31:0] line_addr = {araddr_save[31:OFFSET_LEN], {OFFSET_LEN{1'b0}}};
    // 填入时用的位偏移
    wire [31:0] beat_bit  = beat * 32;

    wire [3:0] req_region = araddr_save[31:28];
    wire req_cacheable = (req_region == FLASH_TAG) ||
                         (req_region == SDRAM_TAG0) || (req_region == SDRAM_TAG1);


    typedef enum logic [2:0]{ 
        IDLE, OPERATE, DRAM_AR, DRAM_R, RETURN, WRITE_W, WRITE_B
    } state_t;
    state_t state, next;




    always @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            araddr_save <= '0;
            rresp_save <= '0;
            bid_save   <= '0;
            beat       <= '0;
            rdata_save <= '0;

            for (int i = 0; i < ICACHE_LINE_AMT; i++) begin
                icache[i] <= '0;
                tag[i]    <= '0;
                valid[i]  <= 1'b0;
            end
        end else begin
            state <= next;


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

    // icache 的 master 只发读, W 通道不用, wlast 固定 0(vsrc 里本来悬空)
    assign mbus_wlast = 1'b0;

endmodule
