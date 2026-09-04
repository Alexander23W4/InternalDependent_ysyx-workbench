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

对于resp信号:
编码 ([1:0])	名称	含义
2'b00	OKAY	传输成功（正常访问）
2'b01	EXOKAY	独占访问成功（AXI4-Lite 通常不用）
2'b10	SLVERR	从设备错误（Slave Error）
2'b11	DECERR	译码错误（Decode Error）


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
/*
Targets:
1.
实现 AXI4-Lite Slave（存储器）：
处理 AR/AW/W/R/B 通道的握手。
根据地址访问 RAM。
返回正确的 rresp / bresp。

2.
在 Slave 中注入 LFSR 随机延迟：
实现一个 LFSR 生成随机数。
在返回 rvalid 或 bvalid 前插入随机延迟。

3.
在 Master 端增加写通道的 assert 保护（特别是 IFU）。
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
        output bready
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
        input  bready
    );


    
endinterface //AXI4_Lite

// 单向面对接口, 没有额外的 控制信号, 数据, 地址 的输入输出
module AXI_RAM (
    AXI4_Lite.slave bus,

    input clk, 
    input reset
);
    logic [31:0] rdata_save;

    logic [31:0] awaddr_save;
    logic [31:0] wdata_save;
    logic [3:0] wstrb_save;

    typedef enum [2:0]{ 
        IDLE, R, W, B
    } state_t;
    state_t state, next;

    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;

            rdata_save <= `0;

            awaddr_save <= `0;


        end else begin
            state <= next;
            if(state == IDLE && bus.arvalid) begin
                rdata_save <= ram_read(bus.araddr, 4); 
            end
            if(state == IDLE && bus.awvalid) begin
                if(bus.wvalid) begin
                    case(bus.wstrb)
                        4'b1111: ram_write(bus.awaddr, bus.wdata, 4);
                        4'b1100, 4'b0011: ram_write(bus.awaddr, bus.wdata, 2);
                        4'b1000, 4'b0100, 4'b0010, 4'b0001: ram_write(bus.awaddr, bus.wdata, 1);
                    endcase
                end else begin
                    awaddr_save <= bus.awaddr;                   
                end
            end
            if(state == AR) begin
                
            end
        end
    end

    always_comb begin
        bus.arready = 1'b0;
        bus.rresp = 2'b00;
        bus.rvalid = 1'b0;
        bus.rdata = rdata_save;

        bus.awready = 1'b0;
        bus.wready = 1'b0;
        bus.bresp = 2'b00;
        bus.bvalid = 1'b0;

        next = state;

        case(state)
            IDLE: begin
                if(bus.arvalid) begin
                    bus.arready = 1'b1;
                    next = R;
                end
                else if(bus.awvalid) begin
                    bus.awready = 1'b1;
                    if(bus.wvalid) begin
                        next = B;
                    end
                    next = W;
                end
            end
            R: begin
                bus.rvalid = 1'b1;
                if(bus.rready) begin
                    next = IDLE;
                end
            end
            W: begin
                if(bus.wvalid) begin
                    
                end
            end
        endcase
    end
/*
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
        input  bready
    );
*/
    
endmodule


// 注意现阶段的npc只是一个多周期cpu, 不是一个多指令并行cpu, 不能够一次性执行多条指令. 
// cpu必须判断所有反馈信号, 等到都完成了, 才可以更新pc

// 现阶段cpu只有在 GPR IFU LSU 3个地方的操作上会有时序消耗, 其他全部是瞬时 组合逻辑

// 所以cpu就是一大堆控制信号, 通过总线控制一堆时序模块, 控制他们的时序
module AXI_LSU (
    AXI4_Lite.master bus,
    
    input clk,
    input reset,

    input __read, __write,
    input __sw, __sh, __sb,

    // 这两个信号只持续一个周期
    input __decode_addr_ready,  
    input __decode_data_ready,

    input [31:0] addr,
    input [31:0] wdata,
    
    output [31:0] rdata,
    
    output __error,
    output __read_complete,   // cpu读到这个, 需要立刻拿走数据启动GPR操作
    output __write_complete   // cpu读到这个, 需要立刻启动更新pc操作
);
// 反馈信号
    logic [31:0] rdata_save;
    logic error_save;
    logic read_complete_save;
    logic write_complete_save;

    assign rdata = rdata_save;
    assign __error = error_save;
    assign __read_complete = read_complete_save;
    assign __write_complete = write_complete_save;

