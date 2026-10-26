/*
CLINT(Core Local INTerrupt controller)是RISC-V系统中较通用的中断控制器, 是一个用于维护时钟中断和软件中断的模块.

不过目前我们的系统还不需要中断功能, 因此我们先考虑时钟相关的功能即可.

CLINT包含一个只读的设备寄存器mtime, 它会以一定的速率增长, 最简单的实现是每周期加1.

mtime的流逝还不能直接反映时间的流逝, 它们之间相差一个系数, 这个系数为时钟频率(在这里为仿真频率).
具体地, 还需要修改 IOE 的相关代码, 让 AM_TIMER_UPTIME 返回的时间接近真实时间.

mtime是一个64位寄存器, 运行在32位NPC上的软件需要依次读出mtime的低32位和高32位,
将其组合成一个64位的值, 供上层应用使用.
所以要给它两个地址:
    MTIME_ADDR  (0x0200_0000) -> mtime[31:0]
    MTIMEH_ADDR (0x0200_0004) -> mtime[63:32]

--------------------------------------------------------------------------------------------
实现要点(和讲义里那个"只写设备"的要求对应起来):

1. 设备是**只读**的:
     读 mtime / mtimeh            -> OKAY
     读别的地址                   -> SLVERR  (Xbar 只按 0x0200_0000~0x0200_ffff 整个范围转发,
                                              所以"地址必须精确等于上面两个之一"这件事
                                              要由本模块自己判断)
     任何写(地址对不对都一样)     -> SLVERR  (只读设备, 写指令一概不支持)

2. ⭐ 出错也必须把整笔 AXI 事务走完: B 通道要给 bvalid, R 通道要给 rvalid,
   错误通过 resp 表达, 绝不能把状态机锁死.
   原因看 axi_lsu.sv: master 收到 bvalid/rvalid 并且把 bready/rready 拉高之后
   才会离开 B/R 态; 如果从设备不回响应, 双方就是互相死等.

3. 接口用工程自己的 AXI4(ysyx_26040135_AXI4.slave), 不是 AXI4-Lite.

4. CPU 侧只发单拍传输(arlen=awlen=0, 见 axi_lsu.sv), 所以这里也按单拍处理:
   读只回一拍, 并且 rlast 恒为 1(单拍传输里唯一一拍就是最后一拍).
   如果以后真出现 arlen != 0 的突发读, 这个模块只会回一拍, master 会一直等下去.

5. mtime 的进位竞争: 软件先读低 32 位再读高 32 位, 如果在这两次读之间 mtime 正好
   从 0xffff_ffff 进位, 拼出来的 64 位值会偏大 2^32. 这个概率极低(要恰好落在那一拍),
   讲义的要求里没提, 所以这里按最朴素的方式实现, 不加锁存. 真要做, 做法是:
   读低 32 位那一拍把 mtime[63:32] 锁进一个寄存器, 之后读高 32 位返回锁存值.
*/

