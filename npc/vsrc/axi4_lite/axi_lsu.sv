// 注意现阶段的npc只是一个多周期cpu, 不是一个多指令并行cpu, 不能够一次性执行多条指令. 
// cpu必须判断所有反馈信号, 等到都完成了, 才可以更新pc

// 现阶段cpu只有在 GPR IFU LSU 3个地方的操作上会有时序消耗, 其他全部是瞬时 组合逻辑

// 所以cpu就是一大堆控制信号, 通过总线控制一堆时序模块, 控制他们的时序

// ⭐: lsu先不加PMA

module AXI_LSU (
    AXI4_Lite.master bus,
    
    input clk,
    input reset,

    input __read, __write,
    input __sw, __sh, __sb,

    // 这两个信号只持续一个周期
    input __addr_ready,  
    input __data_ready,

    input [31:0] addr,
    input [31:0] wdata,
    
    output [31:0] rdata,
    
    output __error,
    output __read_complete,   // cpu读到这个, 需要立刻拿走数据启动GPR操作
    output __write_complete   // cpu读到这个, 需要立刻启动更新pc操作
);
// 对于master来说, 如果slave_status为0, 就可以发送请求. 如果 slave_status 为1 且 valid_master_ID 为自己的ID, 就可以继续向下进行, 并将自己的request拉低

// 反馈信号
    logic [31:0] rdata_save;
    logic error_save;
    logic read_complete_save;
    logic write_complete_save;

    assign rdata = rdata_save;
    assign __error = error_save;
    assign __read_complete = read_complete_save;
    assign __write_complete = write_complete_save;

// 状态
    typedef enum [2:0]{ 
        IDLE, AR, R, AW, W, B
    } state_t;
    state_t state, next;



    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 1'b0;
            read_complete_save <= 1'b0;
            write_complete_save <= 1'b0;
        end else begin

            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                rdata_save <= bus.rdata;
                read_complete_save <= 1'b1;
            end
            if(state == B && bus.bvalid && bus.bresp == 2'b00) begin
                write_complete_save <= 1'b1;
            end
            if(state != R && state != B) begin
                read_complete_save <= 1'b0;
                write_complete_save <= 1'b0;
            end
            if(((state == R && bus.rvalid && bus.rresp != 2'b00) || (state == B && bus.bvalid && bus.bresp != 2'b00))) begin
                error_save <= 1'b1; 
            end

            state <= next;
        end
    end

    always_comb begin
        bus.wstrb = 4'b0000;  
        if (__write && (state != IDLE)) begin
            case (1'b1)
                __sw: bus.wstrb = 4'b1111;
                __sh: bus.wstrb = (addr[1:0] == 2'b00) ? 4'b0011 : 4'b1100;
                __sb: bus.wstrb = 4'b0001 << addr[1:0];
            endcase 
        end
    end

    always_comb begin
        bus.araddr = addr;
        bus.arvalid = 1'b0;
        bus.rready = 1'b0;

        bus.awaddr = addr;
        bus.awvalid = 1'b0;
        bus.wdata = wdata;
        bus.wvalid = 1'b0;
        bus.bready = 1'b0;

        next = state;
        
        /*
            先保证所有output信号默认都是0    
            在slave_status为0的时候, 先发LSU_request, 下个周期接收 valid_master_ID, 如果是自己的, 再跳到AR/AW, 将arvalid置为1
        */
        case(state)
            IDLE: begin
                if(__addr_ready && (__read || __write)) begin   // 只有读写指令的时候才允许触发总线交互
                    if(__read) begin
                        bus.arvalid = 1'b1;
                        next = AR;
                    end
                    else if(__write) begin
                        bus.awvalid = 1'b1;
                        next = AW;
                        if(__data_ready) begin
                            bus.wvalid = 1'b1;
                        end
                    end
                end
            end

            AR: begin
                bus.arvalid = 1'b1;
                if(bus.arready == 1'b1) begin
                    next = R;
                end
            end

            R: begin
                if(bus.rvalid == 1'b1) begin
                    bus.rready = 1'b1;              // 无论成功还是错误，都拉高rready完成传输
                    if(bus.rresp == 2'b00) begin
                        if(__addr_ready && __read) begin
                            next = AR;
                        end
                        else if(__addr_ready && __write) begin
                            next = AW;
                        end
                        else begin
                            next = IDLE;
                        end
                    end 
                    else begin
                        next = IDLE;    // 错误也要完成状态机循环
                    end
                end
            end

            AW: begin
                bus.awvalid = 1'b1;
                if(__data_ready) begin
                    bus.wvalid = 1'b1;
                end
                if(bus.awready == 1'b1) begin
                    if(bus.wready == 1'b1) begin
                        next = B;
                    end
                    else if(__data_ready) begin
                        next = W;
                    end
                end
            end

            W: begin
                bus.wvalid = 1'b1;
                if(bus.wready == 1'b1) begin
                    next = B;
                end
            end

            B: begin
                if(bus.bvalid == 1'b1) begin
                    bus.bready = 1'b1;
                    if(bus.bresp == 2'b00) begin
                        if(__addr_ready && __read) begin
                            next = AR;
                        end
                        else if(__addr_ready && __write) begin
                            next = AW;
                        end
                        else begin
                            next = IDLE;
                        end
                    end
                    else begin
                        next = IDLE;
                    end
                end
            end
        endcase
    end

endmodule