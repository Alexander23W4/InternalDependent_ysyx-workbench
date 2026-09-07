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

Xbar实现纯逻辑对接, 通过握手信号来判断, addr判断, 添加assert限制, PMA.   
    两种 Xbar
    组合牵线Xbar: 是读写分离的, 但是一次只能有一个读 和 一个写
    加上状态机的Xbar: 当总线正在处理一个读或写事务时，锁住地址和路由信息，直到该事务完成。

然后上层的 AXI interface设置好 


编码	 名称	  含义	          说明
2'b00	OKAY	正常访问成功	传输成功完成，数据有效
2'b01	EXOKAY	独占访问成功	AXI4-Lite不支持！ 仅用于AXI4全功能版
2'b10	SLVERR	Slave错误	Slave内部错误（如访问未初始化区域、权限错误等）
2'b11	DECERR	解码错误	地址未映射到任何Slave（由Interconnect返回）


*/

interface ysyx_26040135_AXI4;
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