module ysyx_26040135_AXI_CLINT (
    ysyx_26040135_AXI4.slave bus,

    input clock, 
    input reset
);

    // ⭐ 这两个地址要和 AM 侧(abstract-machine/am/src/riscv/ysyxsoc/ioe.c 里的
    //    __am_timer_uptime)一致, 改的话两边一起改.
    parameter [31:0] MTIME_ADDR  = 32'h0200_0000;   // mtime[31:0]
    parameter [31:0] MTIMEH_ADDR = 32'h0200_0004;   // mtime[63:32]

    localparam [1:0] RESP_OKAY   = 2'b00;   // 正常
    localparam [1:0] RESP_SLVERR = 2'b10;   // 从设备错误: 地址不对 / 写只读设备

    // ------------------------------------------------------------------
    // mtime: 64 位只读寄存器, 每周期 +1
    // ------------------------------------------------------------------
    logic [63:0] mtime;

    always_ff @(posedge clock or posedge reset) begin
        if(reset) mtime <= 64'b0;
        else      mtime <= mtime + 64'd1;
    end

    // ------------------------------------------------------------------
    // 状态机
    //   IDLE: 收 AR / AW
    //   R   : 回读数据, 等 rready
    //   W   : AW 已收下, 等 W 通道的写数据
    //   B   : 回写响应, 等 bready
    // ------------------------------------------------------------------
    typedef enum logic [1:0] {
        IDLE, R, W, B
    } state_t;
    state_t state, next;

    // 事务信息锁存. 地址/ID 要在收到请求那一拍就记下来: master 离开 AR/AW 态之后
    // 这两个信号就可能变, 而响应要晚一拍才发.
    logic [31:0] rdata_save;
    logic [1:0]  rresp_save;
    logic [3:0]  rid_save, bid_save;

    // 读数据/读响应是组合出来的: 收到 AR 的那一拍就要算好
    logic [31:0] rdata_now;
    logic [1:0]  rresp_now;

    always_comb begin
        if(bus.araddr == MTIME_ADDR) begin
            rdata_now = mtime[31:0];
            rresp_now = RESP_OKAY;
        end
        else if(bus.araddr == MTIMEH_ADDR) begin
            rdata_now = mtime[63:32];
            rresp_now = RESP_OKAY;
        end
        else begin
            // 错误访问地址: 数据给 0, 靠 resp 报错
            rdata_now = 32'b0;
            rresp_now = RESP_SLVERR;
        end
    end

    always_ff @(posedge clock or posedge reset) begin
        if(reset) begin
            state      <= IDLE;
            rdata_save <= 32'b0;
            rresp_save <= RESP_OKAY;
            rid_save   <= 4'b0;
            bid_save   <= 4'b0;
        end
        else begin
            state <= next;

            // ---- 收下读请求 ----
            if(state == IDLE && bus.arvalid && bus.arready) begin
                rdata_save <= rdata_now;
                rresp_save <= rresp_now;
                rid_save   <= bus.arid;
            end

            // ---- 收下写地址 ----
            // 本设备只读, 所以写一定是错误响应; B 态统一给 SLVERR, 这里只把 ID 记下来
            if(state == IDLE && bus.awvalid && bus.awready) begin
                bid_save <= bus.awid;
            end
        end
    end


    always_comb begin
        bus.arready = 1'b0;

        bus.rvalid  = 1'b0;
        bus.rdata   = 32'b0;
        bus.rresp   = RESP_OKAY;
        bus.rid     = 4'b0;
        bus.rlast   = 1'b0;

        bus.awready = 1'b0;
        bus.wready  = 1'b0;

        bus.bvalid  = 1'b0;
        bus.bresp   = RESP_OKAY;
        bus.bid     = 4'b0;

        next = state;

        case(state)
            IDLE: begin
                // 读优先: 本模块的正事就是读 mtime
                if(bus.arvalid) begin
                    bus.arready = 1'b1;
                    next = R;
                end
                else if(bus.awvalid) begin
                    bus.awready = 1'b1;
                    if(bus.wvalid) begin
                        bus.wready = 1'b1;
                        next = B;
                    end
                    else begin
                        next = W;
                    end
                end
            end

            R: begin
                bus.rvalid = 1'b1;
                bus.rdata  = rdata_save;
                bus.rresp  = rresp_save;
                bus.rid    = rid_save;
                bus.rlast  = 1'b1;      // 单拍传输: 唯一一拍就是最后一拍
                if(bus.rready) begin
                    next = IDLE;
                end
            end

            W: begin
                // AW 已经收下了, 这里只等写数据. 数据本身丢弃, 响应在 B 态统一给错误
                if(bus.wvalid) begin
                    bus.wready = 1'b1;
                    next = B;
                end
            end

            B: begin
                bus.bvalid = 1'b1;
                bus.bresp  = RESP_SLVERR;   // 只读设备, 写一律不支持
                bus.bid    = bid_save;
                if(bus.bready) begin
                    next = IDLE;
                end
            end

            default: next = IDLE;
        endcase
    end

endmodule
