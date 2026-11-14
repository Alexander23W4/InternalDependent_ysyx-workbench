
module ysyx_26040135_AXI_ICACHE (

    input   logic [31:0] bus_araddr,
    input   logic        bus_arvalid,
    output  logic        bus_arready,
    output  logic [31:0] bus_rdata,
    output  logic [1:0] bus_rresp,
    output  logic        bus_rvalid,
    input   logic        bus_rready,


    output  logic [31:0] mbus_araddr,
    output  logic [3:0] mbus_arid,
    output  logic [7:0] mbus_arlen,
    output  logic [2:0] mbus_arsize,
    output  logic [1:0] mbus_arburst,
    output  logic        mbus_arvalid,
    input   logic        mbus_arready,
    input   logic [31:0] mbus_rdata,
    input   logic [3:0] mbus_rid,
    input   logic [1:0] mbus_rresp,
    input   logic        mbus_rlast,
    input   logic        mbus_rvalid,
    output  logic        mbus_rready,


    input clock, 
    input reset,

    input [31:0] sw_addr,
    input sw_avail
);


    `ifndef ICACHE_LINE_BYTES   // 这个cache_line 是要整体传输的, 所以最好设置成总线带宽的倍数, 这样方便burst传输
        `define ICACHE_LINE_BYTES 16    // 对应 OFFSET
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

    localparam [7:0] ARLEN     = LINE_WORDS[7:0] - 8'd1;           // AXI 的 arlen = 拍数 - 1



    logic [CACHE_LINE_BITS-1:0] icache [0:ICACHE_LINE_AMT-1];     // icache

    logic [TAG_LEN-1:0]         tag    [0:ICACHE_LINE_AMT-1];
    logic                       valid  [0:ICACHE_LINE_AMT-1];


    logic [1:0]  rresp_save;
    logic [BEAT_LEN-1:0] beat;              // 突发读收counter



// 下面的这些都是从bus.araddr开始的, bus_araddr是连着pc(reg)的, bus,araddr在ifu访存(icache)期间不会改变

    logic [TAG_LEN-1:0]   current_tag;
    logic [INDEX_LEN-1:0] current_index;
    logic [31:0]          current_word;     // 行内第几个 32 位字

    assign current_tag   = bus_araddr[31:INDEX_LEN+OFFSET_LEN];
    assign current_index = bus_araddr[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN];
    assign current_word  = {{(32-OFFSET_LEN){1'b0}}, bus_araddr[OFFSET_LEN-1:0]} >> 2;   // 显式零扩展到 32 位再移位

    // 突发读的起始地址
    wire [31:0] line_addr = {bus_araddr[31:OFFSET_LEN], {OFFSET_LEN{1'b0}}};


    typedef enum logic [1:0]{ 
        IDLE, MISS_AR, MISS_R, RETURN
    } state_t;
    state_t state, next;


    always @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;

            for (int i = 0; i < ICACHE_LINE_AMT; i++) begin
                valid[i]  <= 1'b0;   // 只需给valid请零即可, 全部设置成脏数据
            end

        end else begin
            state <= next;

            if(state == IDLE && bus_arvalid) begin   // 清掉上一次访存的残留状态
                rresp_save  <= 2'b00;       
                beat <= '0;
            end


            // burst每一拍
            if(state == MISS_R && mbus_rvalid) begin
                if(mbus_rresp == 2'b00) begin
                    icache[current_index][beat*32 +: 32] <= mbus_rdata;     // ⭐

                    if(mbus_rlast) begin
                        valid[current_index] <= 1'b1;   // 整行收齐了才算有效
                        tag[current_index]   <= current_tag;
                    end
                end else begin
                    rresp_save <= mbus_rresp;
                end
                beat <= mbus_rlast ? '0 : beat + 1'b1;
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

        bus_arready = 1'b0;
        bus_rvalid  = 1'b0;
        bus_rdata   = 32'b0;
        bus_rresp   = 2'b00;


        mbus_arvalid = 1'b0;
        mbus_araddr = line_addr;
        mbus_arid = 4'b0000;
        mbus_arlen = ARLEN;   // burst拍
        mbus_arsize = 3'b010;    // 每拍 4 字节
        mbus_arburst = 2'b01;   // INCR: 地址递增突发  
        mbus_rready = 1'b0;

        next = state;

        case (state)
            IDLE: begin
                if(bus_arvalid) begin
                    bus_arready = 1'b1;      // 首先tag要和当下同一个index的cache_line存储的tag要一样, 其次要valid (是干净数据)
                    if(current_tag == tag[current_index] && valid[current_index] == 1'b1) begin 
                        next = RETURN;      // cache hit
                    end else begin
                        next = MISS_AR;     // cache miss
                    end
                end
            end


            MISS_AR: begin
                mbus_arvalid = 1'b1;
                if(mbus_arready) begin
                    next = MISS_R;
                end
            end

            MISS_R: begin
                if(mbus_rvalid) begin
                    mbus_rready = 1'b1;
                    if(mbus_rlast) begin
                        next = RETURN;
                    end
                end
            end

            RETURN: begin
                bus_rvalid = 1'b1;
                bus_rdata = icache[current_index][current_word*32 +: 32];    // ⭐
                bus_rresp = rresp_save;           // 把存储器(如果有)的rresp带过来
                if(bus_rready) begin
                    next = IDLE;
                end
            end

        endcase
    end

endmodule
