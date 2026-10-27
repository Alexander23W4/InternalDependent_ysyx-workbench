// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1931,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1932,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1933,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1934,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1935,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1936,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1937,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1938,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1939,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1940,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1941,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1942,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1943,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1944,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1945,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1946,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1947,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1948,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1949,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1950,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1931,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1932,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1933,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1934,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1935,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1936,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1937,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1938,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1939,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1940,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1941,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1942,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1943,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1944,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1945,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1946,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1947,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1948,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1949,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1950,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1190,"spi_sck", false,-1);
    tracep->declBus(c+1191,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1192,"spi_mosi", false,-1);
    tracep->declBit(c+1951,"spi_miso", false,-1);
    tracep->declBit(c+1949,"uart_rx", false,-1);
    tracep->declBit(c+1950,"uart_tx", false,-1);
    tracep->declBit(c+1750,"psram_sck", false,-1);
    tracep->declBit(c+1751,"psram_ce_n", false,-1);
    tracep->declBus(c+1895,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1952,"sdram_clk", false,-1);
    tracep->declBit(c+1809,"sdram_cke", false,-1);
    tracep->declBit(c+1193,"sdram_cs", false,-1);
    tracep->declBit(c+1194,"sdram_ras", false,-1);
    tracep->declBit(c+1195,"sdram_cas", false,-1);
    tracep->declBit(c+1196,"sdram_we", false,-1);
    tracep->declBus(c+1810,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1811,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1812,"sdram_dqm", false,-1, 3,0);
    tracep->declBit(c+1898,"sdram_sel", false,-1);
    tracep->declBus(c+1822,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1931,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1932,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1933,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1934,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1935,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1936,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1937,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1938,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1939,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1940,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1941,"ps2_clk", false,-1);
    tracep->declBit(c+1942,"ps2_data", false,-1);
    tracep->declBus(c+1943,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1944,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1945,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1946,"vga_hsync", false,-1);
    tracep->declBit(c+1947,"vga_vsync", false,-1);
    tracep->declBit(c+1948,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+178,"in_psel", false,-1);
    tracep->declBit(c+179,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBus(c+1682,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1752,"in_pready", false,-1);
    tracep->declBus(c+21,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1753,"in_pslverr", false,-1);
    tracep->declBus(c+1682,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1754,"out_psel", false,-1);
    tracep->declBit(c+1755,"out_penable", false,-1);
    tracep->declBus(c+2007,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1683,"out_pwrite", false,-1);
    tracep->declBus(c+1684,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1756,"out_pready", false,-1);
    tracep->declBus(c+22,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1757,"out_pslverr", false,-1);
    tracep->declBus(c+2008,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2009,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2010,"R", false,-1, 31,0);
    tracep->declBus(c+2011,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+2012,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+2013,"IDLE", false,-1, 1,0);
    tracep->declBus(c+2014,"COUNT", false,-1, 1,0);
    tracep->declBus(c+2015,"DELAY", false,-1, 1,0);
    tracep->declBus(c+1197,"state", false,-1, 1,0);
    tracep->declBus(c+1758,"next", false,-1, 1,0);
    tracep->declBus(c+1198,"delay_counter", false,-1, 31,0);
    tracep->declBus(c+1199,"prdata_save", false,-1, 31,0);
    tracep->declBit(c+1200,"pslverr_save", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1754,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1755,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1682,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+2007,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1756,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1757,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+22,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1759,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1686,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+2007,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1761,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+2016,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1953,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1762,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1763,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1687,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+2007,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1764,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+2016,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1765,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1766,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1767,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1687,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+2007,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1768,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1769,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+23,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1770,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1954,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1682,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+2007,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1955,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+2016,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+180,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1771,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1772,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1687,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+2007,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1773,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+2016,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1774,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1775,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1776,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1686,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+2007,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1956,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1688,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1957,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1689,"sel_0", false,-1);
    tracep->declBit(c+1690,"sel_1", false,-1);
    tracep->declBit(c+1691,"sel_2", false,-1);
    tracep->declBit(c+1692,"sel_3", false,-1);
    tracep->declBit(c+1693,"sel_4", false,-1);
    tracep->declBit(c+1694,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+181,"auto_in_awready", false,-1);
    tracep->declBit(c+182,"auto_in_awvalid", false,-1);
    tracep->declBus(c+183,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+186,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+181,"auto_in_wready", false,-1);
    tracep->declBit(c+187,"auto_in_wvalid", false,-1);
    tracep->declBus(c+188,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+189,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+190,"auto_in_bready", false,-1);
    tracep->declBit(c+1777,"auto_in_bvalid", false,-1);
    tracep->declBus(c+191,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1778,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_in_arready", false,-1);
    tracep->declBit(c+193,"auto_in_arvalid", false,-1);
    tracep->declBus(c+194,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+196,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+198,"auto_in_rready", false,-1);
    tracep->declBit(c+1779,"auto_in_rvalid", false,-1);
    tracep->declBus(c+199,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1958,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1778,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+178,"auto_out_psel", false,-1);
    tracep->declBit(c+179,"auto_out_penable", false,-1);
    tracep->declBit(c+1683,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1682,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1684,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1752,"auto_out_pready", false,-1);
    tracep->declBit(c+1753,"auto_out_pslverr", false,-1);
    tracep->declBus(c+21,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+179,"nodeOut_penable", false,-1);
    tracep->declBus(c+200,"state", false,-1, 1,0);
    tracep->declBit(c+192,"accept_read", false,-1);
    tracep->declBit(c+181,"accept_write", false,-1);
    tracep->declBit(c+201,"is_write_r", false,-1);
    tracep->declBit(c+1683,"is_write", false,-1);
    tracep->declBus(c+199,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+191,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+202,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+203,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+204,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+205,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1780,"resp", false,-1, 1,0);
    tracep->declBus(c+206,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1778,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1779,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+207,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1777,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+208,"auto_in_awready", false,-1);
    tracep->declBit(c+1825,"auto_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1826,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+211,"auto_in_wready", false,-1);
    tracep->declBit(c+1827,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1830,"auto_in_wlast", false,-1);
    tracep->declBit(c+106,"auto_in_bready", false,-1);
    tracep->declBit(c+212,"auto_in_bvalid", false,-1);
    tracep->declBus(c+213,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+214,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+215,"auto_in_arready", false,-1);
    tracep->declBit(c+1831,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1832,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1834,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+32,"auto_in_rready", false,-1);
    tracep->declBit(c+217,"auto_in_rvalid", false,-1);
    tracep->declBus(c+218,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+220,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+221,"auto_in_rlast", false,-1);
    tracep->declBit(c+181,"auto_out_awready", false,-1);
    tracep->declBit(c+182,"auto_out_awvalid", false,-1);
    tracep->declBus(c+183,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+184,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+185,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+186,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+181,"auto_out_wready", false,-1);
    tracep->declBit(c+187,"auto_out_wvalid", false,-1);
    tracep->declBus(c+188,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+189,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+190,"auto_out_bready", false,-1);
    tracep->declBit(c+1777,"auto_out_bvalid", false,-1);
    tracep->declBus(c+191,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1778,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_out_arready", false,-1);
    tracep->declBit(c+193,"auto_out_arvalid", false,-1);
    tracep->declBus(c+194,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+196,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+198,"auto_out_rready", false,-1);
    tracep->declBit(c+1779,"auto_out_rvalid", false,-1);
    tracep->declBus(c+199,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1958,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1778,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+190,"io_enq_ready", false,-1);
    tracep->declBit(c+1777,"io_enq_valid", false,-1);
    tracep->declBus(c+191,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1778,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+106,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBus(c+213,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+214,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+222,"wrap", false,-1);
    tracep->declBit(c+223,"wrap_1", false,-1);
    tracep->declBit(c+224,"maybe_full", false,-1);
    tracep->declBit(c+225,"ptr_match", false,-1);
    tracep->declBit(c+226,"empty", false,-1);
    tracep->declBit(c+227,"full", false,-1);
    tracep->declBit(c+1781,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+223,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declBus(c+228,"R0_data", false,-1, 5,0);
    tracep->declBit(c+222,"W0_addr", false,-1);
    tracep->declBit(c+1781,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declBus(c+1959,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+229+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+231,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+1779,"io_enq_valid", false,-1);
    tracep->declBus(c+199,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1958,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1778,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+32,"io_deq_ready", false,-1);
    tracep->declBit(c+217,"io_deq_valid", false,-1);
    tracep->declBus(c+218,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+219,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+220,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+221,"io_deq_bits_last", false,-1);
    tracep->declBit(c+232,"wrap", false,-1);
    tracep->declBit(c+233,"wrap_1", false,-1);
    tracep->declBit(c+234,"maybe_full", false,-1);
    tracep->declBit(c+235,"ptr_match", false,-1);
    tracep->declBit(c+236,"empty", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+1782,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+233,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declQuad(c+238,"R0_data", false,-1, 38,0);
    tracep->declBit(c+232,"W0_addr", false,-1);
    tracep->declBit(c+1782,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declQuad(c+1960,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+240+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1831,"io_enq_valid", false,-1);
    tracep->declBus(c+216,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1832,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1833,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1834,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+192,"io_deq_ready", false,-1);
    tracep->declBit(c+193,"io_deq_valid", false,-1);
    tracep->declBus(c+194,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+195,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+196,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+197,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+245,"wrap", false,-1);
    tracep->declBit(c+246,"wrap_1", false,-1);
    tracep->declBit(c+247,"maybe_full", false,-1);
    tracep->declBit(c+248,"ptr_match", false,-1);
    tracep->declBit(c+249,"empty", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->declBit(c+1835,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+246,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declQuad(c+251,"R0_data", false,-1, 46,0);
    tracep->declBit(c+245,"W0_addr", false,-1);
    tracep->declBit(c+1835,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declQuad(c+1962,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+253+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+257,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1825,"io_enq_valid", false,-1);
    tracep->declBus(c+209,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1826,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1664,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+210,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+181,"io_deq_ready", false,-1);
    tracep->declBit(c+182,"io_deq_valid", false,-1);
    tracep->declBus(c+183,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+184,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+185,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+186,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+258,"wrap", false,-1);
    tracep->declBit(c+259,"wrap_1", false,-1);
    tracep->declBit(c+260,"maybe_full", false,-1);
    tracep->declBit(c+261,"ptr_match", false,-1);
    tracep->declBit(c+262,"empty", false,-1);
    tracep->declBit(c+263,"full", false,-1);
    tracep->declBit(c+1836,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+259,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declQuad(c+264,"R0_data", false,-1, 46,0);
    tracep->declBit(c+258,"W0_addr", false,-1);
    tracep->declBit(c+1836,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declQuad(c+1964,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+266+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1827,"io_enq_valid", false,-1);
    tracep->declBus(c+1828,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1829,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1830,"io_enq_bits_last", false,-1);
    tracep->declBit(c+181,"io_deq_ready", false,-1);
    tracep->declBit(c+187,"io_deq_valid", false,-1);
    tracep->declBus(c+188,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+189,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+271,"wrap", false,-1);
    tracep->declBit(c+272,"wrap_1", false,-1);
    tracep->declBit(c+273,"maybe_full", false,-1);
    tracep->declBit(c+274,"ptr_match", false,-1);
    tracep->declBit(c+275,"empty", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+1837,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+272,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declQuad(c+277,"R0_data", false,-1, 35,0);
    tracep->declBit(c+271,"W0_addr", false,-1);
    tracep->declBit(c+1837,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declQuad(c+1838,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+279+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+283,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1899,"in_arready", false,-1);
    tracep->declBit(c+1840,"in_arvalid", false,-1);
    tracep->declBus(c+2018,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+73,"in_rready", false,-1);
    tracep->declBit(c+83,"in_rvalid", false,-1);
    tracep->declBus(c+84,"in_rid", false,-1, 3,0);
    tracep->declBus(c+85,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+86,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+87,"in_rlast", false,-1);
    tracep->declBit(c+1900,"in_awready", false,-1);
    tracep->declBit(c+1841,"in_awvalid", false,-1);
    tracep->declBus(c+2018,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1901,"in_wready", false,-1);
    tracep->declBit(c+1842,"in_wvalid", false,-1);
    tracep->declBus(c+1725,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"in_wlast", false,-1);
    tracep->declBit(c+146,"in_bready", false,-1);
    tracep->declBit(c+153,"in_bvalid", false,-1);
    tracep->declBus(c+154,"in_bid", false,-1, 3,0);
    tracep->declBus(c+155,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1899,"out_arready", false,-1);
    tracep->declBit(c+1840,"out_arvalid", false,-1);
    tracep->declBus(c+2018,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+88,"out_rready", false,-1);
    tracep->declBit(c+1201,"out_rvalid", false,-1);
    tracep->declBus(c+1202,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1203,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+2013,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1204,"out_rlast", false,-1);
    tracep->declBit(c+1900,"out_awready", false,-1);
    tracep->declBit(c+1841,"out_awvalid", false,-1);
    tracep->declBus(c+2018,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1901,"out_wready", false,-1);
    tracep->declBit(c+1842,"out_wvalid", false,-1);
    tracep->declBus(c+1725,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"out_wlast", false,-1);
    tracep->declBit(c+156,"out_bready", false,-1);
    tracep->declBit(c+1205,"out_bvalid", false,-1);
    tracep->declBus(c+1202,"out_bid", false,-1, 3,0);
    tracep->declBus(c+2013,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+2008,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2009,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2010,"R", false,-1, 31,0);
    tracep->declBus(c+2011,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+2012,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+2020,"MAX_ALLOWED_BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+2021,"CNT_W", false,-1, 31,0);
    tracep->declBus(c+2022,"IDX_W", false,-1, 31,0);
    tracep->declBus(c+2022,"ALEN_W", false,-1, 31,0);
    tracep->declBus(c+2023,"STEP", false,-1, 31,0);
    tracep->declBus(c+2013,"IDLE", false,-1, 1,0);
    tracep->declBus(c+2014,"READ", false,-1, 1,0);
    tracep->declBus(c+2015,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1206,"state", false,-1, 1,0);
    tracep->declBus(c+1966,"next", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1207+i*2,"read_counters", true,(i+0), 32,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1271+i*1,"rdata_save", true,(i+0), 31,0);
    }
    tracep->declBus(c+1303,"get_beat", false,-1, 5,0);
    tracep->declBus(c+1304,"return_beat", false,-1, 5,0);
    tracep->declBus(c+1305,"arlen_save", false,-1, 4,0);
    tracep->declBus(c+1306,"rid_save", false,-1, 3,0);
    tracep->declBus(c+1307,"rresp_save", false,-1, 1,0);
    tracep->declQuad(c+1308,"write_counter", false,-1, 32,0);
    tracep->declBit(c+1310,"b_received", false,-1);
    tracep->declBus(c+1311,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1312,"bresp_save", false,-1, 1,0);
    tracep->declBus(c+1313,"i", false,-1, 31,0);
    tracep->declBit(c+89,"r_beat_arriving", false,-1);
    tracep->declBit(c+157,"b_arriving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+284,"auto_in_awready", false,-1);
    tracep->declBit(c+1843,"auto_in_awvalid", false,-1);
    tracep->declBus(c+2018,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+285,"auto_in_wready", false,-1);
    tracep->declBit(c+1844,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1725,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"auto_in_wlast", false,-1);
    tracep->declBit(c+1967,"auto_in_bready", false,-1);
    tracep->declBit(c+286,"auto_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+289,"auto_in_arready", false,-1);
    tracep->declBit(c+1845,"auto_in_arvalid", false,-1);
    tracep->declBus(c+2018,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_in_rready", false,-1);
    tracep->declBit(c+290,"auto_in_rvalid", false,-1);
    tracep->declBus(c+291,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+294,"auto_in_rlast", false,-1);
    tracep->declBit(c+163,"auto_out_awready", false,-1);
    tracep->declBit(c+1846,"auto_out_awvalid", false,-1);
    tracep->declBus(c+209,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1826,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+295,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+164,"auto_out_wready", false,-1);
    tracep->declBit(c+1847,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1830,"auto_out_wlast", false,-1);
    tracep->declBit(c+147,"auto_out_bready", false,-1);
    tracep->declBit(c+296,"auto_out_bvalid", false,-1);
    tracep->declBus(c+287,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+298,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_out_arready", false,-1);
    tracep->declBit(c+1848,"auto_out_arvalid", false,-1);
    tracep->declBus(c+216,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1832,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1834,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1849,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+74,"auto_out_rready", false,-1);
    tracep->declBit(c+290,"auto_out_rvalid", false,-1);
    tracep->declBus(c+291,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+299,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+300,"auto_out_rlast", false,-1);
    tracep->declBit(c+1847,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+301,"w_idle", false,-1);
    tracep->declBit(c+165,"in_awready", false,-1);
    tracep->declBit(c+302,"busy", false,-1);
    tracep->declBus(c+303,"r_addr", false,-1, 31,0);
    tracep->declBus(c+304,"r_len", false,-1, 7,0);
    tracep->declBus(c+1850,"len", false,-1, 7,0);
    tracep->declBus(c+1851,"addr", false,-1, 31,0);
    tracep->declBit(c+305,"busy_1", false,-1);
    tracep->declBus(c+306,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+307,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+308,"len_1", false,-1, 7,0);
    tracep->declBus(c+1852,"addr_1", false,-1, 31,0);
    tracep->declBit(c+309,"wbeats_latched", false,-1);
    tracep->declBit(c+1846,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1853,"wbeats_valid", false,-1);
    tracep->declBus(c+310,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1854,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1830,"w_last", false,-1);
    tracep->declBit(c+147,"nodeOut_bready", false,-1);
    tracep->declBus(c+311,"error_0", false,-1, 1,0);
    tracep->declBus(c+312,"error_1", false,-1, 1,0);
    tracep->declBus(c+313,"error_2", false,-1, 1,0);
    tracep->declBus(c+314,"error_3", false,-1, 1,0);
    tracep->declBus(c+315,"error_4", false,-1, 1,0);
    tracep->declBus(c+316,"error_5", false,-1, 1,0);
    tracep->declBus(c+317,"error_6", false,-1, 1,0);
    tracep->declBus(c+318,"error_7", false,-1, 1,0);
    tracep->declBus(c+319,"error_8", false,-1, 1,0);
    tracep->declBus(c+320,"error_9", false,-1, 1,0);
    tracep->declBus(c+321,"error_10", false,-1, 1,0);
    tracep->declBus(c+322,"error_11", false,-1, 1,0);
    tracep->declBus(c+323,"error_12", false,-1, 1,0);
    tracep->declBus(c+324,"error_13", false,-1, 1,0);
    tracep->declBus(c+325,"error_14", false,-1, 1,0);
    tracep->declBus(c+326,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1845,"io_enq_valid", false,-1);
    tracep->declBus(c+2018,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1720,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1721,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1722,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1723,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+102,"io_deq_ready", false,-1);
    tracep->declBit(c+1848,"io_deq_valid", false,-1);
    tracep->declBus(c+216,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1855,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1856,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1833,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1834,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+327,"ram", false,-1, 48,0);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+1848,"io_deq_valid_0", false,-1);
    tracep->declBit(c+103,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+1843,"io_enq_valid", false,-1);
    tracep->declBus(c+2018,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1724,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+2019,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+739,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+2013,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+166,"io_deq_ready", false,-1);
    tracep->declBit(c+1857,"io_deq_valid", false,-1);
    tracep->declBus(c+209,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1858,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+330,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1664,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+210,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+331,"ram", false,-1, 48,0);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+1857,"io_deq_valid_0", false,-1);
    tracep->declBit(c+167,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1844,"io_enq_valid", false,-1);
    tracep->declBus(c+1725,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1726,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+2017,"io_enq_bits_last", false,-1);
    tracep->declBit(c+168,"io_deq_ready", false,-1);
    tracep->declBit(c+1859,"io_deq_valid", false,-1);
    tracep->declBus(c+1828,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1829,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+334,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+335,"ram", false,-1, 36,0);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+1859,"io_deq_valid_0", false,-1);
    tracep->declBit(c+169,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+170,"auto_in_awready", false,-1);
    tracep->declBit(c+1860,"auto_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1861,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1968,"auto_in_wready", false,-1);
    tracep->declBit(c+1862,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+148,"auto_in_bready", false,-1);
    tracep->declBit(c+338,"auto_in_bvalid", false,-1);
    tracep->declBus(c+339,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+340,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"auto_in_arready", false,-1);
    tracep->declBit(c+1863,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+76,"auto_in_rready", false,-1);
    tracep->declBit(c+341,"auto_in_rvalid", false,-1);
    tracep->declBus(c+342,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+343,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+344,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+75,"nodeIn_arready", false,-1);
    tracep->declBit(c+170,"nodeIn_awready", false,-1);
    tracep->declBit(c+1865,"w_sel0", false,-1);
    tracep->declBit(c+338,"w_full", false,-1);
    tracep->declBus(c+339,"w_id", false,-1, 3,0);
    tracep->declBit(c+345,"r_sel1", false,-1);
    tracep->declBit(c+346,"w_sel1", false,-1);
    tracep->declBit(c+341,"r_full", false,-1);
    tracep->declBus(c+342,"r_id", false,-1, 3,0);
    tracep->declBit(c+104,"ren", false,-1);
    tracep->declBit(c+347,"rdata_REG", false,-1);
    tracep->declBus(c+348,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+349,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+350,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+351,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1866,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+104,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declBus(c+352,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1867,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+171,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declBus(c+1828,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1829,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1902,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1727,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+2018,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1969,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1728,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1725,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+149,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+139,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+158,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1970,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1903,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1729,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+2018,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+77,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+90,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+91,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1900,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1841,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+2018,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1901,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1842,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1725,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+146,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+153,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1899,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1840,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+2018,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+73,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+83,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+84,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+85,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+86,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+87,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+284,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1843,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+2018,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+285,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1844,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1725,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1967,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+286,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+289,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1845,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+2018,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+291,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+294,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+139,"in_0_bvalid", false,-1);
    tracep->declBit(c+66,"in_0_rvalid", false,-1);
    tracep->declBit(c+1904,"in_0_wready", false,-1);
    tracep->declBit(c+1905,"in_0_awready", false,-1);
    tracep->declBit(c+1971,"in_0_arready", false,-1);
    tracep->declBit(c+1902,"anonIn_awready", false,-1);
    tracep->declBit(c+1903,"anonIn_arready", false,-1);
    tracep->declBit(c+1730,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1731,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1732,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1733,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+2024,"arSel", false,-1, 15,0);
    tracep->declBus(c+2024,"awSel", false,-1, 15,0);
    tracep->declBus(c+94,"rSel", false,-1, 15,0);
    tracep->declBus(c+159,"bSel", false,-1, 15,0);
    tracep->declBus(c+353,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+354,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+355,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+356,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+357,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+2025,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+358,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+2026,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+359,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+2027,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+2028,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+2029,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+362,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+2030,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+363,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+2031,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+364,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+2032,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+365,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+2033,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+2034,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+2035,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+368,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+2036,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+369,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+2037,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+370,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+2038,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+371,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+2039,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+2040,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+373,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+2041,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+374,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+2042,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+375,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+2043,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+376,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+2044,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+377,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+2045,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+378,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+2046,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+379,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+2047,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+380,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+2048,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+381,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+2049,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+382,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+2050,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+383,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+2051,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+384,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+2052,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+385,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+2053,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+386,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+2054,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1868,"in_0_arvalid", false,-1);
    tracep->declBit(c+387,"latched", false,-1);
    tracep->declBit(c+1869,"in_0_awvalid", false,-1);
    tracep->declBit(c+1870,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1871,"in_0_wvalid", false,-1);
    tracep->declBit(c+388,"idle_2", false,-1);
    tracep->declBit(c+67,"anyValid", false,-1);
    tracep->declBus(c+68,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+389,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+69,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+70,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+71,"prefixOR_1", false,-1);
    tracep->declBit(c+95,"winner_2_1", false,-1);
    tracep->declBit(c+390,"state_2_0", false,-1);
    tracep->declBit(c+391,"state_2_1", false,-1);
    tracep->declBit(c+72,"muxState_2_0", false,-1);
    tracep->declBit(c+96,"muxState_2_1", false,-1);
    tracep->declBit(c+392,"idle_3", false,-1);
    tracep->declBit(c+140,"anyValid_1", false,-1);
    tracep->declBus(c+141,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+393,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+142,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+143,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+144,"winner_3_0", false,-1);
    tracep->declBit(c+160,"winner_3_1", false,-1);
    tracep->declBit(c+394,"state_3_0", false,-1);
    tracep->declBit(c+395,"state_3_1", false,-1);
    tracep->declBit(c+145,"muxState_3_0", false,-1);
    tracep->declBit(c+161,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+1870,"io_enq_valid", false,-1);
    tracep->declBus(c+1734,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1906,"io_deq_ready", false,-1);
    tracep->declBit(c+1872,"io_deq_valid", false,-1);
    tracep->declBus(c+1873,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+397,"wrap", false,-1);
    tracep->declBit(c+398,"wrap_1", false,-1);
    tracep->declBit(c+399,"maybe_full", false,-1);
    tracep->declBit(c+400,"ptr_match", false,-1);
    tracep->declBit(c+401,"empty", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->declBit(c+1872,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1907,"do_deq", false,-1);
    tracep->declBit(c+1908,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+398,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declBus(c+403,"R0_data", false,-1, 1,0);
    tracep->declBit(c+397,"W0_addr", false,-1);
    tracep->declBit(c+1908,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declBus(c+1734,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+404+i*1,"Memory", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+172,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1874,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1826,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+164,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1847,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1830,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+147,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+296,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1875,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1832,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1834,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+291,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+170,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1860,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+209,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1861,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1968,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1862,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+148,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+338,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+339,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+340,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1863,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+76,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+341,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+342,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+343,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+344,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1876,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1877,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+406,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1878,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1879,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+33,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+407,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+408,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+409,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+208,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1825,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+209,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1826,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+211,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1827,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1830,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+106,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+212,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+213,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+214,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+215,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1831,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1832,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1834,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+32,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+217,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+218,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+219,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+220,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+221,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+296,"in_0_bvalid", false,-1);
    tracep->declBit(c+290,"in_0_rvalid", false,-1);
    tracep->declBit(c+173,"in_0_wready", false,-1);
    tracep->declBit(c+174,"in_0_awready", false,-1);
    tracep->declBit(c+105,"in_0_arready", false,-1);
    tracep->declBit(c+172,"anonIn_awready", false,-1);
    tracep->declBit(c+1880,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1881,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1882,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1883,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1884,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1885,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+410,"arSel", false,-1, 15,0);
    tracep->declBus(c+411,"awSel", false,-1, 15,0);
    tracep->declBus(c+412,"rSel", false,-1, 15,0);
    tracep->declBus(c+413,"bSel", false,-1, 15,0);
    tracep->declBit(c+414,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+415,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+416,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+417,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+418,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+419,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+420,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+421,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+422,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+423,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+424,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+425,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+426,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+427,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+428,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+429,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+430,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+431,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+432,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+433,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+434,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+435,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+436,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+437,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+438,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+439,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+440,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+441,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+442,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+443,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+444,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+445,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+446,"latched", false,-1);
    tracep->declBit(c+1886,"in_0_awvalid", false,-1);
    tracep->declBit(c+1887,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1888,"in_0_wvalid", false,-1);
    tracep->declBit(c+447,"idle_3", false,-1);
    tracep->declBit(c+448,"anyValid", false,-1);
    tracep->declBus(c+449,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+450,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+451,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+452,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+453,"prefixOR_1", false,-1);
    tracep->declBit(c+454,"winner_3_1", false,-1);
    tracep->declBit(c+455,"winner_3_2", false,-1);
    tracep->declBit(c+456,"state_3_0", false,-1);
    tracep->declBit(c+457,"state_3_1", false,-1);
    tracep->declBit(c+458,"state_3_2", false,-1);
    tracep->declBit(c+459,"muxState_3_0", false,-1);
    tracep->declBit(c+460,"muxState_3_1", false,-1);
    tracep->declBit(c+461,"muxState_3_2", false,-1);
    tracep->declBit(c+462,"idle_4", false,-1);
    tracep->declBit(c+463,"anyValid_1", false,-1);
    tracep->declBus(c+464,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+465,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+466,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+467,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+468,"winner_4_0", false,-1);
    tracep->declBit(c+469,"winner_4_2", false,-1);
    tracep->declBit(c+470,"state_4_0", false,-1);
    tracep->declBit(c+471,"state_4_2", false,-1);
    tracep->declBit(c+472,"muxState_4_0", false,-1);
    tracep->declBit(c+473,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+1887,"io_enq_valid", false,-1);
    tracep->declBus(c+1889,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+175,"io_deq_ready", false,-1);
    tracep->declBit(c+1890,"io_deq_valid", false,-1);
    tracep->declBus(c+1891,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+475,"wrap", false,-1);
    tracep->declBit(c+476,"wrap_1", false,-1);
    tracep->declBit(c+477,"maybe_full", false,-1);
    tracep->declBit(c+478,"ptr_match", false,-1);
    tracep->declBit(c+479,"empty", false,-1);
    tracep->declBit(c+480,"full", false,-1);
    tracep->declBit(c+1890,"io_deq_valid_0", false,-1);
    tracep->declBit(c+176,"do_deq", false,-1);
    tracep->declBit(c+177,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+476,"R0_addr", false,-1);
    tracep->declBit(c+2017,"R0_en", false,-1);
    tracep->declBit(c+1929,"R0_clk", false,-1);
    tracep->declBus(c+481,"R0_data", false,-1, 2,0);
    tracep->declBit(c+475,"W0_addr", false,-1);
    tracep->declBit(c+177,"W0_en", false,-1);
    tracep->declBit(c+1929,"W0_clk", false,-1);
    tracep->declBus(c+1889,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+482+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+163,"auto_in_awready", false,-1);
    tracep->declBit(c+1846,"auto_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1826,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+295,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+164,"auto_in_wready", false,-1);
    tracep->declBit(c+1847,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1830,"auto_in_wlast", false,-1);
    tracep->declBit(c+147,"auto_in_bready", false,-1);
    tracep->declBit(c+296,"auto_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+298,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+1848,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1832,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1834,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1849,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+74,"auto_in_rready", false,-1);
    tracep->declBit(c+290,"auto_in_rvalid", false,-1);
    tracep->declBus(c+291,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+299,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+300,"auto_in_rlast", false,-1);
    tracep->declBit(c+172,"auto_out_awready", false,-1);
    tracep->declBit(c+1874,"auto_out_awvalid", false,-1);
    tracep->declBus(c+209,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1826,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1664,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+164,"auto_out_wready", false,-1);
    tracep->declBit(c+1847,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1828,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1829,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1830,"auto_out_wlast", false,-1);
    tracep->declBit(c+147,"auto_out_bready", false,-1);
    tracep->declBit(c+296,"auto_out_bvalid", false,-1);
    tracep->declBus(c+287,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_out_arready", false,-1);
    tracep->declBit(c+1875,"auto_out_arvalid", false,-1);
    tracep->declBus(c+216,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1832,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1834,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_out_rready", false,-1);
    tracep->declBit(c+290,"auto_out_rvalid", false,-1);
    tracep->declBus(c+291,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+34,"io_deq_ready", false,-1);
    tracep->declBit(c+485,"io_deq_valid", false,-1);
    tracep->declBit(c+486,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+485,"full", false,-1);
    tracep->declBit(c+486,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+487,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+51,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+489,"io_deq_valid", false,-1);
    tracep->declBit(c+490,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+489,"full", false,-1);
    tracep->declBit(c+490,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+491,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+36,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+53,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+37,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+54,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+38,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+55,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+39,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+56,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+40,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+57,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+41,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+123,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+107,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+124,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+108,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+125,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+109,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+126,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+110,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+42,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+127,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+111,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+128,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+112,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+129,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+113,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+130,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+114,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+131,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+115,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+132,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+116,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+133,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+117,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+134,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+118,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+135,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+119,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+136,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+120,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+59,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+43,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+137,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+121,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+138,"io_enq_valid", false,-1);
    tracep->declBit(c+295,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+122,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+44,"io_deq_ready", false,-1);
    tracep->declBit(c+589,"io_deq_valid", false,-1);
    tracep->declBit(c+590,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+589,"full", false,-1);
    tracep->declBit(c+590,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+591,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+45,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+46,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+47,"io_deq_ready", false,-1);
    tracep->declBit(c+601,"io_deq_valid", false,-1);
    tracep->declBit(c+602,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+601,"full", false,-1);
    tracep->declBit(c+602,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+603,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+48,"io_deq_ready", false,-1);
    tracep->declBit(c+605,"io_deq_valid", false,-1);
    tracep->declBit(c+606,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+606,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+607,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+608,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+1849,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+49,"io_deq_ready", false,-1);
    tracep->declBit(c+609,"io_deq_valid", false,-1);
    tracep->declBit(c+610,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+609,"full", false,-1);
    tracep->declBit(c+610,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+611,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBit(c+1902,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1727,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+2018,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1969,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1728,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1725,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+149,"auto_master_out_bready", false,-1);
    tracep->declBit(c+139,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+158,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1970,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1903,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1729,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+2018,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+77,"auto_master_out_rready", false,-1);
    tracep->declBit(c+66,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+90,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+91,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBit(c+2016,"io_interrupt", false,-1);
    tracep->declBit(c+1727,"io_master_awvalid", false,-1);
    tracep->declBit(c+1902,"io_master_awready", false,-1);
    tracep->declBus(c+2018,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1728,"io_master_wvalid", false,-1);
    tracep->declBit(c+1969,"io_master_wready", false,-1);
    tracep->declBus(c+1725,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"io_master_wlast", false,-1);
    tracep->declBit(c+139,"io_master_bvalid", false,-1);
    tracep->declBit(c+149,"io_master_bready", false,-1);
    tracep->declBus(c+158,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1970,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1729,"io_master_arvalid", false,-1);
    tracep->declBit(c+1903,"io_master_arready", false,-1);
    tracep->declBus(c+2018,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+66,"io_master_rvalid", false,-1);
    tracep->declBit(c+77,"io_master_rready", false,-1);
    tracep->declBus(c+90,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+91,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"io_master_rlast", false,-1);
    tracep->declBit(c+2016,"io_slave_awvalid", false,-1);
    tracep->declBit(c+2016,"io_slave_awready", false,-1);
    tracep->declBus(c+2018,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+2055,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+2056,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+2016,"io_slave_wvalid", false,-1);
    tracep->declBit(c+2016,"io_slave_wready", false,-1);
    tracep->declBus(c+2055,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+2018,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+2016,"io_slave_wlast", false,-1);
    tracep->declBit(c+2016,"io_slave_bvalid", false,-1);
    tracep->declBit(c+2016,"io_slave_bready", false,-1);
    tracep->declBus(c+2018,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+2013,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+2016,"io_slave_arvalid", false,-1);
    tracep->declBit(c+2016,"io_slave_arready", false,-1);
    tracep->declBus(c+2018,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+2055,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+2019,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+2056,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+2013,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+2016,"io_slave_rvalid", false,-1);
    tracep->declBit(c+2016,"io_slave_rready", false,-1);
    tracep->declBus(c+2018,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+2055,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+2013,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+2016,"io_slave_rlast", false,-1);
    tracep->declArray(c+612,"dbg_reg", false,-1, 1023,0);
    tracep->declQuad(c+740,"iag", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+742+i*1,"iag_amt", true,(i+0), 1,0);
    }
    tracep->declBit(c+150,"sw_avail", false,-1);
    tracep->declBit(c+1735,"sw_addr", false,-1);
    tracep->declQuad(c+774,"ifu_work_cyc", false,-1, 63,0);
    tracep->declQuad(c+776,"ifu_block_cyc", false,-1, 63,0);
    tracep->declBit(c+1665,"flush", false,-1);
    tracep->declBus(c+1666,"pc_flush", false,-1, 31,0);
    tracep->declBus(c+778,"pc", false,-1, 31,0);
    tracep->declBus(c+779,"instr", false,-1, 31,0);
    tracep->declBit(c+780,"valid_fd", false,-1);
    tracep->declBit(c+781,"ready_rd", false,-1);
    tracep->declBit(c+780,"valid_de", false,-1);
    tracep->declBit(c+781,"ready_de", false,-1);
    tracep->declBus(c+778,"pc_d", false,-1, 31,0);
    tracep->declBit(c+782,"addi", false,-1);
    tracep->declBit(c+783,"slti", false,-1);
    tracep->declBit(c+784,"sltiu", false,-1);
    tracep->declBit(c+785,"xori", false,-1);
    tracep->declBit(c+786,"ori", false,-1);
    tracep->declBit(c+787,"andi", false,-1);
    tracep->declBit(c+788,"slli", false,-1);
    tracep->declBit(c+789,"srli", false,-1);
    tracep->declBit(c+790,"srai", false,-1);
    tracep->declBit(c+791,"add", false,-1);
    tracep->declBit(c+792,"sub", false,-1);
    tracep->declBit(c+793,"sll", false,-1);
    tracep->declBit(c+794,"slt", false,-1);
    tracep->declBit(c+795,"sltu", false,-1);
    tracep->declBit(c+796,"xor_inst", false,-1);
    tracep->declBit(c+797,"srl", false,-1);
    tracep->declBit(c+798,"sra", false,-1);
    tracep->declBit(c+799,"or_inst", false,-1);
    tracep->declBit(c+800,"and_inst", false,-1);
    tracep->declBit(c+801,"lb", false,-1);
    tracep->declBit(c+802,"lh", false,-1);
    tracep->declBit(c+803,"lw", false,-1);
    tracep->declBit(c+804,"lbu", false,-1);
    tracep->declBit(c+805,"lhu", false,-1);
    tracep->declBit(c+806,"sb", false,-1);
    tracep->declBit(c+807,"sh", false,-1);
    tracep->declBit(c+808,"sw", false,-1);
    tracep->declBit(c+809,"beq", false,-1);
    tracep->declBit(c+810,"bne", false,-1);
    tracep->declBit(c+811,"blt", false,-1);
    tracep->declBit(c+812,"bge", false,-1);
    tracep->declBit(c+813,"bltu", false,-1);
    tracep->declBit(c+814,"bgeu", false,-1);
    tracep->declBit(c+815,"jal", false,-1);
    tracep->declBit(c+816,"jalr", false,-1);
    tracep->declBit(c+817,"lui", false,-1);
    tracep->declBit(c+818,"auipc", false,-1);
    tracep->declBit(c+819,"ebreak", false,-1);
    tracep->declBit(c+820,"ecall", false,-1);
    tracep->declBit(c+821,"csrrw", false,-1);
    tracep->declBit(c+822,"csrrs", false,-1);
    tracep->declBit(c+823,"csrrc", false,-1);
    tracep->declBit(c+824,"mret", false,-1);
    tracep->declBit(c+825,"fence_i", false,-1);
    tracep->declBus(c+826,"rd", false,-1, 4,0);
    tracep->declBus(c+827,"rs1", false,-1, 4,0);
    tracep->declBus(c+828,"rs2", false,-1, 4,0);
    tracep->declBus(c+829,"imm", false,-1, 31,0);
    tracep->declBit(c+2057,"instr_de", false,-1);
    tracep->declQuad(c+830,"exu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+832,"exu_blcokbl_cyc", false,-1, 63,0);
    tracep->declQuad(c+834,"exu_blcokbw_cyc", false,-1, 63,0);
    tracep->declQuad(c+836,"exu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+838,"valid_el", false,-1);
    tracep->declBit(c+839,"valid_ew", false,-1);
    tracep->declBit(c+840,"ready_el", false,-1);
    tracep->declBit(c+841,"ready_ew", false,-1);
    tracep->declBit(c+842,"io", false,-1);
    tracep->declBus(c+843,"io_type", false,-1, 1,0);
    tracep->declBit(c+844,"read_is_u", false,-1);
    tracep->declBus(c+845,"rd_out", false,-1, 4,0);
    tracep->declBus(c+846,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+847,"rs2_out", false,-1, 4,0);
    tracep->declBus(c+1667,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1668,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1669,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBit(c+848,"is_exu_rd", false,-1);
    tracep->declBit(c+849,"is_lsu_rd", false,-1);
    tracep->declBus(c+1670,"rd_exu", false,-1, 4,0);
    tracep->declBus(c+1667,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1667,"rdata2", false,-1, 31,0);
    tracep->declQuad(c+850,"lsu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+852,"lsu_blcokb_cyc", false,-1, 63,0);
    tracep->declQuad(c+854,"lsu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+856,"lsu_blockf", false,-1);
    tracep->declBit(c+857,"valid_lw", false,-1);
    tracep->declBit(c+841,"ready_lw", false,-1);
    tracep->declBus(c+1156,"wdata_lw", false,-1, 31,0);
    tracep->declBus(c+858,"rd_lsu", false,-1, 4,0);
    tracep->declQuad(c+859,"wbu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+861,"wbu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+863,"wbu_blockf", false,-1);
    tracep->declBus(c+864,"rd_release", false,-1, 4,0);
    tracep->declBit(c+865,"wen", false,-1);
    tracep->declBus(c+866,"rd_wbu", false,-1, 4,0);
    tracep->declBus(c+867,"wdata_wbu", false,-1, 31,0);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+2022,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2020,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBit(c+865,"wen", false,-1);
    tracep->declBus(c+846,"raddr1", false,-1, 4,0);
    tracep->declBus(c+846,"raddr2", false,-1, 4,0);
    tracep->declBus(c+866,"waddr", false,-1, 4,0);
    tracep->declBus(c+867,"wdata", false,-1, 31,0);
    tracep->declBus(c+1667,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1667,"rdata2", false,-1, 31,0);
    tracep->declArray(c+612,"dbg_regs", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+644+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+676,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBus(c+778,"pc", false,-1, 31,0);
    tracep->declBus(c+2058,"instr", false,-1, 31,0);
    tracep->declBus(c+1667,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1667,"rdata2", false,-1, 31,0);
    tracep->declBus(c+829,"imm", false,-1, 31,0);
    tracep->declBit(c+791,"add", false,-1);
    tracep->declBit(c+782,"addi", false,-1);
    tracep->declBit(c+792,"sub", false,-1);
    tracep->declBit(c+817,"lui", false,-1);
    tracep->declBit(c+818,"auipc", false,-1);
    tracep->declBit(c+800,"and_inst", false,-1);
    tracep->declBit(c+799,"or_inst", false,-1);
    tracep->declBit(c+796,"xor_inst", false,-1);
    tracep->declBit(c+787,"andi", false,-1);
    tracep->declBit(c+786,"ori", false,-1);
    tracep->declBit(c+785,"xori", false,-1);
    tracep->declBit(c+793,"sll", false,-1);
    tracep->declBit(c+797,"srl", false,-1);
    tracep->declBit(c+798,"sra", false,-1);
    tracep->declBit(c+788,"slli", false,-1);
    tracep->declBit(c+789,"srli", false,-1);
    tracep->declBit(c+790,"srai", false,-1);
    tracep->declBit(c+794,"slt", false,-1);
    tracep->declBit(c+795,"sltu", false,-1);
    tracep->declBit(c+783,"slti", false,-1);
    tracep->declBit(c+784,"sltiu", false,-1);
    tracep->declBit(c+815,"jal", false,-1);
    tracep->declBit(c+816,"jalr", false,-1);
    tracep->declBit(c+801,"lb", false,-1);
    tracep->declBit(c+802,"lh", false,-1);
    tracep->declBit(c+803,"lw", false,-1);
    tracep->declBit(c+804,"lbu", false,-1);
    tracep->declBit(c+805,"lhu", false,-1);
    tracep->declBit(c+806,"sb", false,-1);
    tracep->declBit(c+807,"sh", false,-1);
    tracep->declBit(c+808,"sw", false,-1);
    tracep->declBit(c+809,"beq", false,-1);
    tracep->declBit(c+810,"bne", false,-1);
    tracep->declBit(c+811,"blt", false,-1);
    tracep->declBit(c+812,"bge", false,-1);
    tracep->declBit(c+813,"bltu", false,-1);
    tracep->declBit(c+814,"bgeu", false,-1);
    tracep->declBit(c+819,"ebreak", false,-1);
    tracep->declBit(c+820,"ecall", false,-1);
    tracep->declBit(c+824,"mret", false,-1);
    tracep->declBit(c+825,"fence_i", false,-1);
    tracep->declBit(c+821,"csrrw", false,-1);
    tracep->declBit(c+822,"csrrs", false,-1);
    tracep->declBit(c+823,"csrrc", false,-1);
    tracep->declBus(c+826,"rd", false,-1, 4,0);
    tracep->declBus(c+827,"rs1", false,-1, 4,0);
    tracep->declBus(c+828,"rs2", false,-1, 4,0);
    tracep->declBus(c+868,"iag", false,-1, 31,0);
    tracep->declBit(c+856,"lsu_blockf", false,-1);
    tracep->declBit(c+863,"wbu_blockf", false,-1);
    tracep->declBit(c+780,"in_valid", false,-1);
    tracep->declBit(c+781,"in_ready", false,-1);
    tracep->declBit(c+838,"out_valid_lsu", false,-1);
    tracep->declBit(c+839,"out_valid_wbu", false,-1);
    tracep->declBit(c+840,"out_ready_lsu", false,-1);
    tracep->declBit(c+841,"out_ready_wbu", false,-1);
    tracep->declBit(c+842,"io", false,-1);
    tracep->declBus(c+843,"io_type", false,-1, 1,0);
    tracep->declBit(c+844,"read_is_u", false,-1);
    tracep->declBus(c+845,"rd_out", false,-1, 4,0);
    tracep->declBus(c+1667,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1668,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1669,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+846,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+847,"rs2_out", false,-1, 4,0);
    tracep->declBit(c+848,"is_exu_rd", false,-1);
    tracep->declBit(c+849,"is_lsu_rd", false,-1);
    tracep->declBus(c+1670,"rd_exu", false,-1, 4,0);
    tracep->declBit(c+1665,"flush", false,-1);
    tracep->declBus(c+1666,"pc_flush", false,-1, 31,0);
    tracep->declQuad(c+830,"exu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+832,"exu_blcokbl_cyc", false,-1, 63,0);
    tracep->declQuad(c+834,"exu_blcokbw_cyc", false,-1, 63,0);
    tracep->declQuad(c+836,"exu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+869,"ebreak_end", false,-1);
    tracep->declBus(c+870,"mstatus", false,-1, 31,0);
    tracep->declBus(c+871,"mepc", false,-1, 31,0);
    tracep->declBus(c+872,"mcause", false,-1, 31,0);
    tracep->declBus(c+873,"mtvec", false,-1, 31,0);
    tracep->declBus(c+874,"mcycle", false,-1, 31,0);
    tracep->declBus(c+875,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+876,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+877,"marchid", false,-1, 31,0);
    tracep->declBus(c+878,"pc_save", false,-1, 31,0);
    tracep->declBus(c+879,"imm_save", false,-1, 31,0);
    tracep->declBus(c+880,"instr_save", false,-1, 31,0);
    tracep->declBit(c+881,"add_save", false,-1);
    tracep->declBit(c+882,"addi_save", false,-1);
    tracep->declBit(c+883,"sub_save", false,-1);
    tracep->declBit(c+884,"lui_save", false,-1);
    tracep->declBit(c+885,"auipc_save", false,-1);
    tracep->declBit(c+886,"and_inst_save", false,-1);
    tracep->declBit(c+887,"or_inst_save", false,-1);
    tracep->declBit(c+888,"xor_inst_save", false,-1);
    tracep->declBit(c+889,"andi_save", false,-1);
    tracep->declBit(c+890,"ori_save", false,-1);
    tracep->declBit(c+891,"xori_save", false,-1);
    tracep->declBit(c+892,"sll_save", false,-1);
    tracep->declBit(c+893,"srl_save", false,-1);
    tracep->declBit(c+894,"sra_save", false,-1);
    tracep->declBit(c+895,"slli_save", false,-1);
    tracep->declBit(c+896,"srli_save", false,-1);
    tracep->declBit(c+897,"srai_save", false,-1);
    tracep->declBit(c+898,"slt_save", false,-1);
    tracep->declBit(c+899,"sltu_save", false,-1);
    tracep->declBit(c+900,"slti_save", false,-1);
    tracep->declBit(c+901,"sltiu_save", false,-1);
    tracep->declBit(c+902,"jal_save", false,-1);
    tracep->declBit(c+903,"jalr_save", false,-1);
    tracep->declBit(c+904,"lb_save", false,-1);
    tracep->declBit(c+905,"lh_save", false,-1);
    tracep->declBit(c+906,"lw_save", false,-1);
    tracep->declBit(c+907,"lbu_save", false,-1);
    tracep->declBit(c+908,"lhu_save", false,-1);
    tracep->declBit(c+909,"sb_save", false,-1);
    tracep->declBit(c+910,"sh_save", false,-1);
    tracep->declBit(c+911,"sw_save", false,-1);
    tracep->declBit(c+912,"beq_save", false,-1);
    tracep->declBit(c+913,"bne_save", false,-1);
    tracep->declBit(c+914,"blt_save", false,-1);
    tracep->declBit(c+915,"bge_save", false,-1);
    tracep->declBit(c+916,"bltu_save", false,-1);
    tracep->declBit(c+917,"bgeu_save", false,-1);
    tracep->declBit(c+918,"ebreak_save", false,-1);
    tracep->declBit(c+919,"ecall_save", false,-1);
    tracep->declBit(c+920,"mret_save", false,-1);
    tracep->declBit(c+921,"fence_i_save", false,-1);
    tracep->declBit(c+922,"csrrw_save", false,-1);
    tracep->declBit(c+923,"csrrs_save", false,-1);
    tracep->declBit(c+924,"csrrc_save", false,-1);
    tracep->declBus(c+845,"rd_save", false,-1, 4,0);
    tracep->declBus(c+925,"rs1_save", false,-1, 31,0);
    tracep->declBus(c+926,"rs2_save", false,-1, 31,0);
    tracep->declBus(c+927,"csr_rst_save", false,-1, 31,0);
    tracep->declBus(c+928,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+2059,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2060,"BLOCK", false,-1, 31,0);
    tracep->declBus(c+2061,"WAIT_END", false,-1, 31,0);
    tracep->declBus(c+2062,"EX", false,-1, 31,0);
    tracep->declBus(c+929,"state", false,-1, 1,0);
    tracep->declBus(c+930,"next", false,-1, 1,0);
    tracep->declBit(c+931,"read", false,-1);
    tracep->declBit(c+932,"write", false,-1);
    tracep->declBit(c+933,"is_ls", false,-1);
    tracep->declBit(c+934,"is_nlwb", false,-1);
    tracep->declBit(c+935,"is_ls_nwb", false,-1);
    tracep->declBit(c+936,"nrs", false,-1);
    tracep->declBit(c+937,"r_type", false,-1);
    tracep->declBit(c+938,"s_type", false,-1);
    tracep->declBit(c+939,"b_type", false,-1);
    tracep->declBit(c+940,"rsb_type", false,-1);
    tracep->declBit(c+941,"i_type", false,-1);
    tracep->declBit(c+942,"gpr_read_invalid", false,-1);
    tracep->declBus(c+1671,"new_pc", false,-1, 31,0);
    tracep->declBus(c+1672,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+1673,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+943,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+1157,"add1", false,-1, 31,0);
    tracep->declBus(c+1158,"add2", false,-1, 31,0);
    tracep->declBus(c+1668,"add_rst_w", false,-1, 31,0);
    tracep->declBus(c+2055,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+2055,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+1159,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+1667,"or_rst", false,-1, 31,0);
    tracep->declBus(c+1160,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+1667,"and_rst", false,-1, 31,0);
    tracep->declBus(c+1161,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+2055,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+2055,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+1162,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+1163,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+1674,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+1164,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+1675,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+1165,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+1676,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+1166,"srai_rst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBus(c+1736,"sw_addr", false,-1, 31,0);
    tracep->declBit(c+150,"sw_avail", false,-1);
    tracep->declBus(c+2063,"ICACHE_LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+2063,"ICACHE_LINE_AMT", false,-1, 31,0);
    tracep->declBus(c+2064,"OFFSET_LEN", false,-1, 31,0);
    tracep->declBus(c+2064,"INDEX_LEN", false,-1, 31,0);
    tracep->declBus(c+2065,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+2066,"CACHE_LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+2064,"LINE_WORDS", false,-1, 31,0);
    tracep->declBus(c+2061,"BEAT_LEN", false,-1, 31,0);
    tracep->declBus(c+2067,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+2068,"FLASH_TAG", false,-1, 3,0);
    tracep->declBus(c+2069,"SDRAM_TAG0", false,-1, 3,0);
    tracep->declBus(c+2070,"SDRAM_TAG1", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+944+i*4,"icache", true,(i+0), 127,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1008+i*1,"tag", true,(i+0), 23,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1024+i*1,"valid", true,(i+0));
    }
    tracep->declBus(c+1040,"araddr_save", false,-1, 31,0);
    tracep->declBus(c+1041,"rresp_save", false,-1, 1,0);
    tracep->declBus(c+1042,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1043,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1044,"beat", false,-1, 1,0);
    tracep->declBus(c+1045,"current_tag", false,-1, 23,0);
    tracep->declBus(c+1046,"current_index", false,-1, 3,0);
    tracep->declBus(c+1047,"current_word", false,-1, 31,0);
    tracep->declBus(c+1048,"line_addr", false,-1, 31,0);
    tracep->declBus(c+1049,"beat_bit", false,-1, 31,0);
    tracep->declBus(c+1050,"req_region", false,-1, 3,0);
    tracep->declBit(c+1051,"req_cacheable", false,-1);
    tracep->declBus(c+1052,"state", false,-1, 2,0);
    tracep->declBus(c+1973,"next", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1053,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+778,"in_pc", false,-1, 31,0);
    tracep->declBus(c+779,"in_instr", false,-1, 31,0);
    tracep->declBit(c+780,"in_valid", false,-1);
    tracep->declBit(c+781,"in_ready", false,-1);
    tracep->declBit(c+780,"out_valid", false,-1);
    tracep->declBit(c+781,"out_ready", false,-1);
    tracep->declBus(c+778,"out_pc", false,-1, 31,0);
    tracep->declBit(c+782,"addi", false,-1);
    tracep->declBit(c+783,"slti", false,-1);
    tracep->declBit(c+784,"sltiu", false,-1);
    tracep->declBit(c+785,"xori", false,-1);
    tracep->declBit(c+786,"ori", false,-1);
    tracep->declBit(c+787,"andi", false,-1);
    tracep->declBit(c+788,"slli", false,-1);
    tracep->declBit(c+789,"srli", false,-1);
    tracep->declBit(c+790,"srai", false,-1);
    tracep->declBit(c+791,"add", false,-1);
    tracep->declBit(c+792,"sub", false,-1);
    tracep->declBit(c+793,"sll", false,-1);
    tracep->declBit(c+794,"slt", false,-1);
    tracep->declBit(c+795,"sltu", false,-1);
    tracep->declBit(c+796,"xor_inst", false,-1);
    tracep->declBit(c+797,"srl", false,-1);
    tracep->declBit(c+798,"sra", false,-1);
    tracep->declBit(c+799,"or_inst", false,-1);
    tracep->declBit(c+800,"and_inst", false,-1);
    tracep->declBit(c+801,"lb", false,-1);
    tracep->declBit(c+802,"lh", false,-1);
    tracep->declBit(c+803,"lw", false,-1);
    tracep->declBit(c+804,"lbu", false,-1);
    tracep->declBit(c+805,"lhu", false,-1);
    tracep->declBit(c+806,"sb", false,-1);
    tracep->declBit(c+807,"sh", false,-1);
    tracep->declBit(c+808,"sw", false,-1);
    tracep->declBit(c+809,"beq", false,-1);
    tracep->declBit(c+810,"bne", false,-1);
    tracep->declBit(c+811,"blt", false,-1);
    tracep->declBit(c+812,"bge", false,-1);
    tracep->declBit(c+813,"bltu", false,-1);
    tracep->declBit(c+814,"bgeu", false,-1);
    tracep->declBit(c+815,"jal", false,-1);
    tracep->declBit(c+816,"jalr", false,-1);
    tracep->declBit(c+817,"lui", false,-1);
    tracep->declBit(c+818,"auipc", false,-1);
    tracep->declBit(c+819,"ebreak", false,-1);
    tracep->declBit(c+820,"ecall", false,-1);
    tracep->declBit(c+821,"csrrw", false,-1);
    tracep->declBit(c+822,"csrrs", false,-1);
    tracep->declBit(c+823,"csrrc", false,-1);
    tracep->declBit(c+824,"mret", false,-1);
    tracep->declBit(c+825,"fence_i", false,-1);
    tracep->declBus(c+826,"rd", false,-1, 4,0);
    tracep->declBus(c+827,"rs1", false,-1, 4,0);
    tracep->declBus(c+828,"rs2", false,-1, 4,0);
    tracep->declBus(c+829,"imm", false,-1, 31,0);
    tracep->declBus(c+2071,"out_instr", false,-1, 31,0);
    tracep->declBit(c+1054,"out_isntr", false,-1);
    tracep->declBus(c+1055,"opcode", false,-1, 6,0);
    tracep->declBus(c+1056,"funct3", false,-1, 2,0);
    tracep->declBus(c+1057,"funct7", false,-1, 6,0);
    tracep->declBus(c+1058,"immI_w", false,-1, 31,0);
    tracep->declBus(c+1059,"immU_w", false,-1, 31,0);
    tracep->declBus(c+1060,"immS_w", false,-1, 31,0);
    tracep->declBus(c+1061,"immB_w", false,-1, 31,0);
    tracep->declBus(c+1062,"immJ_w", false,-1, 31,0);
    tracep->declBus(c+1063,"immCSR_w", false,-1, 31,0);
    tracep->declBus(c+829,"imm_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBus(c+779,"out_instr", false,-1, 31,0);
    tracep->declBit(c+780,"out_valid", false,-1);
    tracep->declBit(c+781,"out_ready", false,-1);
    tracep->declBus(c+778,"out_pc", false,-1, 31,0);
    tracep->declBit(c+1665,"flush", false,-1);
    tracep->declBus(c+1666,"pc_flush", false,-1, 31,0);
    tracep->declQuad(c+774,"ifu_work_cyc", false,-1, 63,0);
    tracep->declQuad(c+776,"ifu_block_cyc", false,-1, 63,0);
    tracep->declBus(c+2021,"PMA_ENTRIES", false,-1, 31,0);
    tracep->pushNamePrefix("pma_table");
    tracep->declArray(c+1,"[0]", false,-1, 66,0);
    tracep->declArray(c+4,"[1]", false,-1, 66,0);
    tracep->declArray(c+7,"[2]", false,-1, 66,0);
    tracep->declArray(c+10,"[3]", false,-1, 66,0);
    tracep->declArray(c+13,"[4]", false,-1, 66,0);
    tracep->declArray(c+16,"[5]", false,-1, 66,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1064,"error_save", false,-1, 1,0);
    tracep->declBit(c+1065,"master_validation_error_save", false,-1);
    tracep->declBit(c+1066,"flush_save", false,-1);
    tracep->declBus(c+1067,"pc_flush_save", false,-1, 31,0);
    tracep->declBus(c+1068,"pc", false,-1, 31,0);
    tracep->declBus(c+1069,"state", false,-1, 1,0);
    tracep->declBus(c+1070,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBit(c+842,"io", false,-1);
    tracep->declBus(c+843,"io_type", false,-1, 1,0);
    tracep->declBit(c+844,"read_is_u", false,-1);
    tracep->declBus(c+845,"rd", false,-1, 4,0);
    tracep->declBus(c+1667,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1668,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1669,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBit(c+838,"in_valid", false,-1);
    tracep->declBit(c+840,"in_ready", false,-1);
    tracep->declBit(c+857,"out_valid", false,-1);
    tracep->declBit(c+841,"out_ready", false,-1);
    tracep->declBus(c+1156,"wdata", false,-1, 31,0);
    tracep->declBus(c+858,"rd_out_lsu", false,-1, 4,0);
    tracep->declBus(c+1724,"sw_addr", false,-1, 31,0);
    tracep->declBit(c+150,"sw_avail", false,-1);
    tracep->declQuad(c+850,"lsu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+852,"lsu_blcokb_cyc", false,-1, 63,0);
    tracep->declQuad(c+854,"lsu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+856,"lsu_blockf", false,-1);
    tracep->declBus(c+1071,"error_save", false,-1, 1,0);
    tracep->declBit(c+1072,"io_save", false,-1);
    tracep->declBus(c+1073,"io_type_save", false,-1, 1,0);
    tracep->declBit(c+1074,"read_is_u_save", false,-1);
    tracep->declBus(c+858,"rd_save", false,-1, 4,0);
    tracep->declBus(c+1075,"lsu_data_save", false,-1, 31,0);
    tracep->declBus(c+1724,"lsu_addr_save", false,-1, 31,0);
    tracep->declBus(c+1076,"ic_wb_wdata_save", false,-1, 31,0);
    tracep->declBit(c+1077,"rdata_out", false,-1);
    tracep->declBus(c+1078,"state", false,-1, 2,0);
    tracep->declBus(c+1974,"next", false,-1, 2,0);
    tracep->declBus(c+1079,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1677,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1678,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1679,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1680,"lh_rst", false,-1, 31,0);
    tracep->declBus(c+1681,"lsu_rdata_shifted", false,-1, 31,0);
    tracep->declBit(c+1080,"lw", false,-1);
    tracep->declBit(c+1081,"lh", false,-1);
    tracep->declBit(c+1082,"lhu", false,-1);
    tracep->declBit(c+1083,"lbu", false,-1);
    tracep->declBit(c+1084,"lb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBus(c+2072,"MTIME_ADDR", false,-1, 31,0);
    tracep->declBus(c+2073,"MTIMEH_ADDR", false,-1, 31,0);
    tracep->declBus(c+2013,"RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+2015,"RESP_SLVERR", false,-1, 1,0);
    tracep->declQuad(c+1085,"mtime", false,-1, 63,0);
    tracep->declBus(c+1087,"state", false,-1, 1,0);
    tracep->declBus(c+1975,"next", false,-1, 1,0);
    tracep->declBus(c+1088,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1089,"rresp_save", false,-1, 1,0);
    tracep->declBus(c+1090,"rid_save", false,-1, 3,0);
    tracep->declBus(c+1091,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1737,"rdata_now", false,-1, 31,0);
    tracep->declBus(c+1738,"rresp_now", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBit(c+1739,"aw_to_clint", false,-1);
    tracep->declBit(c+1092,"w_busy", false,-1);
    tracep->declBit(c+1093,"w_clint", false,-1);
    tracep->declBit(c+1740,"w_sel_clint", false,-1);
    tracep->declBus(c+1741,"r_current_state", false,-1, 1,0);
    tracep->declBus(c+97,"r_next_state", false,-1, 1,0);
    tracep->declBit(c+1094,"r_sel_clint", false,-1);
    tracep->declBit(c+1742,"sel_lsu", false,-1);
    tracep->declBit(c+1743,"sel_ifu", false,-1);
    tracep->declBit(c+78,"r_tgt_rvalid", false,-1);
    tracep->declBit(c+1976,"r_tgt_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1972,"reset", false,-1);
    tracep->declBit(c+839,"in_valid_exu", false,-1);
    tracep->declBit(c+841,"in_ready_exu", false,-1);
    tracep->declBus(c+845,"rd_exu", false,-1, 4,0);
    tracep->declBus(c+1669,"wdata_exu", false,-1, 31,0);
    tracep->declBit(c+857,"in_valid_lsu", false,-1);
    tracep->declBit(c+841,"in_ready_lsu", false,-1);
    tracep->declBus(c+858,"rd_lsu", false,-1, 4,0);
    tracep->declBus(c+1156,"wdata_lsu", false,-1, 31,0);
    tracep->declBus(c+864,"rd_release", false,-1, 4,0);
    tracep->declBus(c+868,"iag", false,-1, 31,0);
    tracep->declBus(c+1095,"iag_type", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1096+i*1,"iag_amt", true,(i+0), 1,0);
    }
    tracep->declBit(c+865,"wen", false,-1);
    tracep->declBus(c+867,"wdata", false,-1, 31,0);
    tracep->declBus(c+866,"rd", false,-1, 4,0);
    tracep->declQuad(c+859,"wbu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+861,"wbu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+863,"wbu_blockf", false,-1);
    tracep->declBit(c+841,"in_ready", false,-1);
    tracep->declBit(c+1128,"wb_type", false,-1);
    tracep->declBus(c+2074,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2075,"WB", false,-1, 0,0);
    tracep->declBit(c+1129,"state", false,-1);
    tracep->declBit(c+1130,"next", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"io_d", false,-1);
    tracep->declBit(c+677,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"io_d", false,-1);
    tracep->declBit(c+677,"io_q", false,-1);
    tracep->declBit(c+677,"sync_0", false,-1);
    tracep->declBit(c+678,"sync_1", false,-1);
    tracep->declBit(c+679,"sync_2", false,-1);
    tracep->declBit(c+680,"sync_3", false,-1);
    tracep->declBit(c+681,"sync_4", false,-1);
    tracep->declBit(c+682,"sync_5", false,-1);
    tracep->declBit(c+683,"sync_6", false,-1);
    tracep->declBit(c+684,"sync_7", false,-1);
    tracep->declBit(c+685,"sync_8", false,-1);
    tracep->declBit(c+686,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1766,"auto_in_psel", false,-1);
    tracep->declBit(c+1767,"auto_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1687,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+2007,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1768,"auto_in_pready", false,-1);
    tracep->declBit(c+1769,"auto_in_pslverr", false,-1);
    tracep->declBus(c+23,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1931,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1932,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1933,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1934,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1935,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1936,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1937,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1938,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1939,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1940,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1695,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1766,"in_psel", false,-1);
    tracep->declBit(c+1767,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1768,"in_pready", false,-1);
    tracep->declBus(c+23,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1769,"in_pslverr", false,-1);
    tracep->declBus(c+1931,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1932,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1933,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1934,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1935,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1936,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1937,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1938,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1939,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1940,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+2076,"GPIO_BASE", false,-1, 31,0);
    tracep->declBus(c+1314,"gpio_out_r", false,-1, 15,0);
    tracep->declBus(c+1315,"seg_reg_0_r", false,-1, 7,0);
    tracep->declBus(c+1316,"seg_reg_1_r", false,-1, 7,0);
    tracep->declBus(c+1317,"seg_reg_2_r", false,-1, 7,0);
    tracep->declBus(c+1318,"seg_reg_3_r", false,-1, 7,0);
    tracep->declBit(c+1783,"valid_access", false,-1);
    tracep->declBus(c+1696,"addr_off", false,-1, 31,0);
    tracep->declBus(c+1697,"addr_sel", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1762,"auto_in_psel", false,-1);
    tracep->declBit(c+1763,"auto_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1687,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+2007,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1764,"auto_in_pready", false,-1);
    tracep->declBit(c+2016,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1765,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1941,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1942,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1695,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1762,"in_psel", false,-1);
    tracep->declBit(c+1763,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1764,"in_pready", false,-1);
    tracep->declBus(c+1765,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+2016,"in_pslverr", false,-1);
    tracep->declBit(c+1941,"ps2_clk", false,-1);
    tracep->declBit(c+1942,"ps2_data", false,-1);
    tracep->declBus(c+1698,"clk_sync", false,-1, 1,0);
    tracep->declBus(c+1699,"dat_sync", false,-1, 1,0);
    tracep->declBit(c+1700,"clk_fall", false,-1);
    tracep->declBit(c+1701,"dat", false,-1);
    tracep->declBus(c+1319,"bit_cnt", false,-1, 3,0);
    tracep->declBus(c+1320,"shifter", false,-1, 7,0);
    tracep->declBit(c+1321,"par_acc", false,-1);
    tracep->declBit(c+1322,"frame_ok", false,-1);
    tracep->declBus(c+1323,"scancode", false,-1, 7,0);
    tracep->declBit(c+1324,"scancode_valid", false,-1);
    tracep->declBit(c+1977,"apb_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1876,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1877,"auto_in_wvalid", false,-1);
    tracep->declBit(c+406,"auto_in_arready", false,-1);
    tracep->declBit(c+1878,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1879,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+33,"auto_in_rready", false,-1);
    tracep->declBit(c+407,"auto_in_rvalid", false,-1);
    tracep->declBus(c+408,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+409,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+407,"state", false,-1);
    tracep->declBus(c+409,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+408,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1892,"raddr", false,-1, 31,0);
    tracep->declBit(c+1893,"ren", false,-1);
    tracep->declBus(c+1894,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1770,"auto_in_psel", false,-1);
    tracep->declBit(c+1954,"auto_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1682,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+2007,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1955,"auto_in_pready", false,-1);
    tracep->declBit(c+2016,"auto_in_pslverr", false,-1);
    tracep->declBus(c+180,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1750,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1751,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1895,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1682,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1770,"in_psel", false,-1);
    tracep->declBit(c+1954,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1955,"in_pready", false,-1);
    tracep->declBus(c+180,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+2016,"in_pslverr", false,-1);
    tracep->declBit(c+1750,"qspi_sck", false,-1);
    tracep->declBit(c+1751,"qspi_ce_n", false,-1);
    tracep->declBus(c+1895,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1895,"din", false,-1, 3,0);
    tracep->declBus(c+1784,"dout", false,-1, 3,0);
    tracep->declBus(c+1785,"douten", false,-1, 3,0);
    tracep->declBit(c+1978,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBus(c+1682,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1684,"dat_i", false,-1, 31,0);
    tracep->declBus(c+180,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1685,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1770,"cyc_i", false,-1);
    tracep->declBit(c+1770,"stb_i", false,-1);
    tracep->declBit(c+1978,"ack_o", false,-1);
    tracep->declBit(c+1683,"we_i", false,-1);
    tracep->declBit(c+1750,"sck", false,-1);
    tracep->declBit(c+1751,"ce_n", false,-1);
    tracep->declBus(c+1895,"din", false,-1, 3,0);
    tracep->declBus(c+1784,"dout", false,-1, 3,0);
    tracep->declBus(c+1785,"douten", false,-1, 3,0);
    tracep->declBus(c+2074,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+2075,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+1325,"mr_sck", false,-1);
    tracep->declBit(c+1326,"mr_ce_n", false,-1);
    tracep->declBus(c+1895,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1327,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+1328,"mr_doe", false,-1);
    tracep->declBit(c+1329,"mw_sck", false,-1);
    tracep->declBit(c+1330,"mw_ce_n", false,-1);
    tracep->declBus(c+1895,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1979,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+1331,"mw_doe", false,-1);
    tracep->declBit(c+1786,"mr_rd", false,-1);
    tracep->declBit(c+1332,"mr_done", false,-1);
    tracep->declBit(c+1787,"mw_wr", false,-1);
    tracep->declBit(c+1788,"mw_done", false,-1);
    tracep->declBit(c+1333,"qpi_mode", false,-1);
    tracep->declBit(c+1334,"mr_busy", false,-1);
    tracep->declBit(c+1770,"wb_valid", false,-1);
    tracep->declBit(c+1789,"wb_we", false,-1);
    tracep->declBit(c+1790,"wb_re", false,-1);
    tracep->declBit(c+1333,"allow_xfer", false,-1);
    tracep->declBit(c+1335,"state", false,-1);
    tracep->declBit(c+1791,"nstate", false,-1);
    tracep->declBus(c+1702,"size", false,-1, 2,0);
    tracep->declBus(c+1703,"byte0", false,-1, 7,0);
    tracep->declBus(c+1704,"byte1", false,-1, 7,0);
    tracep->declBus(c+1705,"byte2", false,-1, 7,0);
    tracep->declBus(c+1706,"byte3", false,-1, 7,0);
    tracep->declBus(c+1707,"wdata", false,-1, 31,0);
    tracep->declBit(c+1792,"use_mr", false,-1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1980,"rst_n", false,-1);
    tracep->declBus(c+1708,"addr", false,-1, 23,0);
    tracep->declBit(c+1786,"rd", false,-1);
    tracep->declBus(c+2077,"size", false,-1, 2,0);
    tracep->declBit(c+1332,"done", false,-1);
    tracep->declBus(c+180,"line", false,-1, 31,0);
    tracep->declBit(c+1325,"sck", false,-1);
    tracep->declBit(c+1326,"ce_n", false,-1);
    tracep->declBus(c+1895,"din", false,-1, 3,0);
    tracep->declBus(c+1327,"dout", false,-1, 3,0);
    tracep->declBit(c+1328,"douten", false,-1);
    tracep->declBit(c+1333,"qpi", false,-1);
    tracep->declBit(c+1334,"busy", false,-1);
    tracep->declBus(c+2013,"IDLE", false,-1, 1,0);
    tracep->declBus(c+2014,"ENTER_QPI", false,-1, 1,0);
    tracep->declBus(c+2015,"READ", false,-1, 1,0);
    tracep->declBus(c+2078,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+2079,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+1336,"state", false,-1, 1,0);
    tracep->declBus(c+1981,"nstate", false,-1, 1,0);
    tracep->declBus(c+1337,"counter", false,-1, 7,0);
    tracep->declBus(c+1338,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+687+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1339,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1340,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1341,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1342,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+1343,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1344,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1345,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+1346,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+1347,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+1348,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+1349,"byte_cnt", false,-1, 7,0);
    tracep->declBus(c+1350,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1980,"rst_n", false,-1);
    tracep->declBus(c+1709,"addr", false,-1, 23,0);
    tracep->declBus(c+1707,"line", false,-1, 31,0);
    tracep->declBus(c+1702,"size", false,-1, 2,0);
    tracep->declBit(c+1787,"wr", false,-1);
    tracep->declBit(c+1333,"qpi", false,-1);
    tracep->declBit(c+1788,"done", false,-1);
    tracep->declBit(c+1329,"sck", false,-1);
    tracep->declBit(c+1330,"ce_n", false,-1);
    tracep->declBus(c+1895,"din", false,-1, 3,0);
    tracep->declBus(c+1979,"dout", false,-1, 3,0);
    tracep->declBit(c+1331,"douten", false,-1);
    tracep->declBus(c+2074,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2075,"WRITE", false,-1, 0,0);
    tracep->declBit(c+1351,"state", false,-1);
    tracep->declBit(c+1793,"nstate", false,-1);
    tracep->declBus(c+1352,"counter", false,-1, 7,0);
    tracep->declBus(c+1353,"saddr", false,-1, 23,0);
    tracep->declBus(c+2080,"CMD_38H", false,-1, 7,0);
    tracep->declBus(c+1339,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1340,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1341,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1354,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1794,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1355,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+1356,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+1357,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+1358,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+1359,"dat_off8", false,-1, 7,0);
    tracep->declBus(c+1360,"dat_off", false,-1, 2,0);
    tracep->declBus(c+1361,"dat_byte", false,-1, 1,0);
    tracep->declBus(c+1982,"dat_nib", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1900,"auto_in_awready", false,-1);
    tracep->declBit(c+1841,"auto_in_awvalid", false,-1);
    tracep->declBus(c+2018,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1724,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2019,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1901,"auto_in_wready", false,-1);
    tracep->declBit(c+1842,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1725,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"auto_in_wlast", false,-1);
    tracep->declBit(c+156,"auto_in_bready", false,-1);
    tracep->declBit(c+1205,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1202,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+2013,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1899,"auto_in_arready", false,-1);
    tracep->declBit(c+1840,"auto_in_arvalid", false,-1);
    tracep->declBus(c+2018,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1720,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1721,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+88,"auto_in_rready", false,-1);
    tracep->declBit(c+1201,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1202,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1203,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+2013,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1204,"auto_in_rlast", false,-1);
    tracep->declBit(c+1952,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1809,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1193,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1194,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1195,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1196,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1810,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1811,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1812,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1822,"sdram_bundle_dq", false,-1, 31,0);
    tracep->declBit(c+1898,"sdram_bundle_sel", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1900,"in_awready", false,-1);
    tracep->declBit(c+1841,"in_awvalid", false,-1);
    tracep->declBus(c+1724,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2018,"in_awid", false,-1, 3,0);
    tracep->declBus(c+2019,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+739,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+2013,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1901,"in_wready", false,-1);
    tracep->declBit(c+1842,"in_wvalid", false,-1);
    tracep->declBus(c+1725,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2017,"in_wlast", false,-1);
    tracep->declBit(c+156,"in_bready", false,-1);
    tracep->declBit(c+1205,"in_bvalid", false,-1);
    tracep->declBus(c+2013,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1202,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1899,"in_arready", false,-1);
    tracep->declBit(c+1840,"in_arvalid", false,-1);
    tracep->declBus(c+1720,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+2018,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1721,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1722,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1723,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+88,"in_rready", false,-1);
    tracep->declBit(c+1201,"in_rvalid", false,-1);
    tracep->declBus(c+2013,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1203,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1204,"in_rlast", false,-1);
    tracep->declBus(c+1202,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1952,"sdram_clk", false,-1);
    tracep->declBit(c+1809,"sdram_cke", false,-1);
    tracep->declBit(c+1193,"sdram_cs", false,-1);
    tracep->declBit(c+1194,"sdram_ras", false,-1);
    tracep->declBit(c+1195,"sdram_cas", false,-1);
    tracep->declBit(c+1196,"sdram_we", false,-1);
    tracep->declBus(c+1810,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1811,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1812,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1822,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1898,"sdram_sel", false,-1);
    tracep->declBit(c+1362,"sdram_dout_en", false,-1);
    tracep->declBus(c+1363,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBit(c+1841,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1724,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+2018,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+2019,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+2013,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1842,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1725,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1726,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+2017,"inport_wlast_i", false,-1);
    tracep->declBit(c+156,"inport_bready_i", false,-1);
    tracep->declBit(c+1840,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1720,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+2018,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1721,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1723,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+88,"inport_rready_i", false,-1);
    tracep->declBus(c+1822,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1900,"inport_awready_o", false,-1);
    tracep->declBit(c+1901,"inport_wready_o", false,-1);
    tracep->declBit(c+1205,"inport_bvalid_o", false,-1);
    tracep->declBus(c+2013,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1202,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1899,"inport_arready_o", false,-1);
    tracep->declBit(c+1201,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1203,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+2013,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1202,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1204,"inport_rlast_o", false,-1);
    tracep->declBit(c+1952,"sdram_clk_o", false,-1);
    tracep->declBit(c+1809,"sdram_cke_o", false,-1);
    tracep->declBit(c+1193,"sdram_cs_o", false,-1);
    tracep->declBit(c+1194,"sdram_ras_o", false,-1);
    tracep->declBit(c+1195,"sdram_cas_o", false,-1);
    tracep->declBit(c+1196,"sdram_we_o", false,-1);
    tracep->declBus(c+1812,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1810,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1811,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1363,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1362,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1898,"sdram_sel_o", false,-1);
    tracep->declBus(c+2008,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2081,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1909,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1910,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1911,"ram_rd_w", false,-1);
    tracep->declBit(c+1813,"ram_accept_w", false,-1);
    tracep->declBus(c+1725,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1364,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1983,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+1365,"ram_ack_w", false,-1);
    tracep->declBit(c+2016,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBit(c+1841,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1724,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+2018,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+2019,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+2013,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1842,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1725,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1726,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+2017,"axi_wlast_i", false,-1);
    tracep->declBit(c+156,"axi_bready_i", false,-1);
    tracep->declBit(c+1840,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1720,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+2018,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1721,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1723,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rready_i", false,-1);
    tracep->declBit(c+1813,"ram_accept_i", false,-1);
    tracep->declBit(c+1365,"ram_ack_i", false,-1);
    tracep->declBit(c+2016,"ram_error_i", false,-1);
    tracep->declBus(c+1364,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1900,"axi_awready_o", false,-1);
    tracep->declBit(c+1901,"axi_wready_o", false,-1);
    tracep->declBit(c+1205,"axi_bvalid_o", false,-1);
    tracep->declBus(c+2013,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1202,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1899,"axi_arready_o", false,-1);
    tracep->declBit(c+1201,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1203,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+2013,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1202,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1204,"axi_rlast_o", false,-1);
    tracep->declBus(c+1910,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1911,"ram_rd_o", false,-1);
    tracep->declBus(c+1983,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1909,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1725,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+1366,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1367,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1368,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1369,"req_rd_q", false,-1);
    tracep->declBit(c+1370,"req_wr_q", false,-1);
    tracep->declBus(c+1371,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1372,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1373,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1374,"req_prio_q", false,-1);
    tracep->declBit(c+1375,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1376,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1377,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1912,"req_push_w", false,-1);
    tracep->declBus(c+1984,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1378,"req_out_valid_w", false,-1);
    tracep->declBus(c+1379,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1985,"resp_accept_w", false,-1);
    tracep->declBit(c+1380,"resp_is_write_w", false,-1);
    tracep->declBit(c+1381,"resp_is_read_w", false,-1);
    tracep->declBit(c+1204,"resp_is_last_w", false,-1);
    tracep->declBus(c+1202,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1382,"resp_valid_w", false,-1);
    tracep->declBit(c+1383,"write_prio_w", false,-1);
    tracep->declBit(c+1384,"read_prio_w", false,-1);
    tracep->declBit(c+1913,"write_active_w", false,-1);
    tracep->declBit(c+1911,"read_active_w", false,-1);
    tracep->declBus(c+1909,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1986,"wr_w", false,-1);
    tracep->declBit(c+1911,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+2021,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2064,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2061,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBus(c+1984,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1912,"push_i", false,-1);
    tracep->declBit(c+1985,"pop_i", false,-1);
    tracep->declBus(c+1379,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1377,"accept_o", false,-1);
    tracep->declBit(c+1378,"valid_o", false,-1);
    tracep->declBus(c+2062,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1385+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1389,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1390,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1391,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+2020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2064,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2061,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBus(c+1364,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+1365,"push_i", false,-1);
    tracep->declBit(c+1985,"pop_i", false,-1);
    tracep->declBus(c+1203,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1392,"accept_o", false,-1);
    tracep->declBit(c+1382,"valid_o", false,-1);
    tracep->declBus(c+2062,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1393+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1397,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1398,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1399,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBus(c+1910,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1911,"inport_rd_i", false,-1);
    tracep->declBus(c+1983,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1909,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1725,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1822,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1813,"inport_accept_o", false,-1);
    tracep->declBit(c+1365,"inport_ack_o", false,-1);
    tracep->declBit(c+2016,"inport_error_o", false,-1);
    tracep->declBus(c+1364,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1952,"sdram_clk_o", false,-1);
    tracep->declBit(c+1809,"sdram_cke_o", false,-1);
    tracep->declBit(c+1193,"sdram_cs_o", false,-1);
    tracep->declBit(c+1194,"sdram_ras_o", false,-1);
    tracep->declBit(c+1195,"sdram_cas_o", false,-1);
    tracep->declBit(c+1196,"sdram_we_o", false,-1);
    tracep->declBus(c+1812,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1810,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1811,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1363,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1362,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1898,"sdram_sel_o", false,-1);
    tracep->declBus(c+2008,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2081,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+2064,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+2064,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2082,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_COL_LSB", false,-1, 31,0);
    tracep->declBus(c+2083,"SDRAM_BANK_LSB", false,-1, 31,0);
    tracep->declBus(c+2082,"SDRAM_ROW_LSB", false,-1, 31,0);
    tracep->declBus(c+2084,"SDRAM_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+2085,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2086,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2087,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2064,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2088,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2068,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2089,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2090,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2091,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2092,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2093,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2018,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2094,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+2064,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+2018,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2093,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2092,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2068,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2090,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2089,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2091,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2088,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2095,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2096,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2069,"STATE_READ_GAP", false,-1, 3,0);
    tracep->declBus(c+2070,"STATE_WRITE_GAP", false,-1, 3,0);
    tracep->declBus(c+2010,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+2010,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+2020,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+2010,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2061,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2021,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1909,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1910,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1911,"ram_rd_w", false,-1);
    tracep->declBit(c+1813,"ram_accept_w", false,-1);
    tracep->declBus(c+1725,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1364,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+1365,"ram_ack_w", false,-1);
    tracep->declBit(c+1914,"ram_req_w", false,-1);
    tracep->declBus(c+1400,"command_q", false,-1, 3,0);
    tracep->declBus(c+1810,"addr_q", false,-1, 12,0);
    tracep->declBus(c+1363,"data_q", false,-1, 31,0);
    tracep->declBit(c+1401,"data_rd_en_q", false,-1);
    tracep->declBus(c+1812,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1809,"cke_q", false,-1);
    tracep->declBus(c+1811,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1364,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+1402,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1822,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1403,"refresh_q", false,-1);
    tracep->declBus(c+1404,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1405+i*1,"active_row_q", true,(i+0), 13,0);
    }
    tracep->declBus(c+1814,"state_q", false,-1, 3,0);
    tracep->declBus(c+1915,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1916,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1409,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1410,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+1898,"sdram_sel", false,-1);
    tracep->declBus(c+1917,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1918,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1919,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+2064,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1411,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1920,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2097,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1815,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1412,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1413,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1414,"idx", false,-1, 31,0);
    tracep->declBus(c+1415,"rd_q", false,-1, 3,0);
    tracep->declBit(c+1365,"ack_q", false,-1);
    tracep->declArray(c+1816,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1775,"auto_in_psel", false,-1);
    tracep->declBit(c+1776,"auto_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1686,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+2007,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1956,"auto_in_pready", false,-1);
    tracep->declBit(c+1688,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1957,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1190,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1191,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1192,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1951,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2098,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2099,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2100,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1710,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1775,"in_psel", false,-1);
    tracep->declBit(c+1776,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1956,"in_pready", false,-1);
    tracep->declBus(c+1957,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1688,"in_pslverr", false,-1);
    tracep->declBit(c+1190,"spi_sck", false,-1);
    tracep->declBus(c+1191,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1192,"spi_mosi", false,-1);
    tracep->declBit(c+1951,"spi_miso", false,-1);
    tracep->declBit(c+1416,"spi_irq_out", false,-1);
    tracep->declBit(c+1711,"xip_sel", false,-1);
    tracep->declBus(c+2101,"REG_TX0", false,-1, 4,0);
    tracep->declBus(c+2102,"REG_TX1", false,-1, 4,0);
    tracep->declBus(c+2101,"REG_RX0", false,-1, 4,0);
    tracep->declBus(c+2103,"REG_CTRL", false,-1, 4,0);
    tracep->declBus(c+2104,"REG_DIV", false,-1, 4,0);
    tracep->declBus(c+2105,"REG_SS", false,-1, 4,0);
    tracep->declBus(c+2106,"CTRL_XFER64", false,-1, 31,0);
    tracep->declBus(c+2107,"CTRL_GO", false,-1, 31,0);
    tracep->declBus(c+1795,"spi_adr", false,-1, 4,0);
    tracep->declBus(c+1796,"spi_dat_i", false,-1, 31,0);
    tracep->declBus(c+1797,"spi_sel", false,-1, 3,0);
    tracep->declBit(c+1798,"spi_we", false,-1);
    tracep->declBit(c+1799,"spi_stb", false,-1);
    tracep->declBit(c+1800,"spi_cyc", false,-1);
    tracep->declBus(c+1417,"spi_dat_o", false,-1, 31,0);
    tracep->declBit(c+1418,"spi_ack", false,-1);
    tracep->declBit(c+2016,"spi_err", false,-1);
    tracep->declBus(c+2018,"S_IDLE", false,-1, 3,0);
    tracep->declBus(c+2093,"S_DIV", false,-1, 3,0);
    tracep->declBus(c+2092,"S_SS", false,-1, 3,0);
    tracep->declBus(c+2068,"S_TX1", false,-1, 3,0);
    tracep->declBus(c+2090,"S_TX0", false,-1, 3,0);
    tracep->declBus(c+2089,"S_CTRL", false,-1, 3,0);
    tracep->declBus(c+2091,"S_POLL", false,-1, 3,0);
    tracep->declBus(c+2088,"S_RX", false,-1, 3,0);
    tracep->declBus(c+2095,"S_RXLAT", false,-1, 3,0);
    tracep->declBus(c+2096,"S_UNSS", false,-1, 3,0);
    tracep->declBus(c+2069,"S_DONE", false,-1, 3,0);
    tracep->declBus(c+1419,"state", false,-1, 3,0);
    tracep->declBus(c+1420,"xip_addr", false,-1, 31,0);
    tracep->declBus(c+1421,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+1422,"xip_ready", false,-1);
    tracep->declBit(c+1423,"poll_go_seen", false,-1);
    tracep->declBit(c+1819,"wr_err_seen", false,-1);
    tracep->declBus(c+1424,"xip_adr", false,-1, 4,0);
    tracep->declBus(c+1425,"xip_dat", false,-1, 31,0);
    tracep->declBit(c+1426,"xip_we", false,-1);
    tracep->declBit(c+1427,"xip_req", false,-1);
    tracep->declBit(c+1428,"xip_busy", false,-1);
    tracep->declBus(c+1429,"xip_cmd", false,-1, 31,0);
    tracep->declBus(c+1430,"rx_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBit(c+1929,"wb_clk_i", false,-1);
    tracep->declBit(c+1930,"wb_rst_i", false,-1);
    tracep->declBus(c+1795,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1796,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1417,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1797,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1798,"wb_we_i", false,-1);
    tracep->declBit(c+1799,"wb_stb_i", false,-1);
    tracep->declBit(c+1800,"wb_cyc_i", false,-1);
    tracep->declBit(c+1418,"wb_ack_o", false,-1);
    tracep->declBit(c+2016,"wb_err_o", false,-1);
    tracep->declBit(c+1416,"wb_int_o", false,-1);
    tracep->declBus(c+1191,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1190,"sclk_pad_o", false,-1);
    tracep->declBit(c+1192,"mosi_pad_o", false,-1);
    tracep->declBit(c+1951,"miso_pad_i", false,-1);
    tracep->declBus(c+1431,"divider", false,-1, 15,0);
    tracep->declBus(c+1432,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1433,"ss", false,-1, 7,0);
    tracep->declBus(c+1801,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1434,"rx", false,-1, 127,0);
    tracep->declBit(c+1438,"rx_negedge", false,-1);
    tracep->declBit(c+1439,"tx_negedge", false,-1);
    tracep->declBus(c+1440,"char_len", false,-1, 6,0);
    tracep->declBit(c+1441,"go", false,-1);
    tracep->declBit(c+1442,"lsb", false,-1);
    tracep->declBit(c+1443,"ie", false,-1);
    tracep->declBit(c+1444,"ass", false,-1);
    tracep->declBit(c+1802,"spi_divider_sel", false,-1);
    tracep->declBit(c+1803,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1804,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1805,"spi_ss_sel", false,-1);
    tracep->declBit(c+1445,"tip", false,-1);
    tracep->declBit(c+1446,"pos_edge", false,-1);
    tracep->declBit(c+1447,"neg_edge", false,-1);
    tracep->declBit(c+1448,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBit(c+1929,"clk_in", false,-1);
    tracep->declBit(c+1930,"rst", false,-1);
    tracep->declBit(c+1445,"enable", false,-1);
    tracep->declBit(c+1441,"go", false,-1);
    tracep->declBit(c+1448,"last_clk", false,-1);
    tracep->declBus(c+1431,"divider", false,-1, 15,0);
    tracep->declBit(c+1190,"clk_out", false,-1);
    tracep->declBit(c+1446,"pos_edge", false,-1);
    tracep->declBit(c+1447,"neg_edge", false,-1);
    tracep->declBus(c+1449,"cnt", false,-1, 15,0);
    tracep->declBit(c+1450,"cnt_zero", false,-1);
    tracep->declBit(c+1451,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1930,"rst", false,-1);
    tracep->declBus(c+1806,"latch", false,-1, 3,0);
    tracep->declBus(c+1797,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1440,"len", false,-1, 6,0);
    tracep->declBit(c+1442,"lsb", false,-1);
    tracep->declBit(c+1441,"go", false,-1);
    tracep->declBit(c+1446,"pos_edge", false,-1);
    tracep->declBit(c+1447,"neg_edge", false,-1);
    tracep->declBit(c+1438,"rx_negedge", false,-1);
    tracep->declBit(c+1439,"tx_negedge", false,-1);
    tracep->declBit(c+1445,"tip", false,-1);
    tracep->declBit(c+1448,"last", false,-1);
    tracep->declBus(c+1796,"p_in", false,-1, 31,0);
    tracep->declArray(c+1434,"p_out", false,-1, 127,0);
    tracep->declBit(c+1190,"s_clk", false,-1);
    tracep->declBit(c+1951,"s_in", false,-1);
    tracep->declBit(c+1192,"s_out", false,-1);
    tracep->declBus(c+1452,"cnt", false,-1, 7,0);
    tracep->declArray(c+1434,"data", false,-1, 127,0);
    tracep->declBus(c+1453,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1454,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1455,"rx_clk", false,-1);
    tracep->declBit(c+1456,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1771,"auto_in_psel", false,-1);
    tracep->declBit(c+1772,"auto_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1687,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+2007,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1773,"auto_in_pready", false,-1);
    tracep->declBit(c+2016,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1774,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1949,"uart_rx", false,-1);
    tracep->declBit(c+1950,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1771,"in_psel", false,-1);
    tracep->declBit(c+1772,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1773,"in_pready", false,-1);
    tracep->declBit(c+2016,"in_pslverr", false,-1);
    tracep->declBus(c+1695,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1774,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1949,"uart_rx", false,-1);
    tracep->declBit(c+1950,"uart_tx", false,-1);
    tracep->declBit(c+1457,"rtsn", false,-1);
    tracep->declBit(c+2016,"ctsn", false,-1);
    tracep->declBit(c+1458,"dtr_pad_o", false,-1);
    tracep->declBit(c+2016,"dsr_pad_i", false,-1);
    tracep->declBit(c+2016,"ri_pad_i", false,-1);
    tracep->declBit(c+2016,"dcd_pad_i", false,-1);
    tracep->declBit(c+1459,"interrupt", false,-1);
    tracep->declBit(c+24,"reg_we", false,-1);
    tracep->declBit(c+25,"reg_re", false,-1);
    tracep->declBus(c+1712,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1713,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+691,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1807,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1460,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1930,"wb_rst_i", false,-1);
    tracep->declBus(c+1712,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1714,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1807,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+24,"wb_we_i", false,-1);
    tracep->declBit(c+25,"wb_re_i", false,-1);
    tracep->declBit(c+1950,"stx_pad_o", false,-1);
    tracep->declBit(c+1949,"srx_pad_i", false,-1);
    tracep->declBus(c+2095,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1460,"rts_pad_o", false,-1);
    tracep->declBit(c+1458,"dtr_pad_o", false,-1);
    tracep->declBit(c+1459,"int_o", false,-1);
    tracep->declBit(c+1461,"enable", false,-1);
    tracep->declBit(c+1462,"srx_pad", false,-1);
    tracep->declBus(c+1463,"ier", false,-1, 3,0);
    tracep->declBus(c+1464,"iir", false,-1, 3,0);
    tracep->declBus(c+1465,"fcr", false,-1, 1,0);
    tracep->declBus(c+1466,"mcr", false,-1, 4,0);
    tracep->declBus(c+1467,"lcr", false,-1, 7,0);
    tracep->declBus(c+1468,"msr", false,-1, 7,0);
    tracep->declBus(c+1469,"dl", false,-1, 15,0);
    tracep->declBus(c+1470,"scratch", false,-1, 7,0);
    tracep->declBit(c+1471,"start_dlc", false,-1);
    tracep->declBit(c+1472,"lsr_mask_d", false,-1);
    tracep->declBit(c+1473,"msi_reset", false,-1);
    tracep->declBus(c+1474,"dlc", false,-1, 15,0);
    tracep->declBus(c+1475,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1476,"rx_reset", false,-1);
    tracep->declBit(c+1477,"tx_reset", false,-1);
    tracep->declBit(c+1478,"dlab", false,-1);
    tracep->declBit(c+2017,"cts_pad_i", false,-1);
    tracep->declBit(c+2016,"dsr_pad_i", false,-1);
    tracep->declBit(c+2016,"ri_pad_i", false,-1);
    tracep->declBit(c+2016,"dcd_pad_i", false,-1);
    tracep->declBit(c+1479,"loopback", false,-1);
    tracep->declBit(c+2016,"cts", false,-1);
    tracep->declBit(c+2017,"dsr", false,-1);
    tracep->declBit(c+2017,"ri", false,-1);
    tracep->declBit(c+2017,"dcd", false,-1);
    tracep->declBit(c+1480,"cts_c", false,-1);
    tracep->declBit(c+1481,"dsr_c", false,-1);
    tracep->declBit(c+1482,"ri_c", false,-1);
    tracep->declBit(c+1483,"dcd_c", false,-1);
    tracep->declBus(c+1484,"lsr", false,-1, 7,0);
    tracep->declBit(c+1485,"lsr0", false,-1);
    tracep->declBit(c+1486,"lsr1", false,-1);
    tracep->declBit(c+1487,"lsr2", false,-1);
    tracep->declBit(c+1488,"lsr3", false,-1);
    tracep->declBit(c+1489,"lsr4", false,-1);
    tracep->declBit(c+1490,"lsr5", false,-1);
    tracep->declBit(c+1491,"lsr6", false,-1);
    tracep->declBit(c+1492,"lsr7", false,-1);
    tracep->declBit(c+1493,"lsr0r", false,-1);
    tracep->declBit(c+1494,"lsr1r", false,-1);
    tracep->declBit(c+1495,"lsr2r", false,-1);
    tracep->declBit(c+1496,"lsr3r", false,-1);
    tracep->declBit(c+1497,"lsr4r", false,-1);
    tracep->declBit(c+1498,"lsr5r", false,-1);
    tracep->declBit(c+1499,"lsr6r", false,-1);
    tracep->declBit(c+1500,"lsr7r", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+1501,"rls_int", false,-1);
    tracep->declBit(c+1502,"rda_int", false,-1);
    tracep->declBit(c+1503,"ti_int", false,-1);
    tracep->declBit(c+1504,"thre_int", false,-1);
    tracep->declBit(c+1505,"ms_int", false,-1);
    tracep->declBit(c+1506,"tf_push", false,-1);
    tracep->declBit(c+1507,"rf_pop", false,-1);
    tracep->declBus(c+1987,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1508,"rf_error_bit", false,-1);
    tracep->declBit(c+1486,"rf_overrun", false,-1);
    tracep->declBit(c+1509,"rf_push_pulse", false,-1);
    tracep->declBus(c+1510,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1511,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1512,"tstate", false,-1, 2,0);
    tracep->declBus(c+1513,"rstate", false,-1, 3,0);
    tracep->declBus(c+1514,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1515,"thre_set_en", false,-1);
    tracep->declBus(c+1516,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1517,"block_value", false,-1, 7,0);
    tracep->declBit(c+1518,"serial_out", false,-1);
    tracep->declBit(c+1519,"serial_in", false,-1);
    tracep->declBit(c+27,"lsr_mask_condition", false,-1);
    tracep->declBit(c+28,"iir_read", false,-1);
    tracep->declBit(c+29,"msr_read", false,-1);
    tracep->declBit(c+30,"fifo_read", false,-1);
    tracep->declBit(c+31,"fifo_write", false,-1);
    tracep->declBus(c+1520,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1521,"lsr0_d", false,-1);
    tracep->declBit(c+1522,"lsr1_d", false,-1);
    tracep->declBit(c+1523,"lsr2_d", false,-1);
    tracep->declBit(c+1524,"lsr3_d", false,-1);
    tracep->declBit(c+1525,"lsr4_d", false,-1);
    tracep->declBit(c+1526,"lsr5_d", false,-1);
    tracep->declBit(c+1527,"lsr6_d", false,-1);
    tracep->declBit(c+1528,"lsr7_d", false,-1);
    tracep->declBit(c+1529,"rls_int_d", false,-1);
    tracep->declBit(c+1530,"thre_int_d", false,-1);
    tracep->declBit(c+1531,"ms_int_d", false,-1);
    tracep->declBit(c+1532,"ti_int_d", false,-1);
    tracep->declBit(c+1533,"rda_int_d", false,-1);
    tracep->declBit(c+1534,"rls_int_rise", false,-1);
    tracep->declBit(c+1535,"thre_int_rise", false,-1);
    tracep->declBit(c+1536,"ms_int_rise", false,-1);
    tracep->declBit(c+1537,"ti_int_rise", false,-1);
    tracep->declBit(c+1538,"rda_int_rise", false,-1);
    tracep->declBit(c+1539,"rls_int_pnd", false,-1);
    tracep->declBit(c+1540,"rda_int_pnd", false,-1);
    tracep->declBit(c+1541,"thre_int_pnd", false,-1);
    tracep->declBit(c+1542,"ms_int_pnd", false,-1);
    tracep->declBit(c+1543,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2060,"Tp", false,-1, 31,0);
    tracep->declBus(c+2060,"width", false,-1, 31,0);
    tracep->declBus(c+2075,"init_value", false,-1, 0,0);
    tracep->declBit(c+1930,"rst_i", false,-1);
    tracep->declBit(c+1929,"clk_i", false,-1);
    tracep->declBit(c+2016,"stage1_rst_i", false,-1);
    tracep->declBit(c+2017,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1949,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1462,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1544,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1930,"wb_rst_i", false,-1);
    tracep->declBus(c+1467,"lcr", false,-1, 7,0);
    tracep->declBit(c+1507,"rf_pop", false,-1);
    tracep->declBit(c+1519,"srx_pad_i", false,-1);
    tracep->declBit(c+1461,"enable", false,-1);
    tracep->declBit(c+1476,"rx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBus(c+1514,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1510,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1987,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1486,"rf_overrun", false,-1);
    tracep->declBit(c+1508,"rf_error_bit", false,-1);
    tracep->declBus(c+1513,"rstate", false,-1, 3,0);
    tracep->declBit(c+1509,"rf_push_pulse", false,-1);
    tracep->declBus(c+1545,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1546,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1547,"rshift", false,-1, 7,0);
    tracep->declBit(c+1548,"rparity", false,-1);
    tracep->declBit(c+1549,"rparity_error", false,-1);
    tracep->declBit(c+1550,"rframing_error", false,-1);
    tracep->declBit(c+1551,"rbit_in", false,-1);
    tracep->declBit(c+1552,"rparity_xor", false,-1);
    tracep->declBus(c+1553,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1554,"rf_push_q", false,-1);
    tracep->declBus(c+1555,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1556,"rf_push", false,-1);
    tracep->declBit(c+1557,"break_error", false,-1);
    tracep->declBit(c+1558,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1559,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1560,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1561,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+2018,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2093,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2092,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2068,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2090,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2089,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2091,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2088,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2095,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2096,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2069,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1562,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1563,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2083,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2063,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2064,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2022,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1930,"wb_rst_i", false,-1);
    tracep->declBit(c+1509,"push", false,-1);
    tracep->declBit(c+1507,"pop", false,-1);
    tracep->declBus(c+1555,"data_in", false,-1, 10,0);
    tracep->declBit(c+1476,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1987,"data_out", false,-1, 10,0);
    tracep->declBit(c+1486,"overrun", false,-1);
    tracep->declBus(c+1510,"count", false,-1, 4,0);
    tracep->declBit(c+1508,"error_bit", false,-1);
    tracep->declBus(c+1988,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1564+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1580,"top", false,-1, 3,0);
    tracep->declBus(c+1581,"bottom", false,-1, 3,0);
    tracep->declBus(c+1582,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1583,"word0", false,-1, 2,0);
    tracep->declBus(c+1584,"word1", false,-1, 2,0);
    tracep->declBus(c+1585,"word2", false,-1, 2,0);
    tracep->declBus(c+1586,"word3", false,-1, 2,0);
    tracep->declBus(c+1587,"word4", false,-1, 2,0);
    tracep->declBus(c+1588,"word5", false,-1, 2,0);
    tracep->declBus(c+1589,"word6", false,-1, 2,0);
    tracep->declBus(c+1590,"word7", false,-1, 2,0);
    tracep->declBus(c+1591,"word8", false,-1, 2,0);
    tracep->declBus(c+1592,"word9", false,-1, 2,0);
    tracep->declBus(c+1593,"word10", false,-1, 2,0);
    tracep->declBus(c+1594,"word11", false,-1, 2,0);
    tracep->declBus(c+1595,"word12", false,-1, 2,0);
    tracep->declBus(c+1596,"word13", false,-1, 2,0);
    tracep->declBus(c+1597,"word14", false,-1, 2,0);
    tracep->declBus(c+1598,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+2064,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2100,"data_width", false,-1, 31,0);
    tracep->declBus(c+2063,"depth", false,-1, 31,0);
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1509,"we", false,-1);
    tracep->declBus(c+1580,"a", false,-1, 3,0);
    tracep->declBus(c+1581,"dpra", false,-1, 3,0);
    tracep->declBus(c+1599,"di", false,-1, 7,0);
    tracep->declBus(c+1988,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+692+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1930,"wb_rst_i", false,-1);
    tracep->declBus(c+1467,"lcr", false,-1, 7,0);
    tracep->declBit(c+1506,"tf_push", false,-1);
    tracep->declBus(c+1714,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1461,"enable", false,-1);
    tracep->declBit(c+1477,"tx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+1518,"stx_pad_o", false,-1);
    tracep->declBus(c+1512,"tstate", false,-1, 2,0);
    tracep->declBus(c+1511,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1600,"counter", false,-1, 4,0);
    tracep->declBus(c+1601,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1602,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1603,"stx_o_tmp", false,-1);
    tracep->declBit(c+1604,"parity_xor", false,-1);
    tracep->declBit(c+1605,"tf_pop", false,-1);
    tracep->declBit(c+1606,"bit_out", false,-1);
    tracep->declBus(c+1714,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1808,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1607,"tf_overrun", false,-1);
    tracep->declBus(c+2056,"s_idle", false,-1, 2,0);
    tracep->declBus(c+2007,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+2108,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+2109,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+2077,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+2110,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2100,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2063,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2064,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2022,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1930,"wb_rst_i", false,-1);
    tracep->declBit(c+1506,"push", false,-1);
    tracep->declBit(c+1605,"pop", false,-1);
    tracep->declBus(c+1714,"data_in", false,-1, 7,0);
    tracep->declBit(c+1477,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1808,"data_out", false,-1, 7,0);
    tracep->declBit(c+1607,"overrun", false,-1);
    tracep->declBus(c+1511,"count", false,-1, 4,0);
    tracep->declBus(c+1608,"top", false,-1, 3,0);
    tracep->declBus(c+1609,"bottom", false,-1, 3,0);
    tracep->declBus(c+1610,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+2064,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2100,"data_width", false,-1, 31,0);
    tracep->declBus(c+2063,"depth", false,-1, 31,0);
    tracep->declBit(c+1929,"clk", false,-1);
    tracep->declBit(c+1506,"we", false,-1);
    tracep->declBus(c+1608,"a", false,-1, 3,0);
    tracep->declBus(c+1609,"dpra", false,-1, 3,0);
    tracep->declBus(c+1714,"di", false,-1, 7,0);
    tracep->declBus(c+1808,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+708+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBit(c+1759,"auto_in_psel", false,-1);
    tracep->declBit(c+1760,"auto_in_penable", false,-1);
    tracep->declBit(c+1683,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1686,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+2007,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1684,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1761,"auto_in_pready", false,-1);
    tracep->declBit(c+2016,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1953,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1943,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1944,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1945,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1946,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1947,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1948,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1929,"clock", false,-1);
    tracep->declBit(c+1930,"reset", false,-1);
    tracep->declBus(c+1710,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1759,"in_psel", false,-1);
    tracep->declBit(c+1760,"in_penable", false,-1);
    tracep->declBus(c+2007,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1683,"in_pwrite", false,-1);
    tracep->declBus(c+1684,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1685,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1761,"in_pready", false,-1);
    tracep->declBus(c+1953,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+2016,"in_pslverr", false,-1);
    tracep->declBus(c+1943,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1944,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1945,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1946,"vga_hsync", false,-1);
    tracep->declBit(c+1947,"vga_vsync", false,-1);
    tracep->declBit(c+1948,"vga_valid", false,-1);
    tracep->declBus(c+2111,"FB_AW", false,-1, 31,0);
    tracep->declBit(c+1989,"apb_wr", false,-1);
    tracep->declBit(c+1990,"apb_rd", false,-1);
    tracep->declBus(c+1715,"fb_index", false,-1, 18,0);
    tracep->declBus(c+2112,"H_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2113,"H_SYNC", false,-1, 9,0);
    tracep->declBus(c+2114,"H_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2115,"H_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+2116,"V_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2117,"V_SYNC", false,-1, 9,0);
    tracep->declBus(c+2118,"V_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2119,"V_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+724,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+725,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+726,"h_valid", false,-1);
    tracep->declBit(c+727,"v_valid", false,-1);
    tracep->declBus(c+728,"h_addr", false,-1, 9,0);
    tracep->declBus(c+729,"v_addr", false,-1, 9,0);
    tracep->declBus(c+730,"vga_index", false,-1, 18,0);
    tracep->declBus(c+731,"pixel_q", false,-1, 31,0);
    tracep->declBit(c+732,"h_valid_q", false,-1);
    tracep->declBit(c+733,"v_valid_q", false,-1);
    tracep->declBit(c+734,"hsync_q", false,-1);
    tracep->declBit(c+735,"vsync_q", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1190,"sck", false,-1);
    tracep->declBit(c+1611,"ss", false,-1);
    tracep->declBit(c+1192,"mosi", false,-1);
    tracep->declBit(c+1612,"miso", false,-1);
    tracep->declBus(c+736,"buffer", false,-1, 7,0);
    tracep->declBus(c+737,"bits", false,-1, 3,0);
    tracep->declBus(c+2120,"state", false,-1, 1,0);
    tracep->declBus(c+1613,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1190,"sck", false,-1);
    tracep->declBit(c+1614,"ss", false,-1);
    tracep->declBit(c+1192,"mosi", false,-1);
    tracep->declBit(c+1991,"miso", false,-1);
    tracep->declBit(c+1614,"reset", false,-1);
    tracep->declBus(c+1716,"state", false,-1, 2,0);
    tracep->declBus(c+1717,"counter", false,-1, 7,0);
    tracep->declBus(c+1992,"cmd", false,-1, 7,0);
    tracep->declBus(c+1993,"addr", false,-1, 23,0);
    tracep->declBus(c+1718,"data", false,-1, 31,0);
    tracep->declBit(c+1719,"ren", false,-1);
    tracep->declBus(c+738,"rdata", false,-1, 31,0);
    tracep->declBus(c+1994,"raddr", false,-1, 31,0);
    tracep->declBus(c+1995,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1190,"clock", false,-1);
    tracep->declBit(c+1719,"valid", false,-1);
    tracep->declBus(c+1992,"cmd", false,-1, 7,0);
    tracep->declBus(c+1994,"addr", false,-1, 31,0);
    tracep->declBus(c+738,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1750,"sck", false,-1);
    tracep->declBit(c+1751,"ce_n", false,-1);
    tracep->declBus(c+1895,"dio", false,-1, 3,0);
    tracep->declBus(c+2056,"IDLE", false,-1, 2,0);
    tracep->declBus(c+2007,"CTRL", false,-1, 2,0);
    tracep->declBus(c+2108,"ADDR", false,-1, 2,0);
    tracep->declBus(c+2109,"ARRG", false,-1, 2,0);
    tracep->declBus(c+2077,"READ", false,-1, 2,0);
    tracep->declBus(c+2110,"WRITE", false,-1, 2,0);
    tracep->declBus(c+2078,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+2080,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+2079,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+1167,"state", false,-1, 2,0);
    tracep->declBus(c+1896,"next", false,-1, 2,0);
    tracep->declBus(c+1168,"ctrl", false,-1, 7,0);
    tracep->declBus(c+1169,"addr", false,-1, 23,0);
    tracep->declBus(c+1170,"counter", false,-1, 7,0);
    tracep->declBus(c+1171,"dout", false,-1, 3,0);
    tracep->declBus(c+1172,"wr_hi", false,-1, 3,0);
    tracep->declBit(c+1173,"qpi", false,-1);
    tracep->declBit(c+1174,"douten", false,-1);
    tracep->declBus(c+1175,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1176,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1177,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1178,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+1179,"RD_FIRST", false,-1, 7,0);
    tracep->declBus(c+1180,"RD_LAST", false,-1, 7,0);
    tracep->declBus(c+1181,"WR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1182,"WR_LAST", false,-1, 7,0);
    tracep->declBus(c+1183,"rd_off", false,-1, 7,0);
    tracep->declBus(c+1184,"wr_off", false,-1, 7,0);
    tracep->declBus(c+1185,"read_byte", false,-1, 1,0);
    tracep->declBit(c+1186,"read_index", false,-1);
    tracep->declBus(c+1187,"write_byte", false,-1, 1,0);
    tracep->declBus(c+1188,"rd_idx", false,-1, 21,0);
    tracep->declBus(c+1189,"wr_idx", false,-1, 21,0);
    tracep->declBus(c+1897,"ctrl_done", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1193,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1812,"dqm", false,-1, 3,0);
    tracep->declBus(c+1822,"dq", false,-1, 31,0);
    tracep->declBit(c+1898,"sel", false,-1);
    tracep->declBit(c+1615,"broadcast_cmd", false,-1);
    tracep->pushNamePrefix("u_pair0 ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1996,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1812,"dqm", false,-1, 3,0);
    tracep->declBus(c+1822,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1996,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1820,"dqm", false,-1, 1,0);
    tracep->declBus(c+1823,"dq", false,-1, 15,0);
    tracep->declBus(c+2059,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2060,"MODE", false,-1, 31,0);
    tracep->declBus(c+2061,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2062,"READ", false,-1, 31,0);
    tracep->declBus(c+2064,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1616,"state", false,-1, 2,0);
    tracep->declBus(c+1925,"next", false,-1, 2,0);
    tracep->declBus(c+1617,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1618,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1619,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1921,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1620,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1621,"dq_oe", false,-1);
    tracep->declBus(c+1622,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1623,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1624+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1996,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1821,"dqm", false,-1, 1,0);
    tracep->declBus(c+1824,"dq", false,-1, 15,0);
    tracep->declBus(c+2059,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2060,"MODE", false,-1, 31,0);
    tracep->declBus(c+2061,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2062,"READ", false,-1, 31,0);
    tracep->declBus(c+2064,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1628,"state", false,-1, 2,0);
    tracep->declBus(c+1926,"next", false,-1, 2,0);
    tracep->declBus(c+1629,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1630,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1631,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1921,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1632,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1633,"dq_oe", false,-1);
    tracep->declBus(c+1634,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1635,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1636+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pair1 ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1997,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1812,"dqm", false,-1, 3,0);
    tracep->declBus(c+1822,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1997,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1820,"dqm", false,-1, 1,0);
    tracep->declBus(c+1823,"dq", false,-1, 15,0);
    tracep->declBus(c+2059,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2060,"MODE", false,-1, 31,0);
    tracep->declBus(c+2061,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2062,"READ", false,-1, 31,0);
    tracep->declBus(c+2064,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1640,"state", false,-1, 2,0);
    tracep->declBus(c+1927,"next", false,-1, 2,0);
    tracep->declBus(c+1641,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1642,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1643,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1922,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1644,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1645,"dq_oe", false,-1);
    tracep->declBus(c+1646,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1647,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1648+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1952,"clk", false,-1);
    tracep->declBit(c+1809,"cke", false,-1);
    tracep->declBit(c+1997,"cs", false,-1);
    tracep->declBit(c+1194,"ras", false,-1);
    tracep->declBit(c+1195,"cas", false,-1);
    tracep->declBit(c+1196,"we", false,-1);
    tracep->declBus(c+1810,"a", false,-1, 12,0);
    tracep->declBus(c+1811,"ba", false,-1, 1,0);
    tracep->declBus(c+1821,"dqm", false,-1, 1,0);
    tracep->declBus(c+1824,"dq", false,-1, 15,0);
    tracep->declBus(c+2059,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2060,"MODE", false,-1, 31,0);
    tracep->declBus(c+2061,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2062,"READ", false,-1, 31,0);
    tracep->declBus(c+2064,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1652,"state", false,-1, 2,0);
    tracep->declBus(c+1928,"next", false,-1, 2,0);
    tracep->declBus(c+1653,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1654,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1655,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1922,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1656,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1657,"dq_oe", false,-1);
    tracep->declBus(c+1658,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1659,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1660+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1068,"araddr", false,-1, 31,0);
    tracep->declBit(c+1131,"arvalid", false,-1);
    tracep->declBit(c+1132,"arready", false,-1);
    tracep->declBus(c+2018,"arid", false,-1, 3,0);
    tracep->declBus(c+2019,"arlen", false,-1, 7,0);
    tracep->declBus(c+2013,"arburst", false,-1, 1,0);
    tracep->declBus(c+2108,"arsize", false,-1, 2,0);
    tracep->declBus(c+1133,"rdata", false,-1, 31,0);
    tracep->declBus(c+1134,"rresp", false,-1, 1,0);
    tracep->declBit(c+1135,"rvalid", false,-1);
    tracep->declBit(c+1136,"rready", false,-1);
    tracep->declBus(c+2018,"rid", false,-1, 3,0);
    tracep->declBit(c+1137,"rlast", false,-1);
    tracep->declBus(c+2055,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2016,"awvalid", false,-1);
    tracep->declBit(c+19,"awready", false,-1);
    tracep->declBus(c+2108,"awsize", false,-1, 2,0);
    tracep->declBus(c+2018,"awid", false,-1, 3,0);
    tracep->declBus(c+2019,"awlen", false,-1, 7,0);
    tracep->declBus(c+2013,"awburst", false,-1, 1,0);
    tracep->declBus(c+2055,"wdata", false,-1, 31,0);
    tracep->declBus(c+2018,"wstrb", false,-1, 3,0);
    tracep->declBit(c+2016,"wvalid", false,-1);
    tracep->declBit(c+20,"wready", false,-1);
    tracep->declBit(c+2121,"wlast", false,-1);
    tracep->declBus(c+1138,"bresp", false,-1, 1,0);
    tracep->declBit(c+1139,"bvalid", false,-1);
    tracep->declBit(c+2016,"bready", false,-1);
    tracep->declBus(c+1140,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1724,"araddr", false,-1, 31,0);
    tracep->declBit(c+1141,"arvalid", false,-1);
    tracep->declBit(c+1998,"arready", false,-1);
    tracep->declBus(c+2018,"arid", false,-1, 3,0);
    tracep->declBus(c+2019,"arlen", false,-1, 7,0);
    tracep->declBus(c+2013,"arburst", false,-1, 1,0);
    tracep->declBus(c+1142,"arsize", false,-1, 2,0);
    tracep->declBus(c+1999,"rdata", false,-1, 31,0);
    tracep->declBus(c+98,"rresp", false,-1, 1,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBit(c+80,"rready", false,-1);
    tracep->declBus(c+2000,"rid", false,-1, 3,0);
    tracep->declBit(c+1976,"rlast", false,-1);
    tracep->declBus(c+1724,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1143,"awvalid", false,-1);
    tracep->declBit(c+1923,"awready", false,-1);
    tracep->declBus(c+739,"awsize", false,-1, 2,0);
    tracep->declBus(c+2018,"awid", false,-1, 3,0);
    tracep->declBus(c+2019,"awlen", false,-1, 7,0);
    tracep->declBus(c+2013,"awburst", false,-1, 1,0);
    tracep->declBus(c+1725,"wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1144,"wvalid", false,-1);
    tracep->declBit(c+2001,"wready", false,-1);
    tracep->declBit(c+2017,"wlast", false,-1);
    tracep->declBus(c+162,"bresp", false,-1, 1,0);
    tracep->declBit(c+151,"bvalid", false,-1);
    tracep->declBit(c+152,"bready", false,-1);
    tracep->declBus(c+2002,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1720,"araddr", false,-1, 31,0);
    tracep->declBit(c+1729,"arvalid", false,-1);
    tracep->declBit(c+1903,"arready", false,-1);
    tracep->declBus(c+2018,"arid", false,-1, 3,0);
    tracep->declBus(c+1721,"arlen", false,-1, 7,0);
    tracep->declBus(c+1723,"arburst", false,-1, 1,0);
    tracep->declBus(c+1722,"arsize", false,-1, 2,0);
    tracep->declBus(c+91,"rdata", false,-1, 31,0);
    tracep->declBus(c+92,"rresp", false,-1, 1,0);
    tracep->declBit(c+66,"rvalid", false,-1);
    tracep->declBit(c+77,"rready", false,-1);
    tracep->declBus(c+90,"rid", false,-1, 3,0);
    tracep->declBit(c+93,"rlast", false,-1);
    tracep->declBus(c+1724,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1727,"awvalid", false,-1);
    tracep->declBit(c+1902,"awready", false,-1);
    tracep->declBus(c+739,"awsize", false,-1, 2,0);
    tracep->declBus(c+2018,"awid", false,-1, 3,0);
    tracep->declBus(c+2019,"awlen", false,-1, 7,0);
    tracep->declBus(c+2013,"awburst", false,-1, 1,0);
    tracep->declBus(c+1725,"wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1728,"wvalid", false,-1);
    tracep->declBit(c+1969,"wready", false,-1);
    tracep->declBit(c+2017,"wlast", false,-1);
    tracep->declBus(c+1970,"bresp", false,-1, 1,0);
    tracep->declBit(c+139,"bvalid", false,-1);
    tracep->declBit(c+149,"bready", false,-1);
    tracep->declBus(c+158,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1720,"araddr", false,-1, 31,0);
    tracep->declBit(c+1744,"arvalid", false,-1);
    tracep->declBit(c+1745,"arready", false,-1);
    tracep->declBus(c+2018,"arid", false,-1, 3,0);
    tracep->declBus(c+2003,"arlen", false,-1, 7,0);
    tracep->declBus(c+1723,"arburst", false,-1, 1,0);
    tracep->declBus(c+2004,"arsize", false,-1, 2,0);
    tracep->declBus(c+1145,"rdata", false,-1, 31,0);
    tracep->declBus(c+1146,"rresp", false,-1, 1,0);
    tracep->declBit(c+1147,"rvalid", false,-1);
    tracep->declBit(c+2005,"rready", false,-1);
    tracep->declBus(c+1148,"rid", false,-1, 3,0);
    tracep->declBit(c+1149,"rlast", false,-1);
    tracep->declBus(c+1724,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1746,"awvalid", false,-1);
    tracep->declBit(c+1747,"awready", false,-1);
    tracep->declBus(c+739,"awsize", false,-1, 2,0);
    tracep->declBus(c+2018,"awid", false,-1, 3,0);
    tracep->declBus(c+2019,"awlen", false,-1, 7,0);
    tracep->declBus(c+2013,"awburst", false,-1, 1,0);
    tracep->declBus(c+1725,"wdata", false,-1, 31,0);
    tracep->declBus(c+1726,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1748,"wvalid", false,-1);
    tracep->declBit(c+1749,"wready", false,-1);
    tracep->declBit(c+2017,"wlast", false,-1);
    tracep->declBus(c+1150,"bresp", false,-1, 1,0);
    tracep->declBit(c+1151,"bvalid", false,-1);
    tracep->declBit(c+2006,"bready", false,-1);
    tracep->declBus(c+1152,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1153,"araddr", false,-1, 31,0);
    tracep->declBit(c+1154,"arvalid", false,-1);
    tracep->declBit(c+1924,"arready", false,-1);
    tracep->declBus(c+2018,"arid", false,-1, 3,0);
    tracep->declBus(c+1155,"arlen", false,-1, 7,0);
    tracep->declBus(c+2014,"arburst", false,-1, 1,0);
    tracep->declBus(c+2108,"arsize", false,-1, 2,0);
    tracep->declBus(c+99,"rdata", false,-1, 31,0);
    tracep->declBus(c+98,"rresp", false,-1, 1,0);
    tracep->declBit(c+81,"rvalid", false,-1);
    tracep->declBit(c+82,"rready", false,-1);
    tracep->declBus(c+2000,"rid", false,-1, 3,0);
    tracep->declBit(c+100,"rlast", false,-1);
    tracep->declBus(c+2055,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2016,"awvalid", false,-1);
    tracep->declBit(c+2122,"awready", false,-1);
    tracep->declBus(c+2108,"awsize", false,-1, 2,0);
    tracep->declBus(c+2018,"awid", false,-1, 3,0);
    tracep->declBus(c+2019,"awlen", false,-1, 7,0);
    tracep->declBus(c+2013,"awburst", false,-1, 1,0);
    tracep->declBus(c+2055,"wdata", false,-1, 31,0);
    tracep->declBus(c+2018,"wstrb", false,-1, 3,0);
    tracep->declBit(c+2016,"wvalid", false,-1);
    tracep->declBit(c+2123,"wready", false,-1);
    tracep->declBit(c+2124,"wlast", false,-1);
    tracep->declBus(c+2125,"bresp", false,-1, 1,0);
    tracep->declBit(c+2126,"bvalid", false,-1);
    tracep->declBit(c+2016,"bready", false,-1);
    tracep->declBus(c+2127,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->pushNamePrefix("asic ");
    tracep->pushNamePrefix("cpu ");
    tracep->pushNamePrefix("cpu ");
    tracep->pushNamePrefix("bus_clint\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_icache\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_ifu\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_lsu\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_master\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mbus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_clint ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_xbar ");
    tracep->pushNamePrefix("clint_m\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_s\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_s\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_m\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(vlSelf, tracep);
    tracep->popNamePrefix(6);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hc929778a__0;
    VlWide<3>/*95:0*/ __Vtemp_hc929534b__0;
    VlWide<3>/*95:0*/ __Vtemp_hc929520c__0;
    VlWide<3>/*95:0*/ __Vtemp_hc92951cd__0;
    VlWide<3>/*95:0*/ __Vtemp_hc929528f__0;
    VlWide<3>/*95:0*/ __Vtemp_hc929524e__0;
    // Body
    __Vtemp_hc929778a__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][0U];
    __Vtemp_hc929778a__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][1U];
    __Vtemp_hc929778a__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][2U];
    bufp->fullWData(oldp+1,(__Vtemp_hc929778a__0),67);
    __Vtemp_hc929534b__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][0U];
    __Vtemp_hc929534b__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][1U];
    __Vtemp_hc929534b__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][2U];
    bufp->fullWData(oldp+4,(__Vtemp_hc929534b__0),67);
    __Vtemp_hc929520c__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][0U];
    __Vtemp_hc929520c__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][1U];
    __Vtemp_hc929520c__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][2U];
    bufp->fullWData(oldp+7,(__Vtemp_hc929520c__0),67);
    __Vtemp_hc92951cd__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][0U];
    __Vtemp_hc92951cd__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][1U];
    __Vtemp_hc92951cd__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][2U];
    bufp->fullWData(oldp+10,(__Vtemp_hc92951cd__0),67);
    __Vtemp_hc929528f__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][0U];
    __Vtemp_hc929528f__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][1U];
    __Vtemp_hc929528f__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][2U];
    bufp->fullWData(oldp+13,(__Vtemp_hc929528f__0),67);
    __Vtemp_hc929524e__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][0U];
    __Vtemp_hc929524e__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][1U];
    __Vtemp_hc929524e__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][2U];
    bufp->fullWData(oldp+16,(__Vtemp_hc929524e__0),67);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.awready));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.wready));
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+35,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+36,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+37,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+38,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+39,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+40,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+41,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+42,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+43,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+44,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+45,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+46,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+47,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+48,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+49,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+51,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+52,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+53,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+54,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+55,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+56,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+58,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+59,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+60,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+61,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+62,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+63,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+64,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+65,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_tgt_rvalid));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rvalid));
    bufp->fullBit(oldp+82,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready));
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving));
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+94,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_next_state),2);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rresp),2);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rdata),32);
    bufp->fullBit(oldp+100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rlast));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+108,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+109,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+110,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+111,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+112,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+113,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+114,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+115,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+116,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+117,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+118,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+119,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+120,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+121,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+124,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+125,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+126,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+127,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+128,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+129,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+130,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+131,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+132,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+133,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+134,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+135,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+136,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+137,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.bready));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw_avail));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bvalid));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullSData(oldp+159,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullCData(oldp+162,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bresp),2);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+179,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+180,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+182,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+183,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+184,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+185,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+186,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+187,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+188,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+189,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+193,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+194,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+195,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+196,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+197,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+208,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+212,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+213,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+214,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+218,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+219,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+220,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+221,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+284,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+288,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+292,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+293,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+294,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+295,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+299,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+301,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+334,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+343,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+344,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+396,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+410,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+411,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+412,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+413,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+474,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+484,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+604,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullWData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg),1024);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullIData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[16]),32);
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[17]),32);
    bufp->fullIData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[18]),32);
    bufp->fullIData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[19]),32);
    bufp->fullIData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[20]),32);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[21]),32);
    bufp->fullIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[22]),32);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[23]),32);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[24]),32);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[25]),32);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[26]),32);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[27]),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[28]),32);
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[29]),32);
    bufp->fullIData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[30]),32);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[31]),32);
    bufp->fullIData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+730,((0x7ffffU & (((IData)(0x280U) 
                                            * ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                      - (IData)(0x24U)))
                                                : 0U)) 
                                           + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                     - (IData)(0x91U)))
                                               : 0U)))),19);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q),32);
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync_q));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync_q));
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__buffer),8);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bits),4);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullCData(oldp+739,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize),3);
    bufp->fullQData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag),64);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[0]),2);
    bufp->fullCData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[1]),2);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[2]),2);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[3]),2);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[4]),2);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[5]),2);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[6]),2);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[7]),2);
    bufp->fullCData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[8]),2);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[9]),2);
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[10]),2);
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[11]),2);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[12]),2);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[13]),2);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[14]),2);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[15]),2);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[16]),2);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[17]),2);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[18]),2);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[19]),2);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[20]),2);
    bufp->fullCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[21]),2);
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[22]),2);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[23]),2);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[24]),2);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[25]),2);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[26]),2);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[27]),2);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[28]),2);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[29]),2);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[30]),2);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag_amt[31]),2);
    bufp->fullQData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_work_cyc),64);
    bufp->fullQData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_block_cyc),64);
    bufp->fullIData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i));
    bufp->fullCData(oldp+826,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+827,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+828,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w),32);
    bufp->fullQData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blockf_cyc),64);
    bufp->fullQData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blcokbl_cyc),64);
    bufp->fullQData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blcokbw_cyc),64);
    bufp->fullQData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_work_cyc),64);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ew));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__in_ready));
    bufp->fullBit(oldp+842,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)))));
    bufp->fullCData(oldp+843,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save))
                                ? 2U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save))
                                         ? 1U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save)) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save))
                                                  ? 0U
                                                  : 3U)))),2);
    bufp->fullBit(oldp+844,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save))));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save),5);
    bufp->fullCData(oldp+846,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save)),5);
    bufp->fullCData(oldp+847,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save)),5);
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_exu_rd));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_lsu_rd));
    bufp->fullQData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blockf_cyc),64);
    bufp->fullQData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blcokb_cyc),64);
    bufp->fullQData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_work_cyc),64);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blockf));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save),5);
    bufp->fullQData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_blockf_cyc),64);
    bufp->fullQData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_work_cyc),64);
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_blockf));
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_release),5);
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu),5);
    bufp->fullIData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu),32);
    bufp->fullIData(oldp+868,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag)),32);
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end));
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus),32);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc),32);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause),32);
    bufp->fullIData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec),32);
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle),32);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save),32);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save),32);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save));
    bufp->fullBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save));
    bufp->fullIData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save),32);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save),32);
    bufp->fullIData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save),32);
    bufp->fullIData(oldp+928,((((((((((0x300U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w) 
                                      | (0x305U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                     | (0x341U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                    | (0x342U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                   | (0xb00U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                  | (0xb80U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                 | (0xf11U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                | (0xf12U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                                ? ((0x300U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus
                                    : ((0x305U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec
                                        : ((0x341U 
                                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc
                                            : ((0x342U 
                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause
                                                : (
                                                   (0xb00U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle
                                                    : 
                                                   ((0xb80U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh
                                                     : 
                                                    ((0xf11U 
                                                      == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid
                                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid)))))))
                                : 0U)),32);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next),2);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read));
    bufp->fullBit(oldp+932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save)))));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ls));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb));
    bufp->fullBit(oldp+935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_ls) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb))));
    bufp->fullBit(oldp+936,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save)))));
    bufp->fullBit(oldp+937,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save))))))))))));
    bufp->fullBit(oldp+938,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save)))));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type));
    bufp->fullBit(oldp+941,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type)) 
                                   & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save))))))));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__gpr_read_invalid));
    bufp->fullCData(oldp+943,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),5);
    bufp->fullWData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[0]),128);
    bufp->fullWData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[1]),128);
    bufp->fullWData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[2]),128);
    bufp->fullWData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[3]),128);
    bufp->fullWData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[4]),128);
    bufp->fullWData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[5]),128);
    bufp->fullWData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[6]),128);
    bufp->fullWData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[7]),128);
    bufp->fullWData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[8]),128);
    bufp->fullWData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[9]),128);
    bufp->fullWData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[10]),128);
    bufp->fullWData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[11]),128);
    bufp->fullWData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[12]),128);
    bufp->fullWData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[13]),128);
    bufp->fullWData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[14]),128);
    bufp->fullWData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[15]),128);
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[0]),24);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[1]),24);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[2]),24);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[3]),24);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[4]),24);
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[5]),24);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[6]),24);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[7]),24);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[8]),24);
    bufp->fullIData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[9]),24);
    bufp->fullIData(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[10]),24);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[11]),24);
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[12]),24);
    bufp->fullIData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[13]),24);
    bufp->fullIData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[14]),24);
    bufp->fullIData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[15]),24);
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0]));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1]));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2]));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3]));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4]));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5]));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6]));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7]));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[8]));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[9]));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[10]));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[11]));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[12]));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[13]));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[14]));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[15]));
    bufp->fullIData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save),32);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save),2);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__bid_save),4);
    bufp->fullIData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rdata_save),32);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat),2);
    bufp->fullIData(oldp+1045,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                >> 8U)),24);
    bufp->fullCData(oldp+1046,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                        >> 4U))),4);
    bufp->fullIData(oldp+1047,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                      >> 2U))),32);
    bufp->fullIData(oldp+1048,((0xfffffff0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save)),32);
    bufp->fullIData(oldp+1049,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat) 
                                << 5U)),32);
    bufp->fullCData(oldp+1050,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable));
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state),3);
    bufp->fullIData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1054,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)));
    bufp->fullCData(oldp+1055,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),7);
    bufp->fullCData(oldp+1056,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1057,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w),32);
    bufp->fullIData(oldp+1059,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+1060,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1061,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 7U)))))),32);
    bufp->fullIData(oldp+1062,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1063,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x14U)),32);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__error_save),2);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__master_validation_error_save));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next),2);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__error_save),2);
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save));
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save),2);
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save));
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save),32);
    bufp->fullIData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save),32);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out));
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out),32);
    bufp->fullBit(oldp+1080,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
    bufp->fullBit(oldp+1081,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))));
    bufp->fullBit(oldp+1082,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save))));
    bufp->fullBit(oldp+1083,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save))));
    bufp->fullBit(oldp+1084,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))));
    bufp->fullQData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime),64);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state),2);
    bufp->fullIData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rdata_save),32);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rresp_save),2);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rid_save),4);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bid_save),4);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_busy));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint));
    bufp->fullIData(oldp+1095,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__iag 
                                        >> 0x20U))),32);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[0]),2);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[1]),2);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[2]),2);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[3]),2);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[4]),2);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[5]),2);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[6]),2);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[7]),2);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[8]),2);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[9]),2);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[10]),2);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[11]),2);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[12]),2);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[13]),2);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[14]),2);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[15]),2);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[16]),2);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[17]),2);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[18]),2);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[19]),2);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[20]),2);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[21]),2);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[22]),2);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[23]),2);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[24]),2);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[25]),2);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[26]),2);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[27]),2);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[28]),2);
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[29]),2);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[30]),2);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__wbu__iag_amt[31]),2);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__wb_type));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next));
    bufp->fullBit(oldp+1131,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arvalid));
    bufp->fullBit(oldp+1132,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arready));
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rdata),32);
    bufp->fullCData(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rresp),2);
    bufp->fullBit(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rvalid));
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rready));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rlast));
    bufp->fullCData(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bresp),2);
    bufp->fullBit(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bvalid));
    bufp->fullCData(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bid),4);
    bufp->fullBit(oldp+1141,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize),3);
    bufp->fullBit(oldp+1143,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
    bufp->fullBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
    bufp->fullIData(oldp+1145,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata),32);
    bufp->fullCData(oldp+1146,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp),2);
    bufp->fullBit(oldp+1147,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid));
    bufp->fullCData(oldp+1148,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rid),4);
    bufp->fullBit(oldp+1149,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast));
    bufp->fullCData(oldp+1150,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bresp),2);
    bufp->fullBit(oldp+1151,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bvalid));
    bufp->fullCData(oldp+1152,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bid),4);
    bufp->fullIData(oldp+1153,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.araddr),32);
    bufp->fullBit(oldp+1154,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid));
    bufp->fullCData(oldp+1155,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable)
                                 ? 3U : 0U)),8);
    bufp->fullIData(oldp+1156,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save 
                                | (((- (IData)((2U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out)) 
                                   | ((0xffU & ((- (IData)(
                                                           ((0U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)))) 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)) 
                                      | ((0xffffU & 
                                          ((- (IData)(
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)))) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)) 
                                         | (((- (IData)(
                                                        ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))))) 
                                             & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                                >> 7U)))) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))) 
                                            | ((- (IData)(
                                                          ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                           & (1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))))) 
                                               & (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))))))))),32);
    bufp->fullIData(oldp+1157,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+1159,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1160,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1161,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1162,(VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+1163,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+1164,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+1165,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+1166,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl),8);
    bufp->fullIData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_hi),4);
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi));
    bufp->fullBit(oldp+1174,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))));
    bufp->fullCData(oldp+1175,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 1U : 7U)),8);
    bufp->fullCData(oldp+1176,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 2U : 8U)),8);
    bufp->fullCData(oldp+1177,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+1179,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+1180,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0x15U : 0x1bU)),8);
    bufp->fullCData(oldp+1181,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+1182,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0xfU : 0x15U)),8);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off),8);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off),8);
    bufp->fullCData(oldp+1185,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off) 
                                      >> 1U))),2);
    bufp->fullBit(oldp+1186,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off))));
    bufp->fullCData(oldp+1187,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                                      >> 1U))),2);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_idx),22);
    bufp->fullIData(oldp+1189,((0x3fffffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                             + (3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                                                   >> 1U))))),22);
    bufp->fullBit(oldp+1190,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1193,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1194,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1195,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1196,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save),32);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1202,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+1204,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state),2);
    bufp->fullQData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0]),33);
    bufp->fullQData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1]),33);
    bufp->fullQData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2]),33);
    bufp->fullQData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3]),33);
    bufp->fullQData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4]),33);
    bufp->fullQData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5]),33);
    bufp->fullQData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6]),33);
    bufp->fullQData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7]),33);
    bufp->fullQData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8]),33);
    bufp->fullQData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9]),33);
    bufp->fullQData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[10]),33);
    bufp->fullQData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[11]),33);
    bufp->fullQData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[12]),33);
    bufp->fullQData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[13]),33);
    bufp->fullQData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[14]),33);
    bufp->fullQData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[15]),33);
    bufp->fullQData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[16]),33);
    bufp->fullQData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[17]),33);
    bufp->fullQData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[18]),33);
    bufp->fullQData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[19]),33);
    bufp->fullQData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[20]),33);
    bufp->fullQData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[21]),33);
    bufp->fullQData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[22]),33);
    bufp->fullQData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[23]),33);
    bufp->fullQData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[24]),33);
    bufp->fullQData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[25]),33);
    bufp->fullQData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[26]),33);
    bufp->fullQData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[27]),33);
    bufp->fullQData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[28]),33);
    bufp->fullQData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[29]),33);
    bufp->fullQData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[30]),33);
    bufp->fullQData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[31]),33);
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0]),32);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1]),32);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2]),32);
    bufp->fullIData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3]),32);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4]),32);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5]),32);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6]),32);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7]),32);
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8]),32);
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9]),32);
    bufp->fullIData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[10]),32);
    bufp->fullIData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[11]),32);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[12]),32);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[13]),32);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[14]),32);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[15]),32);
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[16]),32);
    bufp->fullIData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[17]),32);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[18]),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[19]),32);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[20]),32);
    bufp->fullIData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[21]),32);
    bufp->fullIData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[22]),32);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[23]),32);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[24]),32);
    bufp->fullIData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[25]),32);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[26]),32);
    bufp->fullIData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[27]),32);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[28]),32);
    bufp->fullIData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[29]),32);
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[30]),32);
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[31]),32);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat),6);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat),6);
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save),5);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save),4);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save),2);
    bufp->fullQData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter),33);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_received));
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save),4);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_save),2);
    bufp->fullIData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullSData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r),16);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r),8);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r),8);
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r),8);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r),8);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter),8);
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc));
    bufp->fullBit(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok));
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode),8);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1327,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                         ? (1U & (0x35U 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                             <= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 1U
                                                  : 7U))
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 0xbU
                                                  : 0xeU)
                                                 : 
                                                (1U 
                                                 & (0xebU 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(7U) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U))))
                                                 : 0U))))),4);
    bufp->fullBit(oldp+1328,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0))));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    bufp->fullBit(oldp+1334,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1339,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 1U : 7U)),8);
    bufp->fullCData(oldp+1340,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 2U : 8U)),8);
    bufp->fullCData(oldp+1341,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+1342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+1343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+1344,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? 0xeU
                                             : 0x14U)))),8);
    bufp->fullCData(oldp+1345,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                     ? 0xbU : 0xeU)
                                 : (1U & (0xebU >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))),4);
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8),8);
    bufp->fullCData(oldp+1347,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+1348,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                         ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 4U)))
                                         : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)))))),4);
    bufp->fullCData(oldp+1349,((0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                           ? 7U : 0xaU)))),8);
    bufp->fullCData(oldp+1350,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 7U
                                                  : 0xaU)))),2);
    bufp->fullBit(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullCData(oldp+1354,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+1355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                     ? 8U : 3U) : (1U 
                                                   & (0x38U 
                                                      >> 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))),4);
    bufp->fullCData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8),8);
    bufp->fullCData(oldp+1357,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+1358,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                         ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 4U)))
                                         : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0xcU))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x14U)))))),4);
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8),8);
    bufp->fullCData(oldp+1360,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))),3);
    bufp->fullCData(oldp+1361,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                      >> 1U))),2);
    bufp->fullBit(oldp+1362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1377,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1378,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1380,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1381,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1382,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1383,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1384,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1392,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),14);
    bufp->fullSData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),14);
    bufp->fullSData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),14);
    bufp->fullSData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),14);
    bufp->fullCData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o),32);
    bufp->fullBit(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack));
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen));
    bufp->fullCData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr),5);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat),32);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req));
    bufp->fullBit(oldp+1428,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
    bufp->fullIData(oldp+1429,((0x3000000U | (0xffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr))),32);
    bufp->fullIData(oldp+1430,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                    >> 0x18U))))),32);
    bufp->fullSData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1438,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1439,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1440,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1441,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1442,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1443,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1444,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1448,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1450,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1451,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1453,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1457,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1458,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1460,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1478,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1479,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1480,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1481,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1482,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1483,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1484,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1487,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1488,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1489,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1508,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xaU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xbU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xcU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xdU] 
                                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1515,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1534,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1535,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1536,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1537,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1538,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1557,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1558,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1559,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1560,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1561,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1563,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1582,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1599,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1610,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1611,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1612,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__next),2);
    bufp->fullBit(oldp+1614,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+1615,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd));
    bufp->fullCData(oldp+1616,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1625,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1627,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1629,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1633,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1652,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1653,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1655,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1656,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1658,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1659,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1660,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1662,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush));
    bufp->fullIData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush),32);
    bufp->fullIData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1),32);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w),32);
    bufp->fullIData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata),32);
    bufp->fullCData(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu),5);
    bufp->fullIData(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__new_pc),32);
    bufp->fullIData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft),32);
    bufp->fullCData(oldp+1673,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),5);
    bufp->fullIData(oldp+1674,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1))),32);
    bufp->fullIData(oldp+1675,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1))),32);
    bufp->fullIData(oldp+1676,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1))),32);
    bufp->fullIData(oldp+1677,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1678,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1679,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1680,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted),32);
    bufp->fullIData(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+1686,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1687,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1691,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1694,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullIData(oldp+1695,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1696,(((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x10002000U))),32);
    bufp->fullCData(oldp+1697,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),4);
    bufp->fullCData(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync),2);
    bufp->fullCData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync),2);
    bufp->fullBit(oldp+1700,((IData)((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))));
    bufp->fullBit(oldp+1701,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                    >> 1U))));
    bufp->fullCData(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1703,((0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata
                                          : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                               >> 1U) 
                                              & (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                 >> 8U)
                                              : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                   >> 2U) 
                                                  & (1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                  >> 0x10U)
                                                  : 
                                                 ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                    >> 3U) 
                                                   & (1U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                   >> 0x18U)
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                     >> 2U) 
                                                    & (2U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                    >> 0x10U)
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata))))))),8);
    bufp->fullCData(oldp+1704,((0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 8U)
                                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 0x18U)))),8);
    bufp->fullCData(oldp+1705,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1706,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata),32);
    bufp->fullIData(oldp+1708,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1709,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1710,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel));
    bufp->fullCData(oldp+1712,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1715,((0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 2U))),19);
    bufp->fullCData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1719,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1720,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr),32);
    bufp->fullCData(oldp+1721,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen),8);
    bufp->fullCData(oldp+1722,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize),3);
    bufp->fullCData(oldp+1723,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? 0U : 1U)),2);
    bufp->fullIData(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save),32);
    bufp->fullIData(oldp+1725,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata),32);
    bufp->fullCData(oldp+1726,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb),4);
    bufp->fullBit(oldp+1727,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.awvalid));
    bufp->fullBit(oldp+1728,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.wvalid));
    bufp->fullBit(oldp+1729,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1735,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save)));
    bufp->fullIData(oldp+1736,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save)),32);
    bufp->fullIData(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rdata_now),32);
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rresp_now),2);
    bufp->fullBit(oldp+1739,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                         >> 0x10U))));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_sel_clint));
    bufp->fullCData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state),2);
    bufp->fullBit(oldp+1742,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))));
    bufp->fullBit(oldp+1743,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))));
    bufp->fullBit(oldp+1744,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid));
    bufp->fullBit(oldp+1745,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready));
    bufp->fullBit(oldp+1746,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.awvalid));
    bufp->fullBit(oldp+1747,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.awready));
    bufp->fullBit(oldp+1748,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wvalid));
    bufp->fullBit(oldp+1749,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wready));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
    bufp->fullCData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullBit(oldp+1761,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))));
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1770,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1771,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1773,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1774,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1780,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access));
    bufp->fullCData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr));
    bufp->fullBit(oldp+1793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT),8);
    bufp->fullCData(oldp+1795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr),5);
    bufp->fullIData(oldp+1796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i),32);
    bufp->fullCData(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel),4);
    bufp->fullBit(oldp+1798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we));
    bufp->fullBit(oldp+1799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc));
    bufp->fullIData(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullBit(oldp+1803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1805,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullSData(oldp+1810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen));
    bufp->fullCData(oldp+1820,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1821,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1822,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1823,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1824,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+1825,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+1827,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1830,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1831,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1838,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1849,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1861,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1862,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1863,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1864,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1865,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1866,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1867,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1876,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1877,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1878,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1879,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1884,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1892,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1895,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullCData(oldp+1896,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next),3);
    bufp->fullCData(oldp+1897,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done),8);
    bufp->fullBit(oldp+1898,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullBit(oldp+1912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1917,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1918,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1919,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullCData(oldp+1920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+1922,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullBit(oldp+1923,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awready));
    bufp->fullBit(oldp+1924,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arready));
    bufp->fullCData(oldp+1925,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1926,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next),3);
    bufp->fullCData(oldp+1927,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next),3);
    bufp->fullBit(oldp+1929,(vlSelf->clock));
    bufp->fullBit(oldp+1930,(vlSelf->reset));
    bufp->fullSData(oldp+1931,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1932,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1933,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1934,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1935,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1936,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1937,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1938,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1939,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1940,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1941,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1942,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1943,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1944,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1945,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1946,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1947,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1948,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1949,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1950,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1951,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1952,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1953,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                [(0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 2U))]
                                 : 0U)),32);
    bufp->fullBit(oldp+1954,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1955,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1956,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    bufp->fullIData(oldp+1957,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)),32);
    bufp->fullIData(oldp+1958,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1959,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1960,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullQData(oldp+1962,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1964,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullCData(oldp+1966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1967,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1968,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1969,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1970,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullBit(oldp+1971,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready)))));
    bufp->fullBit(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next),3);
    bufp->fullCData(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next),3);
    bufp->fullCData(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next),2);
    bufp->fullBit(oldp+1976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullBit(oldp+1977,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))));
    bufp->fullBit(oldp+1978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+1979,((0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                         <= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                              ? 1U : 7U))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 8U
                                                 : 3U)
                                             : (1U 
                                                & (0x38U 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                             <= ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 7U
                                                  : 0xdU))
                                             ? ((4U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0xcU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U))))
                                             : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                                 <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                                  ? 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                                  >> 
                                                  (0x18U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                      << 2U)))
                                                  : 
                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x18U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                          << 2U))))))
                                                 : 0U))))),4);
    bufp->fullBit(oldp+1980,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1981,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd)
                                     ? 2U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                    ? 
                                                   (((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                                                      ? 0U
                                                      : 2U)
                                                     : 0U)))),2);
    bufp->fullCData(oldp+1982,((0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                            >> (0x18U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                   << 2U)))
                                         : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                            >> (0x1fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x18U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                       << 2U)))))))),4);
    bufp->fullCData(oldp+1983,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1984,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | ((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen)) 
                                             << 4U))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? 0x10U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                 << 5U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1986,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid))));
    bufp->fullSData(oldp+1987,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1989,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1990,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))));
    bufp->fullBit(oldp+1991,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1992,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1993,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1994,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1995,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1996,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd)) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+1997,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0x1aU)) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd)))))));
    bufp->fullBit(oldp+1998,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready)))));
    bufp->fullIData(oldp+1999,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                 ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
    bufp->fullCData(oldp+2000,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+2001,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_sel_clint)
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullCData(oldp+2002,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5))),4);
    bufp->fullCData(oldp+2003,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable)
                                          ? 3U : 0U))),8);
    bufp->fullCData(oldp+2004,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize)
                                 : 2U)),3);
    bufp->fullBit(oldp+2005,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint) 
                               & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)))
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready)
                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint) 
                                   & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready)))));
    bufp->fullBit(oldp+2006,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_busy) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready))));
    bufp->fullCData(oldp+2007,(1U),3);
    bufp->fullIData(oldp+2008,(0x64U),32);
    bufp->fullIData(oldp+2009,(0x3e8U),32);
    bufp->fullIData(oldp+2010,(0xaU),32);
    bufp->fullIData(oldp+2011,(0xa0000000U),32);
    bufp->fullIData(oldp+2012,(0xbfffffffU),32);
    bufp->fullCData(oldp+2013,(0U),2);
    bufp->fullCData(oldp+2014,(1U),2);
    bufp->fullCData(oldp+2015,(2U),2);
    bufp->fullBit(oldp+2016,(0U));
    bufp->fullBit(oldp+2017,(1U));
    bufp->fullCData(oldp+2018,(0U),4);
    bufp->fullCData(oldp+2019,(0U),8);
    bufp->fullIData(oldp+2020,(0x20U),32);
    bufp->fullIData(oldp+2021,(6U),32);
    bufp->fullIData(oldp+2022,(5U),32);
    bufp->fullIData(oldp+2023,(9U),32);
    bufp->fullSData(oldp+2024,(1U),16);
    bufp->fullBit(oldp+2025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+2026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+2027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+2028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+2029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+2030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+2031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+2032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+2033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+2034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+2035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+2036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+2037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+2038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+2039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+2040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+2041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+2042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+2043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+2044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+2045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+2046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+2047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+2048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+2049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+2050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+2051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+2052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+2053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+2054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+2055,(0U),32);
    bufp->fullCData(oldp+2056,(0U),3);
    bufp->fullBit(oldp+2057,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__idu__out_instr)));
    bufp->fullIData(oldp+2058,((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__idu__out_instr)),32);
    bufp->fullIData(oldp+2059,(0U),32);
    bufp->fullIData(oldp+2060,(1U),32);
    bufp->fullIData(oldp+2061,(2U),32);
    bufp->fullIData(oldp+2062,(3U),32);
    bufp->fullIData(oldp+2063,(0x10U),32);
    bufp->fullIData(oldp+2064,(4U),32);
    bufp->fullIData(oldp+2065,(0x18U),32);
    bufp->fullIData(oldp+2066,(0x80U),32);
    bufp->fullCData(oldp+2067,(3U),8);
    bufp->fullCData(oldp+2068,(3U),4);
    bufp->fullCData(oldp+2069,(0xaU),4);
    bufp->fullCData(oldp+2070,(0xbU),4);
    bufp->fullIData(oldp+2071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellout__idu__out_instr),32);
    bufp->fullIData(oldp+2072,(0x2000000U),32);
    bufp->fullIData(oldp+2073,(0x2000004U),32);
    bufp->fullBit(oldp+2074,(0U));
    bufp->fullBit(oldp+2075,(1U));
    bufp->fullIData(oldp+2076,(0x10002000U),32);
    bufp->fullCData(oldp+2077,(4U),3);
    bufp->fullCData(oldp+2078,(0xebU),8);
    bufp->fullCData(oldp+2079,(0x35U),8);
    bufp->fullCData(oldp+2080,(0x38U),8);
    bufp->fullIData(oldp+2081,(0x19U),32);
    bufp->fullIData(oldp+2082,(0xdU),32);
    bufp->fullIData(oldp+2083,(0xbU),32);
    bufp->fullIData(oldp+2084,(0x1aU),32);
    bufp->fullIData(oldp+2085,(0x2000U),32);
    bufp->fullIData(oldp+2086,(0x2710U),32);
    bufp->fullIData(oldp+2087,(0x30cU),32);
    bufp->fullCData(oldp+2088,(7U),4);
    bufp->fullCData(oldp+2089,(5U),4);
    bufp->fullCData(oldp+2090,(4U),4);
    bufp->fullCData(oldp+2091,(6U),4);
    bufp->fullCData(oldp+2092,(2U),4);
    bufp->fullCData(oldp+2093,(1U),4);
    bufp->fullSData(oldp+2094,(0x20U),13);
    bufp->fullCData(oldp+2095,(8U),4);
    bufp->fullCData(oldp+2096,(9U),4);
    bufp->fullIData(oldp+2097,(0x11U),32);
    bufp->fullIData(oldp+2098,(0x30000000U),32);
    bufp->fullIData(oldp+2099,(0x3fffffffU),32);
    bufp->fullIData(oldp+2100,(8U),32);
    bufp->fullCData(oldp+2101,(0U),5);
    bufp->fullCData(oldp+2102,(4U),5);
    bufp->fullCData(oldp+2103,(0x10U),5);
    bufp->fullCData(oldp+2104,(0x14U),5);
    bufp->fullCData(oldp+2105,(0x18U),5);
    bufp->fullIData(oldp+2106,(0x40U),32);
    bufp->fullIData(oldp+2107,(0x100U),32);
    bufp->fullCData(oldp+2108,(2U),3);
    bufp->fullCData(oldp+2109,(3U),3);
    bufp->fullCData(oldp+2110,(5U),3);
    bufp->fullIData(oldp+2111,(0x13U),32);
    bufp->fullSData(oldp+2112,(0x320U),10);
    bufp->fullSData(oldp+2113,(0x60U),10);
    bufp->fullSData(oldp+2114,(0x90U),10);
    bufp->fullSData(oldp+2115,(0x310U),10);
    bufp->fullSData(oldp+2116,(0x20dU),10);
    bufp->fullSData(oldp+2117,(2U),10);
    bufp->fullSData(oldp+2118,(0x23U),10);
    bufp->fullSData(oldp+2119,(0x203U),10);
    bufp->fullCData(oldp+2120,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+2121,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.wlast));
    bufp->fullBit(oldp+2122,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.awready));
    bufp->fullBit(oldp+2123,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wready));
    bufp->fullBit(oldp+2124,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wlast));
    bufp->fullCData(oldp+2125,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bresp),2);
    bufp->fullBit(oldp+2126,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bvalid));
    bufp->fullCData(oldp+2127,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bid),4);
}
