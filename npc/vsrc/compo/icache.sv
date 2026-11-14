/*
根据上述流程, 实现一个简单的icache, 块大小为4B, 共16个cache块. 
⭐: 本icache 只向 FLASH 和 SDRAM 提供缓存, 如果在其他空间, 则不调用缓存, 直接将指令沿着总线向下传递
Flash	              0x3000_0000~0x3fff_ffff    
SDRAM	              0xa000_0000~0xbfff_ffff

⭐: 实现时, 建议将相关参数实现成可配置的, 以便于后续评估不同配置参数的性能表现. 实现后, 尝试评估其性能表现.

IFU向icache发送取指请求

icache获得取指请求的地址后, 根据index部分索引出一个cache块, 判断其tag与请求地址的tag是否相同, 并检查该cache块是否有效. 若同时满足上述条件, 则命中, 跳转到第5步

通过总线在DRAM中读出请求所在的数据块

将该数据块填入相应cache块中, 更新元数据

向IFU返回取出的指令

⭐: 增加有关icache的 perf counter:
icache 的 hit数 和 miss数
icache 的 hit的CPI 和 miss的CPI


------------------------------------------------------------------------------------------------
⭐ 支持任意块大小(2 的幂, >= 4 字节):
    真正要调的参数只有 ICACHE_LINE_BYTES(块大小, 字节) 和 ICACHE_LINE_AMT(块数),
    offset/index/tag 的位宽和"一行几个 32 位字"全部推出来 -> 换块大小只改一个参数。

   块 > 4B 时:
     - 取的是**整行**: 用突发读(arlen = 一行几个字 - 1, arburst = INCR), 一拍收一个 32 位字,
       按拍号填进行里, 收到 rlast 才把 valid 置起来;
     - 返回给 IFU 时, 用地址里的 offset 从行里**选出**它要的那 32 位。
   块 = 4B 时这两件事都退化成原来的行为: arlen=0(单拍), 行里只有 1 个字, 选出来就是它本身。

⭐: 支持burst传输
2'b00 → FIXED
2'b01 → INCR
2'b10 → WRAP

*/

/*
一定要把cache的优化流程弄的非常熟, 做基于统计的优化, 
cache这里的 block, set-associative, agorithm(替换算法), 时序优化减少hit-time, multi_level, write_buf, 总面积 的 优化永远都是重点
cache一定是关键路径

一定要熟用cachesim
烂熟 统计->优化->统计->优化 的流程
*/

module ysyx_26040135_AXI_ICACHE (
    ysyx_26040135_AXI4.slave bus,    // 接收IFU的请求
    ysyx_26040135_AXI4.master mbus,   // ->系统总线
    input clock, 
    input reset,

    input [31:0] sw_addr,
    input sw_avail
);


    `ifndef ICACHE_LINE_BYTES   // 这个cache_line 是要整体传输的, 所以最好设置成总线带宽的倍数, 这样方便burst传输
        `define ICACHE_LINE_BYTES 4    // 对应 OFFSET
    `endif

    `ifndef ICACHE_LINE_AMT
        `define ICACHE_LINE_AMT 16    // 对应 INDEX
    `endif

    parameter ICACHE_LINE_BYTES = `ICACHE_LINE_BYTES;
    parameter ICACHE_LINE_AMT   = `ICACHE_LINE_AMT;

    localparam OFFSET_LEN      = $clog2(ICACHE_LINE_BYTES);     // 块内偏移位数
    localparam INDEX_LEN       = $clog2(ICACHE_LINE_AMT);       // 块索引位数
    localparam TAG_LEN         = 32 - INDEX_LEN - OFFSET_LEN;  // 标签位数

    localparam CACHE_LINE_BITS = ICACHE_LINE_BYTES * 8;         // 一行多少位
    localparam LINE_WORDS      = ICACHE_LINE_BYTES / 4;         // 一行几个 32 位字 = 突发拍数

    localparam BEAT_LEN        = (LINE_WORDS > 1) ? $clog2(LINE_WORDS) : 1;   // 表示突发拍数counter的位数

    localparam [7:0] ARLEN     = 8'(LINE_WORDS - 1);           // AXI 的 arlen = 拍数 - 1



    logic [CACHE_LINE_BITS-1:0] icache [0:ICACHE_LINE_AMT-1];     // icache

    logic [TAG_LEN-1:0]         tag    [0:ICACHE_LINE_AMT-1];
    logic                       valid  [0:ICACHE_LINE_AMT-1];


    logic [1:0]  rresp_save;
    logic [BEAT_LEN-1:0] beat;              // 突发读收counter



