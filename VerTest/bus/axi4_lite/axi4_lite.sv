interface AXI4_Lite;
    logic [31:0] araddr;
    logic        arvalid;
    logic        arready;

    logic [31:0] rdata;
    logic [1:0]  rresp;
    logic        rvalid;
    logic        rready;

    logic [31:0] awaddr;
    logic        awvalid;
    logic        awready;

    logic [31:0] wdata;
    logic [3:0]  wstrb;
    logic        wvalid;
    logic        wready;

    logic [1:0]  bresp;
    logic        bvalid;
    logic        bready;

    modport master (
        output araddr, arvalid,
        input  arready,

        input  rdata, rresp, rvalid,
        output rready,

        output awaddr, awvalid,
        input  awready,

        output wdata, wstrb, wvalid,
        input  wready,

        input  bresp, bvalid,
        output bready,
    );

    modport slave (
        input  araddr, arvalid,
        output arready,

        output rdata, rresp, rvalid,
        input  rready,

        input  awaddr, awvalid,
        output awready,

        input  wdata, wstrb, wvalid,
        output wready,
        
        output bresp, bvalid,
        input  bready,
    );


    
endinterface //AXI4_Lite