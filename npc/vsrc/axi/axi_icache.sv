/*
根据上述流程, 实现一个简单的icache, 块大小为4B, 共16个cache块. 
⭐: 本icache 并不判断地址的范围, 如果不再 SDRAM 的范围内, 那么要么漏下去交给下面报错, 要么ub

⭐: 实现时, 建议将相关参数实现成可配置的, 以便于后续评估不同配置参数的性能表现. 实现后, 尝试评估其性能表现.

IFU向icache发送取指请求

icache获得取指请求的地址后, 根据index部分索引出一个cache块, 判断其tag与请求地址的tag是否相同, 并检查该cache块是否有效. 若同时满足上述条件, 则命中, 跳转到第5步

通过总线在DRAM中读出请求所在的数据块

将该数据块填入相应cache块中, 更新元数据

向IFU返回取出的指令

------------------------------------------------------------------------------------------------
⭐ 支持任意块大小(2 的幂, >= 4 字节):
    真正要调的参数只有 CACHE_LINE_BYTES(块大小, 字节) 和 CACHE_LINE_AMT(块数),
    offset/index/tag 的位宽和"一行几个 32 位字"全部推出来 -> 换块大小只改一个参数。

   块 > 4B 时:
     - 取的是**整行**: 用突发读(arlen = 一行几个字 - 1, arburst = INCR), 一拍收一个 32 位字,
       按拍号填进行里, 收到 rlast 才把 valid 置起来;
     - 返回给 IFU 时, 用地址里的 offset 从行里**选出**它要的那 32 位。
   块 = 4B 时这两件事都退化成原来的行为: arlen=0(单拍), 行里只有 1 个字, 选出来就是它本身。
*/

