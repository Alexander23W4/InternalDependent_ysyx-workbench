

module ysyx_26040135_AXI_LSU (
    output logic [31:0] bus_araddr,
    output logic        bus_arvalid,
    input logic        bus_arready,
    output logic [3:0]  bus_arid,
    output logic [7:0]  bus_arlen,
    output logic [2:0]  bus_arsize,
    output logic [1:0]  bus_arburst,
    input logic [31:0] bus_rdata,
    input logic [1:0]  bus_rresp,
    input logic        bus_rvalid,
    output logic        bus_rready,
    input logic [3:0]  bus_rid,
    input logic        bus_rlast,

    output logic [31:0] bus_awaddr,
    output logic        bus_awvalid,
    input logic        bus_awready,
    output logic [3:0]  bus_awid,
    output logic [7:0]  bus_awlen,
    output logic [2:0]  bus_awsize,
    output logic [1:0]  bus_awburst,
    output logic [31:0] bus_wdata,
    output logic [3:0]  bus_wstrb,
    output logic        bus_wvalid,
    output logic        bus_wlast,
    input logic        bus_wready,
    input logic [3:0]  bus_bid,
    input logic [1:0]  bus_bresp,
    input logic        bus_bvalid,
    output logic        bus_bready,

    input clock,
    input reset,

    input io,
    input [1:0] io_type,
    input read_is_u,
    input [4:0] rd,
    input [31:0] lsu_wdata,
    input [31:0] lsu_addr,
    input [31:0] ic_wb_wdata,

    input in_valid,
    output reg in_ready,

    output reg out_valid,
    input out_ready,

    output [31:0] wdata,
    output [4:0] rd_out_lsu,

    output [31:0] sw_addr,
    output sw_avail,

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
    reg [31:0] rdata_out;
    reg flush_save;

    localparam [2:0] IDLE = 3'd0,
                     AR   = 3'd1,
                     R    = 3'd2,
                     AW   = 3'd3,
                     W    = 3'd4,
                     B    = 3'd5;
    reg [2:0] state, next;

    assign rd_out_lsu = rd_save;
    assign sw_addr = lsu_addr_save;

    always @(posedge clock or posedge reset) begin
        if (reset) begin
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
            lsu_blockf <= 1'b0;
            flush_save <= 1'b0;
        end else begin
            state <= next;

            if (state == IDLE && out_ready && out_valid) begin
                in_ready <= 1'b1;
                out_valid <= 1'b0;
            end

            if (state == IDLE && in_valid && in_ready) begin
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

            if (in_ready && !in_valid) begin
                lsu_blockf <= 1'b1;
            end else begin
                lsu_blockf <= 1'b0;
            end

            if (state == R && bus_rvalid && bus_rresp == 2'b00) begin
                rdata_out <= bus_rdata;
                if (flush_save || flush) begin
                    in_ready <= 1'b1;
                end else begin
                    out_valid <= 1'b1;
                end
            end
            if (state == B && bus_bvalid && bus_bresp == 2'b00) begin
                in_ready <= 1'b1;
            end

            if (state == R && bus_rvalid && bus_rresp != 2'b00) begin
                error_save <= bus_rresp;
            end
            if (state == B && bus_bvalid && bus_bresp != 2'b00) begin
                error_save <= bus_bresp;
            end

            if (flush) begin
                if (out_valid) begin
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
                    bus_wstrb = 4'b1111;
                    bus_awsize = 3'b010;
                end
                2'b01: begin
                    bus_wstrb = (lsu_addr_save[1:0] == 2'b00) ? 4'b0011 : 4'b1100;
                    bus_awsize = 3'b001;
                end
                2'b00: begin
                    bus_wstrb = 4'b0001 << lsu_addr_save[1:0];
                    bus_awsize = 3'b000;
                end
            endcase
        end else begin
            case (io_type_save)
                2'b10: bus_arsize = 3'b010;
                2'b01: bus_arsize = 3'b001;
                2'b00: bus_arsize = 3'b000;
            endcase
        end
    end

    always_comb begin
        bus_arready = 1'b0;
        bus_rdata = 32'b0;
        bus_rresp = 2'b00;
        bus_rvalid = 1'b0;
        bus_rid = 4'b0;
        bus_rlast = 1'b0;
        bus_awready = 1'b0;
        bus_wready = 1'b0;
        bus_bid = 4'b0;
        bus_bresp = 2'b00;
        bus_bvalid = 1'b0;
        bus_arvalid = 1'b0;
        bus_awvalid = 1'b0;

        bus_araddr = lsu_addr_save;
        bus_awaddr = lsu_addr_save;
        bus_wdata = lsu_data_save << {lsu_addr_save[1:0], 3'b000};
        bus_awid = 4'b0000;
        bus_awlen = 8'h00;
        bus_awburst = 2'b00;
        bus_arid = 4'b0000;
        bus_arlen = 8'h00;
        bus_arburst = 2'b00;
        bus_rready = 1'b0;
        bus_wvalid = 1'b0;
        bus_wlast = 1'b1;
        bus_bready = 1'b0;
        sw_avail = 1'b0;

        next = state;

        case (state)
            IDLE: begin
                if (in_valid && in_ready) begin
                    if (!io) next = AR;
                    else next = AW;
                end
            end

            AR: begin
                bus_arvalid = 1'b1;
                if (bus_arready == 1'b1) begin
                    next = R;
                end
            end

            R: begin
                if (bus_rvalid == 1'b1) begin
                    bus_rready = 1'b1;
                    next = IDLE;
                end
            end

            AW: begin
                bus_awvalid = 1'b1;
                if (bus_awready == 1'b1) begin
                    next = W;
                end
            end

            W: begin
                bus_wvalid = 1'b1;
                if (bus_wready == 1'b1) begin
                    next = B;
                end
            end

            B: begin
                if (bus_bvalid == 1'b1) begin
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

    wire lw, lh, lhu, lbu, lb;
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

