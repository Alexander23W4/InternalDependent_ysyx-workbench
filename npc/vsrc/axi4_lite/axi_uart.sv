/*
编写一个AXI4-Lite接口的slave模块, 其中包含一个设备寄存器. 当往这个设备寄存器发送写请求时, 则将写入数据的低8位作为字符, 通过$write()或printf()输出. 

设备的要求: 只能够写  错误处理: 读, 错误访问地址(Xbar只判断了地址范围, 这里要判断地址必须==UART_ADDR 这一个地址), 错误写指令  

⭐: 即便出现错误, 或者说我的这个设备不支持的访问, 也必须走完状态机, 不能锁死到一个状态上, 并且通过 resp 信号来返回 error
*/

module ysyx_26040135_AXI_UART (
    AXI4_Lite.slave bus,

    input clk, 
    input reset
);
    logic [31:0] awaddr_save;
    logic [1:0] bresp_save;

    logic [7:0] delay_cnt;

    typedef enum [2:0]{ 
        IDLE, R, W, B
    } state_t;
    state_t state, next;

    parameter UART_ADDR = 32'h10000000;

// slave 收到 request 请求后, 在下一个周期, 将slave_status 拉高, 再将 valid_mater_ID 设置为该master的
    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;

            awaddr_save <= '0;
            delay_cnt <= '0;
            bresp_save <= '0;

        end else begin
            state <= next;

            if(delay_cnt > 0) begin
                delay_cnt <= delay_cnt - 1'b1;
            end

            if(state == IDLE && bus.awvalid) begin
                if(bus.wvalid) begin
                    if(bus.awaddr == UART_ADDR) begin
                        case(bus.wstrb)
                            4'b0001: begin                    
                                bresp_save <= 2'b00;
                                putchar(bus.wdata[7:0]);
                                delay_cnt <= random(8) + 1;
                            end
                            default: bresp_save <= 2'b10;   // 错误写指令
                        endcase
                    end
                    else begin
                        bresp_save <= 2'b10;   // 错误访问地址
                    end
                end else begin
                    awaddr_save <= bus.awaddr;                   
                end
            end

            if(state == W && bus.wvalid) begin
                if(awaddr_save == UART_ADDR) begin
                    case(bus.wstrb)
                        4'b0001: begin
                            bresp_save <= 2'b00;
                            putchar(bus.wdata[7:0]);
                            delay_cnt <= random(8) + 1;
                        end
                        default: bresp_save <= 2'b10; 
                    endcase
                end
                else begin
                    bresp_save <= 2'b10;
                end
            end
        end
    end

    always_comb begin
        bus.arready = 1'b0;
        bus.rresp = 2'b00;
        bus.rvalid = 1'b0;
        bus.rdata = '0;

        bus.awready = 1'b0;
        bus.wready = 1'b0;
        bus.bresp = bresp_save;
        bus.bvalid = 1'b0;

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
                bus.rresp = 2'b11;  // DECERR: 不支持读
                bus.rdata = '0;
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
                if(!delay_cnt) begin
                    bus.bvalid = 1'b1;
                    if(bus.bready) begin
                        next = IDLE;
                    end
                end
            end
        endcase
    end

    property p_read_channels_zero;
        @(posedge clk) 
        (bus.araddr == 32'b0) &&
        (bus.arvalid == 1'b0) &&
        (bus.rready == 1'b0);
    endproperty
    assert property (p_read_channels_zero) else $error("UART: Read channel signals must be 0");
    
    
endmodule