module ysyx_26040135_AXI_ICACHE (
    ysyx_26040135_AXI4.slave bus,
    ysyx_26040135_AXI4.master mbus,
    input clock, 
    input reset
);
    // ------------------------------------------------------------------
    // 参数: 只有这两个需要调, 且都必须是 2 的幂
    //   (原来 TAG_LEN 是手写的 26, 一改 INDEX_LEN/OFFSET_LEN 就不对了)
    // ------------------------------------------------------------------
    parameter CACHE_LINE_BYTES = 4;                            // 块大小, 单位字节
    parameter CACHE_LINE_AMT   = 16;                           // cache 块数

    localparam OFFSET_LEN      = $clog2(CACHE_LINE_BYTES);     // 块内偏移位数
    localparam INDEX_LEN       = $clog2(CACHE_LINE_AMT);       // 块索引位数
    localparam TAG_LEN         = 32 - INDEX_LEN - OFFSET_LEN;  // 标签位数
    localparam CACHE_LINE_BITS = CACHE_LINE_BYTES * 8;         // 一行多少位
    localparam LINE_WORDS      = CACHE_LINE_BYTES / 4;         // 一行几个 32 位字 = 突发拍数
    localparam BEAT_LEN        = (LINE_WORDS > 1) ? $clog2(LINE_WORDS) : 1;
    localparam [7:0] ARLEN     = 8'(LINE_WORDS - 1);           // AXI 的 arlen = 拍数 - 1


    logic [CACHE_LINE_BITS-1:0] icache [0:CACHE_LINE_AMT-1];
    logic [TAG_LEN-1:0]         tag    [0:CACHE_LINE_AMT-1];
    logic                       valid  [0:CACHE_LINE_AMT-1];

    logic [31:0] araddr_save;
    logic [1:0]  rresp_save;
    logic [3:0]  bid_save;                  // 写通道要回同一个 awid
    logic [BEAT_LEN-1:0] beat;              // 突发读收到第几拍了


    // 从锁存下来的地址算出的三段(给"发起访存/填入/返回"这些晚于请求拍的动作用)
    logic [TAG_LEN-1:0]   current_tag;
    logic [INDEX_LEN-1:0] current_index;
    logic [31:0]          current_word;     // 行内第几个 32 位字

    assign current_tag   = araddr_save[31:INDEX_LEN+OFFSET_LEN];
    assign current_index = araddr_save[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN];
    // 字序号 = 偏移 >> 2; 块 = 4B 时 offset 只有 2 位, 右移完恒为 0
    assign current_word  = 32'(araddr_save[OFFSET_LEN-1:0]) >> 2;   // 显式零扩展到 32 位再移位

    // 突发读的起始地址: 对齐到这一行的开头
    wire [31:0] line_addr = {araddr_save[31:OFFSET_LEN], {OFFSET_LEN{1'b0}}};
    // 填入时用的位偏移
    wire [31:0] beat_bit  = beat * 32;


    typedef enum [2:0]{ 
        IDLE, OPERATE, DRAM_AR, DRAM_R, RETURN, WRITE_W, WRITE_B
    } state_t;
    state_t state, next;


    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            araddr_save <= '0;
            rresp_save <= '0;
            bid_save   <= '0;
            beat       <= '0;
            for (int i = 0; i < CACHE_LINE_AMT; i++) begin
                icache[i] <= '0;
                tag[i]    <= '0;
                valid[i]  <= 1'b0;
            end
        end else begin
            state <= next;

            // ---- 收下取指请求(AR), 把地址锁起来 ----
            if(state == IDLE && bus.arvalid && bus.arready) begin
                araddr_save <= bus.araddr;
                rresp_save  <= 2'b00;       // 清掉上一次留下的错误码
            end

            // ---- 收下写地址(AW): 本模块不支持写, 只记 awid 用来回 bresp ----
            if(state == IDLE && bus.awvalid && bus.awready) begin
                bid_save <= bus.awid;
            end

            // ---- 突发读刚发出去, 拍号清零 ----
            if(state == DRAM_AR && mbus.arvalid && mbus.arready) begin
                beat <= '0;
            end

            // ---- 突发读每一拍: 按拍号把 32 位数据填进这一行的对应字 ----
            if(state == DRAM_R && mbus.rvalid) begin
                if(mbus.rresp == 2'b00) begin
                    icache[current_index][beat_bit +: 32] <= mbus.rdata;
                    if(mbus.rlast) begin
                        valid[current_index] <= 1'b1;   // 整行收齐了才算有效
                        tag[current_index]   <= current_tag;
                    end
                end else begin
                    // 从设备报错: 这一行不填, 把错误码原样透传给 IFU
                    rresp_save <= mbus.rresp;
                end
                beat <= mbus.rlast ? '0 : beat + 1'b1;
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
        mbus.arlen = ARLEN;             // 一行几个字就发几拍; 4B 块时 = 0 (单拍, 和原来一样)
        mbus.arsize = 3'b010;           // 每拍 4 字节
        mbus.arburst = 2'b01;           // INCR: 多拍时地址要递增
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

        case (state)
            IDLE: begin
                // 取指优先: icache 的正事就是给 IFU 取指
                if(bus.arvalid) begin
                    bus.arready = 1'b1;
                    next = OPERATE;             // ⭐ 少了这句就永远出不了 IDLE
                end
                else if(bus.awvalid) begin
                    // 本模块不支持写, 但按讲义要求也要把事务走完, 最后用 bresp=SLVERR 报错
                    bus.awready = 1'b1;
                    if(bus.wvalid) begin
                        bus.wready = 1'b1;      // AW/W 同一拍来了就一起收下
                        next = WRITE_B;
                    end
                    else begin
                        next = WRITE_W;         // 只来了 AW, 去等写数据
                    end
                end
            end

            OPERATE: begin
                if(valid[current_index] == 1'b1 && current_tag == tag[current_index]) begin   // cache hit
                    next = RETURN;
                end else begin  // cache miss
                    next = DRAM_AR;
                end
            end

            DRAM_AR: begin
                mbus.arvalid = 1'b1;
                if(mbus.arready) begin
                    next = DRAM_R;
                end
            end

            DRAM_R: begin
                // 一行可能不止一拍: 收到 rlast(或者从设备报错)才结束
                if(mbus.rvalid) begin
                    mbus.rready = 1'b1;
                    if(mbus.rresp != 2'b00 || mbus.rlast) begin
                        next = RETURN;
                    end
                end
            end

            RETURN: begin
                bus.rvalid = 1'b1;
                // ⭐ 按地址里的 offset 从这一行里选出 IFU 要的那 32 位
                //    (4B 块时行里只有 1 个字, 选出来就是它本身)
                bus.rdata = icache[current_index][current_word*32 +: 32];
                bus.rresp = rresp_save;
                bus.rlast = 1'b1;               // 单拍返回: 这一拍就是最后一拍
                if(bus.rready) begin
                    next = IDLE;
                end
            end

            WRITE_W: begin
                // AW 已经收下了, 这里只等写数据(收下就丢)
                if(bus.wvalid) begin
                    bus.wready = 1'b1;
                    next = WRITE_B;
                end
            end

            WRITE_B: begin
                bus.bvalid = 1'b1;
                bus.bresp  = 2'b10;             // SLVERR: icache 只读, 不支持写
                bus.bid    = bid_save;
                if(bus.bready) begin
                    next = IDLE;
                end
            end

            default: next = IDLE;
        endcase
    end

endmodule
