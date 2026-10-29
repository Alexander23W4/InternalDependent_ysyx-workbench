/*
单向面对接口, 没有额外的 控制信号, 数据, 地址 的输入输出

⭐$$: RAM 应只能处理 读 或者 写, 不能够同时处理 读和写. 我这里读写共同使用一个状态机, 整体上是满足的. 
    这里的这个接口, 应该有判断, 如果 arvalid 和 awvalid 同时到来. (现在暂时不会同时到来)

⭐: 没有需要进行的错误处理, 顶多进行 访问地址的判断, 但是Xbar已经做过了.
*/

module ysyx_26040135_AXI_RAM (
    ysyx_26040135_AXI4.slave bus,

    input clock, 
    input reset,
    input logic [7:0] ram_instr [0:31]
);

    logic [7:0] ram [0:63];

    logic [31:0] rdata_save;
    logic [31:0] awaddr_save;
    logic [31:0] r_paddr;
    logic [31:0] w_paddr;
    logic [31:0] w_paddr_save;
    assign r_paddr = bus.araddr - 32'h80000000;
    assign w_paddr = bus.awaddr - 32'h80000000;
    assign w_paddr_save = awaddr_save - 32'h80000000;

    typedef enum [2:0]{ 
        IDLE, R, W, B
    } state_t;
    state_t state, next;

// slave 收到 request 请求后, 在下一个周期, 将slave_status 拉高, 再将 valid_mater_ID 设置为该master的
    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;

            rdata_save <= '0;
            awaddr_save <= '0;

            // 初始化ram
            for (int i = 0; i < 32; i++) begin   // instr
                ram[i] <= ram_instr[i];
            end
            for (int i = 32; i < 64; i++) begin   // data
                ram[i] <= i - 32;
            end

        end else begin
            state <= next;

            if(state == IDLE && bus.arvalid) begin
                rdata_save <= {ram[r_paddr+3], ram[r_paddr+2], ram[r_paddr+1], ram[r_paddr]}; 
            end

            if(state == IDLE && bus.awvalid) begin
                if(bus.wvalid) begin
                    for (int i = 0; i < 4; i++) begin
                        if (bus.wstrb[i]) begin
                            ram[w_paddr + i] <= bus.wdata[i*8 +: 8];
                        end
                    end
                end else begin
                    awaddr_save <= bus.awaddr;                   
                end
            end

            if(state == W && bus.wvalid) begin
                for (int i = 0; i < 4; i++) begin
                    if (bus.wstrb[i]) begin
                        ram[w_paddr_save + i] <= bus.wdata[i*8 +: 8];
                    end
                end
            end
        end
    end

    always_comb begin
        bus.arready = 1'b0;
        bus.rresp = 2'b00;
        bus.rvalid = 1'b0;
        bus.rdata = rdata_save;
        bus.rlast = 0;
        bus.rid = 0;

        bus.awready = 1'b0;
        bus.wready = 1'b0;
        bus.bresp = 2'b00;
        bus.bvalid = 1'b0;
        bus.bid = 0;

        next = state;

        case(state)
            IDLE: begin
                if(bus.arvalid) begin
                    bus.arready = 1'b1;
                    next = R;
                end
                else if(bus.awvalid) begin
                    bus.awready = 1'b1;
                    if(bus.wvalid) begin
                        bus.wready = 1'b1;
                        next = B;
                    end
                    else begin
                        next = W;               
                    end
                end
            end
            R: begin
                bus.rvalid = 1'b1;
                if(bus.rready) begin
                    next = IDLE;
                end
            end
            W: begin
                if(bus.wvalid) begin
                    bus.wready = 1'b1;
                    next = B;
                end
            end
            B: begin
                bus.bvalid = 1'b1;
                if(bus.bready) begin
                    next = IDLE;
                end
            end
        endcase
    end

    
    
endmodule




