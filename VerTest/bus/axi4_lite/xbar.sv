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

    一次性只能完成一个握手, 读和写还是放在一起
*/

// ===== 时序逻辑：锁存读请求信息 =====
always_ff @(posedge clk or posedge reset) begin
    if(reset) begin
        r_is_m0     <= 1'b0;
        r_slave_sel <= 2'b00;
    end 
    else begin
        if(m0_arvalid) begin
            r_is_m0 <= 1'b1;

            if(m0_araddr >= 32'h10000000 && m0_araddr <= 32'h10000007)
                r_slave_sel <= 2'b01;
            else if(m0_araddr >= 32'h80000000 && m0_araddr <= 32'h87ffffff)
                r_slave_sel <= 2'b10;
            else
                r_slave_sel <= 2'b11;
        end 
        else if(m1_arvalid) begin
            r_is_m0 <= 1'b0;

            if(m1_araddr >= 32'h10000000 && m1_araddr <= 32'h10000007)
                r_slave_sel <= 2'b01;
            else if(m1_araddr >= 32'h80000000 && m1_araddr <= 32'h87ffffff)
                r_slave_sel <= 2'b10;
            else
                r_slave_sel <= 2'b11;
        end
    end
end

// ===== 地址通道转发（组合逻辑） =====
// 将 araddr 转发到对应的 Slave
assign s0_araddr  = (r_slave_sel == 2'b01) ? 
                    (r_is_m0 ? m0_araddr : m1_araddr) : '0;
assign s0_arvalid = (r_slave_sel == 2'b01) ? 1'b1 : 1'b0;

assign s1_araddr  = (r_slave_sel == 2'b10) ? 
                    (r_is_m0 ? m0_araddr : m1_araddr) : '0;
assign s1_arvalid = (r_slave_sel == 2'b10) ? 1'b1 : 1'b0;

// arready 反压
assign m0_arready = (r_is_m0) ? 
                    (r_slave_sel == 2'b01) ? s0_arready :
                    (r_slave_sel == 2'b10) ? s1_arready :
                    1'b1 : 1'b0;

assign m1_arready = (!r_is_m0) ? 
                    (r_slave_sel == 2'b01) ? s0_arready :
                    (r_slave_sel == 2'b10) ? s1_arready :
                    1'b1 : 1'b0;

// ===== 读数据返回（组合逻辑三态赋值） =====
// 数据来源选择
wire [31:0] rdata_sel  = (r_slave_sel == 2'b01) ? s0_rdata :
                         (r_slave_sel == 2'b10) ? s1_rdata :
                         '0;

wire [1:0]  rresp_sel  = (r_slave_sel == 2'b01) ? s0_rresp :
                         (r_slave_sel == 2'b10) ? s1_rresp :
                         (r_slave_sel == 2'b11) ? 2'b11 : 2'b00;

wire        rvalid_sel = (r_slave_sel == 2'b01) ? s0_rvalid :
                         (r_slave_sel == 2'b10) ? s1_rvalid :
                         (r_slave_sel == 2'b11) ? 1'b1  : 1'b0;

// 分发到对应 Master
assign m0_rdata  = (r_is_m0) ? rdata_sel  : '0;
assign m0_rresp  = (r_is_m0) ? rresp_sel  : 2'b00;
assign m0_rvalid = (r_is_m0) ? rvalid_sel : 1'b0;

assign m1_rdata  = (!r_is_m0) ? rdata_sel  : '0;
assign m1_rresp  = (!r_is_m0) ? rresp_sel  : 2'b00;
assign m1_rvalid = (!r_is_m0) ? rvalid_sel : 1'b0;

// rready 转发到对应的 Slave
assign s0_rready = (r_slave_sel == 2'b01) ? 
                   (r_is_m0 ? m0_rready : m1_rready) : 1'b0;

assign s1_rready = (r_slave_sel == 2'b10) ? 
                   (r_is_m0 ? m0_rready : m1_rready) : 1'b0;





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