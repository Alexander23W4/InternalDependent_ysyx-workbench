/*
+-----+ reqValid           ---> +-----+
|     | <---           reqReady |     |
|     | addr[log2(N)-1:0]  ---> |     |
|     | wen                ---> |     |
| CPU | wdata[31:0]        ---> | MEM |
|     | wmask[3:0]         ---> |     |
|     | <---          respValid |     |
|     | respReady          ---> |     |
|     | <---        rdata[31:0] |     |
+-----+                         +-----+

*/

// 此为simple_bus 的  RAM-LSU interface
interface simple_bus;

    logic [31:0] addr;
    logic [31:0] wdata;
    logic [31:0] rdata;
    logic [3:0]  wmask;
    logic        wen;
    logic        reqValid;
    logic        respValid;
    logic        reqReady;
    logic        respReady;

    modport lsu(
        output wen,
        input [31:0] rdata,
        output [31:0] wdata,
        output [31:0] addr,
        output [3:0] wmask,
        input respValid,
        output reqValid,
        input reqReady,
        output respReady
    );

endinterface

module LSU(
    input clk,
    simple_bus.lsu bus,

    input sw, sb, sh, lw, lb, lbu, lhu, lh,
    input decode_ready
    input [31:0] addr,
    input [31:0] wdata,
    input finish_arrange   // 代表处理器后续部分处理完毕
);
    assign read = lw | lb | lbu | lhu | lh;
    assign write = sw | sb | sh;

    logic ready;
    assign ready = decode_ready & (lw | lb | lbu | lhu | lh | sw | sb | sh);

    always_comb begin
        //  ... bus.wmask 的实现逻辑
    end

    logic [32:0] rdata_save;
    
    typedef enum [1:0]{ 
        IDLE,  // 没有addr, 空闲
        SEND,  // 读写送数据的周期
        WAIT   // 如果是读操作, 在这个状态读取数据
    } state_t;

    state_t state, next;

    always_ff @(posedge clk) begin
        state <= next;
        if((state == WAIT) && bus.respValid) begin
            rdata_save <= bus.rdata;
        end
    end

    always_comb begin
        bus.wen <= 1'b0;
        bus.wdata <= wdata;
        bus.addr <= addr;
        bus.wmask <= 4'h0;
        bus.reqValid = 1'b0;
        bus.respReady = 1'b0;
        next = state;

        case(state)
            IDLE: begin
                if(ready) begin
                    next = SEND;
                end
            end
            SEND: begin
                bus.reqValid = 1'b1;
                if(write) begin
                    bus.wen = 1'b1;
                end
                if(bus.reqReady) begin
                    next = WAIT;
                end
            end
            WAIT: begin
                if(bus.respValid && finish_arrange) begin
                    bus.respReady = 1'b1;
                    if(ready) begin
                        next = SEND;
                    end
                    else begin
                        next = IDLE;
                    end
                end
            end
        endcase
    end
endmodule


