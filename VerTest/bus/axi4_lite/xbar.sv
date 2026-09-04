/*
 * AXI4-Lite XBAR
 * 2 Masters (IFU, LSU) -> 2 Slaves (UART, SRAM)
 * 
 * 地址映射：
 *   UART:  [0x1000_0000, 0x1000_0fff]
 *   SRAM:  [0x8000_0000, 0x80ff_ffff]
 * 
 * 仲裁策略：固定优先级 (IFU > LSU)
 * 译码策略：地址译码
 */

module AXI_XBAR (
    input clk,
    input reset,


    input  [31:0] m0_araddr,
    input         m0_arvalid,  //
    output        m0_arready,
    output [31:0] m0_rdata,
    output [1:0]  m0_rresp,
    output        m0_rvalid,
    input         m0_rready,
    input  [31:0] m0_awaddr,
    input         m0_awvalid,
    output        m0_awready,
    input  [31:0] m0_wdata,
    input  [3:0]  m0_wstrb,
    input         m0_wvalid,
    output        m0_wready,
    input  [1:0]  m0_bresp,
    input         m0_bvalid,
    output        m0_bready,


    input  [31:0] m1_araddr,  
    input         m1_arvalid,   //
    output        m1_arready,
    output [31:0] m1_rdata,
    output [1:0]  m1_rresp,
    output        m1_rvalid,
    input         m1_rready,
    input  [31:0] m1_awaddr,
    input         m1_awvalid,
    output        m1_awready,
    input  [31:0] m1_wdata,
    input  [3:0]  m1_wstrb,
    input         m1_wvalid,
    output        m1_wready,
    output [1:0]  m1_bresp,
    output        m1_bvalid,
    input         m1_bready,


    output [31:0] s0_araddr,
    output        s0_arvalid,
    input         s0_arready,
    input  [31:0] s0_rdata,
    input  [1:0]  s0_rresp,
    input         s0_rvalid,
    output        s0_rready,
    output [31:0] s0_awaddr,
    output        s0_awvalid,
    input         s0_awready,
    output [31:0] s0_wdata,
    output [3:0]  s0_wstrb,
    output        s0_wvalid,
    input         s0_wready,
    input  [1:0]  s0_bresp,
    input         s0_bvalid,
    output        s0_bready,


    output [31:0] s1_araddr,
    output        s1_arvalid,
    input         s1_arready,
    input  [31:0] s1_rdata,
    input  [1:0]  s1_rresp,
    input         s1_rvalid,
    output        s1_rready,
    output [31:0] s1_awaddr,
    output        s1_awvalid,
    input         s1_awready,
    output [31:0] s1_wdata,
    output [3:0]  s1_wstrb,
    output        s1_wvalid,
    input         s1_wready,
    input  [1:0]  s1_bresp,
    input         s1_bvalid,
    output        s1_bready,
);
    assert property (@(posedge clk) !m0_awvalid)
        else $error("AXI_XBAR: IFU (m0) asserted awvalid, but IFU is read-only!");

    assert property (@(posedge clk) !m0_wvalid)
        else $error("AXI_XBAR: IFU (m0) asserted wvalid, but IFU is read-only!");

    // bready 是输出信号，由 XBAR 驱动，因此检查其是否为 0
    assert property (@(posedge clk) !m0_bready)
        else $error("AXI_XBAR: IFU (m0) asserted bready, but IFU is read-only!");

    // ===== 地址译码 =====
    // 这里假设了地址区间的合法性
    // 读请求：根据 m0_araddr / m1_araddr 选择目标
    // 写请求：根据 m1_awaddr 选择目标
    
    // ===== 读通道（组合逻辑） =====
    // 1. 译码：根据地址选择目标 Slave
    // 2. 仲裁：选择哪个 Master 获得访问权
    // 3. 转发：将 Master 的信号连接到选中的 Slave
    
