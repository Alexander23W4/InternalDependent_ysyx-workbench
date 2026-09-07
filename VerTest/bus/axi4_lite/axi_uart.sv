/*
编写一个AXI4-Lite接口的slave模块, 其中包含一个设备寄存器. 当往这个设备寄存器发送写请求时, 则将写入数据的低8位作为字符, 通过$write()或printf()输出. 
*/

module AXI_UART (
    AXI4_Lite.slave bus,

    input clk, 
    input reset
);
    logic [31:0] awaddr_save;

    logic [7:0] delay_cnt;

    logic [7:0] uart_reg;

    typedef enum [2:0]{ 
        IDLE, W, B
    } state_t;
    state_t state, next;

// slave 收到 request 请求后, 在下一个周期, 将slave_status 拉高, 再将 valid_mater_ID 设置为该master的
    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;

            rdata_save <= '0;
            awaddr_save <= '0;
            delay_cnt <= '0;

        end else begin
            state <= next;

            if(delay_cnt > 0) begin
                delay_cnt <= delay_cnt - 1'b1;
            end

            if(state == IDLE && bus.arvalid) begin
                rdata_save <= ram_read(bus.araddr, 4); 
                delay_cnt <= random(8) + 1;
            end

            if(state == IDLE && bus.awvalid) begin
                if(bus.wvalid) begin
                    case(bus.wstrb)
                        4'b1111: ram_write(bus.awaddr, bus.wdata, 4);
                        4'b1100, 4'b0011: ram_write(bus.awaddr, bus.wdata, 2);
                        4'b1000, 4'b0100, 4'b0010, 4'b0001: ram_write(bus.awaddr, bus.wdata, 1);
                    endcase
                    delay_cnt <= random(8) + 1;
                end else begin
                    awaddr_save <= bus.awaddr;                   
                end
            end

            if(state == W && bus.wvalid) begin
                case(bus.wstrb)
                    4'b1111: ram_write(awaddr_save, bus.wdata, 4);
                    4'b1100, 4'b0011: ram_write(awaddr_save, bus.wdata, 2);
                    4'b1000, 4'b0100, 4'b0010, 4'b0001: ram_write(awaddr_save, bus.wdata, 1);
                endcase
                delay_cnt <= random(8) + 1;
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
        bus.bresp = 2'b00;
        bus.bvalid = 1'b0;

        next = state;

        case(state)
            IDLE: begin
                if(bus.awvalid) begin
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

    
    
endmodule


