/*
单向面对接口, 没有额外的 控制信号, 数据, 地址 的输入输出

⭐$$: RAM 应只能处理 读 或者 写, 不能够同时处理 读和写. 我这里读写共同使用一个状态机, 整体上是满足的. 
    这里的这个接口, 应该有判断, 如果 arvalid 和 awvalid 同时到来. (现在暂时不会同时到来)

⭐: 没有需要进行的错误处理, 顶多进行 访问地址的判断, 但是Xbar已经做过了.
*/

module ysyx_26040135_AXI_RAM (
    input  [31:0] bus_araddr,
    input  [3:0] bus_arid,
    input  [7:0] bus_arlen,
    input  [2:0] bus_arsize,
    input  [1:0] bus_arburst,
    input         bus_arvalid,
    output logic        bus_arready,
    output logic [31:0] bus_rdata,
    output logic [3:0] bus_rid,
    output logic [1:0] bus_rresp,
    output logic        bus_rlast,
    output logic        bus_rvalid,
    input         bus_rready,
    input  [31:0] bus_awaddr,
    input  [3:0] bus_awid,
    input  [7:0] bus_awlen,
    input  [2:0] bus_awsize,
    input  [1:0] bus_awburst,
    input         bus_awvalid,
    output logic        bus_awready,
    input  [31:0] bus_wdata,
    input  [3:0] bus_wstrb,
    input         bus_wlast,
    input         bus_wvalid,
    output logic        bus_wready,
    output logic [3:0] bus_bid,
    output logic [1:0] bus_bresp,
    output logic        bus_bvalid,
    input         bus_bready,

    input clock, 
    input reset,
    input logic [31:0][7:0] ram_instr
);

    logic [63:0][7:0] ram;

    logic [31:0] rdata_save;
    logic [31:0] awaddr_save;
    logic [31:0] r_paddr;
    logic [31:0] w_paddr;
    logic [31:0] w_paddr_save;
    assign r_paddr = bus_araddr - 32'h80000000;
    assign w_paddr = bus_awaddr - 32'h80000000;
    assign w_paddr_save = awaddr_save - 32'h80000000;

    typedef enum logic [2:0]{ 
        IDLE, R, W, B
    } state_t;
    state_t state, next;

// slave 收到 request 请求后, 在下一个周期, 将slave_status 拉高, 再将 valid_mater_ID 设置为该master的
    always_ff @( posedge clock ) begin
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

            if(state == IDLE && bus_arvalid) begin
                rdata_save <= {ram[r_paddr+3], ram[r_paddr+2], ram[r_paddr+1], ram[r_paddr]}; 
            end

            if(state == IDLE && bus_awvalid) begin
                if(bus_wvalid) begin
                    for (int i = 0; i < 4; i++) begin
                        if (bus_wstrb[i]) begin
                            ram[w_paddr + i] <= bus_wdata[i*8 +: 8];
                        end
                    end
                end else begin
                    awaddr_save <= bus_awaddr;                   
                end
            end

            if(state == W && bus_wvalid) begin
                for (int i = 0; i < 4; i++) begin
                    if (bus_wstrb[i]) begin
                        ram[w_paddr_save + i] <= bus_wdata[i*8 +: 8];
                    end
                end
            end
        end
    end

    always_comb begin
        bus_arready = 1'b0;
        bus_rresp = 2'b00;
        bus_rvalid = 1'b0;
        bus_rdata = rdata_save;
        bus_rlast = 0;
        bus_rid = 0;

        bus_awready = 1'b0;
        bus_wready = 1'b0;
        bus_bresp = 2'b00;
        bus_bvalid = 1'b0;
        bus_bid = 0;

        next = state;

        case(state)
            IDLE: begin
                if(bus_arvalid) begin
                    bus_arready = 1'b1;
                    next = R;
                end
                else if(bus_awvalid) begin
                    bus_awready = 1'b1;
                    if(bus_wvalid) begin
                        bus_wready = 1'b1;
                        next = B;
                    end
                    else begin
                        next = W;               
                    end
                end
            end
            R: begin
                bus_rvalid = 1'b1;
                if(bus_rready) begin
                    next = IDLE;
                end
            end
            W: begin
                if(bus_wvalid) begin
                    bus_wready = 1'b1;
                    next = B;
                end
            end
            B: begin
                bus_bvalid = 1'b1;
                if(bus_bready) begin
                    next = IDLE;
                end
            end
        endcase
    end

    
    
endmodule




