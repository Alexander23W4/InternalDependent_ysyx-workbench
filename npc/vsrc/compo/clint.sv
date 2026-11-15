
module ysyx_26040135_AXI_CLINT (
    ysyx_26040135_AXI4.slave bus,

    input clock, 
    input reset
);

    parameter [31:0] MTIME_ADDR  = 32'h0200_0000;  
    parameter [31:0] MTIMEH_ADDR = 32'h0200_0004;   


    reg [63:0] mtime;
    reg [31:0] araddr_save;

    always_ff @(posedge clock or posedge reset) begin
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


    always_ff @(posedge clock or posedge reset) begin
        if(reset) begin
            state <= IDLE;
        end
        else begin
            state <= next;

            if(bus.arvalid && bus.arready) begin
                araddr_save <= bus.araddr;
            end

        end
    end


    always_comb begin
        bus.arready = 1'b0;

        bus.rvalid  = 1'b0;
        bus.rdata   = 32'b0;
        bus.rresp   = 2'b00;
        bus.rlast   = 1'b0;     
        bus.rid     = 4'b0;

        bus.awready = 1'b0;
        bus.wready  = 1'b0;
        bus.bvalid  = 1'b0;
        bus.bid     = 4'b0;
        bus.bresp   = 2'b00;

        next = state;

        case(state)
            IDLE: begin
                if(bus.arvalid) begin
                    bus.arready = 1'b1;
                    next = R;
                end
            end

            R: begin
                bus.rvalid = 1'b1;
                bus.rlast  = 1'b1;   

                if(araddr_save == MTIME_ADDR) begin
                    bus.rdata = mtime[31:0];
                end
                else if(araddr_save == MTIMEH_ADDR) begin
                    bus.rdata = mtime[63:32];
                end
                else begin
                    bus.rresp = 2'b10;
                end

                if(bus.rready) begin
                    next = IDLE;
                end
            end

            default: ;
        endcase
    end

endmodule



