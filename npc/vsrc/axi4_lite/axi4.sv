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

resp: 
编码      名称        含义              说明
2'b00    OKAY        正常访问成功      传输成功完成，数据有效
2'b01    EXOKAY      独占访问成功      AXI4-Lite不支持！ 仅用于AXI4全功能版
2'b10    SLVERR      Slave错误         Slave内部错误（如访问未初始化区域、权限错误等）
2'b11    DECERR      解码错误          地址未映射到任何Slave（由Interconnect返回）

size:
值	     含义	说明
3'b000	1字节	8位传输
3'b001	2字节	16位传输
3'b010	4字节	32位传输（最常用）
3'b011	8字节	64位传输
3'b100	16字节	128位传输

AXI4 新增信号详解
信号	位宽	作用
arid / awid / rid / bid	4-bit	事务ID：用于区分不同的事务。支持乱序响应——Slave可以按任意顺序返回结果，Master通过ID来匹配对应的请求和响应。多个未完成的事务可以同时进行。
arlen / awlen	        8-bit	突发长度：指定一次突发传输包含多少个数据节拍（0-255）。arlen=0 表示1个数据，arlen=1 表示2个数据，以此类推。AXI4-Lite固定为0（1个数据）。
arsize / awsize	        3-bit	传输位宽：指定每个数据节拍的字节数。000=1字节，001=2字节，010=4字节，011=8字节... AXI4-Lite固定为010（4字节）。
arburst / awburst	    2-bit	突发类型：00=FIXED（固定地址），01=INCR（递增地址），10=WRAP（回绕地址）。INCR是最常用的，用于连续内存访问。
rlast / wlast	        1-bit	最后一个数据：在突发传输中，最后一个数据节拍时拉高，表示当前传输结束。Slave/Master通过这个信号知道什么时候完成一次突发。
*/

interface ysyx_26040135_AXI4;

    logic [31:0] araddr;
    logic [3:0]  arid;   //
    logic [7:0]  arlen;  // 
    logic [2:0]  arsize; // --
    logic [1:0]  arburst; //
    logic        arvalid;
    logic        arready;

    logic [31:0] rdata;
    logic [3:0]  rid;  //
    logic [1:0]  rresp;
    logic        rlast;  //
    logic        rvalid;
    logic        rready;

    logic [31:0] awaddr;
    logic [3:0]  awid;  //
    logic [7:0]  awlen;  //
    logic [2:0]  awsize;  // --
    logic [1:0]  awburst; //
    logic        awvalid;
    logic        awready;

    logic [31:0] wdata;
    logic [3:0]  wstrb;
    logic        wlast;  //
    logic        wvalid; 
    logic        wready;

    logic [3:0]  bid;  //
    logic [1:0]  bresp;
    logic        bvalid;
    logic        bready;

    modport master (
        output araddr, arid, arlen, arsize, arburst, arvalid,
        input  arready,

        input  rdata, rid, rresp, rlast, rvalid,
        output rready,

        output awaddr, awid, awlen, awsize, awburst, awvalid,
        input  awready,

        output wdata, wstrb, wlast, wvalid,
        input  wready,

        input  bid, bresp, bvalid,
        output bready
    );

    modport slave (
        input  araddr, arid, arlen, arsize, arburst, arvalid,
        output arready,

        output rdata, rid, rresp, rlast, rvalid,
        input  rready,

        input  awaddr, awid, awlen, awsize, awburst, awvalid,
        output awready,

        input  wdata, wstrb, wlast, wvalid,
        output wready,

        output bid, bresp, bvalid,
        input  bready
    );

endinterface

