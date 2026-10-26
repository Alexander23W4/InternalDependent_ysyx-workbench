
// 注意现阶段的npc只是一个多周期cpu, 不是一个多指令并行cpu, 不能够一次性执行多条指令. 
// cpu必须判断所有反馈信号, 等到都完成了, 才可以更新pc

// 现阶段cpu只有在 GPR IFU LSU 3个地方的操作上会有时序消耗, 其他全部是瞬时 组合逻辑

// 所以cpu就是一大堆控制信号, 通过总线控制一堆时序模块, 控制他们的时序

// ⭐: lsu先不加PMA

/*
仅ls指令进入本级

实现:
如果是个读指令, 读完后就打包wdata传给wbu
如果是个写指令, 写完后恢复in_ready就行了

⭐: 改进空间:
-> 现在暂没有支持自改代码的指令, 如果IFU读了LSU还没有写完的, 或者还没到LSU的, 就会出错
-> AXI的读写是分离的, 所以如果运行一个写命令, 可以不阻塞读命令, 如果检测到是read请求, 且读的不是现在正在写的addr, 则可以给valid
*/
module ysyx_26040135_AXI_LSU (
    ysyx_26040135_AXI4.master bus,
    
    input clock,
    input reset,

    input io,
    input [1:0] io_type,
    input read_is_u,
    input [4:0] rd,
    input [31:0] lsu_wdata,   // rdata2
    input [31:0] lsu_addr,    // add_rst
    input [31:0] ic_wb_wdata,

    input in_valid,
    output reg in_ready,

    output reg out_valid,
    input out_ready,
    
    output [1:0] __error,

    output [31:0] wdata,
    output [4:0] rd_out_lsu,

    output [31:0] sw_addr,   // 告知icache这个内存被写了, 如果在cache里, 要清除
    output sw_avail,

    output reg [63:0] lsu_blockf_cyc,
    output reg [63:0] lsu_blcokb_cyc,
    output reg [63:0] lsu_work_cyc,

    output reg lsu_blockf
);


    reg [1:0] error_save;

    reg io_save;
    reg [1:0] io_type_save;
    reg read_is_u_save;

    reg [4:0] rd_save;
    reg [31:0] lsu_data_save;
    reg [31:0] lsu_addr_save;
    reg [31:0] ic_wb_wdata_save;

    assign __error = error_save;
    assign rd_out_lsu = rd_save;
    assign sw_addr = lsu_addr_save;

    reg rdata_out;

