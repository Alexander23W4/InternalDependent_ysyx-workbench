// 注意现阶段的npc只是一个多周期cpu, 不是一个多指令并行cpu, 不能够一次性执行多条指令. 
// cpu必须判断所有反馈信号, 等到都完成了, 才可以更新pc

// 现阶段cpu只有在 GPR IFU LSU 3个地方的操作上会有时序消耗, 其他全部是瞬时 组合逻辑

// 所以cpu就是一大堆控制信号, 通过总线控制一堆时序模块, 控制他们的时序

// ⭐: lsu先不加PMA

module ysyx_26040135_AXI_LSU (
    ysyx_26040135_AXI4.master bus,
    
    input clock,
    input reset,

    input __read, __write,
    input __sw, __sh, __sb,
    input __lb, __lh, __lw, __lbu, __lhu,

    // 这两个信号只持续一个周期
    input __addr_ready,  
    input __data_ready,

    input [31:0] addr,
    input [31:0] wdata,
    
    output [31:0] rdata,
    
    output [1:0] __error,
    output __read_complete,   // cpu读到这个, 需要立刻拿走数据启动GPR操作
    output __write_complete   // cpu读到这个, 需要立刻启动更新pc操作
);
// 对于master来说, 如果slave_status为0, 就可以发送请求. 如果 slave_status 为1 且 valid_master_ID 为自己的ID, 就可以继续向下进行, 并将自己的request拉低

// 反馈信号
    logic [31:0] rdata_save;
    logic [1:0] error_save;
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

    // ⭐ AW/W 两个通道是独立的: 谁先被 slave 收下, 谁就置自己的 done 标志.
    //    必须等两个都收下了才能去等 B, 而且各自的 valid 在 done 之前不能撤.
    logic aw_done, w_done;
    logic aw_done_next, w_done_next;



    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 2'b00;
            read_complete_save <= 1'b0;
            write_complete_save <= 1'b0;
            aw_done <= 1'b0;
            w_done  <= 1'b0;
        end else begin

            aw_done <= aw_done_next;
            w_done  <= w_done_next;

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
            if(state == R && bus.rvalid && bus.rresp != 2'b00) begin
                error_save <= bus.rresp; 
            end
            if(state == B && bus.bvalid && bus.bresp != 2'b00) begin
                error_save <= bus.bresp;
            end

            state <= next;
        end
    end

    always_comb begin
        bus.wstrb = 4'b0000;  
        bus.arsize = 3'b010;
        bus.awsize = 3'b010;
        if (__write) begin
            case (1'b1)
                __sw: begin
                    bus.wstrb  = 4'b1111;
                    bus.awsize = 3'b010;
                end
                __sh: begin
                    bus.wstrb  = (addr[1:0] == 2'b00) ? 4'b0011 : 4'b1100;
                    bus.awsize = 3'b001;
                end
                __sb: begin
                    bus.wstrb  = 4'b0001 << addr[1:0];
                    bus.awsize = 3'b000;
                end
            endcase
        end
        if(__read) begin
            case(1'b1)
                __lw: bus.arsize = 3'b010;
                __lh | __lhu: bus.arsize = 3'b001;
                __lb | __lbu: bus.arsize = 3'b000;
            endcase
        end 
    end

    always_comb begin

        bus.arvalid = 1'b0;
        bus.araddr = addr;
        bus.arid = 4'b0000;
        bus.arlen = 8'h00;
        bus.arburst = 2'b00;
        bus.rready = 1'b0;

        bus.awvalid = 1'b0;
        bus.awaddr = addr;
        // ⭐ AXI 要求窄写的 wdata 落在 wstrb 指定的那几条字节通道上(和 araddr/awaddr 的
        //    addr[1:0] 对应), 所以 sb/sh 必须把数据左移. 之前直接透传 wdata, 结果是
        //    sb 到 offset 1/2/3 时写进去的是 0.
        bus.wdata = wdata << {addr[1:0], 3'b000};
        bus.awid = 4'b0000;
        bus.awlen = 8'h00;
        bus.awburst = 2'b00;
        bus.wvalid = 1'b0;
        bus.bready = 1'b0;
        // ⭐ awlen=0 -> 单拍写, 每一拍都是最后一拍. 这个信号之前完全没被赋值过.
        bus.wlast = 1'b1;


        next = state;
        aw_done_next = 1'b0;
        w_done_next  = 1'b0;
        
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
                        // ⭐ 这里只跳状态, 不发 AW.
                        //    原因: 如果这一拍就把 awvalid 拉高而 awready 恰好也是 1, AW 当场
                        //    被收走; 下一拍进了 AW 态又拉一次 awvalid(同一地址), 同一个 store
                        //    就发了两次 AW. 多出来的那笔 AW 会一直挂在总线里, 等下一个 store
                        //    的 wdata 一到就和它配对 -> 数据被写到了上一个 store 的地址上.
                        next = AW;
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
                // ⭐ AW 和 W 一起发, 各自收下之前都不撤; 两个都收下了才去等 B.
                //    不能等 awready 再发 wvalid: SoC 里 SRAM 的 awready 本身就依赖 wvalid,
                //    那样会双向死锁.
                if(!aw_done) bus.awvalid = 1'b1;
                if(!w_done)  bus.wvalid  = 1'b1;

                aw_done_next = aw_done | bus.awready;
                w_done_next  = w_done  | bus.wready;

                if(aw_done_next && w_done_next) begin
                    next = B;
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

            default: begin
                next = IDLE;
            end
        endcase
    end

endmodule
