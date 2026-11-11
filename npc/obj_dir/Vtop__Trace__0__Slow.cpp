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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1863,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1864,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1865,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1866,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1867,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1868,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1869,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1870,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1871,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1872,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1873,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1874,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1875,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1876,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1877,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1878,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1879,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1880,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1881,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1882,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1863,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1864,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1865,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1866,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1867,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1868,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1869,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1870,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1871,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1872,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1873,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1874,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1875,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1876,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1877,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1878,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1879,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1880,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1881,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1882,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1141,"spi_sck", false,-1);
    tracep->declBus(c+1142,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1143,"spi_mosi", false,-1);
    tracep->declBit(c+1883,"spi_miso", false,-1);
    tracep->declBit(c+1881,"uart_rx", false,-1);
    tracep->declBit(c+1882,"uart_tx", false,-1);
    tracep->declBit(c+1682,"psram_sck", false,-1);
    tracep->declBit(c+1683,"psram_ce_n", false,-1);
    tracep->declBus(c+1827,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1884,"sdram_clk", false,-1);
    tracep->declBit(c+1741,"sdram_cke", false,-1);
    tracep->declBit(c+1144,"sdram_cs", false,-1);
    tracep->declBit(c+1145,"sdram_ras", false,-1);
    tracep->declBit(c+1146,"sdram_cas", false,-1);
    tracep->declBit(c+1147,"sdram_we", false,-1);
    tracep->declBus(c+1742,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1743,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1744,"sdram_dqm", false,-1, 3,0);
    tracep->declBit(c+1830,"sdram_sel", false,-1);
    tracep->declBus(c+1754,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1863,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1864,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1865,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1866,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1867,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1868,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1869,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1870,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1871,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1872,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1873,"ps2_clk", false,-1);
    tracep->declBit(c+1874,"ps2_data", false,-1);
    tracep->declBus(c+1875,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1876,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1877,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1878,"vga_hsync", false,-1);
    tracep->declBit(c+1879,"vga_vsync", false,-1);
    tracep->declBit(c+1880,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+178,"in_psel", false,-1);
    tracep->declBit(c+179,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBus(c+1615,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1684,"in_pready", false,-1);
    tracep->declBus(c+21,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1685,"in_pslverr", false,-1);
    tracep->declBus(c+1615,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1686,"out_psel", false,-1);
    tracep->declBit(c+1687,"out_penable", false,-1);
    tracep->declBus(c+1940,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1616,"out_pwrite", false,-1);
    tracep->declBus(c+1617,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1688,"out_pready", false,-1);
    tracep->declBus(c+22,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1689,"out_pslverr", false,-1);
    tracep->declBus(c+1941,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1942,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1943,"R", false,-1, 31,0);
    tracep->declBus(c+1944,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+1946,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1947,"COUNT", false,-1, 1,0);
    tracep->declBus(c+1948,"DELAY", false,-1, 1,0);
    tracep->declBus(c+1148,"state", false,-1, 1,0);
    tracep->declBus(c+1690,"next", false,-1, 1,0);
    tracep->declBus(c+1149,"delay_counter", false,-1, 31,0);
    tracep->declBus(c+1150,"prdata_save", false,-1, 31,0);
    tracep->declBit(c+1151,"pslverr_save", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1686,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1687,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1615,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1940,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1688,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1689,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+22,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1691,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1692,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1619,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1940,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1693,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1949,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1885,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1694,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1695,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1620,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1940,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1696,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1949,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1697,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1698,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1699,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1620,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1940,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1700,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1701,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+23,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1702,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1886,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1615,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1940,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1887,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1949,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+180,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1703,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1704,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1620,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1940,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1705,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1949,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1706,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1707,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1708,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1616,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1619,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1940,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1888,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1621,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1889,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1622,"sel_0", false,-1);
    tracep->declBit(c+1623,"sel_1", false,-1);
    tracep->declBit(c+1624,"sel_2", false,-1);
    tracep->declBit(c+1625,"sel_3", false,-1);
    tracep->declBit(c+1626,"sel_4", false,-1);
    tracep->declBit(c+1627,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1709,"auto_in_bvalid", false,-1);
    tracep->declBus(c+191,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1710,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_in_arready", false,-1);
    tracep->declBit(c+193,"auto_in_arvalid", false,-1);
    tracep->declBus(c+194,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+196,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+198,"auto_in_rready", false,-1);
    tracep->declBit(c+1711,"auto_in_rvalid", false,-1);
    tracep->declBus(c+199,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1890,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1710,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+178,"auto_out_psel", false,-1);
    tracep->declBit(c+179,"auto_out_penable", false,-1);
    tracep->declBit(c+1616,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1615,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1617,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1684,"auto_out_pready", false,-1);
    tracep->declBit(c+1685,"auto_out_pslverr", false,-1);
    tracep->declBus(c+21,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+179,"nodeOut_penable", false,-1);
    tracep->declBus(c+200,"state", false,-1, 1,0);
    tracep->declBit(c+192,"accept_read", false,-1);
    tracep->declBit(c+181,"accept_write", false,-1);
    tracep->declBit(c+201,"is_write_r", false,-1);
    tracep->declBit(c+1616,"is_write", false,-1);
    tracep->declBus(c+199,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+191,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+202,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+203,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+204,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+205,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1712,"resp", false,-1, 1,0);
    tracep->declBus(c+206,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1710,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1711,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+207,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1709,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+208,"auto_in_awready", false,-1);
    tracep->declBit(c+1757,"auto_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1758,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1891,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+211,"auto_in_wready", false,-1);
    tracep->declBit(c+1759,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"auto_in_wlast", false,-1);
    tracep->declBit(c+106,"auto_in_bready", false,-1);
    tracep->declBit(c+212,"auto_in_bvalid", false,-1);
    tracep->declBus(c+213,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+214,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+215,"auto_in_arready", false,-1);
    tracep->declBit(c+1763,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_in_arburst", false,-1, 1,0);
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
    tracep->declBit(c+1709,"auto_out_bvalid", false,-1);
    tracep->declBus(c+191,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1710,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+192,"auto_out_arready", false,-1);
    tracep->declBit(c+193,"auto_out_arvalid", false,-1);
    tracep->declBus(c+194,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+196,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+197,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+198,"auto_out_rready", false,-1);
    tracep->declBit(c+1711,"auto_out_rvalid", false,-1);
    tracep->declBus(c+199,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1890,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1710,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+190,"io_enq_ready", false,-1);
    tracep->declBit(c+1709,"io_enq_valid", false,-1);
    tracep->declBus(c+191,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1710,"io_enq_bits_resp", false,-1, 1,0);
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
    tracep->declBit(c+1713,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+223,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declBus(c+228,"R0_data", false,-1, 5,0);
    tracep->declBit(c+222,"W0_addr", false,-1);
    tracep->declBit(c+1713,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declBus(c+1892,"W0_data", false,-1, 5,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+1711,"io_enq_valid", false,-1);
    tracep->declBus(c+199,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1890,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1710,"io_enq_bits_resp", false,-1, 1,0);
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
    tracep->declBit(c+1714,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+233,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declQuad(c+238,"R0_data", false,-1, 38,0);
    tracep->declBit(c+232,"W0_addr", false,-1);
    tracep->declBit(c+1714,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declQuad(c+1893,"W0_data", false,-1, 38,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+1763,"io_enq_valid", false,-1);
    tracep->declBus(c+216,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1764,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1765,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1766,"io_enq_bits_burst", false,-1, 1,0);
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
    tracep->declBit(c+1767,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+246,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declQuad(c+251,"R0_data", false,-1, 46,0);
    tracep->declBit(c+245,"W0_addr", false,-1);
    tracep->declBit(c+1767,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declQuad(c+1895,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+208,"io_enq_ready", false,-1);
    tracep->declBit(c+1757,"io_enq_valid", false,-1);
    tracep->declBus(c+209,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1758,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1891,"io_enq_bits_size", false,-1, 2,0);
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
    tracep->declBit(c+1768,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+259,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declQuad(c+264,"R0_data", false,-1, 46,0);
    tracep->declBit(c+258,"W0_addr", false,-1);
    tracep->declBit(c+1768,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declQuad(c+1897,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+1759,"io_enq_valid", false,-1);
    tracep->declBus(c+1760,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1761,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1762,"io_enq_bits_last", false,-1);
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
    tracep->declBit(c+1769,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+272,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declQuad(c+277,"R0_data", false,-1, 35,0);
    tracep->declBit(c+271,"W0_addr", false,-1);
    tracep->declBit(c+1769,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declQuad(c+1770,"W0_data", false,-1, 35,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1831,"in_arready", false,-1);
    tracep->declBit(c+1772,"in_arvalid", false,-1);
    tracep->declBus(c+1951,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+73,"in_rready", false,-1);
    tracep->declBit(c+83,"in_rvalid", false,-1);
    tracep->declBus(c+84,"in_rid", false,-1, 3,0);
    tracep->declBus(c+85,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+86,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+87,"in_rlast", false,-1);
    tracep->declBit(c+1832,"in_awready", false,-1);
    tracep->declBit(c+1773,"in_awvalid", false,-1);
    tracep->declBus(c+1951,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1833,"in_wready", false,-1);
    tracep->declBit(c+1774,"in_wvalid", false,-1);
    tracep->declBus(c+1658,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"in_wlast", false,-1);
    tracep->declBit(c+146,"in_bready", false,-1);
    tracep->declBit(c+153,"in_bvalid", false,-1);
    tracep->declBus(c+154,"in_bid", false,-1, 3,0);
    tracep->declBus(c+155,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1831,"out_arready", false,-1);
    tracep->declBit(c+1772,"out_arvalid", false,-1);
    tracep->declBus(c+1951,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+88,"out_rready", false,-1);
    tracep->declBit(c+1152,"out_rvalid", false,-1);
    tracep->declBus(c+1153,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1154,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1946,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1155,"out_rlast", false,-1);
    tracep->declBit(c+1832,"out_awready", false,-1);
    tracep->declBit(c+1773,"out_awvalid", false,-1);
    tracep->declBus(c+1951,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1833,"out_wready", false,-1);
    tracep->declBit(c+1774,"out_wvalid", false,-1);
    tracep->declBus(c+1658,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"out_wlast", false,-1);
    tracep->declBit(c+156,"out_bready", false,-1);
    tracep->declBit(c+1156,"out_bvalid", false,-1);
    tracep->declBus(c+1153,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1946,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1941,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1942,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1943,"R", false,-1, 31,0);
    tracep->declBus(c+1944,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+1953,"MAX_ALLOWED_BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+1954,"CNT_W", false,-1, 31,0);
    tracep->declBus(c+1955,"IDX_W", false,-1, 31,0);
    tracep->declBus(c+1955,"ALEN_W", false,-1, 31,0);
    tracep->declBus(c+1956,"STEP", false,-1, 31,0);
    tracep->declBus(c+1946,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1947,"READ", false,-1, 1,0);
    tracep->declBus(c+1948,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1157,"state", false,-1, 1,0);
    tracep->declBus(c+1899,"next", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1158+i*2,"read_counters", true,(i+0), 32,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1222+i*1,"rdata_save", true,(i+0), 31,0);
    }
    tracep->declBus(c+1254,"get_beat", false,-1, 5,0);
    tracep->declBus(c+1255,"return_beat", false,-1, 5,0);
    tracep->declBus(c+1256,"arlen_save", false,-1, 4,0);
    tracep->declBus(c+1257,"rid_save", false,-1, 3,0);
    tracep->declBus(c+1258,"rresp_save", false,-1, 1,0);
    tracep->declQuad(c+1259,"write_counter", false,-1, 32,0);
    tracep->declBit(c+1261,"b_received", false,-1);
    tracep->declBus(c+1262,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1263,"bresp_save", false,-1, 1,0);
    tracep->declBus(c+1264,"i", false,-1, 31,0);
    tracep->declBit(c+89,"r_beat_arriving", false,-1);
    tracep->declBit(c+157,"b_arriving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+284,"auto_in_awready", false,-1);
    tracep->declBit(c+1775,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1951,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+285,"auto_in_wready", false,-1);
    tracep->declBit(c+1776,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"auto_in_wlast", false,-1);
    tracep->declBit(c+1900,"auto_in_bready", false,-1);
    tracep->declBit(c+286,"auto_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+289,"auto_in_arready", false,-1);
    tracep->declBit(c+1777,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1951,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_in_rready", false,-1);
    tracep->declBit(c+290,"auto_in_rvalid", false,-1);
    tracep->declBus(c+291,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+294,"auto_in_rlast", false,-1);
    tracep->declBit(c+163,"auto_out_awready", false,-1);
    tracep->declBit(c+1778,"auto_out_awvalid", false,-1);
    tracep->declBus(c+209,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1758,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1891,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+295,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+164,"auto_out_wready", false,-1);
    tracep->declBit(c+1779,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"auto_out_wlast", false,-1);
    tracep->declBit(c+147,"auto_out_bready", false,-1);
    tracep->declBit(c+296,"auto_out_bvalid", false,-1);
    tracep->declBus(c+287,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+298,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_out_arready", false,-1);
    tracep->declBit(c+1780,"auto_out_arvalid", false,-1);
    tracep->declBus(c+216,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1781,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+74,"auto_out_rready", false,-1);
    tracep->declBit(c+290,"auto_out_rvalid", false,-1);
    tracep->declBus(c+291,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+299,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+300,"auto_out_rlast", false,-1);
    tracep->declBit(c+1779,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+301,"w_idle", false,-1);
    tracep->declBit(c+165,"in_awready", false,-1);
    tracep->declBit(c+302,"busy", false,-1);
    tracep->declBus(c+303,"r_addr", false,-1, 31,0);
    tracep->declBus(c+304,"r_len", false,-1, 7,0);
    tracep->declBus(c+1782,"len", false,-1, 7,0);
    tracep->declBus(c+1783,"addr", false,-1, 31,0);
    tracep->declBit(c+305,"busy_1", false,-1);
    tracep->declBus(c+306,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+307,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+308,"len_1", false,-1, 7,0);
    tracep->declBus(c+1784,"addr_1", false,-1, 31,0);
    tracep->declBit(c+309,"wbeats_latched", false,-1);
    tracep->declBit(c+1778,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1785,"wbeats_valid", false,-1);
    tracep->declBus(c+310,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1786,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1762,"w_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+1777,"io_enq_valid", false,-1);
    tracep->declBus(c+1951,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1653,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1654,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1655,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1656,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+102,"io_deq_ready", false,-1);
    tracep->declBit(c+1780,"io_deq_valid", false,-1);
    tracep->declBus(c+216,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1787,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1788,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1765,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1766,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+327,"ram", false,-1, 48,0);
    tracep->declBit(c+329,"full", false,-1);
    tracep->declBit(c+1780,"io_deq_valid_0", false,-1);
    tracep->declBit(c+103,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+284,"io_enq_ready", false,-1);
    tracep->declBit(c+1775,"io_enq_valid", false,-1);
    tracep->declBus(c+1951,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1657,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1952,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+674,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1946,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+166,"io_deq_ready", false,-1);
    tracep->declBit(c+1789,"io_deq_valid", false,-1);
    tracep->declBus(c+209,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1790,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+330,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1891,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+210,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+331,"ram", false,-1, 48,0);
    tracep->declBit(c+333,"full", false,-1);
    tracep->declBit(c+1789,"io_deq_valid_0", false,-1);
    tracep->declBit(c+167,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+1776,"io_enq_valid", false,-1);
    tracep->declBus(c+1658,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1659,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1950,"io_enq_bits_last", false,-1);
    tracep->declBit(c+168,"io_deq_ready", false,-1);
    tracep->declBit(c+1791,"io_deq_valid", false,-1);
    tracep->declBus(c+1760,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1761,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+334,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+335,"ram", false,-1, 36,0);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+1791,"io_deq_valid_0", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+170,"auto_in_awready", false,-1);
    tracep->declBit(c+1792,"auto_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1793,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1901,"auto_in_wready", false,-1);
    tracep->declBit(c+1794,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+148,"auto_in_bready", false,-1);
    tracep->declBit(c+338,"auto_in_bvalid", false,-1);
    tracep->declBus(c+339,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+340,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"auto_in_arready", false,-1);
    tracep->declBit(c+1795,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1796,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+76,"auto_in_rready", false,-1);
    tracep->declBit(c+341,"auto_in_rvalid", false,-1);
    tracep->declBus(c+342,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+343,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+344,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+75,"nodeIn_arready", false,-1);
    tracep->declBit(c+170,"nodeIn_awready", false,-1);
    tracep->declBit(c+1797,"w_sel0", false,-1);
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
    tracep->declBus(c+1798,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+104,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declBus(c+352,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1799,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+171,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declBus(c+1760,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1761,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1834,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1660,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1951,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1902,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1661,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+149,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+139,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+158,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1903,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1835,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1662,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1951,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+77,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+90,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+91,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1832,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1773,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1951,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1833,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1774,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+146,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+153,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1831,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1772,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1951,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+73,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+83,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+84,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+85,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+86,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+87,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+284,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1775,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1951,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+285,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1776,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1900,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+286,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+288,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+289,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1777,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1951,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+291,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+294,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+139,"in_0_bvalid", false,-1);
    tracep->declBit(c+66,"in_0_rvalid", false,-1);
    tracep->declBit(c+1836,"in_0_wready", false,-1);
    tracep->declBit(c+1837,"in_0_awready", false,-1);
    tracep->declBit(c+1904,"in_0_arready", false,-1);
    tracep->declBit(c+1834,"anonIn_awready", false,-1);
    tracep->declBit(c+1835,"anonIn_arready", false,-1);
    tracep->declBit(c+1663,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1664,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1665,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1666,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1957,"arSel", false,-1, 15,0);
    tracep->declBus(c+1957,"awSel", false,-1, 15,0);
    tracep->declBus(c+94,"rSel", false,-1, 15,0);
    tracep->declBus(c+159,"bSel", false,-1, 15,0);
    tracep->declBus(c+353,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+354,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+355,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+356,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+357,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1958,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+358,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1959,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+359,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1960,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+360,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1961,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+361,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1962,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+362,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1963,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+363,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1964,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+364,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1965,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+365,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1966,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1967,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1968,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+368,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1969,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+369,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1970,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+370,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1971,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+371,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1972,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1973,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+373,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1974,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+374,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1975,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+375,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1976,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+376,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1977,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+377,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1978,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+378,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1979,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+379,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1980,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+380,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1981,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+381,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1982,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+382,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1983,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+383,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1984,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+384,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1985,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+385,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1986,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+386,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1987,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1800,"in_0_arvalid", false,-1);
    tracep->declBit(c+387,"latched", false,-1);
    tracep->declBit(c+1801,"in_0_awvalid", false,-1);
    tracep->declBit(c+1802,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1803,"in_0_wvalid", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+396,"io_enq_ready", false,-1);
    tracep->declBit(c+1802,"io_enq_valid", false,-1);
    tracep->declBus(c+1667,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1838,"io_deq_ready", false,-1);
    tracep->declBit(c+1804,"io_deq_valid", false,-1);
    tracep->declBus(c+1805,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+397,"wrap", false,-1);
    tracep->declBit(c+398,"wrap_1", false,-1);
    tracep->declBit(c+399,"maybe_full", false,-1);
    tracep->declBit(c+400,"ptr_match", false,-1);
    tracep->declBit(c+401,"empty", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->declBit(c+1804,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1839,"do_deq", false,-1);
    tracep->declBit(c+1840,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+398,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declBus(c+403,"R0_data", false,-1, 1,0);
    tracep->declBit(c+397,"W0_addr", false,-1);
    tracep->declBit(c+1840,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declBus(c+1667,"W0_data", false,-1, 1,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+172,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1806,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1758,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1891,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+164,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1779,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+147,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+296,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1807,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+291,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+170,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1792,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+209,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1793,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1901,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1794,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+148,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+338,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+339,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+340,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1795,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1796,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+76,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+341,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+342,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+343,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+344,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1808,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1809,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+406,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1810,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1811,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+33,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+407,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+408,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+409,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+208,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1757,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+209,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1758,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1891,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+211,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1759,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+106,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+212,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+213,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+214,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+215,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1763,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+216,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_anon_out_0_arburst", false,-1, 1,0);
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
    tracep->declBit(c+1812,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1813,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1814,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1815,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1816,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1817,"requestAWIO_0_2", false,-1);
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
    tracep->declBit(c+1818,"in_0_awvalid", false,-1);
    tracep->declBit(c+1819,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1820,"in_0_wvalid", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+474,"io_enq_ready", false,-1);
    tracep->declBit(c+1819,"io_enq_valid", false,-1);
    tracep->declBus(c+1821,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+175,"io_deq_ready", false,-1);
    tracep->declBit(c+1822,"io_deq_valid", false,-1);
    tracep->declBus(c+1823,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+475,"wrap", false,-1);
    tracep->declBit(c+476,"wrap_1", false,-1);
    tracep->declBit(c+477,"maybe_full", false,-1);
    tracep->declBit(c+478,"ptr_match", false,-1);
    tracep->declBit(c+479,"empty", false,-1);
    tracep->declBit(c+480,"full", false,-1);
    tracep->declBit(c+1822,"io_deq_valid_0", false,-1);
    tracep->declBit(c+176,"do_deq", false,-1);
    tracep->declBit(c+177,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+476,"R0_addr", false,-1);
    tracep->declBit(c+1950,"R0_en", false,-1);
    tracep->declBit(c+1861,"R0_clk", false,-1);
    tracep->declBus(c+481,"R0_data", false,-1, 2,0);
    tracep->declBit(c+475,"W0_addr", false,-1);
    tracep->declBit(c+177,"W0_en", false,-1);
    tracep->declBit(c+1861,"W0_clk", false,-1);
    tracep->declBus(c+1821,"W0_data", false,-1, 2,0);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+163,"auto_in_awready", false,-1);
    tracep->declBit(c+1778,"auto_in_awvalid", false,-1);
    tracep->declBus(c+209,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1758,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1891,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+295,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+164,"auto_in_wready", false,-1);
    tracep->declBit(c+1779,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"auto_in_wlast", false,-1);
    tracep->declBit(c+147,"auto_in_bready", false,-1);
    tracep->declBit(c+296,"auto_in_bvalid", false,-1);
    tracep->declBus(c+287,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+298,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+101,"auto_in_arready", false,-1);
    tracep->declBit(c+1780,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1781,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+74,"auto_in_rready", false,-1);
    tracep->declBit(c+290,"auto_in_rvalid", false,-1);
    tracep->declBus(c+291,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+299,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+300,"auto_in_rlast", false,-1);
    tracep->declBit(c+172,"auto_out_awready", false,-1);
    tracep->declBit(c+1806,"auto_out_awvalid", false,-1);
    tracep->declBus(c+209,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1758,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1891,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+210,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+164,"auto_out_wready", false,-1);
    tracep->declBit(c+1779,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1760,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1762,"auto_out_wlast", false,-1);
    tracep->declBit(c+147,"auto_out_bready", false,-1);
    tracep->declBit(c+296,"auto_out_bvalid", false,-1);
    tracep->declBus(c+287,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+297,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"auto_out_arready", false,-1);
    tracep->declBit(c+1807,"auto_out_arvalid", false,-1);
    tracep->declBus(c+216,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1764,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1765,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1766,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_out_rready", false,-1);
    tracep->declBit(c+290,"auto_out_rvalid", false,-1);
    tracep->declBus(c+291,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+292,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+293,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+300,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+484,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+488,"io_enq_ready", false,-1);
    tracep->declBit(c+51,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+53,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+54,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+55,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+56,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+57,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+59,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+608,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+1781,"io_enq_bits_real_last", false,-1);
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
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBit(c+1834,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1660,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1951,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1902,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1661,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+149,"auto_master_out_bready", false,-1);
    tracep->declBit(c+139,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+158,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1903,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1835,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1662,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1951,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+77,"auto_master_out_rready", false,-1);
    tracep->declBit(c+66,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+90,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+91,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBit(c+1949,"io_interrupt", false,-1);
    tracep->declBit(c+1660,"io_master_awvalid", false,-1);
    tracep->declBit(c+1834,"io_master_awready", false,-1);
    tracep->declBus(c+1951,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1661,"io_master_wvalid", false,-1);
    tracep->declBit(c+1902,"io_master_wready", false,-1);
    tracep->declBus(c+1658,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"io_master_wlast", false,-1);
    tracep->declBit(c+139,"io_master_bvalid", false,-1);
    tracep->declBit(c+149,"io_master_bready", false,-1);
    tracep->declBus(c+158,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1903,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1662,"io_master_arvalid", false,-1);
    tracep->declBit(c+1835,"io_master_arready", false,-1);
    tracep->declBus(c+1951,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+66,"io_master_rvalid", false,-1);
    tracep->declBit(c+77,"io_master_rready", false,-1);
    tracep->declBus(c+90,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+91,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+92,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"io_master_rlast", false,-1);
    tracep->declBit(c+1949,"io_slave_awvalid", false,-1);
    tracep->declBit(c+1949,"io_slave_awready", false,-1);
    tracep->declBus(c+1951,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1988,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1989,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1949,"io_slave_wvalid", false,-1);
    tracep->declBit(c+1949,"io_slave_wready", false,-1);
    tracep->declBus(c+1988,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1951,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1949,"io_slave_wlast", false,-1);
    tracep->declBit(c+1949,"io_slave_bvalid", false,-1);
    tracep->declBit(c+1949,"io_slave_bready", false,-1);
    tracep->declBus(c+1951,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1946,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1949,"io_slave_arvalid", false,-1);
    tracep->declBit(c+1949,"io_slave_arready", false,-1);
    tracep->declBus(c+1951,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1988,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1952,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1989,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1946,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1949,"io_slave_rvalid", false,-1);
    tracep->declBit(c+1949,"io_slave_rready", false,-1);
    tracep->declBus(c+1951,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1988,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1946,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1949,"io_slave_rlast", false,-1);
    tracep->declArray(c+675,"dbg_reg", false,-1, 1023,0);
    tracep->declBit(c+150,"sw_avail", false,-1);
    tracep->declBus(c+1657,"sw_addr", false,-1, 31,0);
    tracep->declQuad(c+707,"ifu_work_cyc", false,-1, 63,0);
    tracep->declQuad(c+709,"ifu_block_cyc", false,-1, 63,0);
    tracep->declBit(c+711,"flush", false,-1);
    tracep->declBus(c+712,"pc_flush", false,-1, 31,0);
    tracep->declBus(c+713,"pc", false,-1, 31,0);
    tracep->declBus(c+714,"instr", false,-1, 31,0);
    tracep->declBit(c+715,"valid_fd", false,-1);
    tracep->declBit(c+716,"ready_rd", false,-1);
    tracep->declBit(c+715,"valid_de", false,-1);
    tracep->declBit(c+716,"ready_de", false,-1);
    tracep->declBus(c+713,"pc_d", false,-1, 31,0);
    tracep->declBit(c+717,"addi", false,-1);
    tracep->declBit(c+718,"slti", false,-1);
    tracep->declBit(c+719,"sltiu", false,-1);
    tracep->declBit(c+720,"xori", false,-1);
    tracep->declBit(c+721,"ori", false,-1);
    tracep->declBit(c+722,"andi", false,-1);
    tracep->declBit(c+723,"slli", false,-1);
    tracep->declBit(c+724,"srli", false,-1);
    tracep->declBit(c+725,"srai", false,-1);
    tracep->declBit(c+726,"add", false,-1);
    tracep->declBit(c+727,"sub", false,-1);
    tracep->declBit(c+728,"sll", false,-1);
    tracep->declBit(c+729,"slt", false,-1);
    tracep->declBit(c+730,"sltu", false,-1);
    tracep->declBit(c+731,"xor_inst", false,-1);
    tracep->declBit(c+732,"srl", false,-1);
    tracep->declBit(c+733,"sra", false,-1);
    tracep->declBit(c+734,"or_inst", false,-1);
    tracep->declBit(c+735,"and_inst", false,-1);
    tracep->declBit(c+736,"lb", false,-1);
    tracep->declBit(c+737,"lh", false,-1);
    tracep->declBit(c+738,"lw", false,-1);
    tracep->declBit(c+739,"lbu", false,-1);
    tracep->declBit(c+740,"lhu", false,-1);
    tracep->declBit(c+741,"sb", false,-1);
    tracep->declBit(c+742,"sh", false,-1);
    tracep->declBit(c+743,"sw", false,-1);
    tracep->declBit(c+744,"beq", false,-1);
    tracep->declBit(c+745,"bne", false,-1);
    tracep->declBit(c+746,"blt", false,-1);
    tracep->declBit(c+747,"bge", false,-1);
    tracep->declBit(c+748,"bltu", false,-1);
    tracep->declBit(c+749,"bgeu", false,-1);
    tracep->declBit(c+750,"jal", false,-1);
    tracep->declBit(c+751,"jalr", false,-1);
    tracep->declBit(c+752,"lui", false,-1);
    tracep->declBit(c+753,"auipc", false,-1);
    tracep->declBit(c+754,"ebreak", false,-1);
    tracep->declBit(c+755,"ecall", false,-1);
    tracep->declBit(c+756,"csrrw", false,-1);
    tracep->declBit(c+757,"csrrs", false,-1);
    tracep->declBit(c+758,"csrrc", false,-1);
    tracep->declBit(c+759,"mret", false,-1);
    tracep->declBit(c+760,"fence_i", false,-1);
    tracep->declBus(c+761,"rd", false,-1, 4,0);
    tracep->declBus(c+762,"rs1", false,-1, 4,0);
    tracep->declBus(c+763,"rs2", false,-1, 4,0);
    tracep->declBus(c+764,"imm", false,-1, 31,0);
    tracep->declBus(c+714,"instr_de", false,-1, 31,0);
    tracep->declQuad(c+765,"exu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+767,"exu_blcokbl_cyc", false,-1, 63,0);
    tracep->declQuad(c+769,"exu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+771,"is_ls", false,-1);
    tracep->declBit(c+772,"lsu_bypass_data_valid", false,-1);
    tracep->declBit(c+773,"valid_el", false,-1);
    tracep->declBit(c+774,"ready_el", false,-1);
    tracep->declBit(c+775,"io", false,-1);
    tracep->declBus(c+776,"io_type", false,-1, 1,0);
    tracep->declBit(c+777,"read_is_u", false,-1);
    tracep->declBus(c+778,"rd_out", false,-1, 4,0);
    tracep->declBus(c+779,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+780,"rs2_out", false,-1, 4,0);
    tracep->declBus(c+781,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+782,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+783,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBit(c+1990,"is_exu_rd", false,-1);
    tracep->declBit(c+1991,"is_lsu_rd", false,-1);
    tracep->declBus(c+1992,"rd_exu", false,-1, 4,0);
    tracep->declBus(c+784,"rdata1", false,-1, 31,0);
    tracep->declBus(c+781,"rdata2", false,-1, 31,0);
    tracep->declQuad(c+785,"lsu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+787,"lsu_blcokb_cyc", false,-1, 63,0);
    tracep->declQuad(c+789,"lsu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+791,"lsu_blockf", false,-1);
    tracep->declBit(c+792,"valid_lw", false,-1);
    tracep->declBit(c+793,"ready_lw", false,-1);
    tracep->declBus(c+794,"wdata_lw", false,-1, 31,0);
    tracep->declBus(c+795,"rd_lsu", false,-1, 4,0);
    tracep->declQuad(c+796,"wbu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+798,"wbu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+800,"wbu_blockf", false,-1);
    tracep->declBit(c+1993,"lsu_flush", false,-1);
    tracep->declBus(c+1994,"rd_release", false,-1, 4,0);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declBus(c+802,"rd_wbu", false,-1, 4,0);
    tracep->declBus(c+803,"wdata_wbu", false,-1, 31,0);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+1955,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1953,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declBus(c+779,"raddr1", false,-1, 4,0);
    tracep->declBus(c+780,"raddr2", false,-1, 4,0);
    tracep->declBus(c+802,"waddr", false,-1, 4,0);
    tracep->declBus(c+803,"wdata", false,-1, 31,0);
    tracep->declBus(c+784,"rdata1", false,-1, 31,0);
    tracep->declBus(c+781,"rdata2", false,-1, 31,0);
    tracep->declArray(c+675,"dbg_regs", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+804+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+836,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBus(c+713,"pc", false,-1, 31,0);
    tracep->declBus(c+714,"instr", false,-1, 31,0);
    tracep->declBus(c+784,"rdata1", false,-1, 31,0);
    tracep->declBus(c+781,"rdata2", false,-1, 31,0);
    tracep->declBus(c+764,"imm", false,-1, 31,0);
    tracep->declBit(c+726,"add", false,-1);
    tracep->declBit(c+717,"addi", false,-1);
    tracep->declBit(c+727,"sub", false,-1);
    tracep->declBit(c+752,"lui", false,-1);
    tracep->declBit(c+753,"auipc", false,-1);
    tracep->declBit(c+735,"and_inst", false,-1);
    tracep->declBit(c+734,"or_inst", false,-1);
    tracep->declBit(c+731,"xor_inst", false,-1);
    tracep->declBit(c+722,"andi", false,-1);
    tracep->declBit(c+721,"ori", false,-1);
    tracep->declBit(c+720,"xori", false,-1);
    tracep->declBit(c+728,"sll", false,-1);
    tracep->declBit(c+732,"srl", false,-1);
    tracep->declBit(c+733,"sra", false,-1);
    tracep->declBit(c+723,"slli", false,-1);
    tracep->declBit(c+724,"srli", false,-1);
    tracep->declBit(c+725,"srai", false,-1);
    tracep->declBit(c+729,"slt", false,-1);
    tracep->declBit(c+730,"sltu", false,-1);
    tracep->declBit(c+718,"slti", false,-1);
    tracep->declBit(c+719,"sltiu", false,-1);
    tracep->declBit(c+750,"jal", false,-1);
    tracep->declBit(c+751,"jalr", false,-1);
    tracep->declBit(c+736,"lb", false,-1);
    tracep->declBit(c+737,"lh", false,-1);
    tracep->declBit(c+738,"lw", false,-1);
    tracep->declBit(c+739,"lbu", false,-1);
    tracep->declBit(c+740,"lhu", false,-1);
    tracep->declBit(c+741,"sb", false,-1);
    tracep->declBit(c+742,"sh", false,-1);
    tracep->declBit(c+743,"sw", false,-1);
    tracep->declBit(c+744,"beq", false,-1);
    tracep->declBit(c+745,"bne", false,-1);
    tracep->declBit(c+746,"blt", false,-1);
    tracep->declBit(c+747,"bge", false,-1);
    tracep->declBit(c+748,"bltu", false,-1);
    tracep->declBit(c+749,"bgeu", false,-1);
    tracep->declBit(c+754,"ebreak", false,-1);
    tracep->declBit(c+755,"ecall", false,-1);
    tracep->declBit(c+759,"mret", false,-1);
    tracep->declBit(c+760,"fence_i", false,-1);
    tracep->declBit(c+756,"csrrw", false,-1);
    tracep->declBit(c+757,"csrrs", false,-1);
    tracep->declBit(c+758,"csrrc", false,-1);
    tracep->declBus(c+761,"rd", false,-1, 4,0);
    tracep->declBus(c+762,"rs1", false,-1, 4,0);
    tracep->declBus(c+763,"rs2", false,-1, 4,0);
    tracep->declBit(c+791,"lsu_blockf", false,-1);
    tracep->declBit(c+800,"wbu_blockf", false,-1);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declBus(c+802,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+715,"in_valid", false,-1);
    tracep->declBit(c+716,"in_ready", false,-1);
    tracep->declBit(c+773,"out_valid", false,-1);
    tracep->declBit(c+774,"out_ready", false,-1);
    tracep->declBit(c+771,"is_ls", false,-1);
    tracep->declBit(c+775,"io", false,-1);
    tracep->declBus(c+776,"io_type", false,-1, 1,0);
    tracep->declBit(c+777,"read_is_u", false,-1);
    tracep->declBus(c+778,"rd_out", false,-1, 4,0);
    tracep->declBus(c+781,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+782,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+783,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+779,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+780,"rs2_out", false,-1, 4,0);
    tracep->declBit(c+711,"flush", false,-1);
    tracep->declBus(c+712,"pc_flush", false,-1, 31,0);
    tracep->declQuad(c+765,"exu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+767,"exu_blcokbl_cyc", false,-1, 63,0);
    tracep->declQuad(c+769,"exu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+837,"ebreak_end", false,-1);
    tracep->declBus(c+794,"bypass_wdata_lsu", false,-1, 31,0);
    tracep->declBus(c+795,"bypass_rd_lsu", false,-1, 4,0);
    tracep->declBit(c+772,"lsu_bypass_data_valid", false,-1);
    tracep->declBus(c+803,"bypass_wdata_wbu", false,-1, 31,0);
    tracep->declBus(c+802,"bypass_rd_wbu", false,-1, 4,0);
    tracep->declBit(c+801,"wbu_bypass_data_valid", false,-1);
    tracep->declBus(c+838,"rd_list", false,-1, 31,0);
    tracep->declBus(c+839,"rd_amt", false,-1, 31,0);
    tracep->declBit(c+840,"wen_save", false,-1);
    tracep->declBus(c+841,"rd_wb_save", false,-1, 4,0);
    tracep->declBit(c+842,"bypass_active", false,-1);
    tracep->declBus(c+843,"bypass_data", false,-1, 31,0);
    tracep->declBus(c+844,"mstatus", false,-1, 31,0);
    tracep->declBus(c+845,"mepc", false,-1, 31,0);
    tracep->declBus(c+846,"mcause", false,-1, 31,0);
    tracep->declBus(c+847,"mtvec", false,-1, 31,0);
    tracep->declBus(c+848,"mcycle", false,-1, 31,0);
    tracep->declBus(c+849,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+850,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+851,"marchid", false,-1, 31,0);
    tracep->declBus(c+852,"pc_save", false,-1, 31,0);
    tracep->declBus(c+853,"imm_save", false,-1, 31,0);
    tracep->declBus(c+854,"instr_save", false,-1, 31,0);
    tracep->declBit(c+855,"add_save", false,-1);
    tracep->declBit(c+856,"addi_save", false,-1);
    tracep->declBit(c+857,"sub_save", false,-1);
    tracep->declBit(c+858,"lui_save", false,-1);
    tracep->declBit(c+859,"auipc_save", false,-1);
    tracep->declBit(c+860,"and_inst_save", false,-1);
    tracep->declBit(c+861,"or_inst_save", false,-1);
    tracep->declBit(c+862,"xor_inst_save", false,-1);
    tracep->declBit(c+863,"andi_save", false,-1);
    tracep->declBit(c+864,"ori_save", false,-1);
    tracep->declBit(c+865,"xori_save", false,-1);
    tracep->declBit(c+866,"sll_save", false,-1);
    tracep->declBit(c+867,"srl_save", false,-1);
    tracep->declBit(c+868,"sra_save", false,-1);
    tracep->declBit(c+869,"slli_save", false,-1);
    tracep->declBit(c+870,"srli_save", false,-1);
    tracep->declBit(c+871,"srai_save", false,-1);
    tracep->declBit(c+872,"slt_save", false,-1);
    tracep->declBit(c+873,"sltu_save", false,-1);
    tracep->declBit(c+874,"slti_save", false,-1);
    tracep->declBit(c+875,"sltiu_save", false,-1);
    tracep->declBit(c+876,"jal_save", false,-1);
    tracep->declBit(c+877,"jalr_save", false,-1);
    tracep->declBit(c+878,"lb_save", false,-1);
    tracep->declBit(c+879,"lh_save", false,-1);
    tracep->declBit(c+880,"lw_save", false,-1);
    tracep->declBit(c+881,"lbu_save", false,-1);
    tracep->declBit(c+882,"lhu_save", false,-1);
    tracep->declBit(c+883,"sb_save", false,-1);
    tracep->declBit(c+884,"sh_save", false,-1);
    tracep->declBit(c+885,"sw_save", false,-1);
    tracep->declBit(c+886,"beq_save", false,-1);
    tracep->declBit(c+887,"bne_save", false,-1);
    tracep->declBit(c+888,"blt_save", false,-1);
    tracep->declBit(c+889,"bge_save", false,-1);
    tracep->declBit(c+890,"bltu_save", false,-1);
    tracep->declBit(c+891,"bgeu_save", false,-1);
    tracep->declBit(c+892,"ebreak_save", false,-1);
    tracep->declBit(c+893,"ecall_save", false,-1);
    tracep->declBit(c+894,"mret_save", false,-1);
    tracep->declBit(c+895,"fence_i_save", false,-1);
    tracep->declBit(c+896,"csrrw_save", false,-1);
    tracep->declBit(c+897,"csrrs_save", false,-1);
    tracep->declBit(c+898,"csrrc_save", false,-1);
    tracep->declBus(c+778,"rd_save", false,-1, 4,0);
    tracep->declBus(c+779,"rs1_save", false,-1, 4,0);
    tracep->declBus(c+780,"rs2_save", false,-1, 4,0);
    tracep->declBus(c+899,"csr_rst_save", false,-1, 31,0);
    tracep->declBus(c+900,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+1995,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1996,"BLOCK", false,-1, 31,0);
    tracep->declBus(c+1997,"WAIT_END", false,-1, 31,0);
    tracep->declBus(c+1998,"EX", false,-1, 31,0);
    tracep->declBus(c+901,"state", false,-1, 1,0);
    tracep->declBus(c+902,"next", false,-1, 1,0);
    tracep->declBit(c+903,"read", false,-1);
    tracep->declBit(c+904,"write", false,-1);
    tracep->declBit(c+905,"is_nlwb", false,-1);
    tracep->declBit(c+906,"nrs", false,-1);
    tracep->declBit(c+907,"r_type", false,-1);
    tracep->declBit(c+908,"s_type", false,-1);
    tracep->declBit(c+909,"b_type", false,-1);
    tracep->declBit(c+910,"rsb_type", false,-1);
    tracep->declBit(c+911,"i_type", false,-1);
    tracep->declBit(c+912,"gpr_read_valid", false,-1);
    tracep->declBus(c+913,"rdata1_ul", false,-1, 31,0);
    tracep->declBus(c+914,"new_pc", false,-1, 31,0);
    tracep->declBus(c+915,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+916,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+917,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+918,"add1", false,-1, 31,0);
    tracep->declBus(c+919,"add2", false,-1, 31,0);
    tracep->declBus(c+782,"add_rst_w", false,-1, 31,0);
    tracep->declBus(c+920,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+921,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+922,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+923,"or_rst", false,-1, 31,0);
    tracep->declBus(c+924,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+925,"and_rst", false,-1, 31,0);
    tracep->declBus(c+926,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+927,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+928,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+929,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+930,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+931,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+932,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+933,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+934,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+935,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+936,"srai_rst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBus(c+1657,"sw_addr", false,-1, 31,0);
    tracep->declBit(c+150,"sw_avail", false,-1);
    tracep->declBus(c+1999,"ICACHE_LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+1999,"ICACHE_LINE_AMT", false,-1, 31,0);
    tracep->declBus(c+2000,"OFFSET_LEN", false,-1, 31,0);
    tracep->declBus(c+2000,"INDEX_LEN", false,-1, 31,0);
    tracep->declBus(c+2001,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+2002,"CACHE_LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+2000,"LINE_WORDS", false,-1, 31,0);
    tracep->declBus(c+1997,"BEAT_LEN", false,-1, 31,0);
    tracep->declBus(c+2003,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+2004,"FLASH_TAG", false,-1, 3,0);
    tracep->declBus(c+2005,"SDRAM_TAG0", false,-1, 3,0);
    tracep->declBus(c+2006,"SDRAM_TAG1", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+937+i*4,"icache", true,(i+0), 127,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1001+i*1,"tag", true,(i+0), 23,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1017+i*1,"valid", true,(i+0));
    }
    tracep->declBus(c+1033,"araddr_save", false,-1, 31,0);
    tracep->declBus(c+1034,"rresp_save", false,-1, 1,0);
    tracep->declBus(c+1035,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1036,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1037,"beat", false,-1, 1,0);
    tracep->declBus(c+1038,"current_tag", false,-1, 23,0);
    tracep->declBus(c+1039,"current_index", false,-1, 3,0);
    tracep->declBus(c+1040,"current_word", false,-1, 31,0);
    tracep->declBus(c+1041,"line_addr", false,-1, 31,0);
    tracep->declBus(c+1042,"beat_bit", false,-1, 31,0);
    tracep->declBus(c+1043,"req_region", false,-1, 3,0);
    tracep->declBit(c+1044,"req_cacheable", false,-1);
    tracep->declBus(c+1045,"state", false,-1, 2,0);
    tracep->declBus(c+1906,"next", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1046,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+713,"in_pc", false,-1, 31,0);
    tracep->declBus(c+714,"in_instr", false,-1, 31,0);
    tracep->declBit(c+715,"in_valid", false,-1);
    tracep->declBit(c+716,"in_ready", false,-1);
    tracep->declBit(c+715,"out_valid", false,-1);
    tracep->declBit(c+716,"out_ready", false,-1);
    tracep->declBus(c+713,"out_pc", false,-1, 31,0);
    tracep->declBit(c+717,"addi", false,-1);
    tracep->declBit(c+718,"slti", false,-1);
    tracep->declBit(c+719,"sltiu", false,-1);
    tracep->declBit(c+720,"xori", false,-1);
    tracep->declBit(c+721,"ori", false,-1);
    tracep->declBit(c+722,"andi", false,-1);
    tracep->declBit(c+723,"slli", false,-1);
    tracep->declBit(c+724,"srli", false,-1);
    tracep->declBit(c+725,"srai", false,-1);
    tracep->declBit(c+726,"add", false,-1);
    tracep->declBit(c+727,"sub", false,-1);
    tracep->declBit(c+728,"sll", false,-1);
    tracep->declBit(c+729,"slt", false,-1);
    tracep->declBit(c+730,"sltu", false,-1);
    tracep->declBit(c+731,"xor_inst", false,-1);
    tracep->declBit(c+732,"srl", false,-1);
    tracep->declBit(c+733,"sra", false,-1);
    tracep->declBit(c+734,"or_inst", false,-1);
    tracep->declBit(c+735,"and_inst", false,-1);
    tracep->declBit(c+736,"lb", false,-1);
    tracep->declBit(c+737,"lh", false,-1);
    tracep->declBit(c+738,"lw", false,-1);
    tracep->declBit(c+739,"lbu", false,-1);
    tracep->declBit(c+740,"lhu", false,-1);
    tracep->declBit(c+741,"sb", false,-1);
    tracep->declBit(c+742,"sh", false,-1);
    tracep->declBit(c+743,"sw", false,-1);
    tracep->declBit(c+744,"beq", false,-1);
    tracep->declBit(c+745,"bne", false,-1);
    tracep->declBit(c+746,"blt", false,-1);
    tracep->declBit(c+747,"bge", false,-1);
    tracep->declBit(c+748,"bltu", false,-1);
    tracep->declBit(c+749,"bgeu", false,-1);
    tracep->declBit(c+750,"jal", false,-1);
    tracep->declBit(c+751,"jalr", false,-1);
    tracep->declBit(c+752,"lui", false,-1);
    tracep->declBit(c+753,"auipc", false,-1);
    tracep->declBit(c+754,"ebreak", false,-1);
    tracep->declBit(c+755,"ecall", false,-1);
    tracep->declBit(c+756,"csrrw", false,-1);
    tracep->declBit(c+757,"csrrs", false,-1);
    tracep->declBit(c+758,"csrrc", false,-1);
    tracep->declBit(c+759,"mret", false,-1);
    tracep->declBit(c+760,"fence_i", false,-1);
    tracep->declBus(c+761,"rd", false,-1, 4,0);
    tracep->declBus(c+762,"rs1", false,-1, 4,0);
    tracep->declBus(c+763,"rs2", false,-1, 4,0);
    tracep->declBus(c+764,"imm", false,-1, 31,0);
    tracep->declBus(c+714,"out_instr", false,-1, 31,0);
    tracep->declBus(c+1047,"opcode", false,-1, 6,0);
    tracep->declBus(c+1048,"funct3", false,-1, 2,0);
    tracep->declBus(c+1049,"funct7", false,-1, 6,0);
    tracep->declBus(c+1050,"immI_w", false,-1, 31,0);
    tracep->declBus(c+1051,"immU_w", false,-1, 31,0);
    tracep->declBus(c+1052,"immS_w", false,-1, 31,0);
    tracep->declBus(c+1053,"immB_w", false,-1, 31,0);
    tracep->declBus(c+1054,"immJ_w", false,-1, 31,0);
    tracep->declBus(c+1055,"immCSR_w", false,-1, 31,0);
    tracep->declBus(c+764,"imm_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBus(c+714,"out_instr", false,-1, 31,0);
    tracep->declBit(c+715,"out_valid", false,-1);
    tracep->declBit(c+716,"out_ready", false,-1);
    tracep->declBus(c+713,"out_pc", false,-1, 31,0);
    tracep->declBit(c+711,"flush", false,-1);
    tracep->declBus(c+712,"pc_flush", false,-1, 31,0);
    tracep->declQuad(c+707,"ifu_work_cyc", false,-1, 63,0);
    tracep->declQuad(c+709,"ifu_block_cyc", false,-1, 63,0);
    tracep->declBus(c+1954,"PMA_ENTRIES", false,-1, 31,0);
    tracep->pushNamePrefix("pma_table");
    tracep->declArray(c+1,"[0]", false,-1, 66,0);
    tracep->declArray(c+4,"[1]", false,-1, 66,0);
    tracep->declArray(c+7,"[2]", false,-1, 66,0);
    tracep->declArray(c+10,"[3]", false,-1, 66,0);
    tracep->declArray(c+13,"[4]", false,-1, 66,0);
    tracep->declArray(c+16,"[5]", false,-1, 66,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1056,"error_save", false,-1, 1,0);
    tracep->declBit(c+1057,"master_validation_error_save", false,-1);
    tracep->declBit(c+1058,"flush_save", false,-1);
    tracep->declBus(c+1059,"pc_flush_save", false,-1, 31,0);
    tracep->declBus(c+1060,"pc", false,-1, 31,0);
    tracep->declBus(c+1061,"state", false,-1, 1,0);
    tracep->declBus(c+1062,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBit(c+771,"is_ls", false,-1);
    tracep->declBit(c+775,"io", false,-1);
    tracep->declBus(c+776,"io_type", false,-1, 1,0);
    tracep->declBit(c+777,"read_is_u", false,-1);
    tracep->declBus(c+778,"rd", false,-1, 4,0);
    tracep->declBus(c+781,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+782,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+783,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBit(c+773,"in_valid", false,-1);
    tracep->declBit(c+774,"in_ready", false,-1);
    tracep->declBit(c+792,"out_valid", false,-1);
    tracep->declBit(c+793,"out_ready", false,-1);
    tracep->declBus(c+794,"wdata", false,-1, 31,0);
    tracep->declBus(c+795,"rd_out", false,-1, 4,0);
    tracep->declBit(c+772,"lsu_bypass_data_valid", false,-1);
    tracep->declQuad(c+785,"lsu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+787,"lsu_blcokb_cyc", false,-1, 63,0);
    tracep->declQuad(c+789,"lsu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+791,"lsu_blockf", false,-1);
    tracep->declBus(c+1657,"sw_addr", false,-1, 31,0);
    tracep->declBit(c+150,"sw_avail", false,-1);
    tracep->declBus(c+1063,"error_save", false,-1, 1,0);
    tracep->declBit(c+1064,"io_save", false,-1);
    tracep->declBus(c+1065,"io_type_save", false,-1, 1,0);
    tracep->declBit(c+1066,"read_is_u_save", false,-1);
    tracep->declBus(c+795,"rd_save", false,-1, 4,0);
    tracep->declBus(c+1067,"lsu_data_save", false,-1, 31,0);
    tracep->declBus(c+1657,"lsu_addr_save", false,-1, 31,0);
    tracep->declBus(c+1068,"ic_wb_wdata_save", false,-1, 31,0);
    tracep->declBus(c+1069,"rdata_out", false,-1, 31,0);
    tracep->declBus(c+1070,"state", false,-1, 2,0);
    tracep->declBus(c+1907,"next", false,-1, 2,0);
    tracep->declBus(c+1069,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1071,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1072,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1073,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1074,"lh_rst", false,-1, 31,0);
    tracep->declBus(c+1075,"lsu_rdata_shifted", false,-1, 31,0);
    tracep->declBit(c+1076,"lw", false,-1);
    tracep->declBit(c+1077,"lh", false,-1);
    tracep->declBit(c+1078,"lhu", false,-1);
    tracep->declBit(c+1079,"lbu", false,-1);
    tracep->declBit(c+1080,"lb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBus(c+2007,"MTIME_ADDR", false,-1, 31,0);
    tracep->declBus(c+2008,"MTIMEH_ADDR", false,-1, 31,0);
    tracep->declBus(c+1946,"RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+1948,"RESP_SLVERR", false,-1, 1,0);
    tracep->declQuad(c+1081,"mtime", false,-1, 63,0);
    tracep->declBus(c+1083,"state", false,-1, 1,0);
    tracep->declBus(c+1908,"next", false,-1, 1,0);
    tracep->declBus(c+1084,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1085,"rresp_save", false,-1, 1,0);
    tracep->declBus(c+1086,"rid_save", false,-1, 3,0);
    tracep->declBus(c+1087,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1668,"rdata_now", false,-1, 31,0);
    tracep->declBus(c+1669,"rresp_now", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBit(c+1670,"aw_to_clint", false,-1);
    tracep->declBit(c+1088,"w_busy", false,-1);
    tracep->declBit(c+1089,"w_clint", false,-1);
    tracep->declBit(c+1671,"w_sel_clint", false,-1);
    tracep->declBus(c+1672,"r_current_state", false,-1, 1,0);
    tracep->declBus(c+97,"r_next_state", false,-1, 1,0);
    tracep->declBit(c+1090,"r_sel_clint", false,-1);
    tracep->declBit(c+1673,"sel_lsu", false,-1);
    tracep->declBit(c+1674,"sel_ifu", false,-1);
    tracep->declBit(c+78,"r_tgt_rvalid", false,-1);
    tracep->declBit(c+1909,"r_tgt_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1905,"reset", false,-1);
    tracep->declBit(c+792,"in_valid", false,-1);
    tracep->declBit(c+793,"in_ready", false,-1);
    tracep->declBus(c+795,"rd", false,-1, 4,0);
    tracep->declBus(c+794,"wdata", false,-1, 31,0);
    tracep->declBit(c+801,"wen", false,-1);
    tracep->declBus(c+803,"wdata_wb", false,-1, 31,0);
    tracep->declBus(c+802,"rd_wb", false,-1, 4,0);
    tracep->declQuad(c+796,"wbu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+798,"wbu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+800,"wbu_blockf", false,-1);
    tracep->declBus(c+2009,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2010,"WB", false,-1, 0,0);
    tracep->declBit(c+1091,"state", false,-1);
    tracep->declBit(c+1092,"next", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"io_d", false,-1);
    tracep->declBit(c+612,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"io_d", false,-1);
    tracep->declBit(c+612,"io_q", false,-1);
    tracep->declBit(c+612,"sync_0", false,-1);
    tracep->declBit(c+613,"sync_1", false,-1);
    tracep->declBit(c+614,"sync_2", false,-1);
    tracep->declBit(c+615,"sync_3", false,-1);
    tracep->declBit(c+616,"sync_4", false,-1);
    tracep->declBit(c+617,"sync_5", false,-1);
    tracep->declBit(c+618,"sync_6", false,-1);
    tracep->declBit(c+619,"sync_7", false,-1);
    tracep->declBit(c+620,"sync_8", false,-1);
    tracep->declBit(c+621,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1698,"auto_in_psel", false,-1);
    tracep->declBit(c+1699,"auto_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1620,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1940,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1700,"auto_in_pready", false,-1);
    tracep->declBit(c+1701,"auto_in_pslverr", false,-1);
    tracep->declBus(c+23,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1863,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1864,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1865,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1866,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1867,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1868,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1869,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1870,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1871,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1872,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1628,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1698,"in_psel", false,-1);
    tracep->declBit(c+1699,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1700,"in_pready", false,-1);
    tracep->declBus(c+23,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1701,"in_pslverr", false,-1);
    tracep->declBus(c+1863,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1864,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1865,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1866,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1867,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1868,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1869,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1870,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1871,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1872,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+2011,"GPIO_BASE", false,-1, 31,0);
    tracep->declBus(c+1265,"gpio_out_r", false,-1, 15,0);
    tracep->declBus(c+1266,"seg_reg_0_r", false,-1, 7,0);
    tracep->declBus(c+1267,"seg_reg_1_r", false,-1, 7,0);
    tracep->declBus(c+1268,"seg_reg_2_r", false,-1, 7,0);
    tracep->declBus(c+1269,"seg_reg_3_r", false,-1, 7,0);
    tracep->declBit(c+1715,"valid_access", false,-1);
    tracep->declBus(c+1629,"addr_off", false,-1, 31,0);
    tracep->declBus(c+1630,"addr_sel", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1694,"auto_in_psel", false,-1);
    tracep->declBit(c+1695,"auto_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1620,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1940,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1696,"auto_in_pready", false,-1);
    tracep->declBit(c+1949,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1697,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1873,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1874,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1628,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1694,"in_psel", false,-1);
    tracep->declBit(c+1695,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1696,"in_pready", false,-1);
    tracep->declBus(c+1697,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1949,"in_pslverr", false,-1);
    tracep->declBit(c+1873,"ps2_clk", false,-1);
    tracep->declBit(c+1874,"ps2_data", false,-1);
    tracep->declBus(c+1631,"clk_sync", false,-1, 1,0);
    tracep->declBus(c+1632,"dat_sync", false,-1, 1,0);
    tracep->declBit(c+1633,"clk_fall", false,-1);
    tracep->declBit(c+1634,"dat", false,-1);
    tracep->declBus(c+1270,"bit_cnt", false,-1, 3,0);
    tracep->declBus(c+1271,"shifter", false,-1, 7,0);
    tracep->declBit(c+1272,"par_acc", false,-1);
    tracep->declBit(c+1273,"frame_ok", false,-1);
    tracep->declBus(c+1274,"scancode", false,-1, 7,0);
    tracep->declBit(c+1275,"scancode_valid", false,-1);
    tracep->declBit(c+1910,"apb_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1808,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1809,"auto_in_wvalid", false,-1);
    tracep->declBit(c+406,"auto_in_arready", false,-1);
    tracep->declBit(c+1810,"auto_in_arvalid", false,-1);
    tracep->declBus(c+216,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1811,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+33,"auto_in_rready", false,-1);
    tracep->declBit(c+407,"auto_in_rvalid", false,-1);
    tracep->declBus(c+408,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+409,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+407,"state", false,-1);
    tracep->declBus(c+409,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+408,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1824,"raddr", false,-1, 31,0);
    tracep->declBit(c+1825,"ren", false,-1);
    tracep->declBus(c+1826,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1702,"auto_in_psel", false,-1);
    tracep->declBit(c+1886,"auto_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1615,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1940,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1887,"auto_in_pready", false,-1);
    tracep->declBit(c+1949,"auto_in_pslverr", false,-1);
    tracep->declBus(c+180,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1682,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1683,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1827,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1615,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1702,"in_psel", false,-1);
    tracep->declBit(c+1886,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1887,"in_pready", false,-1);
    tracep->declBus(c+180,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1949,"in_pslverr", false,-1);
    tracep->declBit(c+1682,"qspi_sck", false,-1);
    tracep->declBit(c+1683,"qspi_ce_n", false,-1);
    tracep->declBus(c+1827,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1827,"din", false,-1, 3,0);
    tracep->declBus(c+1716,"dout", false,-1, 3,0);
    tracep->declBus(c+1717,"douten", false,-1, 3,0);
    tracep->declBit(c+1911,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBus(c+1615,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1617,"dat_i", false,-1, 31,0);
    tracep->declBus(c+180,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1618,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1702,"cyc_i", false,-1);
    tracep->declBit(c+1702,"stb_i", false,-1);
    tracep->declBit(c+1911,"ack_o", false,-1);
    tracep->declBit(c+1616,"we_i", false,-1);
    tracep->declBit(c+1682,"sck", false,-1);
    tracep->declBit(c+1683,"ce_n", false,-1);
    tracep->declBus(c+1827,"din", false,-1, 3,0);
    tracep->declBus(c+1716,"dout", false,-1, 3,0);
    tracep->declBus(c+1717,"douten", false,-1, 3,0);
    tracep->declBus(c+2009,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+2010,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+1276,"mr_sck", false,-1);
    tracep->declBit(c+1277,"mr_ce_n", false,-1);
    tracep->declBus(c+1827,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1278,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+1279,"mr_doe", false,-1);
    tracep->declBit(c+1280,"mw_sck", false,-1);
    tracep->declBit(c+1281,"mw_ce_n", false,-1);
    tracep->declBus(c+1827,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1912,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+1282,"mw_doe", false,-1);
    tracep->declBit(c+1718,"mr_rd", false,-1);
    tracep->declBit(c+1283,"mr_done", false,-1);
    tracep->declBit(c+1719,"mw_wr", false,-1);
    tracep->declBit(c+1720,"mw_done", false,-1);
    tracep->declBit(c+1284,"qpi_mode", false,-1);
    tracep->declBit(c+1285,"mr_busy", false,-1);
    tracep->declBit(c+1702,"wb_valid", false,-1);
    tracep->declBit(c+1721,"wb_we", false,-1);
    tracep->declBit(c+1722,"wb_re", false,-1);
    tracep->declBit(c+1284,"allow_xfer", false,-1);
    tracep->declBit(c+1286,"state", false,-1);
    tracep->declBit(c+1723,"nstate", false,-1);
    tracep->declBus(c+1635,"size", false,-1, 2,0);
    tracep->declBus(c+1636,"byte0", false,-1, 7,0);
    tracep->declBus(c+1637,"byte1", false,-1, 7,0);
    tracep->declBus(c+1638,"byte2", false,-1, 7,0);
    tracep->declBus(c+1639,"byte3", false,-1, 7,0);
    tracep->declBus(c+1640,"wdata", false,-1, 31,0);
    tracep->declBit(c+1724,"use_mr", false,-1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1913,"rst_n", false,-1);
    tracep->declBus(c+1641,"addr", false,-1, 23,0);
    tracep->declBit(c+1718,"rd", false,-1);
    tracep->declBus(c+2012,"size", false,-1, 2,0);
    tracep->declBit(c+1283,"done", false,-1);
    tracep->declBus(c+180,"line", false,-1, 31,0);
    tracep->declBit(c+1276,"sck", false,-1);
    tracep->declBit(c+1277,"ce_n", false,-1);
    tracep->declBus(c+1827,"din", false,-1, 3,0);
    tracep->declBus(c+1278,"dout", false,-1, 3,0);
    tracep->declBit(c+1279,"douten", false,-1);
    tracep->declBit(c+1284,"qpi", false,-1);
    tracep->declBit(c+1285,"busy", false,-1);
    tracep->declBus(c+1946,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1947,"ENTER_QPI", false,-1, 1,0);
    tracep->declBus(c+1948,"READ", false,-1, 1,0);
    tracep->declBus(c+2013,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+2014,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+1287,"state", false,-1, 1,0);
    tracep->declBus(c+1914,"nstate", false,-1, 1,0);
    tracep->declBus(c+1288,"counter", false,-1, 7,0);
    tracep->declBus(c+1289,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+622+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1290,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1291,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1292,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1293,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+1294,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1295,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1296,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+1297,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+1298,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+1299,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+1300,"byte_cnt", false,-1, 7,0);
    tracep->declBus(c+1301,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1913,"rst_n", false,-1);
    tracep->declBus(c+1642,"addr", false,-1, 23,0);
    tracep->declBus(c+1640,"line", false,-1, 31,0);
    tracep->declBus(c+1635,"size", false,-1, 2,0);
    tracep->declBit(c+1719,"wr", false,-1);
    tracep->declBit(c+1284,"qpi", false,-1);
    tracep->declBit(c+1720,"done", false,-1);
    tracep->declBit(c+1280,"sck", false,-1);
    tracep->declBit(c+1281,"ce_n", false,-1);
    tracep->declBus(c+1827,"din", false,-1, 3,0);
    tracep->declBus(c+1912,"dout", false,-1, 3,0);
    tracep->declBit(c+1282,"douten", false,-1);
    tracep->declBus(c+2009,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2010,"WRITE", false,-1, 0,0);
    tracep->declBit(c+1302,"state", false,-1);
    tracep->declBit(c+1725,"nstate", false,-1);
    tracep->declBus(c+1303,"counter", false,-1, 7,0);
    tracep->declBus(c+1304,"saddr", false,-1, 23,0);
    tracep->declBus(c+2015,"CMD_38H", false,-1, 7,0);
    tracep->declBus(c+1290,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1291,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1292,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1305,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1726,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1306,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+1307,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+1308,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+1309,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+1310,"dat_off8", false,-1, 7,0);
    tracep->declBus(c+1311,"dat_off", false,-1, 2,0);
    tracep->declBus(c+1312,"dat_byte", false,-1, 1,0);
    tracep->declBus(c+1915,"dat_nib", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1832,"auto_in_awready", false,-1);
    tracep->declBit(c+1773,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1951,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1657,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1952,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1833,"auto_in_wready", false,-1);
    tracep->declBit(c+1774,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1658,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"auto_in_wlast", false,-1);
    tracep->declBit(c+156,"auto_in_bready", false,-1);
    tracep->declBit(c+1156,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1153,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1946,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1831,"auto_in_arready", false,-1);
    tracep->declBit(c+1772,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1951,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1653,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1654,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+88,"auto_in_rready", false,-1);
    tracep->declBit(c+1152,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1153,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1154,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1946,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1155,"auto_in_rlast", false,-1);
    tracep->declBit(c+1884,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1741,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1144,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1145,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1146,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1147,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1742,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1743,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1744,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1754,"sdram_bundle_dq", false,-1, 31,0);
    tracep->declBit(c+1830,"sdram_bundle_sel", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1832,"in_awready", false,-1);
    tracep->declBit(c+1773,"in_awvalid", false,-1);
    tracep->declBus(c+1657,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1951,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1952,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+674,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1946,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1833,"in_wready", false,-1);
    tracep->declBit(c+1774,"in_wvalid", false,-1);
    tracep->declBus(c+1658,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1950,"in_wlast", false,-1);
    tracep->declBit(c+156,"in_bready", false,-1);
    tracep->declBit(c+1156,"in_bvalid", false,-1);
    tracep->declBus(c+1946,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1153,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1831,"in_arready", false,-1);
    tracep->declBit(c+1772,"in_arvalid", false,-1);
    tracep->declBus(c+1653,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1951,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1655,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1656,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+88,"in_rready", false,-1);
    tracep->declBit(c+1152,"in_rvalid", false,-1);
    tracep->declBus(c+1946,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1154,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1155,"in_rlast", false,-1);
    tracep->declBus(c+1153,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1884,"sdram_clk", false,-1);
    tracep->declBit(c+1741,"sdram_cke", false,-1);
    tracep->declBit(c+1144,"sdram_cs", false,-1);
    tracep->declBit(c+1145,"sdram_ras", false,-1);
    tracep->declBit(c+1146,"sdram_cas", false,-1);
    tracep->declBit(c+1147,"sdram_we", false,-1);
    tracep->declBus(c+1742,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1743,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1744,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1754,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1830,"sdram_sel", false,-1);
    tracep->declBit(c+1313,"sdram_dout_en", false,-1);
    tracep->declBus(c+1314,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBit(c+1773,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1657,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1951,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1952,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1946,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1774,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1658,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1659,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1950,"inport_wlast_i", false,-1);
    tracep->declBit(c+156,"inport_bready_i", false,-1);
    tracep->declBit(c+1772,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1653,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1951,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1654,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1656,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+88,"inport_rready_i", false,-1);
    tracep->declBus(c+1754,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1832,"inport_awready_o", false,-1);
    tracep->declBit(c+1833,"inport_wready_o", false,-1);
    tracep->declBit(c+1156,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1946,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1153,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1831,"inport_arready_o", false,-1);
    tracep->declBit(c+1152,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1154,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1946,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1153,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1155,"inport_rlast_o", false,-1);
    tracep->declBit(c+1884,"sdram_clk_o", false,-1);
    tracep->declBit(c+1741,"sdram_cke_o", false,-1);
    tracep->declBit(c+1144,"sdram_cs_o", false,-1);
    tracep->declBit(c+1145,"sdram_ras_o", false,-1);
    tracep->declBit(c+1146,"sdram_cas_o", false,-1);
    tracep->declBit(c+1147,"sdram_we_o", false,-1);
    tracep->declBus(c+1744,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1742,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1743,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1314,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1313,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1830,"sdram_sel_o", false,-1);
    tracep->declBus(c+1941,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2016,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1956,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1997,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1841,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1842,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1843,"ram_rd_w", false,-1);
    tracep->declBit(c+1745,"ram_accept_w", false,-1);
    tracep->declBus(c+1658,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1315,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1916,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+1316,"ram_ack_w", false,-1);
    tracep->declBit(c+1949,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBit(c+1773,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1657,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1951,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1952,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1946,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1774,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1658,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1659,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1950,"axi_wlast_i", false,-1);
    tracep->declBit(c+156,"axi_bready_i", false,-1);
    tracep->declBit(c+1772,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1653,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1951,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1654,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1656,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+88,"axi_rready_i", false,-1);
    tracep->declBit(c+1745,"ram_accept_i", false,-1);
    tracep->declBit(c+1316,"ram_ack_i", false,-1);
    tracep->declBit(c+1949,"ram_error_i", false,-1);
    tracep->declBus(c+1315,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1832,"axi_awready_o", false,-1);
    tracep->declBit(c+1833,"axi_wready_o", false,-1);
    tracep->declBit(c+1156,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1946,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1153,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1831,"axi_arready_o", false,-1);
    tracep->declBit(c+1152,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1154,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1946,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1153,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1155,"axi_rlast_o", false,-1);
    tracep->declBus(c+1842,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1843,"ram_rd_o", false,-1);
    tracep->declBus(c+1916,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1841,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1658,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+1317,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1318,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1319,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1320,"req_rd_q", false,-1);
    tracep->declBit(c+1321,"req_wr_q", false,-1);
    tracep->declBus(c+1322,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1323,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1324,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1325,"req_prio_q", false,-1);
    tracep->declBit(c+1326,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1327,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1328,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1844,"req_push_w", false,-1);
    tracep->declBus(c+1917,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1329,"req_out_valid_w", false,-1);
    tracep->declBus(c+1330,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1918,"resp_accept_w", false,-1);
    tracep->declBit(c+1331,"resp_is_write_w", false,-1);
    tracep->declBit(c+1332,"resp_is_read_w", false,-1);
    tracep->declBit(c+1155,"resp_is_last_w", false,-1);
    tracep->declBus(c+1153,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1333,"resp_valid_w", false,-1);
    tracep->declBit(c+1334,"write_prio_w", false,-1);
    tracep->declBit(c+1335,"read_prio_w", false,-1);
    tracep->declBit(c+1845,"write_active_w", false,-1);
    tracep->declBit(c+1843,"read_active_w", false,-1);
    tracep->declBus(c+1841,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1919,"wr_w", false,-1);
    tracep->declBit(c+1843,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1954,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2000,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1997,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBus(c+1917,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1844,"push_i", false,-1);
    tracep->declBit(c+1918,"pop_i", false,-1);
    tracep->declBus(c+1330,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1328,"accept_o", false,-1);
    tracep->declBit(c+1329,"valid_o", false,-1);
    tracep->declBus(c+1998,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1336+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1340,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1341,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1342,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1953,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2000,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1997,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBus(c+1315,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+1316,"push_i", false,-1);
    tracep->declBit(c+1918,"pop_i", false,-1);
    tracep->declBus(c+1154,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1343,"accept_o", false,-1);
    tracep->declBit(c+1333,"valid_o", false,-1);
    tracep->declBus(c+1998,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1344+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1348,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1349,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1350,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBus(c+1842,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1843,"inport_rd_i", false,-1);
    tracep->declBus(c+1916,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1841,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1658,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1754,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1745,"inport_accept_o", false,-1);
    tracep->declBit(c+1316,"inport_ack_o", false,-1);
    tracep->declBit(c+1949,"inport_error_o", false,-1);
    tracep->declBus(c+1315,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1884,"sdram_clk_o", false,-1);
    tracep->declBit(c+1741,"sdram_cke_o", false,-1);
    tracep->declBit(c+1144,"sdram_cs_o", false,-1);
    tracep->declBit(c+1145,"sdram_ras_o", false,-1);
    tracep->declBit(c+1146,"sdram_cas_o", false,-1);
    tracep->declBit(c+1147,"sdram_we_o", false,-1);
    tracep->declBus(c+1744,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1742,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1743,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1314,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1313,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1830,"sdram_sel_o", false,-1);
    tracep->declBus(c+1941,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2016,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1956,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1997,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1997,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+2000,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+2000,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2017,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1997,"SDRAM_COL_LSB", false,-1, 31,0);
    tracep->declBus(c+2018,"SDRAM_BANK_LSB", false,-1, 31,0);
    tracep->declBus(c+2017,"SDRAM_ROW_LSB", false,-1, 31,0);
    tracep->declBus(c+2019,"SDRAM_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+2020,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2021,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2022,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2000,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2023,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2004,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2024,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2025,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2026,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2027,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2028,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1951,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2029,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+2000,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1951,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2028,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2027,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2004,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2025,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2024,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2026,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2023,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2030,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2031,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2005,"STATE_READ_GAP", false,-1, 3,0);
    tracep->declBus(c+2006,"STATE_WRITE_GAP", false,-1, 3,0);
    tracep->declBus(c+1943,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1943,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1953,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1943,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1997,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1997,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1954,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1841,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1842,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1843,"ram_rd_w", false,-1);
    tracep->declBit(c+1745,"ram_accept_w", false,-1);
    tracep->declBus(c+1658,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1315,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+1316,"ram_ack_w", false,-1);
    tracep->declBit(c+1846,"ram_req_w", false,-1);
    tracep->declBus(c+1351,"command_q", false,-1, 3,0);
    tracep->declBus(c+1742,"addr_q", false,-1, 12,0);
    tracep->declBus(c+1314,"data_q", false,-1, 31,0);
    tracep->declBit(c+1352,"data_rd_en_q", false,-1);
    tracep->declBus(c+1744,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1741,"cke_q", false,-1);
    tracep->declBus(c+1743,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1315,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+1353,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1754,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1354,"refresh_q", false,-1);
    tracep->declBus(c+1355,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1356+i*1,"active_row_q", true,(i+0), 13,0);
    }
    tracep->declBus(c+1746,"state_q", false,-1, 3,0);
    tracep->declBus(c+1847,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1848,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1360,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1361,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+1830,"sdram_sel", false,-1);
    tracep->declBus(c+1849,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1850,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1851,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+2000,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1362,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1852,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2032,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1747,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1363,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1364,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1365,"idx", false,-1, 31,0);
    tracep->declBus(c+1366,"rd_q", false,-1, 3,0);
    tracep->declBit(c+1316,"ack_q", false,-1);
    tracep->declArray(c+1748,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1707,"auto_in_psel", false,-1);
    tracep->declBit(c+1708,"auto_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1619,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1940,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1888,"auto_in_pready", false,-1);
    tracep->declBit(c+1621,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1889,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1141,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1142,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1143,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1883,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2033,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2034,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2035,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1643,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1707,"in_psel", false,-1);
    tracep->declBit(c+1708,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1888,"in_pready", false,-1);
    tracep->declBus(c+1889,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1621,"in_pslverr", false,-1);
    tracep->declBit(c+1141,"spi_sck", false,-1);
    tracep->declBus(c+1142,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1143,"spi_mosi", false,-1);
    tracep->declBit(c+1883,"spi_miso", false,-1);
    tracep->declBit(c+1367,"spi_irq_out", false,-1);
    tracep->declBit(c+1644,"xip_sel", false,-1);
    tracep->declBus(c+2036,"REG_TX0", false,-1, 4,0);
    tracep->declBus(c+2037,"REG_TX1", false,-1, 4,0);
    tracep->declBus(c+2036,"REG_RX0", false,-1, 4,0);
    tracep->declBus(c+2038,"REG_CTRL", false,-1, 4,0);
    tracep->declBus(c+2039,"REG_DIV", false,-1, 4,0);
    tracep->declBus(c+2040,"REG_SS", false,-1, 4,0);
    tracep->declBus(c+2041,"CTRL_XFER64", false,-1, 31,0);
    tracep->declBus(c+2042,"CTRL_GO", false,-1, 31,0);
    tracep->declBus(c+1727,"spi_adr", false,-1, 4,0);
    tracep->declBus(c+1728,"spi_dat_i", false,-1, 31,0);
    tracep->declBus(c+1729,"spi_sel", false,-1, 3,0);
    tracep->declBit(c+1730,"spi_we", false,-1);
    tracep->declBit(c+1731,"spi_stb", false,-1);
    tracep->declBit(c+1732,"spi_cyc", false,-1);
    tracep->declBus(c+1368,"spi_dat_o", false,-1, 31,0);
    tracep->declBit(c+1369,"spi_ack", false,-1);
    tracep->declBit(c+1949,"spi_err", false,-1);
    tracep->declBus(c+1951,"S_IDLE", false,-1, 3,0);
    tracep->declBus(c+2028,"S_DIV", false,-1, 3,0);
    tracep->declBus(c+2027,"S_SS", false,-1, 3,0);
    tracep->declBus(c+2004,"S_TX1", false,-1, 3,0);
    tracep->declBus(c+2025,"S_TX0", false,-1, 3,0);
    tracep->declBus(c+2024,"S_CTRL", false,-1, 3,0);
    tracep->declBus(c+2026,"S_POLL", false,-1, 3,0);
    tracep->declBus(c+2023,"S_RX", false,-1, 3,0);
    tracep->declBus(c+2030,"S_RXLAT", false,-1, 3,0);
    tracep->declBus(c+2031,"S_UNSS", false,-1, 3,0);
    tracep->declBus(c+2005,"S_DONE", false,-1, 3,0);
    tracep->declBus(c+1370,"state", false,-1, 3,0);
    tracep->declBus(c+1371,"xip_addr", false,-1, 31,0);
    tracep->declBus(c+1372,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+1373,"xip_ready", false,-1);
    tracep->declBit(c+1374,"poll_go_seen", false,-1);
    tracep->declBit(c+1751,"wr_err_seen", false,-1);
    tracep->declBus(c+1375,"xip_adr", false,-1, 4,0);
    tracep->declBus(c+1376,"xip_dat", false,-1, 31,0);
    tracep->declBit(c+1377,"xip_we", false,-1);
    tracep->declBit(c+1378,"xip_req", false,-1);
    tracep->declBit(c+1379,"xip_busy", false,-1);
    tracep->declBus(c+1380,"xip_cmd", false,-1, 31,0);
    tracep->declBus(c+1381,"rx_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1996,"Tp", false,-1, 31,0);
    tracep->declBit(c+1861,"wb_clk_i", false,-1);
    tracep->declBit(c+1862,"wb_rst_i", false,-1);
    tracep->declBus(c+1727,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1728,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1368,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1729,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1730,"wb_we_i", false,-1);
    tracep->declBit(c+1731,"wb_stb_i", false,-1);
    tracep->declBit(c+1732,"wb_cyc_i", false,-1);
    tracep->declBit(c+1369,"wb_ack_o", false,-1);
    tracep->declBit(c+1949,"wb_err_o", false,-1);
    tracep->declBit(c+1367,"wb_int_o", false,-1);
    tracep->declBus(c+1142,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1141,"sclk_pad_o", false,-1);
    tracep->declBit(c+1143,"mosi_pad_o", false,-1);
    tracep->declBit(c+1883,"miso_pad_i", false,-1);
    tracep->declBus(c+1382,"divider", false,-1, 15,0);
    tracep->declBus(c+1383,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1384,"ss", false,-1, 7,0);
    tracep->declBus(c+1733,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1385,"rx", false,-1, 127,0);
    tracep->declBit(c+1389,"rx_negedge", false,-1);
    tracep->declBit(c+1390,"tx_negedge", false,-1);
    tracep->declBus(c+1391,"char_len", false,-1, 6,0);
    tracep->declBit(c+1392,"go", false,-1);
    tracep->declBit(c+1393,"lsb", false,-1);
    tracep->declBit(c+1394,"ie", false,-1);
    tracep->declBit(c+1395,"ass", false,-1);
    tracep->declBit(c+1734,"spi_divider_sel", false,-1);
    tracep->declBit(c+1735,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1736,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1737,"spi_ss_sel", false,-1);
    tracep->declBit(c+1396,"tip", false,-1);
    tracep->declBit(c+1397,"pos_edge", false,-1);
    tracep->declBit(c+1398,"neg_edge", false,-1);
    tracep->declBit(c+1399,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1996,"Tp", false,-1, 31,0);
    tracep->declBit(c+1861,"clk_in", false,-1);
    tracep->declBit(c+1862,"rst", false,-1);
    tracep->declBit(c+1396,"enable", false,-1);
    tracep->declBit(c+1392,"go", false,-1);
    tracep->declBit(c+1399,"last_clk", false,-1);
    tracep->declBus(c+1382,"divider", false,-1, 15,0);
    tracep->declBit(c+1141,"clk_out", false,-1);
    tracep->declBit(c+1397,"pos_edge", false,-1);
    tracep->declBit(c+1398,"neg_edge", false,-1);
    tracep->declBus(c+1400,"cnt", false,-1, 15,0);
    tracep->declBit(c+1401,"cnt_zero", false,-1);
    tracep->declBit(c+1402,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1996,"Tp", false,-1, 31,0);
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1862,"rst", false,-1);
    tracep->declBus(c+1738,"latch", false,-1, 3,0);
    tracep->declBus(c+1729,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1391,"len", false,-1, 6,0);
    tracep->declBit(c+1393,"lsb", false,-1);
    tracep->declBit(c+1392,"go", false,-1);
    tracep->declBit(c+1397,"pos_edge", false,-1);
    tracep->declBit(c+1398,"neg_edge", false,-1);
    tracep->declBit(c+1389,"rx_negedge", false,-1);
    tracep->declBit(c+1390,"tx_negedge", false,-1);
    tracep->declBit(c+1396,"tip", false,-1);
    tracep->declBit(c+1399,"last", false,-1);
    tracep->declBus(c+1728,"p_in", false,-1, 31,0);
    tracep->declArray(c+1385,"p_out", false,-1, 127,0);
    tracep->declBit(c+1141,"s_clk", false,-1);
    tracep->declBit(c+1883,"s_in", false,-1);
    tracep->declBit(c+1143,"s_out", false,-1);
    tracep->declBus(c+1403,"cnt", false,-1, 7,0);
    tracep->declArray(c+1385,"data", false,-1, 127,0);
    tracep->declBus(c+1404,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1405,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1406,"rx_clk", false,-1);
    tracep->declBit(c+1407,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1703,"auto_in_psel", false,-1);
    tracep->declBit(c+1704,"auto_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1620,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1940,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1705,"auto_in_pready", false,-1);
    tracep->declBit(c+1949,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1706,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1881,"uart_rx", false,-1);
    tracep->declBit(c+1882,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1703,"in_psel", false,-1);
    tracep->declBit(c+1704,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1705,"in_pready", false,-1);
    tracep->declBit(c+1949,"in_pslverr", false,-1);
    tracep->declBus(c+1628,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1706,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1881,"uart_rx", false,-1);
    tracep->declBit(c+1882,"uart_tx", false,-1);
    tracep->declBit(c+1408,"rtsn", false,-1);
    tracep->declBit(c+1949,"ctsn", false,-1);
    tracep->declBit(c+1409,"dtr_pad_o", false,-1);
    tracep->declBit(c+1949,"dsr_pad_i", false,-1);
    tracep->declBit(c+1949,"ri_pad_i", false,-1);
    tracep->declBit(c+1949,"dcd_pad_i", false,-1);
    tracep->declBit(c+1410,"interrupt", false,-1);
    tracep->declBit(c+24,"reg_we", false,-1);
    tracep->declBit(c+25,"reg_re", false,-1);
    tracep->declBus(c+1645,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1646,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+626,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1739,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1411,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1862,"wb_rst_i", false,-1);
    tracep->declBus(c+1645,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1647,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1739,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+24,"wb_we_i", false,-1);
    tracep->declBit(c+25,"wb_re_i", false,-1);
    tracep->declBit(c+1882,"stx_pad_o", false,-1);
    tracep->declBit(c+1881,"srx_pad_i", false,-1);
    tracep->declBus(c+2030,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1411,"rts_pad_o", false,-1);
    tracep->declBit(c+1409,"dtr_pad_o", false,-1);
    tracep->declBit(c+1410,"int_o", false,-1);
    tracep->declBit(c+1412,"enable", false,-1);
    tracep->declBit(c+1413,"srx_pad", false,-1);
    tracep->declBus(c+1414,"ier", false,-1, 3,0);
    tracep->declBus(c+1415,"iir", false,-1, 3,0);
    tracep->declBus(c+1416,"fcr", false,-1, 1,0);
    tracep->declBus(c+1417,"mcr", false,-1, 4,0);
    tracep->declBus(c+1418,"lcr", false,-1, 7,0);
    tracep->declBus(c+1419,"msr", false,-1, 7,0);
    tracep->declBus(c+1420,"dl", false,-1, 15,0);
    tracep->declBus(c+1421,"scratch", false,-1, 7,0);
    tracep->declBit(c+1422,"start_dlc", false,-1);
    tracep->declBit(c+1423,"lsr_mask_d", false,-1);
    tracep->declBit(c+1424,"msi_reset", false,-1);
    tracep->declBus(c+1425,"dlc", false,-1, 15,0);
    tracep->declBus(c+1426,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1427,"rx_reset", false,-1);
    tracep->declBit(c+1428,"tx_reset", false,-1);
    tracep->declBit(c+1429,"dlab", false,-1);
    tracep->declBit(c+1950,"cts_pad_i", false,-1);
    tracep->declBit(c+1949,"dsr_pad_i", false,-1);
    tracep->declBit(c+1949,"ri_pad_i", false,-1);
    tracep->declBit(c+1949,"dcd_pad_i", false,-1);
    tracep->declBit(c+1430,"loopback", false,-1);
    tracep->declBit(c+1949,"cts", false,-1);
    tracep->declBit(c+1950,"dsr", false,-1);
    tracep->declBit(c+1950,"ri", false,-1);
    tracep->declBit(c+1950,"dcd", false,-1);
    tracep->declBit(c+1431,"cts_c", false,-1);
    tracep->declBit(c+1432,"dsr_c", false,-1);
    tracep->declBit(c+1433,"ri_c", false,-1);
    tracep->declBit(c+1434,"dcd_c", false,-1);
    tracep->declBus(c+1435,"lsr", false,-1, 7,0);
    tracep->declBit(c+1436,"lsr0", false,-1);
    tracep->declBit(c+1437,"lsr1", false,-1);
    tracep->declBit(c+1438,"lsr2", false,-1);
    tracep->declBit(c+1439,"lsr3", false,-1);
    tracep->declBit(c+1440,"lsr4", false,-1);
    tracep->declBit(c+1441,"lsr5", false,-1);
    tracep->declBit(c+1442,"lsr6", false,-1);
    tracep->declBit(c+1443,"lsr7", false,-1);
    tracep->declBit(c+1444,"lsr0r", false,-1);
    tracep->declBit(c+1445,"lsr1r", false,-1);
    tracep->declBit(c+1446,"lsr2r", false,-1);
    tracep->declBit(c+1447,"lsr3r", false,-1);
    tracep->declBit(c+1448,"lsr4r", false,-1);
    tracep->declBit(c+1449,"lsr5r", false,-1);
    tracep->declBit(c+1450,"lsr6r", false,-1);
    tracep->declBit(c+1451,"lsr7r", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+1452,"rls_int", false,-1);
    tracep->declBit(c+1453,"rda_int", false,-1);
    tracep->declBit(c+1454,"ti_int", false,-1);
    tracep->declBit(c+1455,"thre_int", false,-1);
    tracep->declBit(c+1456,"ms_int", false,-1);
    tracep->declBit(c+1457,"tf_push", false,-1);
    tracep->declBit(c+1458,"rf_pop", false,-1);
    tracep->declBus(c+1920,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1459,"rf_error_bit", false,-1);
    tracep->declBit(c+1437,"rf_overrun", false,-1);
    tracep->declBit(c+1460,"rf_push_pulse", false,-1);
    tracep->declBus(c+1461,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1462,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1463,"tstate", false,-1, 2,0);
    tracep->declBus(c+1464,"rstate", false,-1, 3,0);
    tracep->declBus(c+1465,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1466,"thre_set_en", false,-1);
    tracep->declBus(c+1467,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1468,"block_value", false,-1, 7,0);
    tracep->declBit(c+1469,"serial_out", false,-1);
    tracep->declBit(c+1470,"serial_in", false,-1);
    tracep->declBit(c+27,"lsr_mask_condition", false,-1);
    tracep->declBit(c+28,"iir_read", false,-1);
    tracep->declBit(c+29,"msr_read", false,-1);
    tracep->declBit(c+30,"fifo_read", false,-1);
    tracep->declBit(c+31,"fifo_write", false,-1);
    tracep->declBus(c+1471,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1472,"lsr0_d", false,-1);
    tracep->declBit(c+1473,"lsr1_d", false,-1);
    tracep->declBit(c+1474,"lsr2_d", false,-1);
    tracep->declBit(c+1475,"lsr3_d", false,-1);
    tracep->declBit(c+1476,"lsr4_d", false,-1);
    tracep->declBit(c+1477,"lsr5_d", false,-1);
    tracep->declBit(c+1478,"lsr6_d", false,-1);
    tracep->declBit(c+1479,"lsr7_d", false,-1);
    tracep->declBit(c+1480,"rls_int_d", false,-1);
    tracep->declBit(c+1481,"thre_int_d", false,-1);
    tracep->declBit(c+1482,"ms_int_d", false,-1);
    tracep->declBit(c+1483,"ti_int_d", false,-1);
    tracep->declBit(c+1484,"rda_int_d", false,-1);
    tracep->declBit(c+1485,"rls_int_rise", false,-1);
    tracep->declBit(c+1486,"thre_int_rise", false,-1);
    tracep->declBit(c+1487,"ms_int_rise", false,-1);
    tracep->declBit(c+1488,"ti_int_rise", false,-1);
    tracep->declBit(c+1489,"rda_int_rise", false,-1);
    tracep->declBit(c+1490,"rls_int_pnd", false,-1);
    tracep->declBit(c+1491,"rda_int_pnd", false,-1);
    tracep->declBit(c+1492,"thre_int_pnd", false,-1);
    tracep->declBit(c+1493,"ms_int_pnd", false,-1);
    tracep->declBit(c+1494,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1996,"Tp", false,-1, 31,0);
    tracep->declBus(c+1996,"width", false,-1, 31,0);
    tracep->declBus(c+2010,"init_value", false,-1, 0,0);
    tracep->declBit(c+1862,"rst_i", false,-1);
    tracep->declBit(c+1861,"clk_i", false,-1);
    tracep->declBit(c+1949,"stage1_rst_i", false,-1);
    tracep->declBit(c+1950,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1881,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1413,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1495,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1862,"wb_rst_i", false,-1);
    tracep->declBus(c+1418,"lcr", false,-1, 7,0);
    tracep->declBit(c+1458,"rf_pop", false,-1);
    tracep->declBit(c+1470,"srx_pad_i", false,-1);
    tracep->declBit(c+1412,"enable", false,-1);
    tracep->declBit(c+1427,"rx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBus(c+1465,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1461,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1920,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1437,"rf_overrun", false,-1);
    tracep->declBit(c+1459,"rf_error_bit", false,-1);
    tracep->declBus(c+1464,"rstate", false,-1, 3,0);
    tracep->declBit(c+1460,"rf_push_pulse", false,-1);
    tracep->declBus(c+1496,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1497,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1498,"rshift", false,-1, 7,0);
    tracep->declBit(c+1499,"rparity", false,-1);
    tracep->declBit(c+1500,"rparity_error", false,-1);
    tracep->declBit(c+1501,"rframing_error", false,-1);
    tracep->declBit(c+1502,"rbit_in", false,-1);
    tracep->declBit(c+1503,"rparity_xor", false,-1);
    tracep->declBus(c+1504,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1505,"rf_push_q", false,-1);
    tracep->declBus(c+1506,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1507,"rf_push", false,-1);
    tracep->declBit(c+1508,"break_error", false,-1);
    tracep->declBit(c+1509,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1510,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1511,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1512,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1951,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2028,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2027,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2004,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2025,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2024,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2026,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2023,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2030,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2031,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2005,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1513,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1514,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2018,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1999,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2000,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1955,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1862,"wb_rst_i", false,-1);
    tracep->declBit(c+1460,"push", false,-1);
    tracep->declBit(c+1458,"pop", false,-1);
    tracep->declBus(c+1506,"data_in", false,-1, 10,0);
    tracep->declBit(c+1427,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1920,"data_out", false,-1, 10,0);
    tracep->declBit(c+1437,"overrun", false,-1);
    tracep->declBus(c+1461,"count", false,-1, 4,0);
    tracep->declBit(c+1459,"error_bit", false,-1);
    tracep->declBus(c+1921,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1515+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1531,"top", false,-1, 3,0);
    tracep->declBus(c+1532,"bottom", false,-1, 3,0);
    tracep->declBus(c+1533,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1534,"word0", false,-1, 2,0);
    tracep->declBus(c+1535,"word1", false,-1, 2,0);
    tracep->declBus(c+1536,"word2", false,-1, 2,0);
    tracep->declBus(c+1537,"word3", false,-1, 2,0);
    tracep->declBus(c+1538,"word4", false,-1, 2,0);
    tracep->declBus(c+1539,"word5", false,-1, 2,0);
    tracep->declBus(c+1540,"word6", false,-1, 2,0);
    tracep->declBus(c+1541,"word7", false,-1, 2,0);
    tracep->declBus(c+1542,"word8", false,-1, 2,0);
    tracep->declBus(c+1543,"word9", false,-1, 2,0);
    tracep->declBus(c+1544,"word10", false,-1, 2,0);
    tracep->declBus(c+1545,"word11", false,-1, 2,0);
    tracep->declBus(c+1546,"word12", false,-1, 2,0);
    tracep->declBus(c+1547,"word13", false,-1, 2,0);
    tracep->declBus(c+1548,"word14", false,-1, 2,0);
    tracep->declBus(c+1549,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+2000,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2035,"data_width", false,-1, 31,0);
    tracep->declBus(c+1999,"depth", false,-1, 31,0);
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1460,"we", false,-1);
    tracep->declBus(c+1531,"a", false,-1, 3,0);
    tracep->declBus(c+1532,"dpra", false,-1, 3,0);
    tracep->declBus(c+1550,"di", false,-1, 7,0);
    tracep->declBus(c+1921,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+627+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1862,"wb_rst_i", false,-1);
    tracep->declBus(c+1418,"lcr", false,-1, 7,0);
    tracep->declBit(c+1457,"tf_push", false,-1);
    tracep->declBus(c+1647,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1412,"enable", false,-1);
    tracep->declBit(c+1428,"tx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+1469,"stx_pad_o", false,-1);
    tracep->declBus(c+1463,"tstate", false,-1, 2,0);
    tracep->declBus(c+1462,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1551,"counter", false,-1, 4,0);
    tracep->declBus(c+1552,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1553,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1554,"stx_o_tmp", false,-1);
    tracep->declBit(c+1555,"parity_xor", false,-1);
    tracep->declBit(c+1556,"tf_pop", false,-1);
    tracep->declBit(c+1557,"bit_out", false,-1);
    tracep->declBus(c+1647,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1740,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1558,"tf_overrun", false,-1);
    tracep->declBus(c+1989,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1940,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+2043,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+2044,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+2012,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+2045,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2035,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1999,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2000,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1955,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1862,"wb_rst_i", false,-1);
    tracep->declBit(c+1457,"push", false,-1);
    tracep->declBit(c+1556,"pop", false,-1);
    tracep->declBus(c+1647,"data_in", false,-1, 7,0);
    tracep->declBit(c+1428,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1740,"data_out", false,-1, 7,0);
    tracep->declBit(c+1558,"overrun", false,-1);
    tracep->declBus(c+1462,"count", false,-1, 4,0);
    tracep->declBus(c+1559,"top", false,-1, 3,0);
    tracep->declBus(c+1560,"bottom", false,-1, 3,0);
    tracep->declBus(c+1561,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+2000,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2035,"data_width", false,-1, 31,0);
    tracep->declBus(c+1999,"depth", false,-1, 31,0);
    tracep->declBit(c+1861,"clk", false,-1);
    tracep->declBit(c+1457,"we", false,-1);
    tracep->declBus(c+1559,"a", false,-1, 3,0);
    tracep->declBus(c+1560,"dpra", false,-1, 3,0);
    tracep->declBus(c+1647,"di", false,-1, 7,0);
    tracep->declBus(c+1740,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+643+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBit(c+1691,"auto_in_psel", false,-1);
    tracep->declBit(c+1692,"auto_in_penable", false,-1);
    tracep->declBit(c+1616,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1619,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1940,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1617,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1693,"auto_in_pready", false,-1);
    tracep->declBit(c+1949,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1885,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1875,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1876,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1877,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1878,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1879,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1880,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1861,"clock", false,-1);
    tracep->declBit(c+1862,"reset", false,-1);
    tracep->declBus(c+1643,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1691,"in_psel", false,-1);
    tracep->declBit(c+1692,"in_penable", false,-1);
    tracep->declBus(c+1940,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1616,"in_pwrite", false,-1);
    tracep->declBus(c+1617,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1618,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1693,"in_pready", false,-1);
    tracep->declBus(c+1885,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1949,"in_pslverr", false,-1);
    tracep->declBus(c+1875,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1876,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1877,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1878,"vga_hsync", false,-1);
    tracep->declBit(c+1879,"vga_vsync", false,-1);
    tracep->declBit(c+1880,"vga_valid", false,-1);
    tracep->declBus(c+2046,"FB_AW", false,-1, 31,0);
    tracep->declBit(c+1922,"apb_wr", false,-1);
    tracep->declBit(c+1923,"apb_rd", false,-1);
    tracep->declBus(c+1648,"fb_index", false,-1, 18,0);
    tracep->declBus(c+2047,"H_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2048,"H_SYNC", false,-1, 9,0);
    tracep->declBus(c+2049,"H_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2050,"H_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+2051,"V_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2052,"V_SYNC", false,-1, 9,0);
    tracep->declBus(c+2053,"V_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2054,"V_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+659,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+660,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+661,"h_valid", false,-1);
    tracep->declBit(c+662,"v_valid", false,-1);
    tracep->declBus(c+663,"h_addr", false,-1, 9,0);
    tracep->declBus(c+664,"v_addr", false,-1, 9,0);
    tracep->declBus(c+665,"vga_index", false,-1, 18,0);
    tracep->declBus(c+666,"pixel_q", false,-1, 31,0);
    tracep->declBit(c+667,"h_valid_q", false,-1);
    tracep->declBit(c+668,"v_valid_q", false,-1);
    tracep->declBit(c+669,"hsync_q", false,-1);
    tracep->declBit(c+670,"vsync_q", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1141,"sck", false,-1);
    tracep->declBit(c+1562,"ss", false,-1);
    tracep->declBit(c+1143,"mosi", false,-1);
    tracep->declBit(c+1563,"miso", false,-1);
    tracep->declBus(c+671,"buffer", false,-1, 7,0);
    tracep->declBus(c+672,"bits", false,-1, 3,0);
    tracep->declBus(c+2055,"state", false,-1, 1,0);
    tracep->declBus(c+1564,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1141,"sck", false,-1);
    tracep->declBit(c+1565,"ss", false,-1);
    tracep->declBit(c+1143,"mosi", false,-1);
    tracep->declBit(c+1924,"miso", false,-1);
    tracep->declBit(c+1565,"reset", false,-1);
    tracep->declBus(c+1649,"state", false,-1, 2,0);
    tracep->declBus(c+1650,"counter", false,-1, 7,0);
    tracep->declBus(c+1925,"cmd", false,-1, 7,0);
    tracep->declBus(c+1926,"addr", false,-1, 23,0);
    tracep->declBus(c+1651,"data", false,-1, 31,0);
    tracep->declBit(c+1652,"ren", false,-1);
    tracep->declBus(c+673,"rdata", false,-1, 31,0);
    tracep->declBus(c+1927,"raddr", false,-1, 31,0);
    tracep->declBus(c+1928,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1652,"valid", false,-1);
    tracep->declBus(c+1925,"cmd", false,-1, 7,0);
    tracep->declBus(c+1927,"addr", false,-1, 31,0);
    tracep->declBus(c+673,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1682,"sck", false,-1);
    tracep->declBit(c+1683,"ce_n", false,-1);
    tracep->declBus(c+1827,"dio", false,-1, 3,0);
    tracep->declBus(c+1989,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1940,"CTRL", false,-1, 2,0);
    tracep->declBus(c+2043,"ADDR", false,-1, 2,0);
    tracep->declBus(c+2044,"ARRG", false,-1, 2,0);
    tracep->declBus(c+2012,"READ", false,-1, 2,0);
    tracep->declBus(c+2045,"WRITE", false,-1, 2,0);
    tracep->declBus(c+2013,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+2015,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+2014,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+1118,"state", false,-1, 2,0);
    tracep->declBus(c+1828,"next", false,-1, 2,0);
    tracep->declBus(c+1119,"ctrl", false,-1, 7,0);
    tracep->declBus(c+1120,"addr", false,-1, 23,0);
    tracep->declBus(c+1121,"counter", false,-1, 7,0);
    tracep->declBus(c+1122,"dout", false,-1, 3,0);
    tracep->declBus(c+1123,"wr_hi", false,-1, 3,0);
    tracep->declBit(c+1124,"qpi", false,-1);
    tracep->declBit(c+1125,"douten", false,-1);
    tracep->declBus(c+1126,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1127,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1128,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1129,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+1130,"RD_FIRST", false,-1, 7,0);
    tracep->declBus(c+1131,"RD_LAST", false,-1, 7,0);
    tracep->declBus(c+1132,"WR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1133,"WR_LAST", false,-1, 7,0);
    tracep->declBus(c+1134,"rd_off", false,-1, 7,0);
    tracep->declBus(c+1135,"wr_off", false,-1, 7,0);
    tracep->declBus(c+1136,"read_byte", false,-1, 1,0);
    tracep->declBit(c+1137,"read_index", false,-1);
    tracep->declBus(c+1138,"write_byte", false,-1, 1,0);
    tracep->declBus(c+1139,"rd_idx", false,-1, 21,0);
    tracep->declBus(c+1140,"wr_idx", false,-1, 21,0);
    tracep->declBus(c+1829,"ctrl_done", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1144,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1744,"dqm", false,-1, 3,0);
    tracep->declBus(c+1754,"dq", false,-1, 31,0);
    tracep->declBit(c+1830,"sel", false,-1);
    tracep->declBit(c+1566,"broadcast_cmd", false,-1);
    tracep->pushNamePrefix("u_pair0 ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1929,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1744,"dqm", false,-1, 3,0);
    tracep->declBus(c+1754,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1929,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1752,"dqm", false,-1, 1,0);
    tracep->declBus(c+1755,"dq", false,-1, 15,0);
    tracep->declBus(c+1995,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1996,"MODE", false,-1, 31,0);
    tracep->declBus(c+1997,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1998,"READ", false,-1, 31,0);
    tracep->declBus(c+2000,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1567,"state", false,-1, 2,0);
    tracep->declBus(c+1857,"next", false,-1, 2,0);
    tracep->declBus(c+1568,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1569,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1570,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1853,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1571,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1572,"dq_oe", false,-1);
    tracep->declBus(c+1573,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1574,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1575+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1929,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1753,"dqm", false,-1, 1,0);
    tracep->declBus(c+1756,"dq", false,-1, 15,0);
    tracep->declBus(c+1995,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1996,"MODE", false,-1, 31,0);
    tracep->declBus(c+1997,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1998,"READ", false,-1, 31,0);
    tracep->declBus(c+2000,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1579,"state", false,-1, 2,0);
    tracep->declBus(c+1858,"next", false,-1, 2,0);
    tracep->declBus(c+1580,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1581,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1582,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1853,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1583,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1584,"dq_oe", false,-1);
    tracep->declBus(c+1585,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1586,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1587+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pair1 ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1930,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1744,"dqm", false,-1, 3,0);
    tracep->declBus(c+1754,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1930,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1752,"dqm", false,-1, 1,0);
    tracep->declBus(c+1755,"dq", false,-1, 15,0);
    tracep->declBus(c+1995,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1996,"MODE", false,-1, 31,0);
    tracep->declBus(c+1997,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1998,"READ", false,-1, 31,0);
    tracep->declBus(c+2000,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1591,"state", false,-1, 2,0);
    tracep->declBus(c+1859,"next", false,-1, 2,0);
    tracep->declBus(c+1592,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1593,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1594,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1854,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1595,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1596,"dq_oe", false,-1);
    tracep->declBus(c+1597,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1598,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1599+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1884,"clk", false,-1);
    tracep->declBit(c+1741,"cke", false,-1);
    tracep->declBit(c+1930,"cs", false,-1);
    tracep->declBit(c+1145,"ras", false,-1);
    tracep->declBit(c+1146,"cas", false,-1);
    tracep->declBit(c+1147,"we", false,-1);
    tracep->declBus(c+1742,"a", false,-1, 12,0);
    tracep->declBus(c+1743,"ba", false,-1, 1,0);
    tracep->declBus(c+1753,"dqm", false,-1, 1,0);
    tracep->declBus(c+1756,"dq", false,-1, 15,0);
    tracep->declBus(c+1995,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1996,"MODE", false,-1, 31,0);
    tracep->declBus(c+1997,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1998,"READ", false,-1, 31,0);
    tracep->declBus(c+2000,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1603,"state", false,-1, 2,0);
    tracep->declBus(c+1860,"next", false,-1, 2,0);
    tracep->declBus(c+1604,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1605,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1606,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1854,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1607,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1608,"dq_oe", false,-1);
    tracep->declBus(c+1609,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1610,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1611+i*1,"active_row", true,(i+0), 12,0);
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
    tracep->declBus(c+1060,"araddr", false,-1, 31,0);
    tracep->declBit(c+1093,"arvalid", false,-1);
    tracep->declBit(c+1094,"arready", false,-1);
    tracep->declBus(c+1951,"arid", false,-1, 3,0);
    tracep->declBus(c+1952,"arlen", false,-1, 7,0);
    tracep->declBus(c+1946,"arburst", false,-1, 1,0);
    tracep->declBus(c+2043,"arsize", false,-1, 2,0);
    tracep->declBus(c+1095,"rdata", false,-1, 31,0);
    tracep->declBus(c+1096,"rresp", false,-1, 1,0);
    tracep->declBit(c+1097,"rvalid", false,-1);
    tracep->declBit(c+1098,"rready", false,-1);
    tracep->declBus(c+1951,"rid", false,-1, 3,0);
    tracep->declBit(c+1099,"rlast", false,-1);
    tracep->declBus(c+1988,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1949,"awvalid", false,-1);
    tracep->declBit(c+19,"awready", false,-1);
    tracep->declBus(c+2043,"awsize", false,-1, 2,0);
    tracep->declBus(c+1951,"awid", false,-1, 3,0);
    tracep->declBus(c+1952,"awlen", false,-1, 7,0);
    tracep->declBus(c+1946,"awburst", false,-1, 1,0);
    tracep->declBus(c+1988,"wdata", false,-1, 31,0);
    tracep->declBus(c+1951,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1949,"wvalid", false,-1);
    tracep->declBit(c+20,"wready", false,-1);
    tracep->declBit(c+1949,"wlast", false,-1);
    tracep->declBus(c+1100,"bresp", false,-1, 1,0);
    tracep->declBit(c+1101,"bvalid", false,-1);
    tracep->declBit(c+1949,"bready", false,-1);
    tracep->declBus(c+1102,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1657,"araddr", false,-1, 31,0);
    tracep->declBit(c+1103,"arvalid", false,-1);
    tracep->declBit(c+1931,"arready", false,-1);
    tracep->declBus(c+1951,"arid", false,-1, 3,0);
    tracep->declBus(c+1952,"arlen", false,-1, 7,0);
    tracep->declBus(c+1946,"arburst", false,-1, 1,0);
    tracep->declBus(c+1104,"arsize", false,-1, 2,0);
    tracep->declBus(c+1932,"rdata", false,-1, 31,0);
    tracep->declBus(c+98,"rresp", false,-1, 1,0);
    tracep->declBit(c+79,"rvalid", false,-1);
    tracep->declBit(c+80,"rready", false,-1);
    tracep->declBus(c+1933,"rid", false,-1, 3,0);
    tracep->declBit(c+1909,"rlast", false,-1);
    tracep->declBus(c+1657,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1105,"awvalid", false,-1);
    tracep->declBit(c+1855,"awready", false,-1);
    tracep->declBus(c+674,"awsize", false,-1, 2,0);
    tracep->declBus(c+1951,"awid", false,-1, 3,0);
    tracep->declBus(c+1952,"awlen", false,-1, 7,0);
    tracep->declBus(c+1946,"awburst", false,-1, 1,0);
    tracep->declBus(c+1658,"wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1106,"wvalid", false,-1);
    tracep->declBit(c+1934,"wready", false,-1);
    tracep->declBit(c+1950,"wlast", false,-1);
    tracep->declBus(c+162,"bresp", false,-1, 1,0);
    tracep->declBit(c+151,"bvalid", false,-1);
    tracep->declBit(c+152,"bready", false,-1);
    tracep->declBus(c+1935,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1653,"araddr", false,-1, 31,0);
    tracep->declBit(c+1662,"arvalid", false,-1);
    tracep->declBit(c+1835,"arready", false,-1);
    tracep->declBus(c+1951,"arid", false,-1, 3,0);
    tracep->declBus(c+1654,"arlen", false,-1, 7,0);
    tracep->declBus(c+1656,"arburst", false,-1, 1,0);
    tracep->declBus(c+1655,"arsize", false,-1, 2,0);
    tracep->declBus(c+91,"rdata", false,-1, 31,0);
    tracep->declBus(c+92,"rresp", false,-1, 1,0);
    tracep->declBit(c+66,"rvalid", false,-1);
    tracep->declBit(c+77,"rready", false,-1);
    tracep->declBus(c+90,"rid", false,-1, 3,0);
    tracep->declBit(c+93,"rlast", false,-1);
    tracep->declBus(c+1657,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1660,"awvalid", false,-1);
    tracep->declBit(c+1834,"awready", false,-1);
    tracep->declBus(c+674,"awsize", false,-1, 2,0);
    tracep->declBus(c+1951,"awid", false,-1, 3,0);
    tracep->declBus(c+1952,"awlen", false,-1, 7,0);
    tracep->declBus(c+1946,"awburst", false,-1, 1,0);
    tracep->declBus(c+1658,"wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1661,"wvalid", false,-1);
    tracep->declBit(c+1902,"wready", false,-1);
    tracep->declBit(c+1950,"wlast", false,-1);
    tracep->declBus(c+1903,"bresp", false,-1, 1,0);
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
    tracep->declBus(c+1675,"araddr", false,-1, 31,0);
    tracep->declBit(c+1676,"arvalid", false,-1);
    tracep->declBit(c+1677,"arready", false,-1);
    tracep->declBus(c+1951,"arid", false,-1, 3,0);
    tracep->declBus(c+1936,"arlen", false,-1, 7,0);
    tracep->declBus(c+1656,"arburst", false,-1, 1,0);
    tracep->declBus(c+1937,"arsize", false,-1, 2,0);
    tracep->declBus(c+1107,"rdata", false,-1, 31,0);
    tracep->declBus(c+1108,"rresp", false,-1, 1,0);
    tracep->declBit(c+1109,"rvalid", false,-1);
    tracep->declBit(c+1938,"rready", false,-1);
    tracep->declBus(c+1110,"rid", false,-1, 3,0);
    tracep->declBit(c+1111,"rlast", false,-1);
    tracep->declBus(c+1657,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1678,"awvalid", false,-1);
    tracep->declBit(c+1679,"awready", false,-1);
    tracep->declBus(c+674,"awsize", false,-1, 2,0);
    tracep->declBus(c+1951,"awid", false,-1, 3,0);
    tracep->declBus(c+1952,"awlen", false,-1, 7,0);
    tracep->declBus(c+1946,"awburst", false,-1, 1,0);
    tracep->declBus(c+1658,"wdata", false,-1, 31,0);
    tracep->declBus(c+1659,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1680,"wvalid", false,-1);
    tracep->declBit(c+1681,"wready", false,-1);
    tracep->declBit(c+1950,"wlast", false,-1);
    tracep->declBus(c+1112,"bresp", false,-1, 1,0);
    tracep->declBit(c+1113,"bvalid", false,-1);
    tracep->declBit(c+1939,"bready", false,-1);
    tracep->declBus(c+1114,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1115,"araddr", false,-1, 31,0);
    tracep->declBit(c+1116,"arvalid", false,-1);
    tracep->declBit(c+1856,"arready", false,-1);
    tracep->declBus(c+1951,"arid", false,-1, 3,0);
    tracep->declBus(c+1117,"arlen", false,-1, 7,0);
    tracep->declBus(c+1947,"arburst", false,-1, 1,0);
    tracep->declBus(c+2043,"arsize", false,-1, 2,0);
    tracep->declBus(c+99,"rdata", false,-1, 31,0);
    tracep->declBus(c+98,"rresp", false,-1, 1,0);
    tracep->declBit(c+81,"rvalid", false,-1);
    tracep->declBit(c+82,"rready", false,-1);
    tracep->declBus(c+1933,"rid", false,-1, 3,0);
    tracep->declBit(c+100,"rlast", false,-1);
    tracep->declBus(c+1988,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1949,"awvalid", false,-1);
    tracep->declBit(c+2056,"awready", false,-1);
    tracep->declBus(c+2043,"awsize", false,-1, 2,0);
    tracep->declBus(c+1951,"awid", false,-1, 3,0);
    tracep->declBus(c+1952,"awlen", false,-1, 7,0);
    tracep->declBus(c+1946,"awburst", false,-1, 1,0);
    tracep->declBus(c+1988,"wdata", false,-1, 31,0);
    tracep->declBus(c+1951,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1949,"wvalid", false,-1);
    tracep->declBit(c+2057,"wready", false,-1);
    tracep->declBit(c+2058,"wlast", false,-1);
    tracep->declBus(c+2059,"bresp", false,-1, 1,0);
    tracep->declBit(c+2060,"bvalid", false,-1);
    tracep->declBit(c+1949,"bready", false,-1);
    tracep->declBus(c+2061,"bid", false,-1, 3,0);
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
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+663,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+664,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+665,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q),32);
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync_q));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync_q));
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__buffer),8);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bits),4);
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullCData(oldp+674,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize),3);
    bufp->fullWData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg),1024);
    bufp->fullQData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_work_cyc),64);
    bufp->fullQData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_block_cyc),64);
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush));
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i));
    bufp->fullCData(oldp+761,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+762,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+763,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w),32);
    bufp->fullQData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blockf_cyc),64);
    bufp->fullQData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blcokbl_cyc),64);
    bufp->fullQData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_work_cyc),64);
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bypass_data_valid));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el));
    bufp->fullBit(oldp+775,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)))));
    bufp->fullCData(oldp+776,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save))
                                ? 2U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save))
                                         ? 1U : ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save)) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save))
                                                  ? 0U
                                                  : 3U)))),2);
    bufp->fullBit(oldp+777,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save))));
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save),5);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save),5);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save),5);
    bufp->fullIData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2),32);
    bufp->fullIData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w),32);
    bufp->fullIData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata),32);
    bufp->fullIData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save]),32);
    bufp->fullQData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blockf_cyc),64);
    bufp->fullQData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blcokb_cyc),64);
    bufp->fullQData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_work_cyc),64);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blockf));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw));
    bufp->fullIData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_lw),32);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save),5);
    bufp->fullQData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_blockf_cyc),64);
    bufp->fullQData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_work_cyc),64);
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_blockf));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu),5);
    bufp->fullIData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu),32);
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullIData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[16]),32);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[17]),32);
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[18]),32);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[19]),32);
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[20]),32);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[21]),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[22]),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[23]),32);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[24]),32);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[25]),32);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[26]),32);
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[27]),32);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[28]),32);
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[29]),32);
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[30]),32);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[31]),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end));
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list),32);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt),32);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save));
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save),5);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bypass_active));
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bypass_data),32);
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus),32);
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc),32);
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause),32);
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec),32);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid),32);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save),32);
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save));
    bufp->fullBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save));
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save));
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save));
    bufp->fullBit(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save));
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save));
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save),32);
    bufp->fullIData(oldp+900,((((((((((0x300U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w) 
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
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next),2);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb));
    bufp->fullBit(oldp+906,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save))))));
    bufp->fullBit(oldp+907,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save))))))))))));
    bufp->fullBit(oldp+908,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save)))));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__i_type));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__gpr_read_valid));
    bufp->fullIData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul),32);
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__new_pc),32);
    bufp->fullIData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft),32);
    bufp->fullCData(oldp+916,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),5);
    bufp->fullCData(oldp+917,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),5);
    bufp->fullIData(oldp+918,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul)),32);
    bufp->fullIData(oldp+919,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+920,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+921,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+922,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+923,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+924,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+925,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+926,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+927,(VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+928,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+929,(VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+930,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+931,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+932,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+933,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+934,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+935,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, 
                                             (0x1fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+936,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, 
                                             (0x1fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullWData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[0]),128);
    bufp->fullWData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[1]),128);
    bufp->fullWData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[2]),128);
    bufp->fullWData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[3]),128);
    bufp->fullWData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[4]),128);
    bufp->fullWData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[5]),128);
    bufp->fullWData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[6]),128);
    bufp->fullWData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[7]),128);
    bufp->fullWData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[8]),128);
    bufp->fullWData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[9]),128);
    bufp->fullWData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[10]),128);
    bufp->fullWData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[11]),128);
    bufp->fullWData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[12]),128);
    bufp->fullWData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[13]),128);
    bufp->fullWData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[14]),128);
    bufp->fullWData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[15]),128);
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[0]),24);
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[1]),24);
    bufp->fullIData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[2]),24);
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[3]),24);
    bufp->fullIData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[4]),24);
    bufp->fullIData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[5]),24);
    bufp->fullIData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[6]),24);
    bufp->fullIData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[7]),24);
    bufp->fullIData(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[8]),24);
    bufp->fullIData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[9]),24);
    bufp->fullIData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[10]),24);
    bufp->fullIData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[11]),24);
    bufp->fullIData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[12]),24);
    bufp->fullIData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[13]),24);
    bufp->fullIData(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[14]),24);
    bufp->fullIData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[15]),24);
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0]));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1]));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2]));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3]));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4]));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5]));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6]));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7]));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[8]));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[9]));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[10]));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[11]));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[12]));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[13]));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[14]));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[15]));
    bufp->fullIData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save),32);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save),2);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__bid_save),4);
    bufp->fullIData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rdata_save),32);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat),2);
    bufp->fullIData(oldp+1038,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                >> 8U)),24);
    bufp->fullCData(oldp+1039,((0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                        >> 4U))),4);
    bufp->fullIData(oldp+1040,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                      >> 2U))),32);
    bufp->fullIData(oldp+1041,((0xfffffff0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save)),32);
    bufp->fullIData(oldp+1042,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat) 
                                << 5U)),32);
    bufp->fullCData(oldp+1043,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable));
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state),3);
    bufp->fullIData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1047,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),7);
    bufp->fullCData(oldp+1048,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1049,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w),32);
    bufp->fullIData(oldp+1051,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+1052,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1053,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
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
    bufp->fullIData(oldp+1054,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1055,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x14U)),32);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__error_save),2);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__master_validation_error_save));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save));
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save),32);
    bufp->fullIData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next),2);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__error_save),2);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save),2);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save));
    bufp->fullIData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save),32);
    bufp->fullIData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save),32);
    bufp->fullIData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out),32);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullIData(oldp+1071,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1072,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1073,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1074,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted),32);
    bufp->fullBit(oldp+1076,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
    bufp->fullBit(oldp+1077,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))));
    bufp->fullBit(oldp+1078,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save))));
    bufp->fullBit(oldp+1079,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save))));
    bufp->fullBit(oldp+1080,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))));
    bufp->fullQData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime),64);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state),2);
    bufp->fullIData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rdata_save),32);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rresp_save),2);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rid_save),4);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bid_save),4);
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_busy));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next));
    bufp->fullBit(oldp+1093,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arvalid));
    bufp->fullBit(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arready));
    bufp->fullIData(oldp+1095,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rdata),32);
    bufp->fullCData(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rresp),2);
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rvalid));
    bufp->fullBit(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rready));
    bufp->fullBit(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rlast));
    bufp->fullCData(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bresp),2);
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bvalid));
    bufp->fullCData(oldp+1102,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bid),4);
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
    bufp->fullCData(oldp+1104,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize),3);
    bufp->fullBit(oldp+1105,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
    bufp->fullBit(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
    bufp->fullIData(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata),32);
    bufp->fullCData(oldp+1108,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp),2);
    bufp->fullBit(oldp+1109,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid));
    bufp->fullCData(oldp+1110,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rid),4);
    bufp->fullBit(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast));
    bufp->fullCData(oldp+1112,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bresp),2);
    bufp->fullBit(oldp+1113,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bvalid));
    bufp->fullCData(oldp+1114,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bid),4);
    bufp->fullIData(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.araddr),32);
    bufp->fullBit(oldp+1116,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid));
    bufp->fullCData(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable)
                                 ? 3U : 0U)),8);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl),8);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_hi),4);
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi));
    bufp->fullBit(oldp+1125,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))));
    bufp->fullCData(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 1U : 7U)),8);
    bufp->fullCData(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 2U : 8U)),8);
    bufp->fullCData(oldp+1128,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+1129,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+1130,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+1131,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0x15U : 0x1bU)),8);
    bufp->fullCData(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                 ? 0xfU : 0x15U)),8);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off),8);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off),8);
    bufp->fullCData(oldp+1136,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off) 
                                      >> 1U))),2);
    bufp->fullBit(oldp+1137,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off))));
    bufp->fullCData(oldp+1138,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                                      >> 1U))),2);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_idx),22);
    bufp->fullIData(oldp+1140,((0x3fffffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                             + (3U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                                                   >> 1U))))),22);
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1144,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1145,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1146,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1147,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save),32);
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1153,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+1155,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__state),2);
    bufp->fullQData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0]),33);
    bufp->fullQData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1]),33);
    bufp->fullQData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2]),33);
    bufp->fullQData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3]),33);
    bufp->fullQData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4]),33);
    bufp->fullQData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5]),33);
    bufp->fullQData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6]),33);
    bufp->fullQData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7]),33);
    bufp->fullQData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8]),33);
    bufp->fullQData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9]),33);
    bufp->fullQData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[10]),33);
    bufp->fullQData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[11]),33);
    bufp->fullQData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[12]),33);
    bufp->fullQData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[13]),33);
    bufp->fullQData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[14]),33);
    bufp->fullQData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[15]),33);
    bufp->fullQData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[16]),33);
    bufp->fullQData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[17]),33);
    bufp->fullQData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[18]),33);
    bufp->fullQData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[19]),33);
    bufp->fullQData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[20]),33);
    bufp->fullQData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[21]),33);
    bufp->fullQData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[22]),33);
    bufp->fullQData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[23]),33);
    bufp->fullQData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[24]),33);
    bufp->fullQData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[25]),33);
    bufp->fullQData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[26]),33);
    bufp->fullQData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[27]),33);
    bufp->fullQData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[28]),33);
    bufp->fullQData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[29]),33);
    bufp->fullQData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[30]),33);
    bufp->fullQData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[31]),33);
    bufp->fullIData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0]),32);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1]),32);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2]),32);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3]),32);
    bufp->fullIData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4]),32);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5]),32);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6]),32);
    bufp->fullIData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7]),32);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8]),32);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9]),32);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[10]),32);
    bufp->fullIData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[11]),32);
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[12]),32);
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[13]),32);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[14]),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[15]),32);
    bufp->fullIData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[16]),32);
    bufp->fullIData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[17]),32);
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[18]),32);
    bufp->fullIData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[19]),32);
    bufp->fullIData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[20]),32);
    bufp->fullIData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[21]),32);
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[22]),32);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[23]),32);
    bufp->fullIData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[24]),32);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[25]),32);
    bufp->fullIData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[26]),32);
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[27]),32);
    bufp->fullIData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[28]),32);
    bufp->fullIData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[29]),32);
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[30]),32);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[31]),32);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat),6);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat),6);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save),5);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save),4);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save),2);
    bufp->fullQData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter),33);
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__b_received));
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save),4);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_save),2);
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullSData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r),16);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r),8);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r),8);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter),8);
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc));
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok));
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode),8);
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1278,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
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
    bufp->fullBit(oldp+1279,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0))));
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1282,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    bufp->fullBit(oldp+1285,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 1U : 7U)),8);
    bufp->fullCData(oldp+1291,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 2U : 8U)),8);
    bufp->fullCData(oldp+1292,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+1293,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+1295,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? 0xeU
                                             : 0x14U)))),8);
    bufp->fullCData(oldp+1296,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                     ? 0xbU : 0xeU)
                                 : (1U & (0xebU >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))),4);
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8),8);
    bufp->fullCData(oldp+1298,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+1299,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
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
    bufp->fullCData(oldp+1300,((0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                           ? 7U : 0xaU)))),8);
    bufp->fullCData(oldp+1301,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 7U
                                                  : 0xaU)))),2);
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullCData(oldp+1305,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+1306,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                     ? 8U : 3U) : (1U 
                                                   & (0x38U 
                                                      >> 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))),4);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8),8);
    bufp->fullCData(oldp+1308,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+1309,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
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
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8),8);
    bufp->fullCData(oldp+1311,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))),3);
    bufp->fullCData(oldp+1312,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                      >> 1U))),2);
    bufp->fullBit(oldp+1313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1328,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1329,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1331,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1332,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1333,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1334,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1335,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1343,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),14);
    bufp->fullSData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),14);
    bufp->fullSData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),14);
    bufp->fullSData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),14);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o),32);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack));
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullIData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr),32);
    bufp->fullIData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen));
    bufp->fullCData(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr),5);
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat),32);
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we));
    bufp->fullBit(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req));
    bufp->fullBit(oldp+1379,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
    bufp->fullIData(oldp+1380,((0x3000000U | (0xffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr))),32);
    bufp->fullIData(oldp+1381,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                    >> 0x18U))))),32);
    bufp->fullSData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1389,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1390,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1391,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1392,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1393,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1394,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1395,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1399,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1401,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1402,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1404,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1408,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1409,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1411,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1429,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1430,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1431,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1432,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1433,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1434,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1435,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1438,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1439,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1440,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1459,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1466,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1485,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1486,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1487,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1488,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1489,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1508,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1509,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1510,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1511,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1512,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1514,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1533,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1550,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1561,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1562,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__next),2);
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd));
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1572,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1584,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1588,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1590,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1591,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1593,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1595,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1597,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1599,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1600,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1601,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1608,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1609,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1617,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+1619,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1620,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1624,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1627,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullIData(oldp+1628,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1629,(((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x10002000U))),32);
    bufp->fullCData(oldp+1630,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),4);
    bufp->fullCData(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync),2);
    bufp->fullCData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync),2);
    bufp->fullBit(oldp+1633,((IData)((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))));
    bufp->fullBit(oldp+1634,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                    >> 1U))));
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1636,((0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
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
    bufp->fullCData(oldp+1637,((0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 8U)
                                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 0x18U)))),8);
    bufp->fullCData(oldp+1638,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1639,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata),32);
    bufp->fullIData(oldp+1641,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1642,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1643,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel));
    bufp->fullCData(oldp+1645,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1648,((0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 2U))),19);
    bufp->fullCData(oldp+1649,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1652,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1653,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr),32);
    bufp->fullCData(oldp+1654,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen),8);
    bufp->fullCData(oldp+1655,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize),3);
    bufp->fullCData(oldp+1656,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? 0U : 1U)),2);
    bufp->fullIData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save),32);
    bufp->fullIData(oldp+1658,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata),32);
    bufp->fullCData(oldp+1659,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb),4);
    bufp->fullBit(oldp+1660,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.awvalid));
    bufp->fullBit(oldp+1661,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.wvalid));
    bufp->fullBit(oldp+1662,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
    bufp->fullBit(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rdata_now),32);
    bufp->fullCData(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rresp_now),2);
    bufp->fullBit(oldp+1670,((0x200U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                         >> 0x10U))));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_sel_clint));
    bufp->fullCData(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state),2);
    bufp->fullBit(oldp+1673,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))));
    bufp->fullBit(oldp+1674,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))));
    bufp->fullIData(oldp+1675,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.araddr),32);
    bufp->fullBit(oldp+1676,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid));
    bufp->fullBit(oldp+1677,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready));
    bufp->fullBit(oldp+1678,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.awvalid));
    bufp->fullBit(oldp+1679,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.awready));
    bufp->fullBit(oldp+1680,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wvalid));
    bufp->fullBit(oldp+1681,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wready));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
    bufp->fullCData(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullBit(oldp+1693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access));
    bufp->fullCData(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr));
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT),8);
    bufp->fullCData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr),5);
    bufp->fullIData(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i),32);
    bufp->fullCData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel),4);
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc));
    bufp->fullIData(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullBit(oldp+1735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullSData(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen));
    bufp->fullCData(oldp+1752,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1753,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1754,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1755,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1756,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+1757,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+1759,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1762,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1763,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1770,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1775,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1776,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1781,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1792,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1793,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1794,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1795,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1796,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1797,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1798,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1799,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1806,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1807,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1808,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1809,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1810,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1811,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1816,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1824,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1827,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullCData(oldp+1828,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next),3);
    bufp->fullCData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done),8);
    bufp->fullBit(oldp+1830,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1831,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1833,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1849,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1850,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1851,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullCData(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1853,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+1854,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullBit(oldp+1855,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awready));
    bufp->fullBit(oldp+1856,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arready));
    bufp->fullCData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next),3);
    bufp->fullCData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1860,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next),3);
    bufp->fullBit(oldp+1861,(vlSelf->clock));
    bufp->fullBit(oldp+1862,(vlSelf->reset));
    bufp->fullSData(oldp+1863,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1864,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1865,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1866,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1867,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1868,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1869,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1870,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1871,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1872,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1873,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1874,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1875,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1876,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1877,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1878,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1879,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1880,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1881,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1882,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1883,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1884,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1885,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                [(0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 2U))]
                                 : 0U)),32);
    bufp->fullBit(oldp+1886,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1887,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1888,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    bufp->fullIData(oldp+1889,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)),32);
    bufp->fullIData(oldp+1890,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1892,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1893,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1895,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1897,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullCData(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1900,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1901,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1902,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1903,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullBit(oldp+1904,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready)))));
    bufp->fullBit(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next),3);
    bufp->fullCData(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next),3);
    bufp->fullCData(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next),2);
    bufp->fullBit(oldp+1909,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullBit(oldp+1910,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))));
    bufp->fullBit(oldp+1911,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+1912,((0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
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
    bufp->fullBit(oldp+1913,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1914,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
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
    bufp->fullCData(oldp+1915,((0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
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
    bufp->fullCData(oldp+1916,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid)
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+1917,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
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
    bufp->fullBit(oldp+1918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1919,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid))));
    bufp->fullSData(oldp+1920,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1922,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1923,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))));
    bufp->fullBit(oldp+1924,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1925,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1926,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1927,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1928,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1929,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd)) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+1930,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0x1aU)) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd)))))));
    bufp->fullBit(oldp+1931,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready)))));
    bufp->fullIData(oldp+1932,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                 ? vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
    bufp->fullCData(oldp+1933,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1934,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_sel_clint)
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wready)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullCData(oldp+1935,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5))),4);
    bufp->fullCData(oldp+1936,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable)
                                          ? 3U : 0U))),8);
    bufp->fullCData(oldp+1937,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize)
                                 : 2U)),3);
    bufp->fullBit(oldp+1938,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint) 
                               & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)))
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready)
                               : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint) 
                                   & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready)))));
    bufp->fullBit(oldp+1939,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_busy) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready))));
    bufp->fullCData(oldp+1940,(1U),3);
    bufp->fullIData(oldp+1941,(0x64U),32);
    bufp->fullIData(oldp+1942,(0x3e8U),32);
    bufp->fullIData(oldp+1943,(0xaU),32);
    bufp->fullIData(oldp+1944,(0xa0000000U),32);
    bufp->fullIData(oldp+1945,(0xbfffffffU),32);
    bufp->fullCData(oldp+1946,(0U),2);
    bufp->fullCData(oldp+1947,(1U),2);
    bufp->fullCData(oldp+1948,(2U),2);
    bufp->fullBit(oldp+1949,(0U));
    bufp->fullBit(oldp+1950,(1U));
    bufp->fullCData(oldp+1951,(0U),4);
    bufp->fullCData(oldp+1952,(0U),8);
    bufp->fullIData(oldp+1953,(0x20U),32);
    bufp->fullIData(oldp+1954,(6U),32);
    bufp->fullIData(oldp+1955,(5U),32);
    bufp->fullIData(oldp+1956,(9U),32);
    bufp->fullSData(oldp+1957,(1U),16);
    bufp->fullBit(oldp+1958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+1961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+1963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+1965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+1967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+1969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+1971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+1973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+1975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+1977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+1979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+1981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+1983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+1985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+1987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+1988,(0U),32);
    bufp->fullCData(oldp+1989,(0U),3);
    bufp->fullBit(oldp+1990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_exu_rd));
    bufp->fullBit(oldp+1991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_lsu_rd));
    bufp->fullCData(oldp+1992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu),5);
    bufp->fullBit(oldp+1993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_flush));
    bufp->fullCData(oldp+1994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_release),5);
    bufp->fullIData(oldp+1995,(0U),32);
    bufp->fullIData(oldp+1996,(1U),32);
    bufp->fullIData(oldp+1997,(2U),32);
    bufp->fullIData(oldp+1998,(3U),32);
    bufp->fullIData(oldp+1999,(0x10U),32);
    bufp->fullIData(oldp+2000,(4U),32);
    bufp->fullIData(oldp+2001,(0x18U),32);
    bufp->fullIData(oldp+2002,(0x80U),32);
    bufp->fullCData(oldp+2003,(3U),8);
    bufp->fullCData(oldp+2004,(3U),4);
    bufp->fullCData(oldp+2005,(0xaU),4);
    bufp->fullCData(oldp+2006,(0xbU),4);
    bufp->fullIData(oldp+2007,(0x2000000U),32);
    bufp->fullIData(oldp+2008,(0x2000004U),32);
    bufp->fullBit(oldp+2009,(0U));
    bufp->fullBit(oldp+2010,(1U));
    bufp->fullIData(oldp+2011,(0x10002000U),32);
    bufp->fullCData(oldp+2012,(4U),3);
    bufp->fullCData(oldp+2013,(0xebU),8);
    bufp->fullCData(oldp+2014,(0x35U),8);
    bufp->fullCData(oldp+2015,(0x38U),8);
    bufp->fullIData(oldp+2016,(0x19U),32);
    bufp->fullIData(oldp+2017,(0xdU),32);
    bufp->fullIData(oldp+2018,(0xbU),32);
    bufp->fullIData(oldp+2019,(0x1aU),32);
    bufp->fullIData(oldp+2020,(0x2000U),32);
    bufp->fullIData(oldp+2021,(0x2710U),32);
    bufp->fullIData(oldp+2022,(0x30cU),32);
    bufp->fullCData(oldp+2023,(7U),4);
    bufp->fullCData(oldp+2024,(5U),4);
    bufp->fullCData(oldp+2025,(4U),4);
    bufp->fullCData(oldp+2026,(6U),4);
    bufp->fullCData(oldp+2027,(2U),4);
    bufp->fullCData(oldp+2028,(1U),4);
    bufp->fullSData(oldp+2029,(0x20U),13);
    bufp->fullCData(oldp+2030,(8U),4);
    bufp->fullCData(oldp+2031,(9U),4);
    bufp->fullIData(oldp+2032,(0x11U),32);
    bufp->fullIData(oldp+2033,(0x30000000U),32);
    bufp->fullIData(oldp+2034,(0x3fffffffU),32);
    bufp->fullIData(oldp+2035,(8U),32);
    bufp->fullCData(oldp+2036,(0U),5);
    bufp->fullCData(oldp+2037,(4U),5);
    bufp->fullCData(oldp+2038,(0x10U),5);
    bufp->fullCData(oldp+2039,(0x14U),5);
    bufp->fullCData(oldp+2040,(0x18U),5);
    bufp->fullIData(oldp+2041,(0x40U),32);
    bufp->fullIData(oldp+2042,(0x100U),32);
    bufp->fullCData(oldp+2043,(2U),3);
    bufp->fullCData(oldp+2044,(3U),3);
    bufp->fullCData(oldp+2045,(5U),3);
    bufp->fullIData(oldp+2046,(0x13U),32);
    bufp->fullSData(oldp+2047,(0x320U),10);
    bufp->fullSData(oldp+2048,(0x60U),10);
    bufp->fullSData(oldp+2049,(0x90U),10);
    bufp->fullSData(oldp+2050,(0x310U),10);
    bufp->fullSData(oldp+2051,(0x20dU),10);
    bufp->fullSData(oldp+2052,(2U),10);
    bufp->fullSData(oldp+2053,(0x23U),10);
    bufp->fullSData(oldp+2054,(0x203U),10);
    bufp->fullCData(oldp+2055,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+2056,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.awready));
    bufp->fullBit(oldp+2057,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wready));
    bufp->fullBit(oldp+2058,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wlast));
    bufp->fullCData(oldp+2059,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bresp),2);
    bufp->fullBit(oldp+2060,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bvalid));
    bufp->fullCData(oldp+2061,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bid),4);
}
