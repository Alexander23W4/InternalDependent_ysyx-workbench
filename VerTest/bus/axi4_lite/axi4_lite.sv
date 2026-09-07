/*
+-----+      +------+      +-----+
| IFU | ---> |      | ---> | UART|  [0x1000_0000, 0x1000_0fff)
+-----+      |      |      +-----+
             | Xbar |
+-----+      |      |      +-----+
| LSU | ---> |      | ---> | SRAM|  [0x8000_0000, 0x80ff_ffff)
+-----+      +------+      +-----+

现在要实现这个总线结构:

首先4个件实现4个 AXI 总线接口
Xbar实现纯逻辑对接, 通过握手信号来判断, addr判断, 添加assert限制, PMA
然后上层的 AXI interface设置好 

*/

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