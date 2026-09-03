/*
我的总线NPC开发计划:   先开发分别使用AXI总线接口的 IFU 和 LSU

全局概览：快速浏览手册的“Introduction”或“Overview”章节，了解AXI在AMBA协议族中的位置和设计目标。
信号速查：直接翻到信号描述部分，把核心信号（带前缀AW, W, B, AR, R的VALID/READY/ADDR/DATA）的作用过一遍。
握手规则精读：仔细阅读“Handshake”部分，重点是VALID/READY的依赖关系，直到完全理解为止。
事务流程理解：结合图示，看一遍完整的读事务和写事务的流程，以及突发传输的时序。

动手编码：在编写RTL代码的过程中，遇到不确定的信号或行为，再回过头来查阅手册的详细章节。例如，当需要实现字节掩码时，就去查WSTRB的详细说明；需要实现计数器时，去查AWLEN的使用方式。


阅读AXI Manual, 理解握手协议(确定完整的时序), 先看, 理解, 和ai确认没有问题

⭐: 完整的AXI总线包含这个signal:

araddr  ---> -+
arvalid --->  AR
<--- arready -+

<--- rdata   -+
<--- rresp    |
<--- rvalid   R
rready  ---> -+

awaddr  ---> -+
awvalid --->  AW
<--- awready -+

wdata   ---> -+
wstrb   --->  |
wvalid  --->  W
<--- wready  -+

<--- bresp   -+
<--- bvalid   B
bready  ---> -+

信号类别	              主要信号（前缀）	                                                        作用
全局信号	              ACLK, ARESETn	                                                     提供系统时钟和复位。
地址/控制信息	           AWLEN, ARSIZE, AWBURST, AWLOCK, AWCACHE, AWPROT, AWQOS, AWREGION	  定义突发长度、类型、数据位宽、原子操作、缓存和访问权限等传输细节。
ID 标签	                 AWID, ARID, WID, RID, BID	                                        用于乱序传输时匹配请求与响应，主设备通过它识别数据属于哪个请求。
数据结束标志	           WLAST, RLAST	                                                      标志突发传输中最后一个数据节拍。
用户自定义	              AWUSER, WUSER, BUSER, ARUSER, RUSER	                              可选信号，用于用户自定义信息扩展。

读和写分离(读写并发)  地址和数据分离(DRAM可以先收地址)

一次读操作:
1次握手: 主设备arvalid和araddr持续拉高等待arready完成一周期握手
2次握手: rvalid和rdata, rresp持续拉高, 等待rready完成一周期握手

一次写操作:
1次握手:AW
2次握手:W
3次握手:B

根据权衡, 不实现outstanding, 而且指令是逐个执行


*/