// 状态
    typedef enum [2:0]{ 
        IDLE, AR, R, AW, W, B
    } state_t;
    state_t state, next;





    always_ff @( posedge clock or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_out <= 32'b0;
            error_save <= 2'b00;

            io_save <= 1'b0;
            io_type_save <= 2'b00;
            read_is_u_save <= 1'b0;
            rd_save <= 5'b00000;
            lsu_data_save <= 32'b0;
            lsu_addr_save <= 32'b0;
            ic_wb_wdata_save <= 32'b0;

            in_ready <= 1'b1;
            out_valid <= 1'b0;

            lsu_blockf_cyc <= 0;
            lsu_blcokb_cyc <= 0;
            lsu_work_cyc <= 0;

            lsu_blockf <= 1'b0;

        end else begin
            state <= next;

            if(state == IDLE && out_ready && out_valid) begin
                in_ready <= 1'b1;
                out_valid <= 1'b0;
            end

            if(out_valid && !out_ready) begin
                lsu_blcokb_cyc <= lsu_blcokb_cyc + 64'b1;
            end

            if(state == IDLE && in_valid && in_ready) begin
                in_ready <= 1'b0;

                io_save <= io;
                io_type_save <= io_type;
                read_is_u_save <= read_is_u;
                rd_save <= rd;
                lsu_data_save <= lsu_data;
                lsu_addr_save <= lsu_addr;
                ic_wb_wdata_save <= ic_wb_wdata;
            end

            if(in_ready && !in_valid) begin
                lsu_blockf_cyc <= lsu_blockf_cyc + 64'b1;
                lsu_blockf <= 1'b1;
            end else begin
                lsu_blockf <= 1'b0;
            end

            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                rdata_out <= bus.rdata;
                out_valid <= 1'b1;
            end
            if(state == B && bus.bvalid && bus.bresp == 2'b00) begin  // 写指令, 写完直接恢复in_ready即可
                in_ready <= 1'b1;
            end

            if(state == R && bus.rvalid && bus.rresp != 2'b00) begin
                error_save <= bus.rresp; 
            end
            if(state == B && bus.bvalid && bus.bresp != 2'b00) begin
                error_save <= bus.bresp;
            end

            if(state != IDLE) begin
                lsu_work_cyc <= lsu_work_cyc + 64'b1;
            end

        end
    end

    always_comb begin
        bus.wstrb = 4'b0000;  
        bus.arsize = 3'b010;
        bus.awsize = 3'b010;
        if (io_save) begin
            case (io_type_save)
                2'b10: begin
                    bus.wstrb  = 4'b1111;
                    bus.awsize = 3'b010;
                end
                2'b01: begin
                    bus.wstrb  = (lsu_addr_save[1:0] == 2'b00) ? 4'b0011 : 4'b1100;
                    bus.awsize = 3'b001;
                end
                2'b00: begin
                    bus.wstrb  = 4'b0001 << lsu_addr_save[1:0];
                    bus.awsize = 3'b000;
                end
            endcase
        end else begin
            case(io_type_save)
                2'b10: bus.arsize = 3'b010;
                2'b01: bus.arsize = 3'b001;
                2'b00: bus.arsize = 3'b000;
            endcase
        end 
    end

    always_comb begin

        bus.arvalid = 1'b0;
        bus.araddr = lsu_addr_save;
        bus.arid = 4'b0000;
        bus.arlen = 8'h00;
        bus.arburst = 2'b00;
        bus.rready = 1'b0;

        bus.awvalid = 1'b0;
        bus.awaddr = lsu_addr_save;
        bus.wdata = lsu_data_save << {lsu_addr_save[1:0], 3'b000};  // AXI 要求 wdata 里面的结构要是offset移位过后的
        bus.awid = 4'b0000;
        bus.awlen = 8'h00;
        bus.awburst = 2'b00;
        bus.wvalid = 1'b0;
        bus.bready = 1'b0;
        bus.wlast = 1'b1;

        sw_avail = 1'b0;

        next = state;

        case(state)
            IDLE: begin
                if(in_valid && in_ready) begin   // 只有读写指令的时候才允许触发总线交互
                    if(!io) begin
                        next = AR;
                    end else begin
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
                    bus.rready = 1'b1;              
                    next = IDLE;
                end
            end

            AW: begin
                bus.awvalid = 1'b1;
                if(bus.awready == 1'b1) begin
                    next = W;
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
                    next = IDLE;
                    sw_avail = 1'b1;
                end
            end

        endcase
    end

    wire [31:0] lw_rst, lbu_rst, lhu_rst, lb_rst, lh_rst;

    wire [31:0] lsu_rdata_shifted;
    assign lsu_rdata_shifted = rdata_out >> {lsu_addr[1:0], 3'b000};

    assign lw_rst  = rdata_out;
    assign lbu_rst = {24'b0, lsu_rdata_shifted[7:0]};
    assign lhu_rst = {16'b0, lsu_rdata_shifted[15:0]};
    assign lb_rst  = {{24{lsu_rdata_shifted[7]}}, lsu_rdata_shifted[7:0]};
    assign lh_rst  = {{16{lsu_rdata_shifted[15]}}, lsu_rdata_shifted[15:0]};

    assign lw = (io_type_save == 2'b10);
    assign lh = (io_type_save == 2'b01 && !read_is_u_save);
    assign lhu = (io_type_save == 2'b01 && read_is_u_save);
    assign lbu = (io_type_save == 2'b00 && read_is_u_save);
    assign lb = (io_type_save == 2'b00 && !read_is_u_save);

    assign wdata = ic_wb_wdata_save |
            ({32{lw}} & lw_rst) |
            ({32{lbu}} & lbu_rst) |
            ({32{lhu}} & lhu_rst) |
            ({32{lb}} & lb_rst) |
            ({32{lh}} & lh_rst);

endmodule