/*
    仲裁 + 选地址, 地址不对返回 decerr
    
    仲裁器本质上也是一个状态机, 而阻塞和转发的功能本质上是通过操作握手信号来实现的.

    地址判断: 0x10000000-0x10000007 s0    0x80000000-0x87ffffff s1
*/
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

    // 读地址译码器
    logic s0_ar_sel, s1_ar_sel, ar_decerr;

    always_comb begin
        s0_ar_sel = 1'b0;
        s1_ar_sel = 1'b0;
        ar_decerr    = 1'b0;
        
        if (m0_arvalid || m1_arvalid) begin  // 现阶段 m0 和 m1 不会同时发出请求
            if(m0_arvalid == 1'b1) begin
                if(m0_araddr >= 32'h10000000 && m0_araddr <= 32'h10000007) begin
                    s0_ar_sel = 1'b1;
                end
                else if(m0_araddr >= 32'h80000000 && m0_araddr <= 32'h87ffffff) begin
                    s1_ar_sel = 1'b1;
                end
                else begin
                    ar_decerr = 1'b1;
                end
            end
            else begin
                if(m1_araddr >= 32'h10000000 && m1_araddr <= 32'h10000007) begin
                    s0_ar_sel = 1'b1;
                end
                else if(m1_araddr >= 32'h80000000 && m1_araddr <= 32'h87ffffff) begin
                    s1_ar_sel = 1'b1;
                end
                else begin
                    ar_decerr = 1'b1;
                end
            end
        end
    end


    typedef enum logic [1:0] {
        R_IDLE,        // 空闲
        R_AR_HANDSHAKE, // AR握手
        R_DATA_RETURN  // 读数据返回
    } r_state_t;
    r_state_t r_state, r_next;

    // 内部信号
    logic [31:0] r_addr_latch;    // 锁存当前读请求的地址
    logic        r_is_m0;          // 当前请求来自哪个Master (1: m0, 0: m1)
    logic [1:0]  r_slave_sel;      // 目标Slave (0: UART, 1: SRAM, 2: DECERR)
    logic        r_ar_done;        // AR握手完成
    logic        r_data_done;      // 数据握手完成

    // ===== 读通道时序逻辑 =====
    always_ff @(posedge clk or posedge reset) begin
        if(reset) begin
            r_state <= R_IDLE;
            r_addr_latch <= '0;
            r_is_m0 <= 1'b0;
            r_slave_sel <= 2'b00;
            r_ar_done <= 1'b0;
            r_data_done <= 1'b0;
        end else begin
            r_state <= r_next;
            
            // 锁存地址和控制信息
            if(r_state == R_IDLE) begin
                if(m0_arvalid) begin
                    r_addr_latch <= m0_araddr;
                    r_is_m0 <= 1'b1;
                    // 译码
                    if(m0_araddr >= 32'h10000000 && m0_araddr <= 32'h10000007)
                        r_slave_sel <= 2'b01;
                    else if(m0_araddr >= 32'h80000000 && m0_araddr <= 32'h87ffffff)
                        r_slave_sel <= 2'b10;
                    else
                        r_slave_sel <= 2'b11; // DECERR
                end else if(m1_arvalid) begin
                    r_addr_latch <= m1_araddr;
                    r_is_m0 <= 1'b0;
                    if(m1_araddr >= 32'h10000000 && m1_araddr <= 32'h10000007)
                        r_slave_sel <= 2'b01;
                    else if(m1_araddr >= 32'h80000000 && m1_araddr <= 32'h87ffffff)
                        r_slave_sel <= 2'b10;
                    else
                        r_slave_sel <= 2'b11;
                end
            end
            
            // AR握手完成标志
            if(r_state == R_AR_HANDSHAKE) begin
                if((r_is_m0 && m0_arready) || (!r_is_m0 && m1_arready)) begin
                    r_ar_done <= 1'b1;
                end
            end else begin
                r_ar_done <= 1'b0;
            end
            
            // 数据握手完成标志
            if(r_state == R_DATA_RETURN) begin
                if((r_is_m0 && m0_rready && rvalid) || (!r_is_m0 && m1_rready && rvalid)) begin
                    r_data_done <= 1'b1;
                end
            end else begin
                r_data_done <= 1'b0;
            end
        end
    end

    // ===== 读通道组合逻辑 =====
    always_comb begin
        // 默认值
        r_next = r_state;
        
        // Master输出默认值
        m0_arready = 1'b0;
        m0_rdata   = '0;
        m0_rresp   = 2'b00;
        m0_rvalid  = 1'b0;
        m1_arready = 1'b0;
        m1_rdata   = '0;
        m1_rresp   = 2'b00;
        m1_rvalid  = 1'b0;
        
        // Slave输出默认值
        s0_araddr  = '0;
        s0_arvalid = 1'b0;
        s0_rready  = 1'b0;
        s1_araddr  = '0;
        s1_arvalid = 1'b0;
        s1_rready  = 1'b0;
        
        // rvalid / rready 内部信号
        rvalid = 1'b0;
        rready = 1'b0;
        rdata  = '0;
        rresp  = 2'b00;
        
        case(r_state)
            R_IDLE: begin
                // 检测请求
                if(m0_arvalid || m1_arvalid) begin
                    r_next = R_AR_HANDSHAKE;
                end
            end
            
            R_AR_HANDSHAKE: begin
                // 转发AR到目标Slave
                if(r_is_m0) begin
                    m0_arready = 1'b1;
                    // 根据译码结果决定转发到哪个Slave
                    case(r_slave_sel)
                        2'b01: begin  // UART
                            s0_araddr = r_addr_latch;
                            s0_arvalid = 1'b1;
                            m0_arready = s0_arready;
                        end
                        2'b10: begin  // SRAM
                            s1_araddr = r_addr_latch;
                            s1_arvalid = 1'b1;
                            m0_arready = s1_arready;
                        end
                        2'b11: begin  // DECERR
                            // 直接返回DECERR，无需等待Slave
                            m0_arready = 1'b1;
                            // 需要进入数据返回状态，返回DECERR
                            r_next = R_DATA_RETURN;
                        end
                        default: m0_arready = 1'b1;
                    endcase
                end else begin
                    m1_arready = 1'b1;
                    case(r_slave_sel)
                        2'b01: begin
                            s0_araddr = r_addr_latch;
                            s0_arvalid = 1'b1;
                            m1_arready = s0_arready;
                        end
                        2'b10: begin
                            s1_araddr = r_addr_latch;
                            s1_arvalid = 1'b1;
                            m1_arready = s1_arready;
                        end
                        2'b11: begin
                            m1_arready = 1'b1;
                            r_next = R_DATA_RETURN;
                        end
                        default: m1_arready = 1'b1;
                    endcase
                end
                
                // AR握手完成，进入数据返回状态
                if(r_ar_done) begin
                    r_next = R_DATA_RETURN;
                end
            end
            
            R_DATA_RETURN: begin
                // 从Slave读取数据或返回DECERR
                if(r_slave_sel == 2'b11) begin
                    // DECERR：直接返回错误
                    rvalid = 1'b1;
                    rresp = 2'b11; // DECERR
                    rdata = '0;
                    // 等待rready
                    if((r_is_m0 && m0_rready) || (!r_is_m0 && m1_rready)) begin
                        r_next = R_IDLE;
                    end
                end else begin
                    // 正常返回数据
                    case(r_slave_sel)
                        2'b01: begin
                            rvalid = s0_rvalid;
                            rdata = s0_rdata;
                            rresp = s0_rresp;
                            s0_rready = rready;
                        end
                        2'b10: begin
                            rvalid = s1_rvalid;
                            rdata = s1_rdata;
                            rresp = s1_rresp;
                            s1_rready = rready;
                        end
                    endcase
                    
                    // 反向：Master的rready
                    if(r_is_m0) begin
                        rready = m0_rready;
                    end else begin
                        rready = m1_rready;
                    end
                    
                    // 数据握手完成，回到IDLE
                    if(r_data_done) begin
                        r_next = R_IDLE;
                    end
                end
            end
        endcase
    end


    // 连接到Master
    assign m0_rdata  = (r_is_m0) ? rdata : '0;
    assign m0_rresp  = (r_is_m0) ? rresp : 2'b00;
    assign m0_rvalid = (r_is_m0) ? rvalid : 1'b0;
    assign m1_rdata  = (!r_is_m0) ? rdata : '0;
    assign m1_rresp  = (!r_is_m0) ? rresp : 2'b00;
    assign m1_rvalid = (!r_is_m0) ? rvalid : 1'b0;

    // 连接到Slave
    assign s0_araddr = (r_slave_sel == 2'b01) ? r_addr_latch : '0;
    assign s0_arvalid = (r_slave_sel == 2'b01 && r_state == R_AR_HANDSHAKE) ? 1'b1 : 1'b0;
    assign s0_rready = (r_slave_sel == 2'b01 && r_state == R_DATA_RETURN) ? rready : 1'b0;

    assign s1_araddr = (r_slave_sel == 2'b10) ? r_addr_latch : '0;
    assign s1_arvalid = (r_slave_sel == 2'b10 && r_state == R_AR_HANDSHAKE) ? 1'b1 : 1'b0;
    assign s1_rready = (r_slave_sel == 2'b10 && r_state == R_DATA_RETURN) ? rready : 1'b0;







    // ===== 写通道（组合逻辑） =====
    // 写地址译码器
    logic s0_aw_sel, s1_aw_sel, aw_err;
    always_comb begin
        s0_aw_sel = 1'b0;
        s1_aw_sel = 1'b0;
        aw_err    = 1'b0;
        
        // 根据 m1_awaddr 译码（LSU 是唯一写 Master）
        if (m1_awvalid) begin
            // 地址译码
        end
    end

endmodule