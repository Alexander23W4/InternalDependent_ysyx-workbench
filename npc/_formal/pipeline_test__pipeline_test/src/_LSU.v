
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
    output logic [31:0] bus_araddr,
    output logic [3:0] bus_arid,
    output logic [7:0] bus_arlen,
    output logic [2:0] bus_arsize,
    output logic [1:0] bus_arburst,
    output logic        bus_arvalid,
    input         bus_arready,
    input  [31:0] bus_rdata,
    input  [3:0] bus_rid,
    input  [1:0] bus_rresp,
    input         bus_rlast,
    input         bus_rvalid,
    output logic        bus_rready,
    output logic [31:0] bus_awaddr,
    output logic [3:0] bus_awid,
    output logic [7:0] bus_awlen,
    output logic [2:0] bus_awsize,
    output logic [1:0] bus_awburst,
    output logic        bus_awvalid,
    input         bus_awready,
    output logic [31:0] bus_wdata,
    output logic [3:0] bus_wstrb,
    output logic        bus_wlast,
    output logic        bus_wvalid,
    input         bus_wready,
    input  [3:0] bus_bid,
    input  [1:0] bus_bresp,
    input         bus_bvalid,
    output logic        bus_bready,
    
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

    output reg lsu_blockf,

    input flush
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

    reg flush_save;

// 状态
    typedef enum logic [2:0]{ 
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
            flush_save <= 1'b0;

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
                lsu_data_save <= lsu_wdata;
                lsu_addr_save <= lsu_addr;
                ic_wb_wdata_save <= ic_wb_wdata;
                flush_save <= 1'b0;
            end

            if(in_ready && !in_valid) begin
                lsu_blockf_cyc <= lsu_blockf_cyc + 64'b1;
                lsu_blockf <= 1'b1;
            end else begin
                lsu_blockf <= 1'b0;
            end

            if(state == R && bus_rvalid && bus_rresp == 2'b00) begin
                rdata_out <= bus_rdata;
                if(flush_save || flush) begin
                    in_ready <= 1'b1;
                end else begin
                    out_valid <= 1'b1;
                end
            end
            if(state == B && bus_bvalid && bus_bresp == 2'b00) begin  // 写指令, 写完直接恢复in_ready即可
                in_ready <= 1'b1;
            end

            if(state == R && bus_rvalid && bus_rresp != 2'b00) begin
                error_save <= bus_rresp; 
            end
            if(state == B && bus_bvalid && bus_bresp != 2'b00) begin
                error_save <= bus_bresp;
            end

            if(state != IDLE) begin
                lsu_work_cyc <= lsu_work_cyc + 64'b1;
            end

            if(flush) begin
                if(out_valid) begin
                    out_valid <= 1'b0;
                    in_ready <= 1'b1;
                end else begin
                    flush_save <= 1'b1;
                end
            end

        end
    end

    always_comb begin
        bus_wstrb = 4'b0000;  
        bus_arsize = 3'b010;
        bus_awsize = 3'b010;
        if (io_save) begin
            case (io_type_save)
                2'b10: begin
                    bus_wstrb  = 4'b1111;
                    bus_awsize = 3'b010;
                end
                2'b01: begin
                    bus_wstrb  = (lsu_addr_save[1:0] == 2'b00) ? 4'b0011 : 4'b1100;
                    bus_awsize = 3'b001;
                end
                2'b00: begin
                    bus_wstrb  = 4'b0001 << lsu_addr_save[1:0];
                    bus_awsize = 3'b000;
                end
            endcase
        end else begin
            case(io_type_save)
                2'b10: bus_arsize = 3'b010;
                2'b01: bus_arsize = 3'b001;
                2'b00: bus_arsize = 3'b000;
            endcase
        end 
    end

    always_comb begin

        bus_arvalid = 1'b0;
        bus_araddr = lsu_addr_save;
        bus_arid = 4'b0000;
        bus_arlen = 8'h00;
        bus_arburst = 2'b00;
        bus_rready = 1'b0;

        bus_awvalid = 1'b0;
        bus_awaddr = lsu_addr_save;
        bus_wdata = lsu_data_save << {lsu_addr_save[1:0], 3'b000};  // AXI 要求 wdata 里面的结构要是offset移位过后的
        bus_awid = 4'b0000;
        bus_awlen = 8'h00;
        bus_awburst = 2'b00;
        bus_wvalid = 1'b0;
        bus_bready = 1'b0;
        bus_wlast = 1'b1;

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
                bus_arvalid = 1'b1;
                if(bus_arready == 1'b1) begin
                    next = R;
                end
            end

            R: begin
                if(bus_rvalid == 1'b1) begin
                    bus_rready = 1'b1;              
                    next = IDLE;
                end
            end

            AW: begin
                bus_awvalid = 1'b1;
                if(bus_awready == 1'b1) begin
                    next = W;
                end
            end

            W: begin
                bus_wvalid = 1'b1;
                if(bus_wready == 1'b1) begin
                    next = B;
                end
            end

            B: begin
                if(bus_bvalid == 1'b1) begin
                    bus_bready = 1'b1;
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

