// 注意, 给其他模块的控制信号并不是 拉高1周期 就完事了, 而是要等到 被控制模块 给一个反馈信号(被控制模块有这个义务), 
//      代表知道了, 然后 控制模块 将控制信号及时清理(同样有义务)

// 总之, 控制信号 和 反馈信号都是 外围给cpu提要求, 让cpu兼容外围

// 后续还需补充 input __error_is_arranged, 我现在默认是只要error出现, __error就一直为0, 然后cpu处理__error的逻辑直接设置成崩溃报错 (NPC_CRASH)

module AXI_IFU (
    AXI4_Lite.master bus,
    
    input clk,
    input reset,
    
    input __pc_is_updated,   // cpu 应当只拉高此信号一个周期 (外围对cpu的控制信号提要求)

    input [31:0] pc,     // ⭐$$: 遗留问题: 这个pc该让cpu保持多久
    output [31:0] rdata,

    output __instr_valid,   //  提示cpu fetch 完成, 可以decode了 (外围给自己输出给cpu的 反馈信号 定要求)
    output __error
);
// 外部控制信号与返回外部的信号:

    logic [31:0] rdata_save;
    logic error_save;
    logic instr_valid_save;

    assign rdata = rdata_save;
    assign __instr_valid = instr_valid_save;
    assign __error = error_save;

    typedef enum [2:0]{ 
        IDLE, AR, R
    } state_t;
    state_t state, next;

    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 1'b0;
            instr_valid_save <= 1'b0;

        end else begin
            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                rdata_save <= bus.rdata;
                instr_valid_save <= 1'b1;   
            end
            if(state == IDLE || state == AR) begin
                instr_valid_save <= 1'b0;
            end
            if(state == R && bus.rvalid && (bus.rresp != 2'b00)) begin
                error_save <= 1'b1; 
            end
            state <= next;
        end
    end
/*
    先保证所有output信号默认都是0    
    在slave_status为0的时候, 先发LSU_request, 下个周期接收 valid_master_ID, 如果是自己的, 再跳到AR/AW, 将arvalid置为1
*/

    always_comb begin
        bus.araddr = pc;
        bus.arvalid = 1'b0;
        bus.rready = 1'b0;

        bus.awaddr = '0;
        bus.awvalid = 1'b0;
        bus.wdata = '0;
        bus.wstrb = '0;
        bus.wvalid = 1'b0;
        bus.bready = 1'b0;

        next = state;
        
        case(state)
            IDLE: begin
                if(__pc_is_updated) begin
                    bus.arvalid = 1'b1;
                    next = AR;
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
                    bus.rready == 1'b1;
                    if(bus.rresp == 2'b00) begin
                        if(__pc_is_updated) begin   // 兼容 这个周期握手刚实现, 下个周期rdata才给出去, 但是我的pc就可以完成更新, 并且下个周期ifu同时开始下一次fetch 的情况
                            next = AR;
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

// assert
    property p_write_channels_zero;
        @(posedge clk) 
        (bus.awaddr == 32'b0) &&
        (bus.awvalid == 1'b0) &&
        (bus.wdata == 32'b0) &&
        (bus.wstrb == 4'b0) &&
        (bus.wvalid == 1'b0) &&
        (bus.bready == 1'b0);
    endproperty
    assert property (p_write_channels_zero) else $error("IFU: Write channel signals must be 0");

endmodule