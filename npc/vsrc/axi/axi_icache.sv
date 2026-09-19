/*
根据上述流程, 实现一个简单的icache, 块大小为4B, 共16个cache块. 
⭐: 本icache 并不判断地址的范围, 如果不再 SDRAM 的范围内, 那么要么漏下去交给下面报错, 要么ub

⭐: 实现时, 建议将相关参数实现成可配置的, 以便于后续评估不同配置参数的性能表现. 实现后, 尝试评估其性能表现.

IFU向icache发送取指请求

icache获得取指请求的地址后, 根据index部分索引出一个cache块, 判断其tag与请求地址的tag是否相同, 并检查该cache块是否有效. 若同时满足上述条件, 则命中, 跳转到第5步

通过总线在DRAM中读出请求所在的数据块

将该数据块填入相应cache块中, 更新元数据

向IFU返回取出的指令
*/

module ysyx_26040135_AXI_ICACHE (
    ysyx_26040135_AXI4.slave bus,
    ysyx_26040135_AXI4.master mbus,
    input clock, 
    input reset
);
    parameter CACHE_LINE_LEN = 32, CACHE_LINE_AMT = 16, INDEX_LEN = 4, OFFSET_LEN = 2, TAG_LEN = 26;


    logic [CACHE_LINE_LEN-1:0] icache [0:CACHE_LINE_AMT-1];
    logic [TAG_LEN-1:0]        tag    [0:CACHE_LINE_AMT-1];
    logic                      valid  [0:CACHE_LINE_AMT-1];

    logic [31:0] araddr_save;


    logic [TAG_LEN-1:0] current_tag;
    logic [INDEX_LEN-1:0] current_index;

    assign current_tag = araddr_save[31:INDEX_LEN+OFFSET_LEN];
    assign current_index = araddr_save[INDEX_LEN+OFFSET_LEN-1:OFFSET_LEN];


    typedef enum [2:0]{ 
        IDLE, DRAM, UPDATE, RETURN
    } state_t;
    state_t state, next;


    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            araddr_save <= '0;
            for (int i = 0; i < CACHE_LINE_AMT; i++) begin
                icache[i] <= '0;
                tag[i]    <= '0;
                valid[i]  <= 1'b0;
            end
        end else begin
            state <= next;
            if(state == IDLE && bus.arvalid) begin
                araddr_save <= bus.araddr;
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

        case (state)
            IDLE: begin
                if(bus.arvalid) begin
                    bus.arready = 1'b1;
                    if(valid[current_index] == 1'b1 && current_tag == tag[current_index]) begin   // cache hit
                        next = RETURN;
                    end else begin  // cache miss
                        next = DRAM;
                    end
                end
            end
            DRAM: begin
                
            end

            RETURN: begin
                bus.rvalid = 1'b1;
                bus.rdata = icache[current_index];
                if(bus.rready) begin
                    next = IDLE;
                end
            end
        endcase
    end










endmodule