// 下面的这些都是从bus.araddr开始的, bus.araddr是连着pc(reg)的, bus,araddr在ifu访存(icache)期间不会改变

    logic [TAG_LEN-1:0]   current_tag;
    logic [INDEX_LEN-1:0] current_index;
    logic [31:0]          current_word;     // 行内第几个 32 位字

    assign current_tag   = bus.araddr[31:INDEX_LEN+OFFSET_LEN];
    assign current_index = bus.araddr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN];
    assign current_word  = 32'(bus.araddr[OFFSET_LEN-1:0]) >> 2;   // 显式零扩展到 32 位再移位

    // 突发读的起始地址
    wire [31:0] line_addr = {bus.araddr[31:OFFSET_LEN], {OFFSET_LEN{1'b0}}};





    typedef enum logic [2:0]{ 
        IDLE, MISS_AR, MISS_R, RETURN
    } state_t;
    state_t state, next;




    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;

            for (int i = 0; i < ICACHE_LINE_AMT; i++) begin
                valid[i]  <= 1'b0;   // 只需给valid请零即可, 全部设置成脏数据
            end

        end else begin
            state <= next;

            if(state == IDLE && bus.arvalid) begin   // 清掉上一次访存的残留状态
                rresp_save  <= 2'b00;       
                beat <= '0;
            end


            // burst每一拍
            if(state == MISS_R && mbus.rvalid) begin
                if(mbus.rresp == 2'b00) begin
                    icache[current_index][beat*32 +: 32] <= mbus.rdata;     // ⭐

                    if(mbus.rlast) begin
                        valid[current_index] <= 1'b1;   // 整行收齐了才算有效
                        tag[current_index]   <= current_tag;
                    end
                end else begin
                    rresp_save <= mbus.rresp;
                end
                beat <= mbus.rlast ? '0 : beat + 1'b1;
            end

            // 设置脏数据(某些需要取值的地址被写了)
            if(sw_avail) begin
                if(tag[sw_addr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN]] == sw_addr[31:INDEX_LEN+OFFSET_LEN] && valid[sw_addr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN]]) begin
                    valid[sw_addr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN]] <= 1'b0;
                end
            end
        end
    end

    always_comb begin
        next = state;
        bus.arready = 1'b0;

        bus.rvalid  = 1'b0;
        bus.rdata   = 32'b0;
        bus.rresp   = 2'b00;
        bus.rid     = 4'b0;
        bus.rlast   = 1'b0;

        bus.awready = 1'b0;
        bus.wready  = 1'b0;

        bus.bvalid  = 1'b0;
        bus.bresp   = 2'b00;
        bus.bid     = 4'b0;

        mbus.arvalid = 1'b0;
        mbus.araddr = line_addr;
        mbus.arid = 4'b0000;
        mbus.arlen = ARLEN;   // burst拍
        mbus.arsize = 3'b010;    // 每拍 4 字节
        mbus.arburst = 2'b01;   // INCR: 地址递增突发  
        mbus.rready = 1'b0;

        mbus.awvalid = 1'b0;
        mbus.awaddr = '0;
        mbus.wdata = '0;
        mbus.wstrb = '0;
        mbus.awid = 4'b0000;
        mbus.awsize = 3'b010;
        mbus.awlen = 8'h00;
        mbus.awburst = 2'b00;
        mbus.wvalid = 1'b0;
        mbus.bready = 1'b0;

        next = IDLE;

        case (state)
            IDLE: begin
                if(bus.arvalid) begin
                    bus.arready = 1'b1;      // 首先tag要和当下同一个index的cache_line存储的tag要一样, 其次要valid (是干净数据)
                    if(current_tag == tag[current_index] && valid[current_index] == 1'b1) begin 
                        next = RETURN;      // cache hit
                    end else begin
                        next = MISS_AR;     // cache miss
                    end
                end
            end


            MISS_AR: begin
                mbus.arvalid = 1'b1;
                if(mbus.arready) begin
                    next = MISS_R;
                end
            end

            MISS_R: begin
                if(mbus.rvalid) begin
                    mbus.rready = 1'b1;
                    if(mbus.rlast) begin
                        next = RETURN;
                    end
                end
            end

            RETURN: begin
                bus.rvalid = 1'b1;
                bus.rdata = icache[current_index][current_word*32 +: 32];    // ⭐
                bus.rresp = rresp_save;           // 把存储器(如果有)的rresp带过来
                if(bus.rready) begin
                    next = IDLE;
                end
            end

        endcase
    end

endmodule
