
module ysyx_26040135_AXI_CLINT (
    input   logic [31:0] bus_araddr,
    input   logic [3:0] bus_arid,
    input   logic [7:0] bus_arlen,
    input   logic [2:0] bus_arsize,
    input   logic [1:0] bus_arburst,
    input   logic        bus_arvalid,
    output  logic        bus_arready,
    output  logic [31:0] bus_rdata,
    output  logic [3:0] bus_rid,
    output  logic [1:0] bus_rresp,
    output  logic        bus_rlast,
    output  logic        bus_rvalid,
    input   logic        bus_rready,

    input clock, 
    input reset
);

    parameter [31:0] MTIME_ADDR  = 32'h0200_0000;  
    parameter [31:0] MTIMEH_ADDR = 32'h0200_0004;   


    reg [63:0] mtime;
    reg [31:0] araddr_save;

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            mtime <= 64'b0;
        end else begin
            mtime <= mtime + 64'b1;
        end
    end


    typedef enum logic [1:0] {
        IDLE, R
    } state_t;
    state_t state, next;


    always @(posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
        end
        else begin
            state <= next;

            if(bus_arvalid && bus_arready) begin
                araddr_save <= bus_araddr;
            end

        end
    end


    always_comb begin
        bus_arready = 1'b0;

        bus_rvalid  = 1'b0;
        bus_rdata   = 32'b0;
        bus_rresp   = 2'b00;
        bus_rlast   = 1'b0;     
        bus_rid     = 4'b0;

        next = state;

        case(state)
            IDLE: begin
                if(bus_arvalid) begin
                    bus_arready = 1'b1;
                    next = R;
                end
            end

            R: begin
                bus_rvalid = 1'b1;
                bus_rlast  = 1'b1;   

                if(araddr_save == MTIME_ADDR) begin
                    bus_rdata = mtime[31:0];
                end
                else if(araddr_save == MTIMEH_ADDR) begin
                    bus_rdata = mtime[63:32];
                end
                else begin
                    bus_rresp = 2'b10;
                end

                if(bus_rready) begin
                    next = IDLE;
                end
            end

            default: ;
        endcase
    end

endmodule



