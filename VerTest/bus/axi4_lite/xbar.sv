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
    input         m0_arvalid,
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
    input         m1_arvalid,
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
    
    地址判断: 0x10000000-0x100000007 s0    0x80000000-0x87ffffff s1
*/

    // 读地址译码器
    logic s0_ar_sel, s1_ar_sel, ar_err;

    always_comb begin
        s0_ar_sel = 1'b0;
        s1_ar_sel = 1'b0;
        ar_err    = 1'b0;
        
        // 根据 m0_araddr 或 m1_araddr 译码
        // 注意：同一时刻只能有一个 Master 发起读请求
        if (m0_arvalid || m1_arvalid) begin
            // 选择有请求的 Master 的地址进行译码
            // 这里简化处理，实际需要仲裁
        end
    end

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