// 状态
    typedef enum [2:0]{ 
        IDLE, AR, R, AW, W, B
    } state_t;
    state_t state, next;



    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 1'b0;
            read_complete_save <= 1'b0;
            write_complete_save <= 1'b0;
        end else begin
            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                rdata_save <= bus.rdata;
                read_complete_save <= 1'b1;
            end
            if(state == B && bus.bvalid && bus.rresp == 2'b00) begin
                write_complete_save <= 1'b1;
            end
            if(state != R && state != B) begin
                read_complete_save <= 1'b0;
                write_complete_save <= 1'b0;
            end
            if(((state == R && bus.rvalid) || (state == B && bus.bvalid)) && bus.rresp == 2'b10) begin
                error_save <= 1'b1; 
            end
            state <= next;
        end
    end

    always_comb begin
        bus.wstrb = 4'b0000;  
        if (__write) begin
            case (1'b1)
                __sw: bus.wstrb = 4'b1111;
                __sh: bus.wstrb = (addr[1:0] == 2'b00) ? 4'b0011 : 4'b1100;
                __sb: bus.wstrb = 4'b0001 << addr[1:0];
            endcase 
        end
    end

    always_comb begin
        bus.araddr = addr;
        bus.arvalid = 1'b0;
        bus.rready = 1'b0;
        bus.awaddr = addr;
        bus.awvalid = 1'b0;
        bus.wdata = wdata;
        bus.wvalid = 1'b0;
        bus.bready = 1'b0;
        next = state;
        
        case(state)
            IDLE: begin
                if(__decode_addr_ready && __read) begin
                    next = AR;
                end
                else if(__decode_addr_ready && __write) begin
                    next = AW;
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
                    if(bus.rresp == 2'b00) begin
                        bus.rready = 1'b1;
                        if(__decode_addr_ready && __read) begin
                            next = AR;
                        end
                        else if(__decode_addr_ready && __write) begin
                            next = AW;
                        end
                        else begin
                            next = IDLE;
                        end
                    end
                end
            end

            AW: begin
                bus.awvalid = 1'b1;
                if(__decode_data_ready) begin
                    bus.wvalid = 1'b1;
                end
                if(bus.awready == 1'b1) begin
                    if(bus.wready == 1'b1) begin
                        next = B;
                    end
                    else if(__decode_data_ready) begin
                        next = W;
                    end
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
                    if(bus.bresp == 2'b00) begin
                        bus.bready = 1'b1;
                        if(__decode_addr_ready && __read) begin
                            next = AR;
                        end
                        else if(__decode_addr_ready && __write) begin
                            next = AW;
                        end
                        else begin
                            next = IDLE;
                        end
                    end
                end
            end
        endcase
    end

endmodule


// 注意, 给其他模块的控制信号并不是 拉高1周期 就完事了, 而是要等到 被控制模块 给一个反馈信号(被控制模块有这个义务), 代表知道了, 然后 控制模块 将控制信号及时清理(同样有义务)
// 后续还需补充 input __error_is_arranged 
module AXI_IFU (
    AXI4_Lite.master bus,
    
    input clk,
    input reset,
    
    input __pc_is_updated,   // cpu 应当只拉高此信号一个周期

    input [31:0] pc,
    output [31:0] rdata,

    output __instr_valid,   //  提示cpu fetch 完成, 可以decode了
    output __error
);

// 外部控制信号与返回外部的信号:
    logic [31:0] rdata_save;
    logic error_save;
    logic instr_valid_save;

    assign rdata = rdata_save;
    assign __instr_valid = instr_valid_save;
    assign __error = error_save;

    typedef enum [2:0]{ 
        IDLE, AR, R
    } state_t;
    state_t state, next;

    always_ff @( posedge clk or posedge reset ) begin
        if(reset) begin
            state <= IDLE;
            rdata_save <= '0;
            error_save <= 1'b0;
            instr_valid_save <= 1'b0;
        end else begin
            if(state == R && bus.rvalid && bus.rresp == 2'b00) begin
                rdata_save <= bus.rdata;
                instr_valid_save <= 1'b1;   
            end
            if(state == IDLE || state == AR) begin
                instr_valid_save <= 1'b0;
            end
            if(state == R && bus.rvalid && bus.rresp == 2'b10) begin
                error_save <= 1'b1; 
            end
            state <= next;
        end
    end

    always_comb begin
        bus.araddr = pc;
        bus.arvalid = 1'b0;
        bus.rready = 1'b0;
        bus.awaddr = '0;
        bus.awvalid = 1'b0;
        bus.wdata = '0;
        bus.wstrb = '0;
        bus.wvalid = 1'b0;
        bus.bready = 1'b0;
        next = state;
        
        case(state)
            IDLE: begin
                if(__pc_is_updated) begin
                    next = AR;
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
                    if(bus.rresp == 2'b00) begin
                        bus.rready = 1'b1;
                        if(__pc_is_updated) begin
                            next = AR;
                        end
                        else begin
                            next = IDLE;
                        end
                    end
                end
            end
        endcase
    end

endmodule



