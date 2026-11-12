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
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+2015,"ref_clk", false,-1);
    tracep->declBit(c+2016,"ref_rst", false,-1);
    tracep->declBus(c+2017,"ref_pc", false,-1, 31,0);
    tracep->declArray(c+2018,"ref_gpr", false,-1, 1023,0);
    tracep->declBit(c+2050,"ref_wen", false,-1);
    tracep->declBus(c+2051,"ref_instr", false,-1, 31,0);
    tracep->declBus(c+2052,"ref_last_pc", false,-1, 31,0);
    tracep->pushNamePrefix("difftest_top ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+2015,"ref_clk", false,-1);
    tracep->declBit(c+2016,"ref_rst", false,-1);
    tracep->declBus(c+2017,"ref_pc", false,-1, 31,0);
    tracep->declArray(c+2018,"ref_gpr", false,-1, 1023,0);
    tracep->declBit(c+2050,"ref_wen", false,-1);
    tracep->declBus(c+2051,"ref_instr", false,-1, 31,0);
    tracep->declBus(c+2052,"ref_last_pc", false,-1, 31,0);
    tracep->pushNamePrefix("soc ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBus(c+1145,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+2107,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1146,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1147,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1148,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1149,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1150,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1151,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1152,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1153,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+2108,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+2109,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+180,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+181,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+182,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+183,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+184,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+185,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+2110,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1154,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1155,"spi_sck", false,-1);
    tracep->declBus(c+1156,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1157,"spi_mosi", false,-1);
    tracep->declBit(c+2053,"spi_miso", false,-1);
    tracep->declBit(c+2110,"uart_rx", false,-1);
    tracep->declBit(c+1154,"uart_tx", false,-1);
    tracep->declBit(c+1831,"psram_sck", false,-1);
    tracep->declBit(c+1832,"psram_ce_n", false,-1);
    tracep->declBus(c+1979,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+2054,"sdram_clk", false,-1);
    tracep->declBit(c+1893,"sdram_cke", false,-1);
    tracep->declBit(c+1158,"sdram_cs", false,-1);
    tracep->declBit(c+1159,"sdram_ras", false,-1);
    tracep->declBit(c+1160,"sdram_cas", false,-1);
    tracep->declBit(c+1161,"sdram_we", false,-1);
    tracep->declBus(c+1894,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1895,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1896,"sdram_dqm", false,-1, 3,0);
    tracep->declBit(c+1982,"sdram_sel", false,-1);
    tracep->declBus(c+1906,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1145,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+2107,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1146,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1147,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1148,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1149,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1150,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1151,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1152,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1153,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+2108,"ps2_clk", false,-1);
    tracep->declBit(c+2109,"ps2_data", false,-1);
    tracep->declBus(c+180,"vga_r", false,-1, 7,0);
    tracep->declBus(c+181,"vga_g", false,-1, 7,0);
    tracep->declBus(c+182,"vga_b", false,-1, 7,0);
    tracep->declBit(c+183,"vga_hsync", false,-1);
    tracep->declBit(c+184,"vga_vsync", false,-1);
    tracep->declBit(c+185,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+186,"in_psel", false,-1);
    tracep->declBit(c+187,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBus(c+1759,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1833,"in_pready", false,-1);
    tracep->declBus(c+1834,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1835,"in_pslverr", false,-1);
    tracep->declBus(c+1759,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1836,"out_psel", false,-1);
    tracep->declBit(c+1837,"out_penable", false,-1);
    tracep->declBus(c+2111,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1760,"out_pwrite", false,-1);
    tracep->declBus(c+1761,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1838,"out_pready", false,-1);
    tracep->declBus(c+1839,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1840,"out_pslverr", false,-1);
    tracep->declBus(c+2112,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2113,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2114,"R", false,-1, 31,0);
    tracep->declBus(c+2115,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+2116,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+2117,"IDLE", false,-1, 1,0);
    tracep->declBus(c+2118,"COUNT", false,-1, 1,0);
    tracep->declBus(c+2119,"DELAY", false,-1, 1,0);
    tracep->declBus(c+1162,"state", false,-1, 1,0);
    tracep->declBus(c+1841,"next", false,-1, 1,0);
    tracep->declBus(c+1163,"delay_counter", false,-1, 31,0);
    tracep->declBus(c+1164,"prdata_save", false,-1, 31,0);
    tracep->declBit(c+1165,"pslverr_save", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1836,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1837,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1759,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+2111,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1838,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1840,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1839,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1842,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1843,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1763,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+2111,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1844,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+2120,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+2055,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1845,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1846,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1764,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+2111,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1847,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+2120,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1848,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1849,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1850,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1764,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+2111,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1851,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1852,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1853,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1854,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+2056,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1759,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+2111,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+2057,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+2120,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+188,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1855,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1856,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1764,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+2111,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1857,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+2120,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1858,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1859,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1860,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1763,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+2111,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+2058,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1765,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+2059,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1766,"sel_0", false,-1);
    tracep->declBit(c+1767,"sel_1", false,-1);
    tracep->declBit(c+1768,"sel_2", false,-1);
    tracep->declBit(c+1769,"sel_3", false,-1);
    tracep->declBit(c+1770,"sel_4", false,-1);
    tracep->declBit(c+1771,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+189,"auto_in_awready", false,-1);
    tracep->declBit(c+190,"auto_in_awvalid", false,-1);
    tracep->declBus(c+191,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+192,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+193,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+194,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+189,"auto_in_wready", false,-1);
    tracep->declBit(c+195,"auto_in_wvalid", false,-1);
    tracep->declBus(c+196,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+197,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+198,"auto_in_bready", false,-1);
    tracep->declBit(c+1861,"auto_in_bvalid", false,-1);
    tracep->declBus(c+199,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1862,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+200,"auto_in_arready", false,-1);
    tracep->declBit(c+201,"auto_in_arvalid", false,-1);
    tracep->declBus(c+202,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+203,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+204,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+205,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+206,"auto_in_rready", false,-1);
    tracep->declBit(c+1863,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+2060,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1862,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+186,"auto_out_psel", false,-1);
    tracep->declBit(c+187,"auto_out_penable", false,-1);
    tracep->declBit(c+1760,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1759,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1761,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1833,"auto_out_pready", false,-1);
    tracep->declBit(c+1835,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1834,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+187,"nodeOut_penable", false,-1);
    tracep->declBus(c+208,"state", false,-1, 1,0);
    tracep->declBit(c+200,"accept_read", false,-1);
    tracep->declBit(c+189,"accept_write", false,-1);
    tracep->declBit(c+209,"is_write_r", false,-1);
    tracep->declBit(c+1760,"is_write", false,-1);
    tracep->declBus(c+207,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+199,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+210,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+211,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+212,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+213,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1864,"resp", false,-1, 1,0);
    tracep->declBus(c+214,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1862,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1863,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+215,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1861,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+216,"auto_in_awready", false,-1);
    tracep->declBit(c+1909,"auto_in_awvalid", false,-1);
    tracep->declBus(c+217,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1910,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2061,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+218,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_in_wready", false,-1);
    tracep->declBit(c+1911,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1914,"auto_in_wlast", false,-1);
    tracep->declBit(c+103,"auto_in_bready", false,-1);
    tracep->declBit(c+220,"auto_in_bvalid", false,-1);
    tracep->declBus(c+221,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+223,"auto_in_arready", false,-1);
    tracep->declBit(c+1915,"auto_in_arvalid", false,-1);
    tracep->declBus(c+224,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1916,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1917,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1918,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_in_rready", false,-1);
    tracep->declBit(c+225,"auto_in_rvalid", false,-1);
    tracep->declBus(c+226,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+227,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+229,"auto_in_rlast", false,-1);
    tracep->declBit(c+189,"auto_out_awready", false,-1);
    tracep->declBit(c+190,"auto_out_awvalid", false,-1);
    tracep->declBus(c+191,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+192,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+193,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+194,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+189,"auto_out_wready", false,-1);
    tracep->declBit(c+195,"auto_out_wvalid", false,-1);
    tracep->declBus(c+196,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+197,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+198,"auto_out_bready", false,-1);
    tracep->declBit(c+1861,"auto_out_bvalid", false,-1);
    tracep->declBus(c+199,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1862,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+200,"auto_out_arready", false,-1);
    tracep->declBit(c+201,"auto_out_arvalid", false,-1);
    tracep->declBus(c+202,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+203,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+204,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+205,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+206,"auto_out_rready", false,-1);
    tracep->declBit(c+1863,"auto_out_rvalid", false,-1);
    tracep->declBus(c+207,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+2060,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1862,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+198,"io_enq_ready", false,-1);
    tracep->declBit(c+1861,"io_enq_valid", false,-1);
    tracep->declBus(c+199,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1862,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+103,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBus(c+221,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+222,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+230,"wrap", false,-1);
    tracep->declBit(c+231,"wrap_1", false,-1);
    tracep->declBit(c+232,"maybe_full", false,-1);
    tracep->declBit(c+233,"ptr_match", false,-1);
    tracep->declBit(c+234,"empty", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+1865,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+231,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declBus(c+236,"R0_data", false,-1, 5,0);
    tracep->declBit(c+230,"W0_addr", false,-1);
    tracep->declBit(c+1865,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declBus(c+2062,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+237+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+239,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+206,"io_enq_ready", false,-1);
    tracep->declBit(c+1863,"io_enq_valid", false,-1);
    tracep->declBus(c+207,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+2060,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1862,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+29,"io_deq_ready", false,-1);
    tracep->declBit(c+225,"io_deq_valid", false,-1);
    tracep->declBus(c+226,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+227,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+228,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+229,"io_deq_bits_last", false,-1);
    tracep->declBit(c+240,"wrap", false,-1);
    tracep->declBit(c+241,"wrap_1", false,-1);
    tracep->declBit(c+242,"maybe_full", false,-1);
    tracep->declBit(c+243,"ptr_match", false,-1);
    tracep->declBit(c+244,"empty", false,-1);
    tracep->declBit(c+245,"full", false,-1);
    tracep->declBit(c+1866,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+241,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declQuad(c+246,"R0_data", false,-1, 38,0);
    tracep->declBit(c+240,"W0_addr", false,-1);
    tracep->declBit(c+1866,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declQuad(c+2063,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+248+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+1915,"io_enq_valid", false,-1);
    tracep->declBus(c+224,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1916,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1917,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1918,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+200,"io_deq_ready", false,-1);
    tracep->declBit(c+201,"io_deq_valid", false,-1);
    tracep->declBus(c+202,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+203,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+204,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+205,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+253,"wrap", false,-1);
    tracep->declBit(c+254,"wrap_1", false,-1);
    tracep->declBit(c+255,"maybe_full", false,-1);
    tracep->declBit(c+256,"ptr_match", false,-1);
    tracep->declBit(c+257,"empty", false,-1);
    tracep->declBit(c+258,"full", false,-1);
    tracep->declBit(c+1919,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+254,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declQuad(c+259,"R0_data", false,-1, 46,0);
    tracep->declBit(c+253,"W0_addr", false,-1);
    tracep->declBit(c+1919,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declQuad(c+2065,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+261+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+265,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+216,"io_enq_ready", false,-1);
    tracep->declBit(c+1909,"io_enq_valid", false,-1);
    tracep->declBus(c+217,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1910,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+2061,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+218,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+189,"io_deq_ready", false,-1);
    tracep->declBit(c+190,"io_deq_valid", false,-1);
    tracep->declBus(c+191,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+192,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+193,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+194,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+266,"wrap", false,-1);
    tracep->declBit(c+267,"wrap_1", false,-1);
    tracep->declBit(c+268,"maybe_full", false,-1);
    tracep->declBit(c+269,"ptr_match", false,-1);
    tracep->declBit(c+270,"empty", false,-1);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+1920,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+267,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declQuad(c+272,"R0_data", false,-1, 46,0);
    tracep->declBit(c+266,"W0_addr", false,-1);
    tracep->declBit(c+1920,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declQuad(c+2067,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+274+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+1911,"io_enq_valid", false,-1);
    tracep->declBus(c+1912,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1913,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1914,"io_enq_bits_last", false,-1);
    tracep->declBit(c+189,"io_deq_ready", false,-1);
    tracep->declBit(c+195,"io_deq_valid", false,-1);
    tracep->declBus(c+196,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+197,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+279,"wrap", false,-1);
    tracep->declBit(c+280,"wrap_1", false,-1);
    tracep->declBit(c+281,"maybe_full", false,-1);
    tracep->declBit(c+282,"ptr_match", false,-1);
    tracep->declBit(c+283,"empty", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+1921,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+280,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declQuad(c+285,"R0_data", false,-1, 35,0);
    tracep->declBit(c+279,"W0_addr", false,-1);
    tracep->declBit(c+1921,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declQuad(c+1922,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+287+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1983,"in_arready", false,-1);
    tracep->declBit(c+1924,"in_arvalid", false,-1);
    tracep->declBus(c+2122,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"in_rready", false,-1);
    tracep->declBit(c+80,"in_rvalid", false,-1);
    tracep->declBus(c+81,"in_rid", false,-1, 3,0);
    tracep->declBus(c+82,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+83,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+84,"in_rlast", false,-1);
    tracep->declBit(c+1984,"in_awready", false,-1);
    tracep->declBit(c+1925,"in_awvalid", false,-1);
    tracep->declBus(c+2122,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1985,"in_wready", false,-1);
    tracep->declBit(c+1926,"in_wvalid", false,-1);
    tracep->declBus(c+1802,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"in_wlast", false,-1);
    tracep->declBit(c+143,"in_bready", false,-1);
    tracep->declBit(c+150,"in_bvalid", false,-1);
    tracep->declBus(c+151,"in_bid", false,-1, 3,0);
    tracep->declBus(c+152,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1983,"out_arready", false,-1);
    tracep->declBit(c+1924,"out_arvalid", false,-1);
    tracep->declBus(c+2122,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+85,"out_rready", false,-1);
    tracep->declBit(c+1166,"out_rvalid", false,-1);
    tracep->declBus(c+1167,"out_rid", false,-1, 3,0);
    tracep->declBus(c+1168,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+2117,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+1169,"out_rlast", false,-1);
    tracep->declBit(c+1984,"out_awready", false,-1);
    tracep->declBit(c+1925,"out_awvalid", false,-1);
    tracep->declBus(c+2122,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1985,"out_wready", false,-1);
    tracep->declBit(c+1926,"out_wvalid", false,-1);
    tracep->declBus(c+1802,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"out_wlast", false,-1);
    tracep->declBit(c+153,"out_bready", false,-1);
    tracep->declBit(c+1170,"out_bvalid", false,-1);
    tracep->declBus(c+1167,"out_bid", false,-1, 3,0);
    tracep->declBus(c+2117,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+2112,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2113,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+2114,"R", false,-1, 31,0);
    tracep->declBus(c+2115,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+2116,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+2124,"MAX_ALLOWED_BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+2125,"CNT_W", false,-1, 31,0);
    tracep->declBus(c+2126,"IDX_W", false,-1, 31,0);
    tracep->declBus(c+2126,"ALEN_W", false,-1, 31,0);
    tracep->declBus(c+2127,"STEP", false,-1, 31,0);
    tracep->declBus(c+2117,"IDLE", false,-1, 1,0);
    tracep->declBus(c+2118,"READ", false,-1, 1,0);
    tracep->declBus(c+2119,"WRITE", false,-1, 1,0);
    tracep->declBus(c+1171,"state", false,-1, 1,0);
    tracep->declBus(c+175,"next", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1172+i*2,"read_counters", true,(i+0), 32,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1236+i*1,"rdata_save", true,(i+0), 31,0);
    }
    tracep->declBus(c+1268,"get_beat", false,-1, 5,0);
    tracep->declBus(c+1269,"return_beat", false,-1, 5,0);
    tracep->declBus(c+1270,"arlen_save", false,-1, 4,0);
    tracep->declBus(c+1271,"rid_save", false,-1, 3,0);
    tracep->declBus(c+1272,"rresp_save", false,-1, 1,0);
    tracep->declQuad(c+1273,"write_counter", false,-1, 32,0);
    tracep->declBit(c+1275,"b_received", false,-1);
    tracep->declBus(c+1276,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1277,"bresp_save", false,-1, 1,0);
    tracep->declBus(c+1278,"i", false,-1, 31,0);
    tracep->declBit(c+86,"r_beat_arriving", false,-1);
    tracep->declBit(c+154,"b_arriving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+292,"auto_in_awready", false,-1);
    tracep->declBit(c+1927,"auto_in_awvalid", false,-1);
    tracep->declBus(c+2122,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+293,"auto_in_wready", false,-1);
    tracep->declBit(c+1928,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1802,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"auto_in_wlast", false,-1);
    tracep->declBit(c+2069,"auto_in_bready", false,-1);
    tracep->declBit(c+294,"auto_in_bvalid", false,-1);
    tracep->declBus(c+295,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+296,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+297,"auto_in_arready", false,-1);
    tracep->declBit(c+1929,"auto_in_arvalid", false,-1);
    tracep->declBus(c+2122,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_in_rready", false,-1);
    tracep->declBit(c+298,"auto_in_rvalid", false,-1);
    tracep->declBus(c+299,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+300,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+301,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+302,"auto_in_rlast", false,-1);
    tracep->declBit(c+160,"auto_out_awready", false,-1);
    tracep->declBit(c+1930,"auto_out_awvalid", false,-1);
    tracep->declBus(c+217,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1910,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+2061,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+218,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+303,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+161,"auto_out_wready", false,-1);
    tracep->declBit(c+1931,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1914,"auto_out_wlast", false,-1);
    tracep->declBit(c+144,"auto_out_bready", false,-1);
    tracep->declBit(c+304,"auto_out_bvalid", false,-1);
    tracep->declBus(c+295,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+306,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+98,"auto_out_arready", false,-1);
    tracep->declBit(c+1932,"auto_out_arvalid", false,-1);
    tracep->declBus(c+224,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1916,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1917,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1918,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1933,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+71,"auto_out_rready", false,-1);
    tracep->declBit(c+298,"auto_out_rvalid", false,-1);
    tracep->declBus(c+299,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+300,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+301,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+307,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+308,"auto_out_rlast", false,-1);
    tracep->declBit(c+1931,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+309,"w_idle", false,-1);
    tracep->declBit(c+162,"in_awready", false,-1);
    tracep->declBit(c+310,"busy", false,-1);
    tracep->declBus(c+311,"r_addr", false,-1, 31,0);
    tracep->declBus(c+312,"r_len", false,-1, 7,0);
    tracep->declBus(c+1934,"len", false,-1, 7,0);
    tracep->declBus(c+1935,"addr", false,-1, 31,0);
    tracep->declBit(c+313,"busy_1", false,-1);
    tracep->declBus(c+314,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+315,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+316,"len_1", false,-1, 7,0);
    tracep->declBus(c+1936,"addr_1", false,-1, 31,0);
    tracep->declBit(c+317,"wbeats_latched", false,-1);
    tracep->declBit(c+1930,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1937,"wbeats_valid", false,-1);
    tracep->declBus(c+318,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1938,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1914,"w_last", false,-1);
    tracep->declBit(c+144,"nodeOut_bready", false,-1);
    tracep->declBus(c+319,"error_0", false,-1, 1,0);
    tracep->declBus(c+320,"error_1", false,-1, 1,0);
    tracep->declBus(c+321,"error_2", false,-1, 1,0);
    tracep->declBus(c+322,"error_3", false,-1, 1,0);
    tracep->declBus(c+323,"error_4", false,-1, 1,0);
    tracep->declBus(c+324,"error_5", false,-1, 1,0);
    tracep->declBus(c+325,"error_6", false,-1, 1,0);
    tracep->declBus(c+326,"error_7", false,-1, 1,0);
    tracep->declBus(c+327,"error_8", false,-1, 1,0);
    tracep->declBus(c+328,"error_9", false,-1, 1,0);
    tracep->declBus(c+329,"error_10", false,-1, 1,0);
    tracep->declBus(c+330,"error_11", false,-1, 1,0);
    tracep->declBus(c+331,"error_12", false,-1, 1,0);
    tracep->declBus(c+332,"error_13", false,-1, 1,0);
    tracep->declBus(c+333,"error_14", false,-1, 1,0);
    tracep->declBus(c+334,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+1929,"io_enq_valid", false,-1);
    tracep->declBus(c+2122,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1797,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1798,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1799,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1800,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+99,"io_deq_ready", false,-1);
    tracep->declBit(c+1932,"io_deq_valid", false,-1);
    tracep->declBus(c+224,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1939,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1940,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1917,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1918,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+335,"ram", false,-1, 48,0);
    tracep->declBit(c+337,"full", false,-1);
    tracep->declBit(c+1932,"io_deq_valid_0", false,-1);
    tracep->declBit(c+100,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+292,"io_enq_ready", false,-1);
    tracep->declBit(c+1927,"io_enq_valid", false,-1);
    tracep->declBus(c+2122,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1801,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+2123,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+680,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+2117,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+163,"io_deq_ready", false,-1);
    tracep->declBit(c+1941,"io_deq_valid", false,-1);
    tracep->declBus(c+217,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1942,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+338,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+2061,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+218,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+339,"ram", false,-1, 48,0);
    tracep->declBit(c+341,"full", false,-1);
    tracep->declBit(c+1941,"io_deq_valid_0", false,-1);
    tracep->declBit(c+164,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+1928,"io_enq_valid", false,-1);
    tracep->declBus(c+1802,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1803,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+2121,"io_enq_bits_last", false,-1);
    tracep->declBit(c+165,"io_deq_ready", false,-1);
    tracep->declBit(c+1943,"io_deq_valid", false,-1);
    tracep->declBus(c+1912,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1913,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+342,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+343,"ram", false,-1, 36,0);
    tracep->declBit(c+345,"full", false,-1);
    tracep->declBit(c+1943,"io_deq_valid_0", false,-1);
    tracep->declBit(c+166,"do_enq", false,-1);
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
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+167,"auto_in_awready", false,-1);
    tracep->declBit(c+1944,"auto_in_awvalid", false,-1);
    tracep->declBus(c+217,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1945,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+2070,"auto_in_wready", false,-1);
    tracep->declBit(c+1946,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+145,"auto_in_bready", false,-1);
    tracep->declBit(c+346,"auto_in_bvalid", false,-1);
    tracep->declBus(c+347,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+348,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+72,"auto_in_arready", false,-1);
    tracep->declBit(c+1947,"auto_in_arvalid", false,-1);
    tracep->declBus(c+224,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1948,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+73,"auto_in_rready", false,-1);
    tracep->declBit(c+349,"auto_in_rvalid", false,-1);
    tracep->declBus(c+350,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+351,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+352,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+72,"nodeIn_arready", false,-1);
    tracep->declBit(c+167,"nodeIn_awready", false,-1);
    tracep->declBit(c+1949,"w_sel0", false,-1);
    tracep->declBit(c+346,"w_full", false,-1);
    tracep->declBus(c+347,"w_id", false,-1, 3,0);
    tracep->declBit(c+353,"r_sel1", false,-1);
    tracep->declBit(c+354,"w_sel1", false,-1);
    tracep->declBit(c+349,"r_full", false,-1);
    tracep->declBus(c+350,"r_id", false,-1, 3,0);
    tracep->declBit(c+101,"ren", false,-1);
    tracep->declBit(c+355,"rdata_REG", false,-1);
    tracep->declBus(c+356,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+357,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+358,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+359,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1950,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+101,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declBus(c+360,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1951,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+168,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declBus(c+1912,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1913,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1986,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1804,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+2122,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+2071,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1805,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1802,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+146,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+136,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+155,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+2072,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1987,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1806,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+2122,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+63,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+87,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+88,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+89,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+90,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1984,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1925,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+2122,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1985,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1926,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1802,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+143,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+150,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+151,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+152,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1983,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1924,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+2122,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+80,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+81,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+82,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+83,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+84,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+292,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1927,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+2122,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+293,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1928,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1802,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+2069,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+294,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+295,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+296,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+297,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1929,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+2122,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+298,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+299,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+300,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+301,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+302,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+136,"in_0_bvalid", false,-1);
    tracep->declBit(c+63,"in_0_rvalid", false,-1);
    tracep->declBit(c+1988,"in_0_wready", false,-1);
    tracep->declBit(c+1989,"in_0_awready", false,-1);
    tracep->declBit(c+2073,"in_0_arready", false,-1);
    tracep->declBit(c+1986,"anonIn_awready", false,-1);
    tracep->declBit(c+1987,"anonIn_arready", false,-1);
    tracep->declBit(c+1807,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1808,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1809,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1810,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+2128,"arSel", false,-1, 15,0);
    tracep->declBus(c+2128,"awSel", false,-1, 15,0);
    tracep->declBus(c+91,"rSel", false,-1, 15,0);
    tracep->declBus(c+156,"bSel", false,-1, 15,0);
    tracep->declBus(c+361,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+362,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+363,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+364,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+365,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+2129,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+366,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+2130,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+367,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+2131,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+368,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+2132,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+369,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+2133,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+370,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+2134,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+371,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+2135,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+372,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+2136,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+373,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+2137,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+374,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+2138,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+375,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+2139,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+376,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+2140,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+377,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+2141,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+378,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+2142,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+379,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+2143,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+380,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+2144,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+381,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+2145,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+382,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+2146,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+383,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+2147,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+384,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+2148,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+385,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+2149,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+386,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+2150,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+387,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+2151,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+388,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+2152,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+389,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+2153,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+390,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+2154,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+391,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+2155,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+392,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+2156,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+393,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+2157,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+394,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+2158,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1952,"in_0_arvalid", false,-1);
    tracep->declBit(c+395,"latched", false,-1);
    tracep->declBit(c+1953,"in_0_awvalid", false,-1);
    tracep->declBit(c+1954,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1955,"in_0_wvalid", false,-1);
    tracep->declBit(c+396,"idle_2", false,-1);
    tracep->declBit(c+64,"anyValid", false,-1);
    tracep->declBus(c+65,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+397,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+66,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+67,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+68,"prefixOR_1", false,-1);
    tracep->declBit(c+92,"winner_2_1", false,-1);
    tracep->declBit(c+398,"state_2_0", false,-1);
    tracep->declBit(c+399,"state_2_1", false,-1);
    tracep->declBit(c+69,"muxState_2_0", false,-1);
    tracep->declBit(c+93,"muxState_2_1", false,-1);
    tracep->declBit(c+400,"idle_3", false,-1);
    tracep->declBit(c+137,"anyValid_1", false,-1);
    tracep->declBus(c+138,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+401,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+139,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+140,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+141,"winner_3_0", false,-1);
    tracep->declBit(c+157,"winner_3_1", false,-1);
    tracep->declBit(c+402,"state_3_0", false,-1);
    tracep->declBit(c+403,"state_3_1", false,-1);
    tracep->declBit(c+142,"muxState_3_0", false,-1);
    tracep->declBit(c+158,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+404,"io_enq_ready", false,-1);
    tracep->declBit(c+1954,"io_enq_valid", false,-1);
    tracep->declBus(c+1811,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1990,"io_deq_ready", false,-1);
    tracep->declBit(c+1956,"io_deq_valid", false,-1);
    tracep->declBus(c+1957,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+405,"wrap", false,-1);
    tracep->declBit(c+406,"wrap_1", false,-1);
    tracep->declBit(c+407,"maybe_full", false,-1);
    tracep->declBit(c+408,"ptr_match", false,-1);
    tracep->declBit(c+409,"empty", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->declBit(c+1956,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1991,"do_deq", false,-1);
    tracep->declBit(c+1992,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+406,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declBus(c+411,"R0_data", false,-1, 1,0);
    tracep->declBit(c+405,"W0_addr", false,-1);
    tracep->declBit(c+1992,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declBus(c+1811,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+412+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+169,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1958,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+217,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1910,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2061,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+218,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1931,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1914,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+144,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+304,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+295,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1959,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1916,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1917,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1918,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+298,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+299,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+300,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+301,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+167,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1944,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+217,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1945,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+2070,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1946,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+145,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+346,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+347,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+348,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+72,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1947,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1948,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+73,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+349,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+350,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+351,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+352,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1960,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1961,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+414,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1962,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1963,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+30,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+415,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+416,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+417,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+216,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1909,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+217,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1910,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+2061,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+218,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+219,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1911,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1914,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+103,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+220,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+221,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+222,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+223,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1915,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+224,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1916,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1917,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1918,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+29,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+225,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+226,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+227,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+228,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+229,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+304,"in_0_bvalid", false,-1);
    tracep->declBit(c+298,"in_0_rvalid", false,-1);
    tracep->declBit(c+170,"in_0_wready", false,-1);
    tracep->declBit(c+171,"in_0_awready", false,-1);
    tracep->declBit(c+102,"in_0_arready", false,-1);
    tracep->declBit(c+169,"anonIn_awready", false,-1);
    tracep->declBit(c+1964,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1965,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1966,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1967,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1968,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1969,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+418,"arSel", false,-1, 15,0);
    tracep->declBus(c+419,"awSel", false,-1, 15,0);
    tracep->declBus(c+420,"rSel", false,-1, 15,0);
    tracep->declBus(c+421,"bSel", false,-1, 15,0);
    tracep->declBit(c+422,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+423,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+424,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+425,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+426,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+427,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+428,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+429,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+430,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+431,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+432,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+433,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+434,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+435,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+436,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+437,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+438,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+439,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+440,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+441,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+442,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+443,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+444,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+445,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+446,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+447,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+448,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+449,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+450,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+451,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+452,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+453,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+454,"latched", false,-1);
    tracep->declBit(c+1970,"in_0_awvalid", false,-1);
    tracep->declBit(c+1971,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1972,"in_0_wvalid", false,-1);
    tracep->declBit(c+455,"idle_3", false,-1);
    tracep->declBit(c+456,"anyValid", false,-1);
    tracep->declBus(c+457,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+458,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+459,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+460,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+461,"prefixOR_1", false,-1);
    tracep->declBit(c+462,"winner_3_1", false,-1);
    tracep->declBit(c+463,"winner_3_2", false,-1);
    tracep->declBit(c+464,"state_3_0", false,-1);
    tracep->declBit(c+465,"state_3_1", false,-1);
    tracep->declBit(c+466,"state_3_2", false,-1);
    tracep->declBit(c+467,"muxState_3_0", false,-1);
    tracep->declBit(c+468,"muxState_3_1", false,-1);
    tracep->declBit(c+469,"muxState_3_2", false,-1);
    tracep->declBit(c+470,"idle_4", false,-1);
    tracep->declBit(c+471,"anyValid_1", false,-1);
    tracep->declBus(c+472,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+473,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+474,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+475,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+476,"winner_4_0", false,-1);
    tracep->declBit(c+477,"winner_4_2", false,-1);
    tracep->declBit(c+478,"state_4_0", false,-1);
    tracep->declBit(c+479,"state_4_2", false,-1);
    tracep->declBit(c+480,"muxState_4_0", false,-1);
    tracep->declBit(c+481,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+482,"io_enq_ready", false,-1);
    tracep->declBit(c+1971,"io_enq_valid", false,-1);
    tracep->declBus(c+1973,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+172,"io_deq_ready", false,-1);
    tracep->declBit(c+1974,"io_deq_valid", false,-1);
    tracep->declBus(c+1975,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+483,"wrap", false,-1);
    tracep->declBit(c+484,"wrap_1", false,-1);
    tracep->declBit(c+485,"maybe_full", false,-1);
    tracep->declBit(c+486,"ptr_match", false,-1);
    tracep->declBit(c+487,"empty", false,-1);
    tracep->declBit(c+488,"full", false,-1);
    tracep->declBit(c+1974,"io_deq_valid_0", false,-1);
    tracep->declBit(c+173,"do_deq", false,-1);
    tracep->declBit(c+174,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+484,"R0_addr", false,-1);
    tracep->declBit(c+2121,"R0_en", false,-1);
    tracep->declBit(c+2013,"R0_clk", false,-1);
    tracep->declBus(c+489,"R0_data", false,-1, 2,0);
    tracep->declBit(c+483,"W0_addr", false,-1);
    tracep->declBit(c+174,"W0_en", false,-1);
    tracep->declBit(c+2013,"W0_clk", false,-1);
    tracep->declBus(c+1973,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+490+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+160,"auto_in_awready", false,-1);
    tracep->declBit(c+1930,"auto_in_awvalid", false,-1);
    tracep->declBus(c+217,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1910,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2061,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+218,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+303,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+161,"auto_in_wready", false,-1);
    tracep->declBit(c+1931,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1914,"auto_in_wlast", false,-1);
    tracep->declBit(c+144,"auto_in_bready", false,-1);
    tracep->declBit(c+304,"auto_in_bvalid", false,-1);
    tracep->declBus(c+295,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+306,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+98,"auto_in_arready", false,-1);
    tracep->declBit(c+1932,"auto_in_arvalid", false,-1);
    tracep->declBus(c+224,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1916,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1917,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1918,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1933,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+71,"auto_in_rready", false,-1);
    tracep->declBit(c+298,"auto_in_rvalid", false,-1);
    tracep->declBus(c+299,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+300,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+301,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+307,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+308,"auto_in_rlast", false,-1);
    tracep->declBit(c+169,"auto_out_awready", false,-1);
    tracep->declBit(c+1958,"auto_out_awvalid", false,-1);
    tracep->declBus(c+217,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1910,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+2061,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+218,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_out_wready", false,-1);
    tracep->declBit(c+1931,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1912,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1913,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1914,"auto_out_wlast", false,-1);
    tracep->declBit(c+144,"auto_out_bready", false,-1);
    tracep->declBit(c+304,"auto_out_bvalid", false,-1);
    tracep->declBus(c+295,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+305,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"auto_out_arready", false,-1);
    tracep->declBit(c+1959,"auto_out_arvalid", false,-1);
    tracep->declBus(c+224,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1916,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1917,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1918,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+71,"auto_out_rready", false,-1);
    tracep->declBit(c+298,"auto_out_rvalid", false,-1);
    tracep->declBus(c+299,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+300,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+301,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+308,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+492,"io_enq_ready", false,-1);
    tracep->declBit(c+47,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+31,"io_deq_ready", false,-1);
    tracep->declBit(c+493,"io_deq_valid", false,-1);
    tracep->declBit(c+494,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+493,"full", false,-1);
    tracep->declBit(c+494,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+495,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+496,"io_enq_ready", false,-1);
    tracep->declBit(c+48,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+32,"io_deq_ready", false,-1);
    tracep->declBit(c+497,"io_deq_valid", false,-1);
    tracep->declBit(c+498,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+498,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+499,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+500,"io_enq_ready", false,-1);
    tracep->declBit(c+49,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBit(c+502,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+501,"full", false,-1);
    tracep->declBit(c+502,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+503,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+34,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBit(c+506,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+505,"full", false,-1);
    tracep->declBit(c+506,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+507,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+508,"io_enq_ready", false,-1);
    tracep->declBit(c+51,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+509,"io_deq_valid", false,-1);
    tracep->declBit(c+510,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+509,"full", false,-1);
    tracep->declBit(c+510,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+511,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+512,"io_enq_ready", false,-1);
    tracep->declBit(c+52,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+36,"io_deq_ready", false,-1);
    tracep->declBit(c+513,"io_deq_valid", false,-1);
    tracep->declBit(c+514,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+513,"full", false,-1);
    tracep->declBit(c+514,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+515,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+53,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+37,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+54,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+38,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+120,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+104,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+121,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+105,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+122,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+106,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+123,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+107,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+55,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+39,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+124,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+108,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+125,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+109,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+126,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+110,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+127,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+111,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+128,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+112,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+129,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+113,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+130,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+114,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+131,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+115,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+132,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+116,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+133,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+117,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+56,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+40,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+134,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+118,"io_deq_ready", false,-1);
    tracep->declBit(c+589,"io_deq_valid", false,-1);
    tracep->declBit(c+590,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+589,"full", false,-1);
    tracep->declBit(c+590,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+591,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+135,"io_enq_valid", false,-1);
    tracep->declBit(c+303,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+119,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+57,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+41,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+58,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+42,"io_deq_ready", false,-1);
    tracep->declBit(c+601,"io_deq_valid", false,-1);
    tracep->declBit(c+602,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+601,"full", false,-1);
    tracep->declBit(c+602,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+603,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+59,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+43,"io_deq_ready", false,-1);
    tracep->declBit(c+605,"io_deq_valid", false,-1);
    tracep->declBit(c+606,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+606,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+607,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+608,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+44,"io_deq_ready", false,-1);
    tracep->declBit(c+609,"io_deq_valid", false,-1);
    tracep->declBit(c+610,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+609,"full", false,-1);
    tracep->declBit(c+610,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+611,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+612,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+45,"io_deq_ready", false,-1);
    tracep->declBit(c+613,"io_deq_valid", false,-1);
    tracep->declBit(c+614,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+613,"full", false,-1);
    tracep->declBit(c+614,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+615,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+616,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+1933,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+46,"io_deq_ready", false,-1);
    tracep->declBit(c+617,"io_deq_valid", false,-1);
    tracep->declBit(c+618,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+617,"full", false,-1);
    tracep->declBit(c+618,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+619,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBit(c+1986,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1804,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+2122,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+2071,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1805,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1802,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+146,"auto_master_out_bready", false,-1);
    tracep->declBit(c+136,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+155,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+2072,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1987,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1806,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+2122,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+74,"auto_master_out_rready", false,-1);
    tracep->declBit(c+63,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+87,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+88,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+89,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+90,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBit(c+2120,"io_interrupt", false,-1);
    tracep->declBit(c+1804,"io_master_awvalid", false,-1);
    tracep->declBit(c+1986,"io_master_awready", false,-1);
    tracep->declBus(c+2122,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1805,"io_master_wvalid", false,-1);
    tracep->declBit(c+2071,"io_master_wready", false,-1);
    tracep->declBus(c+1802,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"io_master_wlast", false,-1);
    tracep->declBit(c+136,"io_master_bvalid", false,-1);
    tracep->declBit(c+146,"io_master_bready", false,-1);
    tracep->declBus(c+155,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+2072,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1806,"io_master_arvalid", false,-1);
    tracep->declBit(c+1987,"io_master_arready", false,-1);
    tracep->declBus(c+2122,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"io_master_rvalid", false,-1);
    tracep->declBit(c+74,"io_master_rready", false,-1);
    tracep->declBus(c+87,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+88,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+89,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+90,"io_master_rlast", false,-1);
    tracep->declBit(c+2120,"io_slave_awvalid", false,-1);
    tracep->declBit(c+2120,"io_slave_awready", false,-1);
    tracep->declBus(c+2122,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+2159,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+2160,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+2120,"io_slave_wvalid", false,-1);
    tracep->declBit(c+2120,"io_slave_wready", false,-1);
    tracep->declBus(c+2159,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+2122,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+2120,"io_slave_wlast", false,-1);
    tracep->declBit(c+2120,"io_slave_bvalid", false,-1);
    tracep->declBit(c+2120,"io_slave_bready", false,-1);
    tracep->declBus(c+2122,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+2117,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+2120,"io_slave_arvalid", false,-1);
    tracep->declBit(c+2120,"io_slave_arready", false,-1);
    tracep->declBus(c+2122,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+2159,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+2123,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+2160,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+2117,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+2120,"io_slave_rvalid", false,-1);
    tracep->declBit(c+2120,"io_slave_rready", false,-1);
    tracep->declBus(c+2122,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+2159,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+2117,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+2120,"io_slave_rlast", false,-1);
    tracep->declArray(c+681,"dbg_reg", false,-1, 1023,0);
    tracep->declBit(c+147,"sw_avail", false,-1);
    tracep->declBus(c+1801,"sw_addr", false,-1, 31,0);
    tracep->declQuad(c+713,"ifu_work_cyc", false,-1, 63,0);
    tracep->declQuad(c+715,"ifu_block_cyc", false,-1, 63,0);
    tracep->declBit(c+717,"flush", false,-1);
    tracep->declBus(c+718,"pc_flush", false,-1, 31,0);
    tracep->declBus(c+719,"pc", false,-1, 31,0);
    tracep->declBus(c+720,"instr", false,-1, 31,0);
    tracep->declBit(c+721,"valid_fd", false,-1);
    tracep->declBit(c+722,"ready_rd", false,-1);
    tracep->declBit(c+721,"valid_de", false,-1);
    tracep->declBit(c+722,"ready_de", false,-1);
    tracep->declBus(c+719,"pc_d", false,-1, 31,0);
    tracep->declBit(c+723,"addi", false,-1);
    tracep->declBit(c+724,"slti", false,-1);
    tracep->declBit(c+725,"sltiu", false,-1);
    tracep->declBit(c+726,"xori", false,-1);
    tracep->declBit(c+727,"ori", false,-1);
    tracep->declBit(c+728,"andi", false,-1);
    tracep->declBit(c+729,"slli", false,-1);
    tracep->declBit(c+730,"srli", false,-1);
    tracep->declBit(c+731,"srai", false,-1);
    tracep->declBit(c+732,"add", false,-1);
    tracep->declBit(c+733,"sub", false,-1);
    tracep->declBit(c+734,"sll", false,-1);
    tracep->declBit(c+735,"slt", false,-1);
    tracep->declBit(c+736,"sltu", false,-1);
    tracep->declBit(c+737,"xor_inst", false,-1);
    tracep->declBit(c+738,"srl", false,-1);
    tracep->declBit(c+739,"sra", false,-1);
    tracep->declBit(c+740,"or_inst", false,-1);
    tracep->declBit(c+741,"and_inst", false,-1);
    tracep->declBit(c+742,"lb", false,-1);
    tracep->declBit(c+743,"lh", false,-1);
    tracep->declBit(c+744,"lw", false,-1);
    tracep->declBit(c+745,"lbu", false,-1);
    tracep->declBit(c+746,"lhu", false,-1);
    tracep->declBit(c+747,"sb", false,-1);
    tracep->declBit(c+748,"sh", false,-1);
    tracep->declBit(c+749,"sw", false,-1);
    tracep->declBit(c+750,"beq", false,-1);
    tracep->declBit(c+751,"bne", false,-1);
    tracep->declBit(c+752,"blt", false,-1);
    tracep->declBit(c+753,"bge", false,-1);
    tracep->declBit(c+754,"bltu", false,-1);
    tracep->declBit(c+755,"bgeu", false,-1);
    tracep->declBit(c+756,"jal", false,-1);
    tracep->declBit(c+757,"jalr", false,-1);
    tracep->declBit(c+758,"lui", false,-1);
    tracep->declBit(c+759,"auipc", false,-1);
    tracep->declBit(c+760,"ebreak", false,-1);
    tracep->declBit(c+761,"ecall", false,-1);
    tracep->declBit(c+762,"csrrw", false,-1);
    tracep->declBit(c+763,"csrrs", false,-1);
    tracep->declBit(c+764,"csrrc", false,-1);
    tracep->declBit(c+765,"mret", false,-1);
    tracep->declBit(c+766,"fence_i", false,-1);
    tracep->declBus(c+767,"rd", false,-1, 4,0);
    tracep->declBus(c+768,"rs1", false,-1, 4,0);
    tracep->declBus(c+769,"rs2", false,-1, 4,0);
    tracep->declBus(c+770,"imm", false,-1, 31,0);
    tracep->declBus(c+720,"instr_de", false,-1, 31,0);
    tracep->declQuad(c+771,"exu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+773,"exu_blcokbl_cyc", false,-1, 63,0);
    tracep->declQuad(c+775,"exu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+777,"is_ls", false,-1);
    tracep->declBit(c+778,"lsu_bypass_data_valid", false,-1);
    tracep->declBit(c+779,"valid_el", false,-1);
    tracep->declBit(c+780,"ready_el", false,-1);
    tracep->declBit(c+781,"io", false,-1);
    tracep->declBus(c+782,"io_type", false,-1, 1,0);
    tracep->declBit(c+783,"read_is_u", false,-1);
    tracep->declBus(c+784,"rd_out", false,-1, 4,0);
    tracep->declBus(c+785,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+786,"rs2_out", false,-1, 4,0);
    tracep->declBus(c+787,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+788,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+789,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBit(c+2161,"is_exu_rd", false,-1);
    tracep->declBit(c+2162,"is_lsu_rd", false,-1);
    tracep->declBus(c+2163,"rd_exu", false,-1, 4,0);
    tracep->declBus(c+790,"rdata1", false,-1, 31,0);
    tracep->declBus(c+787,"rdata2", false,-1, 31,0);
    tracep->declQuad(c+791,"lsu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+793,"lsu_blcokb_cyc", false,-1, 63,0);
    tracep->declQuad(c+795,"lsu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+797,"lsu_blockf", false,-1);
    tracep->declBit(c+798,"valid_lw", false,-1);
    tracep->declBit(c+799,"ready_lw", false,-1);
    tracep->declBus(c+1812,"wdata_lw", false,-1, 31,0);
    tracep->declBus(c+800,"rd_lsu", false,-1, 4,0);
    tracep->declQuad(c+801,"wbu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+803,"wbu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+805,"wbu_blockf", false,-1);
    tracep->declBit(c+2164,"lsu_flush", false,-1);
    tracep->declBus(c+806,"lsu_pc_out", false,-1, 31,0);
    tracep->declBus(c+2165,"rd_release", false,-1, 4,0);
    tracep->declBit(c+807,"wen", false,-1);
    tracep->declBus(c+808,"rd_wbu", false,-1, 4,0);
    tracep->declBus(c+809,"wdata_wbu", false,-1, 31,0);
    tracep->declBus(c+810,"wbu_pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+2126,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2124,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBit(c+807,"wen", false,-1);
    tracep->declBus(c+785,"raddr1", false,-1, 4,0);
    tracep->declBus(c+786,"raddr2", false,-1, 4,0);
    tracep->declBus(c+808,"waddr", false,-1, 4,0);
    tracep->declBus(c+809,"wdata", false,-1, 31,0);
    tracep->declBus(c+790,"rdata1", false,-1, 31,0);
    tracep->declBus(c+787,"rdata2", false,-1, 31,0);
    tracep->declArray(c+681,"dbg_regs", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+811+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+843,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBus(c+719,"pc", false,-1, 31,0);
    tracep->declBus(c+720,"instr", false,-1, 31,0);
    tracep->declBus(c+790,"rdata1", false,-1, 31,0);
    tracep->declBus(c+787,"rdata2", false,-1, 31,0);
    tracep->declBus(c+770,"imm", false,-1, 31,0);
    tracep->declBit(c+732,"add", false,-1);
    tracep->declBit(c+723,"addi", false,-1);
    tracep->declBit(c+733,"sub", false,-1);
    tracep->declBit(c+758,"lui", false,-1);
    tracep->declBit(c+759,"auipc", false,-1);
    tracep->declBit(c+741,"and_inst", false,-1);
    tracep->declBit(c+740,"or_inst", false,-1);
    tracep->declBit(c+737,"xor_inst", false,-1);
    tracep->declBit(c+728,"andi", false,-1);
    tracep->declBit(c+727,"ori", false,-1);
    tracep->declBit(c+726,"xori", false,-1);
    tracep->declBit(c+734,"sll", false,-1);
    tracep->declBit(c+738,"srl", false,-1);
    tracep->declBit(c+739,"sra", false,-1);
    tracep->declBit(c+729,"slli", false,-1);
    tracep->declBit(c+730,"srli", false,-1);
    tracep->declBit(c+731,"srai", false,-1);
    tracep->declBit(c+735,"slt", false,-1);
    tracep->declBit(c+736,"sltu", false,-1);
    tracep->declBit(c+724,"slti", false,-1);
    tracep->declBit(c+725,"sltiu", false,-1);
    tracep->declBit(c+756,"jal", false,-1);
    tracep->declBit(c+757,"jalr", false,-1);
    tracep->declBit(c+742,"lb", false,-1);
    tracep->declBit(c+743,"lh", false,-1);
    tracep->declBit(c+744,"lw", false,-1);
    tracep->declBit(c+745,"lbu", false,-1);
    tracep->declBit(c+746,"lhu", false,-1);
    tracep->declBit(c+747,"sb", false,-1);
    tracep->declBit(c+748,"sh", false,-1);
    tracep->declBit(c+749,"sw", false,-1);
    tracep->declBit(c+750,"beq", false,-1);
    tracep->declBit(c+751,"bne", false,-1);
    tracep->declBit(c+752,"blt", false,-1);
    tracep->declBit(c+753,"bge", false,-1);
    tracep->declBit(c+754,"bltu", false,-1);
    tracep->declBit(c+755,"bgeu", false,-1);
    tracep->declBit(c+760,"ebreak", false,-1);
    tracep->declBit(c+761,"ecall", false,-1);
    tracep->declBit(c+765,"mret", false,-1);
    tracep->declBit(c+766,"fence_i", false,-1);
    tracep->declBit(c+762,"csrrw", false,-1);
    tracep->declBit(c+763,"csrrs", false,-1);
    tracep->declBit(c+764,"csrrc", false,-1);
    tracep->declBus(c+767,"rd", false,-1, 4,0);
    tracep->declBus(c+768,"rs1", false,-1, 4,0);
    tracep->declBus(c+769,"rs2", false,-1, 4,0);
    tracep->declBit(c+797,"lsu_blockf", false,-1);
    tracep->declBit(c+805,"wbu_blockf", false,-1);
    tracep->declBit(c+807,"wen", false,-1);
    tracep->declBus(c+808,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+721,"in_valid", false,-1);
    tracep->declBit(c+722,"in_ready", false,-1);
    tracep->declBit(c+779,"out_valid", false,-1);
    tracep->declBit(c+780,"out_ready", false,-1);
    tracep->declBit(c+777,"is_ls", false,-1);
    tracep->declBit(c+781,"io", false,-1);
    tracep->declBus(c+782,"io_type", false,-1, 1,0);
    tracep->declBit(c+783,"read_is_u", false,-1);
    tracep->declBus(c+784,"rd_out", false,-1, 4,0);
    tracep->declBus(c+787,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+788,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+789,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+785,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+786,"rs2_out", false,-1, 4,0);
    tracep->declBit(c+717,"flush", false,-1);
    tracep->declBus(c+718,"pc_flush", false,-1, 31,0);
    tracep->declQuad(c+771,"exu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+773,"exu_blcokbl_cyc", false,-1, 63,0);
    tracep->declQuad(c+775,"exu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+844,"ebreak_end", false,-1);
    tracep->declBus(c+1812,"bypass_wdata_lsu", false,-1, 31,0);
    tracep->declBus(c+800,"bypass_rd_lsu", false,-1, 4,0);
    tracep->declBit(c+778,"lsu_bypass_data_valid", false,-1);
    tracep->declBus(c+809,"bypass_wdata_wbu", false,-1, 31,0);
    tracep->declBus(c+808,"bypass_rd_wbu", false,-1, 4,0);
    tracep->declBit(c+807,"wbu_bypass_data_valid", false,-1);
    tracep->declBus(c+845,"rd_list", false,-1, 31,0);
    tracep->declBus(c+846,"rd_amt", false,-1, 31,0);
    tracep->declBit(c+847,"wen_save", false,-1);
    tracep->declBus(c+848,"rd_wb_save", false,-1, 4,0);
    tracep->declBit(c+849,"bypass_active", false,-1);
    tracep->declBus(c+850,"bypass_data", false,-1, 31,0);
    tracep->declBus(c+851,"mstatus", false,-1, 31,0);
    tracep->declBus(c+852,"mepc", false,-1, 31,0);
    tracep->declBus(c+853,"mcause", false,-1, 31,0);
    tracep->declBus(c+854,"mtvec", false,-1, 31,0);
    tracep->declBus(c+855,"mcycle", false,-1, 31,0);
    tracep->declBus(c+856,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+857,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+858,"marchid", false,-1, 31,0);
    tracep->declBus(c+859,"pc_save", false,-1, 31,0);
    tracep->declBus(c+860,"imm_save", false,-1, 31,0);
    tracep->declBus(c+861,"instr_save", false,-1, 31,0);
    tracep->declBit(c+862,"add_save", false,-1);
    tracep->declBit(c+863,"addi_save", false,-1);
    tracep->declBit(c+864,"sub_save", false,-1);
    tracep->declBit(c+865,"lui_save", false,-1);
    tracep->declBit(c+866,"auipc_save", false,-1);
    tracep->declBit(c+867,"and_inst_save", false,-1);
    tracep->declBit(c+868,"or_inst_save", false,-1);
    tracep->declBit(c+869,"xor_inst_save", false,-1);
    tracep->declBit(c+870,"andi_save", false,-1);
    tracep->declBit(c+871,"ori_save", false,-1);
    tracep->declBit(c+872,"xori_save", false,-1);
    tracep->declBit(c+873,"sll_save", false,-1);
    tracep->declBit(c+874,"srl_save", false,-1);
    tracep->declBit(c+875,"sra_save", false,-1);
    tracep->declBit(c+876,"slli_save", false,-1);
    tracep->declBit(c+877,"srli_save", false,-1);
    tracep->declBit(c+878,"srai_save", false,-1);
    tracep->declBit(c+879,"slt_save", false,-1);
    tracep->declBit(c+880,"sltu_save", false,-1);
    tracep->declBit(c+881,"slti_save", false,-1);
    tracep->declBit(c+882,"sltiu_save", false,-1);
    tracep->declBit(c+883,"jal_save", false,-1);
    tracep->declBit(c+884,"jalr_save", false,-1);
    tracep->declBit(c+885,"lb_save", false,-1);
    tracep->declBit(c+886,"lh_save", false,-1);
    tracep->declBit(c+887,"lw_save", false,-1);
    tracep->declBit(c+888,"lbu_save", false,-1);
    tracep->declBit(c+889,"lhu_save", false,-1);
    tracep->declBit(c+890,"sb_save", false,-1);
    tracep->declBit(c+891,"sh_save", false,-1);
    tracep->declBit(c+892,"sw_save", false,-1);
    tracep->declBit(c+893,"beq_save", false,-1);
    tracep->declBit(c+894,"bne_save", false,-1);
    tracep->declBit(c+895,"blt_save", false,-1);
    tracep->declBit(c+896,"bge_save", false,-1);
    tracep->declBit(c+897,"bltu_save", false,-1);
    tracep->declBit(c+898,"bgeu_save", false,-1);
    tracep->declBit(c+899,"ebreak_save", false,-1);
    tracep->declBit(c+900,"ecall_save", false,-1);
    tracep->declBit(c+901,"mret_save", false,-1);
    tracep->declBit(c+902,"fence_i_save", false,-1);
    tracep->declBit(c+903,"csrrw_save", false,-1);
    tracep->declBit(c+904,"csrrs_save", false,-1);
    tracep->declBit(c+905,"csrrc_save", false,-1);
    tracep->declBus(c+784,"rd_save", false,-1, 4,0);
    tracep->declBus(c+785,"rs1_save", false,-1, 4,0);
    tracep->declBus(c+786,"rs2_save", false,-1, 4,0);
    tracep->declBus(c+906,"csr_rst_save", false,-1, 31,0);
    tracep->declBus(c+907,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+2166,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2167,"BLOCK", false,-1, 31,0);
    tracep->declBus(c+2168,"WAIT_END", false,-1, 31,0);
    tracep->declBus(c+2169,"EX", false,-1, 31,0);
    tracep->declBus(c+908,"state", false,-1, 1,0);
    tracep->declBus(c+909,"next", false,-1, 1,0);
    tracep->declBit(c+910,"read", false,-1);
    tracep->declBit(c+911,"write", false,-1);
    tracep->declBit(c+912,"is_nlwb", false,-1);
    tracep->declBit(c+913,"nrs", false,-1);
    tracep->declBit(c+914,"r_type", false,-1);
    tracep->declBit(c+915,"s_type", false,-1);
    tracep->declBit(c+916,"b_type", false,-1);
    tracep->declBit(c+917,"rsb_type", false,-1);
    tracep->declBit(c+918,"i_type", false,-1);
    tracep->declBit(c+919,"gpr_read_valid", false,-1);
    tracep->declBus(c+920,"rdata1_ul", false,-1, 31,0);
    tracep->declBus(c+921,"new_pc", false,-1, 31,0);
    tracep->declBus(c+922,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+923,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+924,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+925,"add1", false,-1, 31,0);
    tracep->declBus(c+926,"add2", false,-1, 31,0);
    tracep->declBus(c+788,"add_rst_w", false,-1, 31,0);
    tracep->declBus(c+927,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+928,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+929,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+930,"or_rst", false,-1, 31,0);
    tracep->declBus(c+931,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+932,"and_rst", false,-1, 31,0);
    tracep->declBus(c+933,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+934,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+935,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+936,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+937,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+938,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+939,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+940,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+941,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+942,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+943,"srai_rst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBus(c+1801,"sw_addr", false,-1, 31,0);
    tracep->declBit(c+147,"sw_avail", false,-1);
    tracep->declBus(c+2170,"ICACHE_LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+2170,"ICACHE_LINE_AMT", false,-1, 31,0);
    tracep->declBus(c+2171,"OFFSET_LEN", false,-1, 31,0);
    tracep->declBus(c+2171,"INDEX_LEN", false,-1, 31,0);
    tracep->declBus(c+2172,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+2173,"CACHE_LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+2171,"LINE_WORDS", false,-1, 31,0);
    tracep->declBus(c+2168,"BEAT_LEN", false,-1, 31,0);
    tracep->declBus(c+2174,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+2175,"FLASH_TAG", false,-1, 3,0);
    tracep->declBus(c+2176,"SDRAM_TAG0", false,-1, 3,0);
    tracep->declBus(c+2177,"SDRAM_TAG1", false,-1, 3,0);
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
    tracep->declBus(c+2075,"next", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1053,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+719,"in_pc", false,-1, 31,0);
    tracep->declBus(c+720,"in_instr", false,-1, 31,0);
    tracep->declBit(c+721,"in_valid", false,-1);
    tracep->declBit(c+722,"in_ready", false,-1);
    tracep->declBit(c+721,"out_valid", false,-1);
    tracep->declBit(c+722,"out_ready", false,-1);
    tracep->declBus(c+719,"out_pc", false,-1, 31,0);
    tracep->declBit(c+723,"addi", false,-1);
    tracep->declBit(c+724,"slti", false,-1);
    tracep->declBit(c+725,"sltiu", false,-1);
    tracep->declBit(c+726,"xori", false,-1);
    tracep->declBit(c+727,"ori", false,-1);
    tracep->declBit(c+728,"andi", false,-1);
    tracep->declBit(c+729,"slli", false,-1);
    tracep->declBit(c+730,"srli", false,-1);
    tracep->declBit(c+731,"srai", false,-1);
    tracep->declBit(c+732,"add", false,-1);
    tracep->declBit(c+733,"sub", false,-1);
    tracep->declBit(c+734,"sll", false,-1);
    tracep->declBit(c+735,"slt", false,-1);
    tracep->declBit(c+736,"sltu", false,-1);
    tracep->declBit(c+737,"xor_inst", false,-1);
    tracep->declBit(c+738,"srl", false,-1);
    tracep->declBit(c+739,"sra", false,-1);
    tracep->declBit(c+740,"or_inst", false,-1);
    tracep->declBit(c+741,"and_inst", false,-1);
    tracep->declBit(c+742,"lb", false,-1);
    tracep->declBit(c+743,"lh", false,-1);
    tracep->declBit(c+744,"lw", false,-1);
    tracep->declBit(c+745,"lbu", false,-1);
    tracep->declBit(c+746,"lhu", false,-1);
    tracep->declBit(c+747,"sb", false,-1);
    tracep->declBit(c+748,"sh", false,-1);
    tracep->declBit(c+749,"sw", false,-1);
    tracep->declBit(c+750,"beq", false,-1);
    tracep->declBit(c+751,"bne", false,-1);
    tracep->declBit(c+752,"blt", false,-1);
    tracep->declBit(c+753,"bge", false,-1);
    tracep->declBit(c+754,"bltu", false,-1);
    tracep->declBit(c+755,"bgeu", false,-1);
    tracep->declBit(c+756,"jal", false,-1);
    tracep->declBit(c+757,"jalr", false,-1);
    tracep->declBit(c+758,"lui", false,-1);
    tracep->declBit(c+759,"auipc", false,-1);
    tracep->declBit(c+760,"ebreak", false,-1);
    tracep->declBit(c+761,"ecall", false,-1);
    tracep->declBit(c+762,"csrrw", false,-1);
    tracep->declBit(c+763,"csrrs", false,-1);
    tracep->declBit(c+764,"csrrc", false,-1);
    tracep->declBit(c+765,"mret", false,-1);
    tracep->declBit(c+766,"fence_i", false,-1);
    tracep->declBus(c+767,"rd", false,-1, 4,0);
    tracep->declBus(c+768,"rs1", false,-1, 4,0);
    tracep->declBus(c+769,"rs2", false,-1, 4,0);
    tracep->declBus(c+770,"imm", false,-1, 31,0);
    tracep->declBus(c+720,"out_instr", false,-1, 31,0);
    tracep->declBus(c+1054,"opcode", false,-1, 6,0);
    tracep->declBus(c+1055,"funct3", false,-1, 2,0);
    tracep->declBus(c+1056,"funct7", false,-1, 6,0);
    tracep->declBus(c+1057,"immI_w", false,-1, 31,0);
    tracep->declBus(c+1058,"immU_w", false,-1, 31,0);
    tracep->declBus(c+1059,"immS_w", false,-1, 31,0);
    tracep->declBus(c+1060,"immB_w", false,-1, 31,0);
    tracep->declBus(c+1061,"immJ_w", false,-1, 31,0);
    tracep->declBus(c+1062,"immCSR_w", false,-1, 31,0);
    tracep->declBus(c+770,"imm_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBus(c+720,"out_instr", false,-1, 31,0);
    tracep->declBit(c+721,"out_valid", false,-1);
    tracep->declBit(c+722,"out_ready", false,-1);
    tracep->declBus(c+719,"out_pc", false,-1, 31,0);
    tracep->declBit(c+717,"flush", false,-1);
    tracep->declBus(c+718,"pc_flush", false,-1, 31,0);
    tracep->declQuad(c+713,"ifu_work_cyc", false,-1, 63,0);
    tracep->declQuad(c+715,"ifu_block_cyc", false,-1, 63,0);
    tracep->declBus(c+2125,"PMA_ENTRIES", false,-1, 31,0);
    tracep->pushNamePrefix("pma_table");
    tracep->declArray(c+1,"[0]", false,-1, 66,0);
    tracep->declArray(c+4,"[1]", false,-1, 66,0);
    tracep->declArray(c+7,"[2]", false,-1, 66,0);
    tracep->declArray(c+10,"[3]", false,-1, 66,0);
    tracep->declArray(c+13,"[4]", false,-1, 66,0);
    tracep->declArray(c+16,"[5]", false,-1, 66,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1063,"error_save", false,-1, 1,0);
    tracep->declBit(c+1064,"master_validation_error_save", false,-1);
    tracep->declBit(c+1065,"flush_save", false,-1);
    tracep->declBus(c+1066,"pc_flush_save", false,-1, 31,0);
    tracep->declBus(c+1067,"pc", false,-1, 31,0);
    tracep->declBus(c+1068,"state", false,-1, 1,0);
    tracep->declBus(c+1069,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBit(c+777,"is_ls", false,-1);
    tracep->declBit(c+781,"io", false,-1);
    tracep->declBus(c+782,"io_type", false,-1, 1,0);
    tracep->declBit(c+783,"read_is_u", false,-1);
    tracep->declBus(c+784,"rd", false,-1, 4,0);
    tracep->declBus(c+787,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+788,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+789,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+859,"pc_in", false,-1, 31,0);
    tracep->declBit(c+779,"in_valid", false,-1);
    tracep->declBit(c+780,"in_ready", false,-1);
    tracep->declBit(c+798,"out_valid", false,-1);
    tracep->declBit(c+799,"out_ready", false,-1);
    tracep->declBus(c+1812,"wdata", false,-1, 31,0);
    tracep->declBus(c+800,"rd_out", false,-1, 4,0);
    tracep->declBit(c+778,"lsu_bypass_data_valid", false,-1);
    tracep->declBus(c+806,"pc_out", false,-1, 31,0);
    tracep->declQuad(c+791,"lsu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+793,"lsu_blcokb_cyc", false,-1, 63,0);
    tracep->declQuad(c+795,"lsu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+797,"lsu_blockf", false,-1);
    tracep->declBus(c+1801,"sw_addr", false,-1, 31,0);
    tracep->declBit(c+147,"sw_avail", false,-1);
    tracep->declBus(c+1070,"error_save", false,-1, 1,0);
    tracep->declBit(c+1071,"io_save", false,-1);
    tracep->declBus(c+1072,"io_type_save", false,-1, 1,0);
    tracep->declBit(c+1073,"read_is_u_save", false,-1);
    tracep->declBus(c+800,"rd_save", false,-1, 4,0);
    tracep->declBus(c+1074,"lsu_data_save", false,-1, 31,0);
    tracep->declBus(c+1801,"lsu_addr_save", false,-1, 31,0);
    tracep->declBus(c+1075,"ic_wb_wdata_save", false,-1, 31,0);
    tracep->declBus(c+1076,"rdata_out", false,-1, 31,0);
    tracep->declBus(c+1077,"state", false,-1, 2,0);
    tracep->declBus(c+176,"next", false,-1, 2,0);
    tracep->declBit(c+1078,"aw_done", false,-1);
    tracep->declBit(c+1079,"w_done", false,-1);
    tracep->declBit(c+177,"aw_done_next", false,-1);
    tracep->declBit(c+178,"w_done_next", false,-1);
    tracep->declBus(c+1076,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1813,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1814,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1815,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1816,"lh_rst", false,-1, 31,0);
    tracep->declBus(c+1817,"lsu_rdata_shifted", false,-1, 31,0);
    tracep->declBit(c+1080,"lw", false,-1);
    tracep->declBit(c+1081,"lh", false,-1);
    tracep->declBit(c+1082,"lhu", false,-1);
    tracep->declBit(c+1083,"lbu", false,-1);
    tracep->declBit(c+1084,"lb", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBus(c+2178,"MTIME_ADDR", false,-1, 31,0);
    tracep->declBus(c+2179,"MTIMEH_ADDR", false,-1, 31,0);
    tracep->declBus(c+2117,"RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+2119,"RESP_SLVERR", false,-1, 1,0);
    tracep->declQuad(c+1085,"mtime", false,-1, 63,0);
    tracep->declBus(c+1087,"state", false,-1, 1,0);
    tracep->declBus(c+2076,"next", false,-1, 1,0);
    tracep->declBus(c+1088,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1089,"rresp_save", false,-1, 1,0);
    tracep->declBus(c+1090,"rid_save", false,-1, 3,0);
    tracep->declBus(c+1091,"bid_save", false,-1, 3,0);
    tracep->declBus(c+1818,"rdata_now", false,-1, 31,0);
    tracep->declBus(c+1819,"rresp_now", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBit(c+1820,"aw_to_clint", false,-1);
    tracep->declBit(c+1092,"w_busy", false,-1);
    tracep->declBit(c+1093,"w_clint", false,-1);
    tracep->declBit(c+1821,"w_sel_clint", false,-1);
    tracep->declBus(c+1822,"r_current_state", false,-1, 1,0);
    tracep->declBus(c+94,"r_next_state", false,-1, 1,0);
    tracep->declBit(c+1094,"r_sel_clint", false,-1);
    tracep->declBit(c+1823,"sel_lsu", false,-1);
    tracep->declBit(c+1824,"sel_ifu", false,-1);
    tracep->declBit(c+75,"r_tgt_rvalid", false,-1);
    tracep->declBit(c+2077,"r_tgt_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2074,"reset", false,-1);
    tracep->declBit(c+798,"in_valid", false,-1);
    tracep->declBit(c+799,"in_ready", false,-1);
    tracep->declBus(c+800,"rd", false,-1, 4,0);
    tracep->declBus(c+1812,"wdata", false,-1, 31,0);
    tracep->declBus(c+806,"pc_in", false,-1, 31,0);
    tracep->declBit(c+807,"wen", false,-1);
    tracep->declBus(c+809,"wdata_wb", false,-1, 31,0);
    tracep->declBus(c+808,"rd_wb", false,-1, 4,0);
    tracep->declQuad(c+801,"wbu_blockf_cyc", false,-1, 63,0);
    tracep->declQuad(c+803,"wbu_work_cyc", false,-1, 63,0);
    tracep->declBit(c+805,"wbu_blockf", false,-1);
    tracep->declBus(c+810,"pc_out", false,-1, 31,0);
    tracep->declBus(c+2180,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2181,"WB", false,-1, 0,0);
    tracep->declBit(c+1095,"state", false,-1);
    tracep->declBit(c+1096,"next", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"io_d", false,-1);
    tracep->declBit(c+620,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"io_d", false,-1);
    tracep->declBit(c+620,"io_q", false,-1);
    tracep->declBit(c+620,"sync_0", false,-1);
    tracep->declBit(c+621,"sync_1", false,-1);
    tracep->declBit(c+622,"sync_2", false,-1);
    tracep->declBit(c+623,"sync_3", false,-1);
    tracep->declBit(c+624,"sync_4", false,-1);
    tracep->declBit(c+625,"sync_5", false,-1);
    tracep->declBit(c+626,"sync_6", false,-1);
    tracep->declBit(c+627,"sync_7", false,-1);
    tracep->declBit(c+628,"sync_8", false,-1);
    tracep->declBit(c+629,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1849,"auto_in_psel", false,-1);
    tracep->declBit(c+1850,"auto_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1764,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+2111,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1851,"auto_in_pready", false,-1);
    tracep->declBit(c+1852,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1853,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1145,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+2107,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1146,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1147,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1148,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1149,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1150,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1151,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1152,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1153,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBus(c+1772,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1849,"in_psel", false,-1);
    tracep->declBit(c+1850,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1851,"in_pready", false,-1);
    tracep->declBus(c+1853,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1852,"in_pslverr", false,-1);
    tracep->declBus(c+1145,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+2107,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1146,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1147,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1148,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1149,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1150,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1151,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1152,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1153,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+2182,"GPIO_BASE", false,-1, 31,0);
    tracep->declBus(c+1145,"gpio_out_r", false,-1, 15,0);
    tracep->declBus(c+1279,"seg_reg_0_r", false,-1, 7,0);
    tracep->declBus(c+1280,"seg_reg_1_r", false,-1, 7,0);
    tracep->declBus(c+1281,"seg_reg_2_r", false,-1, 7,0);
    tracep->declBus(c+1282,"seg_reg_3_r", false,-1, 7,0);
    tracep->declBit(c+1867,"valid_access", false,-1);
    tracep->declBus(c+1773,"addr_off", false,-1, 31,0);
    tracep->declBus(c+1774,"addr_sel", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1845,"auto_in_psel", false,-1);
    tracep->declBit(c+1846,"auto_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1764,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+2111,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1847,"auto_in_pready", false,-1);
    tracep->declBit(c+2120,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1848,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+2108,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+2109,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBus(c+1772,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1845,"in_psel", false,-1);
    tracep->declBit(c+1846,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1847,"in_pready", false,-1);
    tracep->declBus(c+1848,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+2120,"in_pslverr", false,-1);
    tracep->declBit(c+2108,"ps2_clk", false,-1);
    tracep->declBit(c+2109,"ps2_data", false,-1);
    tracep->declBus(c+1775,"clk_sync", false,-1, 1,0);
    tracep->declBus(c+1776,"dat_sync", false,-1, 1,0);
    tracep->declBit(c+1777,"clk_fall", false,-1);
    tracep->declBit(c+1778,"dat", false,-1);
    tracep->declBus(c+1283,"bit_cnt", false,-1, 3,0);
    tracep->declBus(c+1284,"shifter", false,-1, 7,0);
    tracep->declBit(c+1285,"par_acc", false,-1);
    tracep->declBit(c+1286,"frame_ok", false,-1);
    tracep->declBus(c+1287,"scancode", false,-1, 7,0);
    tracep->declBit(c+1288,"scancode_valid", false,-1);
    tracep->declBit(c+2078,"apb_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1960,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1961,"auto_in_wvalid", false,-1);
    tracep->declBit(c+414,"auto_in_arready", false,-1);
    tracep->declBit(c+1962,"auto_in_arvalid", false,-1);
    tracep->declBus(c+224,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1963,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+30,"auto_in_rready", false,-1);
    tracep->declBit(c+415,"auto_in_rvalid", false,-1);
    tracep->declBus(c+416,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+417,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+415,"state", false,-1);
    tracep->declBus(c+417,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+416,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1976,"raddr", false,-1, 31,0);
    tracep->declBit(c+1977,"ren", false,-1);
    tracep->declBus(c+1978,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1854,"auto_in_psel", false,-1);
    tracep->declBit(c+2056,"auto_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1759,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+2111,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+2057,"auto_in_pready", false,-1);
    tracep->declBit(c+2120,"auto_in_pslverr", false,-1);
    tracep->declBus(c+188,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1831,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1832,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1979,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBus(c+1759,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1854,"in_psel", false,-1);
    tracep->declBit(c+2056,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+2057,"in_pready", false,-1);
    tracep->declBus(c+188,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+2120,"in_pslverr", false,-1);
    tracep->declBit(c+1831,"qspi_sck", false,-1);
    tracep->declBit(c+1832,"qspi_ce_n", false,-1);
    tracep->declBus(c+1979,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1979,"din", false,-1, 3,0);
    tracep->declBus(c+1868,"dout", false,-1, 3,0);
    tracep->declBus(c+1869,"douten", false,-1, 3,0);
    tracep->declBit(c+2079,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBus(c+1759,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1761,"dat_i", false,-1, 31,0);
    tracep->declBus(c+188,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1762,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1854,"cyc_i", false,-1);
    tracep->declBit(c+1854,"stb_i", false,-1);
    tracep->declBit(c+2079,"ack_o", false,-1);
    tracep->declBit(c+1760,"we_i", false,-1);
    tracep->declBit(c+1831,"sck", false,-1);
    tracep->declBit(c+1832,"ce_n", false,-1);
    tracep->declBus(c+1979,"din", false,-1, 3,0);
    tracep->declBus(c+1868,"dout", false,-1, 3,0);
    tracep->declBus(c+1869,"douten", false,-1, 3,0);
    tracep->declBus(c+2180,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+2181,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+1289,"mr_sck", false,-1);
    tracep->declBit(c+1290,"mr_ce_n", false,-1);
    tracep->declBus(c+1979,"mr_din", false,-1, 3,0);
    tracep->declBus(c+1291,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+1292,"mr_doe", false,-1);
    tracep->declBit(c+1293,"mw_sck", false,-1);
    tracep->declBit(c+1294,"mw_ce_n", false,-1);
    tracep->declBus(c+1979,"mw_din", false,-1, 3,0);
    tracep->declBus(c+2080,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+1295,"mw_doe", false,-1);
    tracep->declBit(c+1870,"mr_rd", false,-1);
    tracep->declBit(c+1296,"mr_done", false,-1);
    tracep->declBit(c+1871,"mw_wr", false,-1);
    tracep->declBit(c+1872,"mw_done", false,-1);
    tracep->declBit(c+1297,"qpi_mode", false,-1);
    tracep->declBit(c+1298,"mr_busy", false,-1);
    tracep->declBit(c+1854,"wb_valid", false,-1);
    tracep->declBit(c+1873,"wb_we", false,-1);
    tracep->declBit(c+1874,"wb_re", false,-1);
    tracep->declBit(c+1297,"allow_xfer", false,-1);
    tracep->declBit(c+1299,"state", false,-1);
    tracep->declBit(c+1875,"nstate", false,-1);
    tracep->declBus(c+1779,"size", false,-1, 2,0);
    tracep->declBus(c+1780,"byte0", false,-1, 7,0);
    tracep->declBus(c+1781,"byte1", false,-1, 7,0);
    tracep->declBus(c+1782,"byte2", false,-1, 7,0);
    tracep->declBus(c+1783,"byte3", false,-1, 7,0);
    tracep->declBus(c+1784,"wdata", false,-1, 31,0);
    tracep->declBit(c+1876,"use_mr", false,-1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2081,"rst_n", false,-1);
    tracep->declBus(c+1785,"addr", false,-1, 23,0);
    tracep->declBit(c+1870,"rd", false,-1);
    tracep->declBus(c+2183,"size", false,-1, 2,0);
    tracep->declBit(c+1296,"done", false,-1);
    tracep->declBus(c+188,"line", false,-1, 31,0);
    tracep->declBit(c+1289,"sck", false,-1);
    tracep->declBit(c+1290,"ce_n", false,-1);
    tracep->declBus(c+1979,"din", false,-1, 3,0);
    tracep->declBus(c+1291,"dout", false,-1, 3,0);
    tracep->declBit(c+1292,"douten", false,-1);
    tracep->declBit(c+1297,"qpi", false,-1);
    tracep->declBit(c+1298,"busy", false,-1);
    tracep->declBus(c+2117,"IDLE", false,-1, 1,0);
    tracep->declBus(c+2118,"ENTER_QPI", false,-1, 1,0);
    tracep->declBus(c+2119,"READ", false,-1, 1,0);
    tracep->declBus(c+2184,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+2185,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+1300,"state", false,-1, 1,0);
    tracep->declBus(c+2082,"nstate", false,-1, 1,0);
    tracep->declBus(c+1301,"counter", false,-1, 7,0);
    tracep->declBus(c+1302,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+630+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1303,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1304,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1305,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1306,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+1307,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1308,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1309,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+1310,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+1311,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+1312,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+1313,"byte_cnt", false,-1, 7,0);
    tracep->declBus(c+1314,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2081,"rst_n", false,-1);
    tracep->declBus(c+1786,"addr", false,-1, 23,0);
    tracep->declBus(c+1784,"line", false,-1, 31,0);
    tracep->declBus(c+1779,"size", false,-1, 2,0);
    tracep->declBit(c+1871,"wr", false,-1);
    tracep->declBit(c+1297,"qpi", false,-1);
    tracep->declBit(c+1872,"done", false,-1);
    tracep->declBit(c+1293,"sck", false,-1);
    tracep->declBit(c+1294,"ce_n", false,-1);
    tracep->declBus(c+1979,"din", false,-1, 3,0);
    tracep->declBus(c+2080,"dout", false,-1, 3,0);
    tracep->declBit(c+1295,"douten", false,-1);
    tracep->declBus(c+2180,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2181,"WRITE", false,-1, 0,0);
    tracep->declBit(c+1315,"state", false,-1);
    tracep->declBit(c+1877,"nstate", false,-1);
    tracep->declBus(c+1316,"counter", false,-1, 7,0);
    tracep->declBus(c+1317,"saddr", false,-1, 23,0);
    tracep->declBus(c+2186,"CMD_38H", false,-1, 7,0);
    tracep->declBus(c+1303,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1304,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1305,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1318,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1878,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1319,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+1320,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+1321,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+1322,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+1323,"dat_off8", false,-1, 7,0);
    tracep->declBus(c+1324,"dat_off", false,-1, 2,0);
    tracep->declBus(c+1325,"dat_byte", false,-1, 1,0);
    tracep->declBus(c+2083,"dat_nib", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1984,"auto_in_awready", false,-1);
    tracep->declBit(c+1925,"auto_in_awvalid", false,-1);
    tracep->declBus(c+2122,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1801,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2123,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1985,"auto_in_wready", false,-1);
    tracep->declBit(c+1926,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1802,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"auto_in_wlast", false,-1);
    tracep->declBit(c+153,"auto_in_bready", false,-1);
    tracep->declBit(c+1170,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1167,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+2117,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1983,"auto_in_arready", false,-1);
    tracep->declBit(c+1924,"auto_in_arvalid", false,-1);
    tracep->declBus(c+2122,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1797,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1798,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+85,"auto_in_rready", false,-1);
    tracep->declBit(c+1166,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1167,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1168,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+2117,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1169,"auto_in_rlast", false,-1);
    tracep->declBit(c+2054,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1893,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1158,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1159,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1160,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1161,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1894,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1895,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1896,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1906,"sdram_bundle_dq", false,-1, 31,0);
    tracep->declBit(c+1982,"sdram_bundle_sel", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1984,"in_awready", false,-1);
    tracep->declBit(c+1925,"in_awvalid", false,-1);
    tracep->declBus(c+1801,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+2122,"in_awid", false,-1, 3,0);
    tracep->declBus(c+2123,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+680,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+2117,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1985,"in_wready", false,-1);
    tracep->declBit(c+1926,"in_wvalid", false,-1);
    tracep->declBus(c+1802,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+2121,"in_wlast", false,-1);
    tracep->declBit(c+153,"in_bready", false,-1);
    tracep->declBit(c+1170,"in_bvalid", false,-1);
    tracep->declBus(c+2117,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+1167,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1983,"in_arready", false,-1);
    tracep->declBit(c+1924,"in_arvalid", false,-1);
    tracep->declBus(c+1797,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+2122,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1798,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1799,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1800,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+85,"in_rready", false,-1);
    tracep->declBit(c+1166,"in_rvalid", false,-1);
    tracep->declBus(c+2117,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+1168,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+1169,"in_rlast", false,-1);
    tracep->declBus(c+1167,"in_rid", false,-1, 3,0);
    tracep->declBit(c+2054,"sdram_clk", false,-1);
    tracep->declBit(c+1893,"sdram_cke", false,-1);
    tracep->declBit(c+1158,"sdram_cs", false,-1);
    tracep->declBit(c+1159,"sdram_ras", false,-1);
    tracep->declBit(c+1160,"sdram_cas", false,-1);
    tracep->declBit(c+1161,"sdram_we", false,-1);
    tracep->declBus(c+1894,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1895,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1896,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1906,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1982,"sdram_sel", false,-1);
    tracep->declBit(c+1326,"sdram_dout_en", false,-1);
    tracep->declBus(c+1327,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBit(c+1925,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1801,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+2122,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+2123,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+2117,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1926,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1802,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1803,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+2121,"inport_wlast_i", false,-1);
    tracep->declBit(c+153,"inport_bready_i", false,-1);
    tracep->declBit(c+1924,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1797,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+2122,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1798,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1800,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+85,"inport_rready_i", false,-1);
    tracep->declBus(c+1906,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1984,"inport_awready_o", false,-1);
    tracep->declBit(c+1985,"inport_wready_o", false,-1);
    tracep->declBit(c+1170,"inport_bvalid_o", false,-1);
    tracep->declBus(c+2117,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1167,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1983,"inport_arready_o", false,-1);
    tracep->declBit(c+1166,"inport_rvalid_o", false,-1);
    tracep->declBus(c+1168,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+2117,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1167,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+1169,"inport_rlast_o", false,-1);
    tracep->declBit(c+2054,"sdram_clk_o", false,-1);
    tracep->declBit(c+1893,"sdram_cke_o", false,-1);
    tracep->declBit(c+1158,"sdram_cs_o", false,-1);
    tracep->declBit(c+1159,"sdram_ras_o", false,-1);
    tracep->declBit(c+1160,"sdram_cas_o", false,-1);
    tracep->declBit(c+1161,"sdram_we_o", false,-1);
    tracep->declBus(c+1896,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1894,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1895,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1327,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1326,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1982,"sdram_sel_o", false,-1);
    tracep->declBus(c+2112,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2187,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+2127,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2168,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1993,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1994,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1995,"ram_rd_w", false,-1);
    tracep->declBit(c+1897,"ram_accept_w", false,-1);
    tracep->declBus(c+1802,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1328,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+2084,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+1329,"ram_ack_w", false,-1);
    tracep->declBit(c+2120,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBit(c+1925,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1801,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+2122,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+2123,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+2117,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1926,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1802,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1803,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+2121,"axi_wlast_i", false,-1);
    tracep->declBit(c+153,"axi_bready_i", false,-1);
    tracep->declBit(c+1924,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1797,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+2122,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1798,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1800,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+85,"axi_rready_i", false,-1);
    tracep->declBit(c+1897,"ram_accept_i", false,-1);
    tracep->declBit(c+1329,"ram_ack_i", false,-1);
    tracep->declBit(c+2120,"ram_error_i", false,-1);
    tracep->declBus(c+1328,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1984,"axi_awready_o", false,-1);
    tracep->declBit(c+1985,"axi_wready_o", false,-1);
    tracep->declBit(c+1170,"axi_bvalid_o", false,-1);
    tracep->declBus(c+2117,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+1167,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1983,"axi_arready_o", false,-1);
    tracep->declBit(c+1166,"axi_rvalid_o", false,-1);
    tracep->declBus(c+1168,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+2117,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+1167,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+1169,"axi_rlast_o", false,-1);
    tracep->declBus(c+1994,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1995,"ram_rd_o", false,-1);
    tracep->declBus(c+2084,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1993,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1802,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+1330,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1331,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1332,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1333,"req_rd_q", false,-1);
    tracep->declBit(c+1334,"req_wr_q", false,-1);
    tracep->declBus(c+1335,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1336,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1337,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1338,"req_prio_q", false,-1);
    tracep->declBit(c+1339,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1340,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1341,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1996,"req_push_w", false,-1);
    tracep->declBus(c+2085,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1342,"req_out_valid_w", false,-1);
    tracep->declBus(c+1343,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+179,"resp_accept_w", false,-1);
    tracep->declBit(c+1344,"resp_is_write_w", false,-1);
    tracep->declBit(c+1345,"resp_is_read_w", false,-1);
    tracep->declBit(c+1169,"resp_is_last_w", false,-1);
    tracep->declBus(c+1167,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1346,"resp_valid_w", false,-1);
    tracep->declBit(c+1347,"write_prio_w", false,-1);
    tracep->declBit(c+1348,"read_prio_w", false,-1);
    tracep->declBit(c+1997,"write_active_w", false,-1);
    tracep->declBit(c+1995,"read_active_w", false,-1);
    tracep->declBus(c+1993,"addr_w", false,-1, 31,0);
    tracep->declBit(c+2086,"wr_w", false,-1);
    tracep->declBit(c+1995,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+2125,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2171,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2168,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBus(c+2085,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1996,"push_i", false,-1);
    tracep->declBit(c+179,"pop_i", false,-1);
    tracep->declBus(c+1343,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1341,"accept_o", false,-1);
    tracep->declBit(c+1342,"valid_o", false,-1);
    tracep->declBus(c+2169,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1349+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1353,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1354,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1355,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+2124,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2171,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2168,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBus(c+1328,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+1329,"push_i", false,-1);
    tracep->declBit(c+179,"pop_i", false,-1);
    tracep->declBus(c+1168,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1356,"accept_o", false,-1);
    tracep->declBit(c+1346,"valid_o", false,-1);
    tracep->declBus(c+2169,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1357+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1361,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1362,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1363,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBus(c+1994,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1995,"inport_rd_i", false,-1);
    tracep->declBus(c+2084,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1993,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1802,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1906,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1897,"inport_accept_o", false,-1);
    tracep->declBit(c+1329,"inport_ack_o", false,-1);
    tracep->declBit(c+2120,"inport_error_o", false,-1);
    tracep->declBus(c+1328,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+2054,"sdram_clk_o", false,-1);
    tracep->declBit(c+1893,"sdram_cke_o", false,-1);
    tracep->declBit(c+1158,"sdram_cs_o", false,-1);
    tracep->declBit(c+1159,"sdram_ras_o", false,-1);
    tracep->declBit(c+1160,"sdram_cas_o", false,-1);
    tracep->declBit(c+1161,"sdram_we_o", false,-1);
    tracep->declBus(c+1896,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1894,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1895,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+1327,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+1326,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1982,"sdram_sel_o", false,-1);
    tracep->declBus(c+2112,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2187,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+2127,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2168,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2168,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+2171,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+2171,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2188,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2168,"SDRAM_COL_LSB", false,-1, 31,0);
    tracep->declBus(c+2189,"SDRAM_BANK_LSB", false,-1, 31,0);
    tracep->declBus(c+2188,"SDRAM_ROW_LSB", false,-1, 31,0);
    tracep->declBus(c+2190,"SDRAM_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+2191,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2192,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2193,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2171,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2194,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2175,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2195,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2196,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2197,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2198,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2199,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2122,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2200,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+2171,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+2122,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2199,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2198,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2175,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2196,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2195,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2197,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2194,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2201,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2202,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2176,"STATE_READ_GAP", false,-1, 3,0);
    tracep->declBus(c+2177,"STATE_WRITE_GAP", false,-1, 3,0);
    tracep->declBus(c+2114,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+2114,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+2124,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+2114,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2168,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2168,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2125,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1993,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1994,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1995,"ram_rd_w", false,-1);
    tracep->declBit(c+1897,"ram_accept_w", false,-1);
    tracep->declBus(c+1802,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+1328,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+1329,"ram_ack_w", false,-1);
    tracep->declBit(c+1998,"ram_req_w", false,-1);
    tracep->declBus(c+1364,"command_q", false,-1, 3,0);
    tracep->declBus(c+1894,"addr_q", false,-1, 12,0);
    tracep->declBus(c+1327,"data_q", false,-1, 31,0);
    tracep->declBit(c+1365,"data_rd_en_q", false,-1);
    tracep->declBus(c+1896,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1893,"cke_q", false,-1);
    tracep->declBus(c+1895,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1328,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+1366,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1906,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1367,"refresh_q", false,-1);
    tracep->declBus(c+1368,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1369+i*1,"active_row_q", true,(i+0), 13,0);
    }
    tracep->declBus(c+1898,"state_q", false,-1, 3,0);
    tracep->declBus(c+1999,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+2000,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1373,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1374,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+1982,"sdram_sel", false,-1);
    tracep->declBus(c+2001,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+2002,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+2003,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+2171,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1375,"delay_q", false,-1, 3,0);
    tracep->declBus(c+2004,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2203,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1899,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1376,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1377,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1378,"idx", false,-1, 31,0);
    tracep->declBus(c+1379,"rd_q", false,-1, 3,0);
    tracep->declBit(c+1329,"ack_q", false,-1);
    tracep->declArray(c+1900,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1859,"auto_in_psel", false,-1);
    tracep->declBit(c+1860,"auto_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1763,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+2111,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+2058,"auto_in_pready", false,-1);
    tracep->declBit(c+1765,"auto_in_pslverr", false,-1);
    tracep->declBus(c+2059,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1155,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1156,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1157,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+2053,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2204,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2205,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2206,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBus(c+1787,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1859,"in_psel", false,-1);
    tracep->declBit(c+1860,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+2058,"in_pready", false,-1);
    tracep->declBus(c+2059,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1765,"in_pslverr", false,-1);
    tracep->declBit(c+1155,"spi_sck", false,-1);
    tracep->declBus(c+1156,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1157,"spi_mosi", false,-1);
    tracep->declBit(c+2053,"spi_miso", false,-1);
    tracep->declBit(c+1380,"spi_irq_out", false,-1);
    tracep->declBit(c+1788,"xip_sel", false,-1);
    tracep->declBus(c+2207,"REG_TX0", false,-1, 4,0);
    tracep->declBus(c+2208,"REG_TX1", false,-1, 4,0);
    tracep->declBus(c+2207,"REG_RX0", false,-1, 4,0);
    tracep->declBus(c+2209,"REG_CTRL", false,-1, 4,0);
    tracep->declBus(c+2210,"REG_DIV", false,-1, 4,0);
    tracep->declBus(c+2211,"REG_SS", false,-1, 4,0);
    tracep->declBus(c+2212,"CTRL_XFER64", false,-1, 31,0);
    tracep->declBus(c+2213,"CTRL_GO", false,-1, 31,0);
    tracep->declBus(c+1879,"spi_adr", false,-1, 4,0);
    tracep->declBus(c+1880,"spi_dat_i", false,-1, 31,0);
    tracep->declBus(c+1881,"spi_sel", false,-1, 3,0);
    tracep->declBit(c+1882,"spi_we", false,-1);
    tracep->declBit(c+1883,"spi_stb", false,-1);
    tracep->declBit(c+1884,"spi_cyc", false,-1);
    tracep->declBus(c+1381,"spi_dat_o", false,-1, 31,0);
    tracep->declBit(c+1382,"spi_ack", false,-1);
    tracep->declBit(c+2120,"spi_err", false,-1);
    tracep->declBus(c+2122,"S_IDLE", false,-1, 3,0);
    tracep->declBus(c+2199,"S_DIV", false,-1, 3,0);
    tracep->declBus(c+2198,"S_SS", false,-1, 3,0);
    tracep->declBus(c+2175,"S_TX1", false,-1, 3,0);
    tracep->declBus(c+2196,"S_TX0", false,-1, 3,0);
    tracep->declBus(c+2195,"S_CTRL", false,-1, 3,0);
    tracep->declBus(c+2197,"S_POLL", false,-1, 3,0);
    tracep->declBus(c+2194,"S_RX", false,-1, 3,0);
    tracep->declBus(c+2201,"S_RXLAT", false,-1, 3,0);
    tracep->declBus(c+2202,"S_UNSS", false,-1, 3,0);
    tracep->declBus(c+2176,"S_DONE", false,-1, 3,0);
    tracep->declBus(c+1383,"state", false,-1, 3,0);
    tracep->declBus(c+1384,"xip_addr", false,-1, 31,0);
    tracep->declBus(c+1385,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+1386,"xip_ready", false,-1);
    tracep->declBit(c+1387,"poll_go_seen", false,-1);
    tracep->declBit(c+1903,"wr_err_seen", false,-1);
    tracep->declBus(c+1388,"xip_adr", false,-1, 4,0);
    tracep->declBus(c+1389,"xip_dat", false,-1, 31,0);
    tracep->declBit(c+1390,"xip_we", false,-1);
    tracep->declBit(c+1391,"xip_req", false,-1);
    tracep->declBit(c+1392,"xip_busy", false,-1);
    tracep->declBus(c+1393,"xip_cmd", false,-1, 31,0);
    tracep->declBus(c+1394,"rx_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2167,"Tp", false,-1, 31,0);
    tracep->declBit(c+2013,"wb_clk_i", false,-1);
    tracep->declBit(c+2014,"wb_rst_i", false,-1);
    tracep->declBus(c+1879,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1880,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1381,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1881,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1882,"wb_we_i", false,-1);
    tracep->declBit(c+1883,"wb_stb_i", false,-1);
    tracep->declBit(c+1884,"wb_cyc_i", false,-1);
    tracep->declBit(c+1382,"wb_ack_o", false,-1);
    tracep->declBit(c+2120,"wb_err_o", false,-1);
    tracep->declBit(c+1380,"wb_int_o", false,-1);
    tracep->declBus(c+1156,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+1155,"sclk_pad_o", false,-1);
    tracep->declBit(c+1157,"mosi_pad_o", false,-1);
    tracep->declBit(c+2053,"miso_pad_i", false,-1);
    tracep->declBus(c+1395,"divider", false,-1, 15,0);
    tracep->declBus(c+1396,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1397,"ss", false,-1, 7,0);
    tracep->declBus(c+1885,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1398,"rx", false,-1, 127,0);
    tracep->declBit(c+1402,"rx_negedge", false,-1);
    tracep->declBit(c+1403,"tx_negedge", false,-1);
    tracep->declBus(c+1404,"char_len", false,-1, 6,0);
    tracep->declBit(c+1405,"go", false,-1);
    tracep->declBit(c+1406,"lsb", false,-1);
    tracep->declBit(c+1407,"ie", false,-1);
    tracep->declBit(c+1408,"ass", false,-1);
    tracep->declBit(c+1886,"spi_divider_sel", false,-1);
    tracep->declBit(c+1887,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1888,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1889,"spi_ss_sel", false,-1);
    tracep->declBit(c+1409,"tip", false,-1);
    tracep->declBit(c+1410,"pos_edge", false,-1);
    tracep->declBit(c+1411,"neg_edge", false,-1);
    tracep->declBit(c+1412,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2167,"Tp", false,-1, 31,0);
    tracep->declBit(c+2013,"clk_in", false,-1);
    tracep->declBit(c+2014,"rst", false,-1);
    tracep->declBit(c+1409,"enable", false,-1);
    tracep->declBit(c+1405,"go", false,-1);
    tracep->declBit(c+1412,"last_clk", false,-1);
    tracep->declBus(c+1395,"divider", false,-1, 15,0);
    tracep->declBit(c+1155,"clk_out", false,-1);
    tracep->declBit(c+1410,"pos_edge", false,-1);
    tracep->declBit(c+1411,"neg_edge", false,-1);
    tracep->declBus(c+1413,"cnt", false,-1, 15,0);
    tracep->declBit(c+1414,"cnt_zero", false,-1);
    tracep->declBit(c+1415,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2167,"Tp", false,-1, 31,0);
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2014,"rst", false,-1);
    tracep->declBus(c+1890,"latch", false,-1, 3,0);
    tracep->declBus(c+1881,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1404,"len", false,-1, 6,0);
    tracep->declBit(c+1406,"lsb", false,-1);
    tracep->declBit(c+1405,"go", false,-1);
    tracep->declBit(c+1410,"pos_edge", false,-1);
    tracep->declBit(c+1411,"neg_edge", false,-1);
    tracep->declBit(c+1402,"rx_negedge", false,-1);
    tracep->declBit(c+1403,"tx_negedge", false,-1);
    tracep->declBit(c+1409,"tip", false,-1);
    tracep->declBit(c+1412,"last", false,-1);
    tracep->declBus(c+1880,"p_in", false,-1, 31,0);
    tracep->declArray(c+1398,"p_out", false,-1, 127,0);
    tracep->declBit(c+1155,"s_clk", false,-1);
    tracep->declBit(c+2053,"s_in", false,-1);
    tracep->declBit(c+1157,"s_out", false,-1);
    tracep->declBus(c+1416,"cnt", false,-1, 7,0);
    tracep->declArray(c+1398,"data", false,-1, 127,0);
    tracep->declBus(c+1417,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1418,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1419,"rx_clk", false,-1);
    tracep->declBit(c+1420,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1855,"auto_in_psel", false,-1);
    tracep->declBit(c+1856,"auto_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1764,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+2111,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1857,"auto_in_pready", false,-1);
    tracep->declBit(c+2120,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1858,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+2110,"uart_rx", false,-1);
    tracep->declBit(c+1154,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+1855,"in_psel", false,-1);
    tracep->declBit(c+1856,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1857,"in_pready", false,-1);
    tracep->declBit(c+2120,"in_pslverr", false,-1);
    tracep->declBus(c+1772,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1858,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+2110,"uart_rx", false,-1);
    tracep->declBit(c+1154,"uart_tx", false,-1);
    tracep->declBit(c+1421,"rtsn", false,-1);
    tracep->declBit(c+2120,"ctsn", false,-1);
    tracep->declBit(c+1422,"dtr_pad_o", false,-1);
    tracep->declBit(c+2120,"dsr_pad_i", false,-1);
    tracep->declBit(c+2120,"ri_pad_i", false,-1);
    tracep->declBit(c+2120,"dcd_pad_i", false,-1);
    tracep->declBit(c+1423,"interrupt", false,-1);
    tracep->declBit(c+21,"reg_we", false,-1);
    tracep->declBit(c+22,"reg_re", false,-1);
    tracep->declBus(c+1789,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1790,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+634,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1891,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1424,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2014,"wb_rst_i", false,-1);
    tracep->declBus(c+1789,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1791,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1891,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+21,"wb_we_i", false,-1);
    tracep->declBit(c+22,"wb_re_i", false,-1);
    tracep->declBit(c+1154,"stx_pad_o", false,-1);
    tracep->declBit(c+2110,"srx_pad_i", false,-1);
    tracep->declBus(c+2201,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1424,"rts_pad_o", false,-1);
    tracep->declBit(c+1422,"dtr_pad_o", false,-1);
    tracep->declBit(c+1423,"int_o", false,-1);
    tracep->declBit(c+1425,"enable", false,-1);
    tracep->declBit(c+1426,"srx_pad", false,-1);
    tracep->declBus(c+1427,"ier", false,-1, 3,0);
    tracep->declBus(c+1428,"iir", false,-1, 3,0);
    tracep->declBus(c+1429,"fcr", false,-1, 1,0);
    tracep->declBus(c+1430,"mcr", false,-1, 4,0);
    tracep->declBus(c+1431,"lcr", false,-1, 7,0);
    tracep->declBus(c+1432,"msr", false,-1, 7,0);
    tracep->declBus(c+1433,"dl", false,-1, 15,0);
    tracep->declBus(c+1434,"scratch", false,-1, 7,0);
    tracep->declBit(c+1435,"start_dlc", false,-1);
    tracep->declBit(c+1436,"lsr_mask_d", false,-1);
    tracep->declBit(c+1437,"msi_reset", false,-1);
    tracep->declBus(c+1438,"dlc", false,-1, 15,0);
    tracep->declBus(c+1439,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1440,"rx_reset", false,-1);
    tracep->declBit(c+1441,"tx_reset", false,-1);
    tracep->declBit(c+1442,"dlab", false,-1);
    tracep->declBit(c+2121,"cts_pad_i", false,-1);
    tracep->declBit(c+2120,"dsr_pad_i", false,-1);
    tracep->declBit(c+2120,"ri_pad_i", false,-1);
    tracep->declBit(c+2120,"dcd_pad_i", false,-1);
    tracep->declBit(c+1443,"loopback", false,-1);
    tracep->declBit(c+2120,"cts", false,-1);
    tracep->declBit(c+2121,"dsr", false,-1);
    tracep->declBit(c+2121,"ri", false,-1);
    tracep->declBit(c+2121,"dcd", false,-1);
    tracep->declBit(c+1444,"cts_c", false,-1);
    tracep->declBit(c+1445,"dsr_c", false,-1);
    tracep->declBit(c+1446,"ri_c", false,-1);
    tracep->declBit(c+1447,"dcd_c", false,-1);
    tracep->declBus(c+1448,"lsr", false,-1, 7,0);
    tracep->declBit(c+1449,"lsr0", false,-1);
    tracep->declBit(c+1450,"lsr1", false,-1);
    tracep->declBit(c+1451,"lsr2", false,-1);
    tracep->declBit(c+1452,"lsr3", false,-1);
    tracep->declBit(c+1453,"lsr4", false,-1);
    tracep->declBit(c+1454,"lsr5", false,-1);
    tracep->declBit(c+1455,"lsr6", false,-1);
    tracep->declBit(c+1456,"lsr7", false,-1);
    tracep->declBit(c+1457,"lsr0r", false,-1);
    tracep->declBit(c+1458,"lsr1r", false,-1);
    tracep->declBit(c+1459,"lsr2r", false,-1);
    tracep->declBit(c+1460,"lsr3r", false,-1);
    tracep->declBit(c+1461,"lsr4r", false,-1);
    tracep->declBit(c+1462,"lsr5r", false,-1);
    tracep->declBit(c+1463,"lsr6r", false,-1);
    tracep->declBit(c+1464,"lsr7r", false,-1);
    tracep->declBit(c+23,"lsr_mask", false,-1);
    tracep->declBit(c+1465,"rls_int", false,-1);
    tracep->declBit(c+1466,"rda_int", false,-1);
    tracep->declBit(c+1467,"ti_int", false,-1);
    tracep->declBit(c+1468,"thre_int", false,-1);
    tracep->declBit(c+1469,"ms_int", false,-1);
    tracep->declBit(c+1470,"tf_push", false,-1);
    tracep->declBit(c+1471,"rf_pop", false,-1);
    tracep->declBus(c+2087,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1472,"rf_error_bit", false,-1);
    tracep->declBit(c+1450,"rf_overrun", false,-1);
    tracep->declBit(c+1473,"rf_push_pulse", false,-1);
    tracep->declBus(c+1474,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1475,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1476,"tstate", false,-1, 2,0);
    tracep->declBus(c+1477,"rstate", false,-1, 3,0);
    tracep->declBus(c+1478,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1479,"thre_set_en", false,-1);
    tracep->declBus(c+1480,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1481,"block_value", false,-1, 7,0);
    tracep->declBit(c+1482,"serial_out", false,-1);
    tracep->declBit(c+1483,"serial_in", false,-1);
    tracep->declBit(c+24,"lsr_mask_condition", false,-1);
    tracep->declBit(c+25,"iir_read", false,-1);
    tracep->declBit(c+26,"msr_read", false,-1);
    tracep->declBit(c+27,"fifo_read", false,-1);
    tracep->declBit(c+28,"fifo_write", false,-1);
    tracep->declBus(c+1484,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1485,"lsr0_d", false,-1);
    tracep->declBit(c+1486,"lsr1_d", false,-1);
    tracep->declBit(c+1487,"lsr2_d", false,-1);
    tracep->declBit(c+1488,"lsr3_d", false,-1);
    tracep->declBit(c+1489,"lsr4_d", false,-1);
    tracep->declBit(c+1490,"lsr5_d", false,-1);
    tracep->declBit(c+1491,"lsr6_d", false,-1);
    tracep->declBit(c+1492,"lsr7_d", false,-1);
    tracep->declBit(c+1493,"rls_int_d", false,-1);
    tracep->declBit(c+1494,"thre_int_d", false,-1);
    tracep->declBit(c+1495,"ms_int_d", false,-1);
    tracep->declBit(c+1496,"ti_int_d", false,-1);
    tracep->declBit(c+1497,"rda_int_d", false,-1);
    tracep->declBit(c+1498,"rls_int_rise", false,-1);
    tracep->declBit(c+1499,"thre_int_rise", false,-1);
    tracep->declBit(c+1500,"ms_int_rise", false,-1);
    tracep->declBit(c+1501,"ti_int_rise", false,-1);
    tracep->declBit(c+1502,"rda_int_rise", false,-1);
    tracep->declBit(c+1503,"rls_int_pnd", false,-1);
    tracep->declBit(c+1504,"rda_int_pnd", false,-1);
    tracep->declBit(c+1505,"thre_int_pnd", false,-1);
    tracep->declBit(c+1506,"ms_int_pnd", false,-1);
    tracep->declBit(c+1507,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2167,"Tp", false,-1, 31,0);
    tracep->declBus(c+2167,"width", false,-1, 31,0);
    tracep->declBus(c+2181,"init_value", false,-1, 0,0);
    tracep->declBit(c+2014,"rst_i", false,-1);
    tracep->declBit(c+2013,"clk_i", false,-1);
    tracep->declBit(c+2120,"stage1_rst_i", false,-1);
    tracep->declBit(c+2121,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+2110,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1426,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1508,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2014,"wb_rst_i", false,-1);
    tracep->declBus(c+1431,"lcr", false,-1, 7,0);
    tracep->declBit(c+1471,"rf_pop", false,-1);
    tracep->declBit(c+1483,"srx_pad_i", false,-1);
    tracep->declBit(c+1425,"enable", false,-1);
    tracep->declBit(c+1440,"rx_reset", false,-1);
    tracep->declBit(c+23,"lsr_mask", false,-1);
    tracep->declBus(c+1478,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1474,"rf_count", false,-1, 4,0);
    tracep->declBus(c+2087,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1450,"rf_overrun", false,-1);
    tracep->declBit(c+1472,"rf_error_bit", false,-1);
    tracep->declBus(c+1477,"rstate", false,-1, 3,0);
    tracep->declBit(c+1473,"rf_push_pulse", false,-1);
    tracep->declBus(c+1509,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1510,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1511,"rshift", false,-1, 7,0);
    tracep->declBit(c+1512,"rparity", false,-1);
    tracep->declBit(c+1513,"rparity_error", false,-1);
    tracep->declBit(c+1514,"rframing_error", false,-1);
    tracep->declBit(c+1515,"rbit_in", false,-1);
    tracep->declBit(c+1516,"rparity_xor", false,-1);
    tracep->declBus(c+1517,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1518,"rf_push_q", false,-1);
    tracep->declBus(c+1519,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1520,"rf_push", false,-1);
    tracep->declBit(c+1521,"break_error", false,-1);
    tracep->declBit(c+1522,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1523,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1524,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1525,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+2122,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2199,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2198,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2175,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2196,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2195,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2197,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2194,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2201,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2202,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2176,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1526,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1527,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2189,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2170,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2171,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2126,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2014,"wb_rst_i", false,-1);
    tracep->declBit(c+1473,"push", false,-1);
    tracep->declBit(c+1471,"pop", false,-1);
    tracep->declBus(c+1519,"data_in", false,-1, 10,0);
    tracep->declBit(c+1440,"fifo_reset", false,-1);
    tracep->declBit(c+23,"reset_status", false,-1);
    tracep->declBus(c+2087,"data_out", false,-1, 10,0);
    tracep->declBit(c+1450,"overrun", false,-1);
    tracep->declBus(c+1474,"count", false,-1, 4,0);
    tracep->declBit(c+1472,"error_bit", false,-1);
    tracep->declBus(c+2088,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1528+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1544,"top", false,-1, 3,0);
    tracep->declBus(c+1545,"bottom", false,-1, 3,0);
    tracep->declBus(c+1546,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1547,"word0", false,-1, 2,0);
    tracep->declBus(c+1548,"word1", false,-1, 2,0);
    tracep->declBus(c+1549,"word2", false,-1, 2,0);
    tracep->declBus(c+1550,"word3", false,-1, 2,0);
    tracep->declBus(c+1551,"word4", false,-1, 2,0);
    tracep->declBus(c+1552,"word5", false,-1, 2,0);
    tracep->declBus(c+1553,"word6", false,-1, 2,0);
    tracep->declBus(c+1554,"word7", false,-1, 2,0);
    tracep->declBus(c+1555,"word8", false,-1, 2,0);
    tracep->declBus(c+1556,"word9", false,-1, 2,0);
    tracep->declBus(c+1557,"word10", false,-1, 2,0);
    tracep->declBus(c+1558,"word11", false,-1, 2,0);
    tracep->declBus(c+1559,"word12", false,-1, 2,0);
    tracep->declBus(c+1560,"word13", false,-1, 2,0);
    tracep->declBus(c+1561,"word14", false,-1, 2,0);
    tracep->declBus(c+1562,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+2171,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2206,"data_width", false,-1, 31,0);
    tracep->declBus(c+2170,"depth", false,-1, 31,0);
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+1473,"we", false,-1);
    tracep->declBus(c+1544,"a", false,-1, 3,0);
    tracep->declBus(c+1545,"dpra", false,-1, 3,0);
    tracep->declBus(c+1563,"di", false,-1, 7,0);
    tracep->declBus(c+2088,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+635+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2014,"wb_rst_i", false,-1);
    tracep->declBus(c+1431,"lcr", false,-1, 7,0);
    tracep->declBit(c+1470,"tf_push", false,-1);
    tracep->declBus(c+1791,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1425,"enable", false,-1);
    tracep->declBit(c+1441,"tx_reset", false,-1);
    tracep->declBit(c+23,"lsr_mask", false,-1);
    tracep->declBit(c+1482,"stx_pad_o", false,-1);
    tracep->declBus(c+1476,"tstate", false,-1, 2,0);
    tracep->declBus(c+1475,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1564,"counter", false,-1, 4,0);
    tracep->declBus(c+1565,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1566,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1567,"stx_o_tmp", false,-1);
    tracep->declBit(c+1568,"parity_xor", false,-1);
    tracep->declBit(c+1569,"tf_pop", false,-1);
    tracep->declBit(c+1570,"bit_out", false,-1);
    tracep->declBus(c+1791,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1892,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1571,"tf_overrun", false,-1);
    tracep->declBus(c+2160,"s_idle", false,-1, 2,0);
    tracep->declBus(c+2111,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+2214,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+2215,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+2183,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+2216,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2206,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2170,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2171,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+2126,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+2014,"wb_rst_i", false,-1);
    tracep->declBit(c+1470,"push", false,-1);
    tracep->declBit(c+1569,"pop", false,-1);
    tracep->declBus(c+1791,"data_in", false,-1, 7,0);
    tracep->declBit(c+1441,"fifo_reset", false,-1);
    tracep->declBit(c+23,"reset_status", false,-1);
    tracep->declBus(c+1892,"data_out", false,-1, 7,0);
    tracep->declBit(c+1571,"overrun", false,-1);
    tracep->declBus(c+1475,"count", false,-1, 4,0);
    tracep->declBus(c+1572,"top", false,-1, 3,0);
    tracep->declBus(c+1573,"bottom", false,-1, 3,0);
    tracep->declBus(c+1574,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+2171,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2206,"data_width", false,-1, 31,0);
    tracep->declBus(c+2170,"depth", false,-1, 31,0);
    tracep->declBit(c+2013,"clk", false,-1);
    tracep->declBit(c+1470,"we", false,-1);
    tracep->declBus(c+1572,"a", false,-1, 3,0);
    tracep->declBus(c+1573,"dpra", false,-1, 3,0);
    tracep->declBus(c+1791,"di", false,-1, 7,0);
    tracep->declBus(c+1892,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+651+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBit(c+1842,"auto_in_psel", false,-1);
    tracep->declBit(c+1843,"auto_in_penable", false,-1);
    tracep->declBit(c+1760,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1763,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+2111,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1761,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1844,"auto_in_pready", false,-1);
    tracep->declBit(c+2120,"auto_in_pslverr", false,-1);
    tracep->declBus(c+2055,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+180,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+181,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+182,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+183,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+184,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+185,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+2013,"clock", false,-1);
    tracep->declBit(c+2014,"reset", false,-1);
    tracep->declBus(c+1787,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1842,"in_psel", false,-1);
    tracep->declBit(c+1843,"in_penable", false,-1);
    tracep->declBus(c+2111,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1760,"in_pwrite", false,-1);
    tracep->declBus(c+1761,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1762,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1844,"in_pready", false,-1);
    tracep->declBus(c+2055,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+2120,"in_pslverr", false,-1);
    tracep->declBus(c+180,"vga_r", false,-1, 7,0);
    tracep->declBus(c+181,"vga_g", false,-1, 7,0);
    tracep->declBus(c+182,"vga_b", false,-1, 7,0);
    tracep->declBit(c+183,"vga_hsync", false,-1);
    tracep->declBit(c+184,"vga_vsync", false,-1);
    tracep->declBit(c+185,"vga_valid", false,-1);
    tracep->declBus(c+2217,"FB_AW", false,-1, 31,0);
    tracep->declBit(c+2089,"apb_wr", false,-1);
    tracep->declBit(c+2090,"apb_rd", false,-1);
    tracep->declBus(c+1792,"fb_index", false,-1, 18,0);
    tracep->declBus(c+2218,"H_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2219,"H_SYNC", false,-1, 9,0);
    tracep->declBus(c+2220,"H_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2221,"H_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+2222,"V_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2223,"V_SYNC", false,-1, 9,0);
    tracep->declBus(c+2224,"V_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2225,"V_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+667,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+668,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+669,"h_valid", false,-1);
    tracep->declBit(c+670,"v_valid", false,-1);
    tracep->declBus(c+671,"h_addr", false,-1, 9,0);
    tracep->declBus(c+672,"v_addr", false,-1, 9,0);
    tracep->declBus(c+673,"vga_index", false,-1, 18,0);
    tracep->declBus(c+674,"pixel_q", false,-1, 31,0);
    tracep->declBit(c+675,"h_valid_q", false,-1);
    tracep->declBit(c+676,"v_valid_q", false,-1);
    tracep->declBit(c+183,"hsync_q", false,-1);
    tracep->declBit(c+184,"vsync_q", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1155,"sck", false,-1);
    tracep->declBit(c+1575,"ss", false,-1);
    tracep->declBit(c+1157,"mosi", false,-1);
    tracep->declBit(c+1576,"miso", false,-1);
    tracep->declBus(c+677,"buffer", false,-1, 7,0);
    tracep->declBus(c+678,"bits", false,-1, 3,0);
    tracep->declBus(c+2226,"state", false,-1, 1,0);
    tracep->declBus(c+1577,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1155,"sck", false,-1);
    tracep->declBit(c+1578,"ss", false,-1);
    tracep->declBit(c+1157,"mosi", false,-1);
    tracep->declBit(c+2091,"miso", false,-1);
    tracep->declBit(c+1578,"reset", false,-1);
    tracep->declBus(c+1793,"state", false,-1, 2,0);
    tracep->declBus(c+1794,"counter", false,-1, 7,0);
    tracep->declBus(c+2092,"cmd", false,-1, 7,0);
    tracep->declBus(c+2093,"addr", false,-1, 23,0);
    tracep->declBus(c+1795,"data", false,-1, 31,0);
    tracep->declBit(c+1796,"ren", false,-1);
    tracep->declBus(c+679,"rdata", false,-1, 31,0);
    tracep->declBus(c+2094,"raddr", false,-1, 31,0);
    tracep->declBus(c+2095,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1155,"clock", false,-1);
    tracep->declBit(c+1796,"valid", false,-1);
    tracep->declBus(c+2092,"cmd", false,-1, 7,0);
    tracep->declBus(c+2094,"addr", false,-1, 31,0);
    tracep->declBus(c+679,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1831,"sck", false,-1);
    tracep->declBit(c+1832,"ce_n", false,-1);
    tracep->declBus(c+1979,"dio", false,-1, 3,0);
    tracep->declBus(c+2160,"IDLE", false,-1, 2,0);
    tracep->declBus(c+2111,"CTRL", false,-1, 2,0);
    tracep->declBus(c+2214,"ADDR", false,-1, 2,0);
    tracep->declBus(c+2215,"ARRG", false,-1, 2,0);
    tracep->declBus(c+2183,"READ", false,-1, 2,0);
    tracep->declBus(c+2216,"WRITE", false,-1, 2,0);
    tracep->declBus(c+2184,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+2186,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+2185,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+1122,"state", false,-1, 2,0);
    tracep->declBus(c+1980,"next", false,-1, 2,0);
    tracep->declBus(c+1123,"ctrl", false,-1, 7,0);
    tracep->declBus(c+1124,"addr", false,-1, 23,0);
    tracep->declBus(c+1125,"counter", false,-1, 7,0);
    tracep->declBus(c+1126,"dout", false,-1, 3,0);
    tracep->declBus(c+1127,"wr_hi", false,-1, 3,0);
    tracep->declBit(c+1128,"qpi", false,-1);
    tracep->declBit(c+1129,"douten", false,-1);
    tracep->declBus(c+1130,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+1131,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1132,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+1133,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+1134,"RD_FIRST", false,-1, 7,0);
    tracep->declBus(c+1135,"RD_LAST", false,-1, 7,0);
    tracep->declBus(c+1136,"WR_FIRST", false,-1, 7,0);
    tracep->declBus(c+1137,"WR_LAST", false,-1, 7,0);
    tracep->declBus(c+1138,"rd_off", false,-1, 7,0);
    tracep->declBus(c+1139,"wr_off", false,-1, 7,0);
    tracep->declBus(c+1140,"read_byte", false,-1, 1,0);
    tracep->declBit(c+1141,"read_index", false,-1);
    tracep->declBus(c+1142,"write_byte", false,-1, 1,0);
    tracep->declBus(c+1143,"rd_idx", false,-1, 21,0);
    tracep->declBus(c+1144,"wr_idx", false,-1, 21,0);
    tracep->declBus(c+1981,"ctrl_done", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+1158,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1896,"dqm", false,-1, 3,0);
    tracep->declBus(c+1906,"dq", false,-1, 31,0);
    tracep->declBit(c+1982,"sel", false,-1);
    tracep->declBit(c+1579,"broadcast_cmd", false,-1);
    tracep->pushNamePrefix("u_pair0 ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+2096,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1896,"dqm", false,-1, 3,0);
    tracep->declBus(c+1906,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+2096,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1904,"dqm", false,-1, 1,0);
    tracep->declBus(c+1907,"dq", false,-1, 15,0);
    tracep->declBus(c+2166,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2167,"MODE", false,-1, 31,0);
    tracep->declBus(c+2168,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2169,"READ", false,-1, 31,0);
    tracep->declBus(c+2171,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1580,"state", false,-1, 2,0);
    tracep->declBus(c+2009,"next", false,-1, 2,0);
    tracep->declBus(c+1581,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1582,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1583,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+2005,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1584,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1585,"dq_oe", false,-1);
    tracep->declBus(c+1586,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1587,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1588+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+2096,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1905,"dqm", false,-1, 1,0);
    tracep->declBus(c+1908,"dq", false,-1, 15,0);
    tracep->declBus(c+2166,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2167,"MODE", false,-1, 31,0);
    tracep->declBus(c+2168,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2169,"READ", false,-1, 31,0);
    tracep->declBus(c+2171,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1592,"state", false,-1, 2,0);
    tracep->declBus(c+2010,"next", false,-1, 2,0);
    tracep->declBus(c+1593,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1594,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1595,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+2005,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1596,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1597,"dq_oe", false,-1);
    tracep->declBus(c+1598,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1599,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1600+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pair1 ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+2097,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1896,"dqm", false,-1, 3,0);
    tracep->declBus(c+1906,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+2097,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1904,"dqm", false,-1, 1,0);
    tracep->declBus(c+1907,"dq", false,-1, 15,0);
    tracep->declBus(c+2166,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2167,"MODE", false,-1, 31,0);
    tracep->declBus(c+2168,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2169,"READ", false,-1, 31,0);
    tracep->declBus(c+2171,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1604,"state", false,-1, 2,0);
    tracep->declBus(c+2011,"next", false,-1, 2,0);
    tracep->declBus(c+1605,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1606,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1607,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+2006,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1608,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1609,"dq_oe", false,-1);
    tracep->declBus(c+1610,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1611,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1612+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+2054,"clk", false,-1);
    tracep->declBit(c+1893,"cke", false,-1);
    tracep->declBit(c+2097,"cs", false,-1);
    tracep->declBit(c+1159,"ras", false,-1);
    tracep->declBit(c+1160,"cas", false,-1);
    tracep->declBit(c+1161,"we", false,-1);
    tracep->declBus(c+1894,"a", false,-1, 12,0);
    tracep->declBus(c+1895,"ba", false,-1, 1,0);
    tracep->declBus(c+1905,"dqm", false,-1, 1,0);
    tracep->declBus(c+1908,"dq", false,-1, 15,0);
    tracep->declBus(c+2166,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2167,"MODE", false,-1, 31,0);
    tracep->declBus(c+2168,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2169,"READ", false,-1, 31,0);
    tracep->declBus(c+2171,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1616,"state", false,-1, 2,0);
    tracep->declBus(c+2012,"next", false,-1, 2,0);
    tracep->declBus(c+1617,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1618,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1619,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+2006,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1620,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1621,"dq_oe", false,-1);
    tracep->declBus(c+1622,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1623,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1624+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_ref ");
    tracep->declBit(c+2015,"clk", false,-1);
    tracep->declBit(c+2016,"rst", false,-1);
    tracep->declArray(c+2018,"dbg_reg", false,-1, 1023,0);
    tracep->declBus(c+1628,"instr", false,-1, 31,0);
    tracep->declBus(c+1629,"pc", false,-1, 31,0);
    tracep->declBus(c+1630,"last_pc", false,-1, 31,0);
    tracep->declBus(c+1631,"mstatus", false,-1, 31,0);
    tracep->declBus(c+1632,"mepc", false,-1, 31,0);
    tracep->declBus(c+1633,"mcause", false,-1, 31,0);
    tracep->declBus(c+1634,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1635,"mcycle", false,-1, 31,0);
    tracep->declBus(c+1636,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+1637,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+1638,"marchid", false,-1, 31,0);
    tracep->declBit(c+1639,"addi", false,-1);
    tracep->declBit(c+1640,"slti", false,-1);
    tracep->declBit(c+1641,"sltiu", false,-1);
    tracep->declBit(c+1642,"xori", false,-1);
    tracep->declBit(c+1643,"ori", false,-1);
    tracep->declBit(c+1644,"andi", false,-1);
    tracep->declBit(c+1645,"slli", false,-1);
    tracep->declBit(c+1646,"srli", false,-1);
    tracep->declBit(c+1647,"srai", false,-1);
    tracep->declBit(c+1648,"add", false,-1);
    tracep->declBit(c+1649,"sub", false,-1);
    tracep->declBit(c+1650,"sll", false,-1);
    tracep->declBit(c+1651,"slt", false,-1);
    tracep->declBit(c+1652,"sltu", false,-1);
    tracep->declBit(c+1653,"xor_inst", false,-1);
    tracep->declBit(c+1654,"srl", false,-1);
    tracep->declBit(c+1655,"sra", false,-1);
    tracep->declBit(c+1656,"or_inst", false,-1);
    tracep->declBit(c+1657,"and_inst", false,-1);
    tracep->declBit(c+1658,"lb", false,-1);
    tracep->declBit(c+1659,"lh", false,-1);
    tracep->declBit(c+1660,"lw", false,-1);
    tracep->declBit(c+1661,"lbu", false,-1);
    tracep->declBit(c+1662,"lhu", false,-1);
    tracep->declBit(c+1663,"sb", false,-1);
    tracep->declBit(c+1664,"sh", false,-1);
    tracep->declBit(c+1665,"sw", false,-1);
    tracep->declBit(c+1666,"beq", false,-1);
    tracep->declBit(c+1667,"bne", false,-1);
    tracep->declBit(c+1668,"blt", false,-1);
    tracep->declBit(c+1669,"bge", false,-1);
    tracep->declBit(c+1670,"bltu", false,-1);
    tracep->declBit(c+1671,"bgeu", false,-1);
    tracep->declBit(c+1672,"jal", false,-1);
    tracep->declBit(c+1673,"jalr", false,-1);
    tracep->declBit(c+1674,"lui", false,-1);
    tracep->declBit(c+1675,"auipc", false,-1);
    tracep->declBit(c+1676,"ebreak", false,-1);
    tracep->declBit(c+1677,"ecall", false,-1);
    tracep->declBit(c+1678,"mret", false,-1);
    tracep->declBit(c+1679,"csrrw", false,-1);
    tracep->declBit(c+1680,"csrrs", false,-1);
    tracep->declBit(c+1681,"csrrc", false,-1);
    tracep->declBus(c+1682,"rd", false,-1, 4,0);
    tracep->declBus(c+1683,"rs1", false,-1, 4,0);
    tracep->declBus(c+1684,"rs2", false,-1, 4,0);
    tracep->declBus(c+1685,"immI", false,-1, 31,0);
    tracep->declBus(c+1686,"immU", false,-1, 31,0);
    tracep->declBus(c+1687,"immS", false,-1, 31,0);
    tracep->declBus(c+1688,"immB", false,-1, 31,0);
    tracep->declBus(c+1689,"immJ", false,-1, 31,0);
    tracep->declBus(c+1690,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1691,"wdata", false,-1, 31,0);
    tracep->declBus(c+1692,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1693,"rdata2", false,-1, 31,0);
    tracep->declBit(c+2050,"wen", false,-1);
    tracep->declBus(c+1694,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+1695,"add1", false,-1, 31,0);
    tracep->declBus(c+1696,"add2", false,-1, 31,0);
    tracep->declBus(c+1697,"add_rst", false,-1, 31,0);
    tracep->declBus(c+1698,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+1699,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+1700,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+1701,"or_rst", false,-1, 31,0);
    tracep->declBus(c+1702,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+1703,"and_rst", false,-1, 31,0);
    tracep->declBus(c+1704,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+1705,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+1706,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+1707,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+1708,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+1709,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+1684,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+1710,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+1711,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+1712,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+1713,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+1714,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+1715,"srai_rst", false,-1, 31,0);
    tracep->declBus(c+1716,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+1717,"read_rst", false,-1, 31,0);
    tracep->declBus(c+1718,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1719,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1720,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1721,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1722,"lh_rst", false,-1, 31,0);
    tracep->pushNamePrefix("Decode ");
    tracep->declBus(c+1628,"instr", false,-1, 31,0);
    tracep->declBit(c+1639,"addi", false,-1);
    tracep->declBit(c+1640,"slti", false,-1);
    tracep->declBit(c+1641,"sltiu", false,-1);
    tracep->declBit(c+1642,"xori", false,-1);
    tracep->declBit(c+1643,"ori", false,-1);
    tracep->declBit(c+1644,"andi", false,-1);
    tracep->declBit(c+1645,"slli", false,-1);
    tracep->declBit(c+1646,"srli", false,-1);
    tracep->declBit(c+1647,"srai", false,-1);
    tracep->declBit(c+1648,"add", false,-1);
    tracep->declBit(c+1649,"sub", false,-1);
    tracep->declBit(c+1650,"sll", false,-1);
    tracep->declBit(c+1651,"slt", false,-1);
    tracep->declBit(c+1652,"sltu", false,-1);
    tracep->declBit(c+1653,"xor_inst", false,-1);
    tracep->declBit(c+1654,"srl", false,-1);
    tracep->declBit(c+1655,"sra", false,-1);
    tracep->declBit(c+1656,"or_inst", false,-1);
    tracep->declBit(c+1657,"and_inst", false,-1);
    tracep->declBit(c+1658,"lb", false,-1);
    tracep->declBit(c+1659,"lh", false,-1);
    tracep->declBit(c+1660,"lw", false,-1);
    tracep->declBit(c+1661,"lbu", false,-1);
    tracep->declBit(c+1662,"lhu", false,-1);
    tracep->declBit(c+1663,"sb", false,-1);
    tracep->declBit(c+1664,"sh", false,-1);
    tracep->declBit(c+1665,"sw", false,-1);
    tracep->declBit(c+1666,"beq", false,-1);
    tracep->declBit(c+1667,"bne", false,-1);
    tracep->declBit(c+1668,"blt", false,-1);
    tracep->declBit(c+1669,"bge", false,-1);
    tracep->declBit(c+1670,"bltu", false,-1);
    tracep->declBit(c+1671,"bgeu", false,-1);
    tracep->declBit(c+1672,"jal", false,-1);
    tracep->declBit(c+1673,"jalr", false,-1);
    tracep->declBit(c+1674,"lui", false,-1);
    tracep->declBit(c+1675,"auipc", false,-1);
    tracep->declBit(c+1676,"ebreak", false,-1);
    tracep->declBit(c+1677,"ecall", false,-1);
    tracep->declBit(c+1679,"csrrw", false,-1);
    tracep->declBit(c+1680,"csrrs", false,-1);
    tracep->declBit(c+1681,"csrrc", false,-1);
    tracep->declBit(c+1678,"mret", false,-1);
    tracep->declBus(c+1682,"rd", false,-1, 4,0);
    tracep->declBus(c+1683,"rs1", false,-1, 4,0);
    tracep->declBus(c+1684,"rs2", false,-1, 4,0);
    tracep->declBus(c+1685,"immI", false,-1, 31,0);
    tracep->declBus(c+1686,"immU", false,-1, 31,0);
    tracep->declBus(c+1687,"immS", false,-1, 31,0);
    tracep->declBus(c+1688,"immB", false,-1, 31,0);
    tracep->declBus(c+1689,"immJ", false,-1, 31,0);
    tracep->declBus(c+1690,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1723,"opcode", false,-1, 6,0);
    tracep->declBus(c+1724,"funct3", false,-1, 2,0);
    tracep->declBus(c+1725,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+2126,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2124,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+2015,"clk", false,-1);
    tracep->declBit(c+2016,"rst", false,-1);
    tracep->declBit(c+2050,"wen", false,-1);
    tracep->declBus(c+1683,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1684,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1682,"waddr", false,-1, 4,0);
    tracep->declBus(c+1691,"wdata", false,-1, 31,0);
    tracep->declBus(c+1692,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1693,"rdata2", false,-1, 31,0);
    tracep->declArray(c+2018,"dbg_regs", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1726+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1758,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1067,"araddr", false,-1, 31,0);
    tracep->declBit(c+1097,"arvalid", false,-1);
    tracep->declBit(c+1098,"arready", false,-1);
    tracep->declBus(c+2122,"arid", false,-1, 3,0);
    tracep->declBus(c+2123,"arlen", false,-1, 7,0);
    tracep->declBus(c+2117,"arburst", false,-1, 1,0);
    tracep->declBus(c+2214,"arsize", false,-1, 2,0);
    tracep->declBus(c+1099,"rdata", false,-1, 31,0);
    tracep->declBus(c+1100,"rresp", false,-1, 1,0);
    tracep->declBit(c+1101,"rvalid", false,-1);
    tracep->declBit(c+1102,"rready", false,-1);
    tracep->declBus(c+2122,"rid", false,-1, 3,0);
    tracep->declBit(c+1103,"rlast", false,-1);
    tracep->declBus(c+2159,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2120,"awvalid", false,-1);
    tracep->declBit(c+19,"awready", false,-1);
    tracep->declBus(c+2214,"awsize", false,-1, 2,0);
    tracep->declBus(c+2122,"awid", false,-1, 3,0);
    tracep->declBus(c+2123,"awlen", false,-1, 7,0);
    tracep->declBus(c+2117,"awburst", false,-1, 1,0);
    tracep->declBus(c+2159,"wdata", false,-1, 31,0);
    tracep->declBus(c+2122,"wstrb", false,-1, 3,0);
    tracep->declBit(c+2120,"wvalid", false,-1);
    tracep->declBit(c+20,"wready", false,-1);
    tracep->declBit(c+2120,"wlast", false,-1);
    tracep->declBus(c+1104,"bresp", false,-1, 1,0);
    tracep->declBit(c+1105,"bvalid", false,-1);
    tracep->declBit(c+2120,"bready", false,-1);
    tracep->declBus(c+1106,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1801,"araddr", false,-1, 31,0);
    tracep->declBit(c+1107,"arvalid", false,-1);
    tracep->declBit(c+2098,"arready", false,-1);
    tracep->declBus(c+2122,"arid", false,-1, 3,0);
    tracep->declBus(c+2123,"arlen", false,-1, 7,0);
    tracep->declBus(c+2117,"arburst", false,-1, 1,0);
    tracep->declBus(c+1108,"arsize", false,-1, 2,0);
    tracep->declBus(c+2099,"rdata", false,-1, 31,0);
    tracep->declBus(c+95,"rresp", false,-1, 1,0);
    tracep->declBit(c+76,"rvalid", false,-1);
    tracep->declBit(c+77,"rready", false,-1);
    tracep->declBus(c+2100,"rid", false,-1, 3,0);
    tracep->declBit(c+2077,"rlast", false,-1);
    tracep->declBus(c+1801,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1109,"awvalid", false,-1);
    tracep->declBit(c+2007,"awready", false,-1);
    tracep->declBus(c+680,"awsize", false,-1, 2,0);
    tracep->declBus(c+2122,"awid", false,-1, 3,0);
    tracep->declBus(c+2123,"awlen", false,-1, 7,0);
    tracep->declBus(c+2117,"awburst", false,-1, 1,0);
    tracep->declBus(c+1802,"wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1110,"wvalid", false,-1);
    tracep->declBit(c+2101,"wready", false,-1);
    tracep->declBit(c+2121,"wlast", false,-1);
    tracep->declBus(c+159,"bresp", false,-1, 1,0);
    tracep->declBit(c+148,"bvalid", false,-1);
    tracep->declBit(c+149,"bready", false,-1);
    tracep->declBus(c+2102,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1797,"araddr", false,-1, 31,0);
    tracep->declBit(c+1806,"arvalid", false,-1);
    tracep->declBit(c+1987,"arready", false,-1);
    tracep->declBus(c+2122,"arid", false,-1, 3,0);
    tracep->declBus(c+1798,"arlen", false,-1, 7,0);
    tracep->declBus(c+1800,"arburst", false,-1, 1,0);
    tracep->declBus(c+1799,"arsize", false,-1, 2,0);
    tracep->declBus(c+88,"rdata", false,-1, 31,0);
    tracep->declBus(c+89,"rresp", false,-1, 1,0);
    tracep->declBit(c+63,"rvalid", false,-1);
    tracep->declBit(c+74,"rready", false,-1);
    tracep->declBus(c+87,"rid", false,-1, 3,0);
    tracep->declBit(c+90,"rlast", false,-1);
    tracep->declBus(c+1801,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1804,"awvalid", false,-1);
    tracep->declBit(c+1986,"awready", false,-1);
    tracep->declBus(c+680,"awsize", false,-1, 2,0);
    tracep->declBus(c+2122,"awid", false,-1, 3,0);
    tracep->declBus(c+2123,"awlen", false,-1, 7,0);
    tracep->declBus(c+2117,"awburst", false,-1, 1,0);
    tracep->declBus(c+1802,"wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1805,"wvalid", false,-1);
    tracep->declBit(c+2071,"wready", false,-1);
    tracep->declBit(c+2121,"wlast", false,-1);
    tracep->declBus(c+2072,"bresp", false,-1, 1,0);
    tracep->declBit(c+136,"bvalid", false,-1);
    tracep->declBit(c+146,"bready", false,-1);
    tracep->declBus(c+155,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1797,"araddr", false,-1, 31,0);
    tracep->declBit(c+1825,"arvalid", false,-1);
    tracep->declBit(c+1826,"arready", false,-1);
    tracep->declBus(c+2122,"arid", false,-1, 3,0);
    tracep->declBus(c+2103,"arlen", false,-1, 7,0);
    tracep->declBus(c+1800,"arburst", false,-1, 1,0);
    tracep->declBus(c+2104,"arsize", false,-1, 2,0);
    tracep->declBus(c+1111,"rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"rresp", false,-1, 1,0);
    tracep->declBit(c+1113,"rvalid", false,-1);
    tracep->declBit(c+2105,"rready", false,-1);
    tracep->declBus(c+1114,"rid", false,-1, 3,0);
    tracep->declBit(c+1115,"rlast", false,-1);
    tracep->declBus(c+1801,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1827,"awvalid", false,-1);
    tracep->declBit(c+1828,"awready", false,-1);
    tracep->declBus(c+680,"awsize", false,-1, 2,0);
    tracep->declBus(c+2122,"awid", false,-1, 3,0);
    tracep->declBus(c+2123,"awlen", false,-1, 7,0);
    tracep->declBus(c+2117,"awburst", false,-1, 1,0);
    tracep->declBus(c+1802,"wdata", false,-1, 31,0);
    tracep->declBus(c+1803,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1829,"wvalid", false,-1);
    tracep->declBit(c+1830,"wready", false,-1);
    tracep->declBit(c+2121,"wlast", false,-1);
    tracep->declBus(c+1116,"bresp", false,-1, 1,0);
    tracep->declBit(c+1117,"bvalid", false,-1);
    tracep->declBit(c+2106,"bready", false,-1);
    tracep->declBus(c+1118,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1119,"araddr", false,-1, 31,0);
    tracep->declBit(c+1120,"arvalid", false,-1);
    tracep->declBit(c+2008,"arready", false,-1);
    tracep->declBus(c+2122,"arid", false,-1, 3,0);
    tracep->declBus(c+1121,"arlen", false,-1, 7,0);
    tracep->declBus(c+2118,"arburst", false,-1, 1,0);
    tracep->declBus(c+2214,"arsize", false,-1, 2,0);
    tracep->declBus(c+96,"rdata", false,-1, 31,0);
    tracep->declBus(c+95,"rresp", false,-1, 1,0);
    tracep->declBit(c+78,"rvalid", false,-1);
    tracep->declBit(c+79,"rready", false,-1);
    tracep->declBus(c+2100,"rid", false,-1, 3,0);
    tracep->declBit(c+97,"rlast", false,-1);
    tracep->declBus(c+2159,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2120,"awvalid", false,-1);
    tracep->declBit(c+2227,"awready", false,-1);
    tracep->declBus(c+2214,"awsize", false,-1, 2,0);
    tracep->declBus(c+2122,"awid", false,-1, 3,0);
    tracep->declBus(c+2123,"awlen", false,-1, 7,0);
    tracep->declBus(c+2117,"awburst", false,-1, 1,0);
    tracep->declBus(c+2159,"wdata", false,-1, 31,0);
    tracep->declBus(c+2122,"wstrb", false,-1, 3,0);
    tracep->declBit(c+2120,"wvalid", false,-1);
    tracep->declBit(c+2228,"wready", false,-1);
    tracep->declBit(c+2229,"wlast", false,-1);
    tracep->declBus(c+2230,"bresp", false,-1, 1,0);
    tracep->declBit(c+2231,"bvalid", false,-1);
    tracep->declBit(c+2120,"bready", false,-1);
    tracep->declBus(c+2232,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("difftest_top ");
    tracep->pushNamePrefix("soc ");
    tracep->pushNamePrefix("asic ");
    tracep->pushNamePrefix("cpu ");
    tracep->pushNamePrefix("cpu ");
    tracep->pushNamePrefix("bus_clint\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_icache\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_ifu\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_lsu\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_master\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mbus\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_clint ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_xbar ");
    tracep->pushNamePrefix("clint_m\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_s\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_s\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_m\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(vlSelf, tracep);
    tracep->popNamePrefix(7);
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
    VlWide<3>/*95:0*/ __Vtemp_h0220dd5c__0;
    VlWide<3>/*95:0*/ __Vtemp_h02211999__0;
    VlWide<3>/*95:0*/ __Vtemp_h0220f9da__0;
    VlWide<3>/*95:0*/ __Vtemp_h0220fa1f__0;
    VlWide<3>/*95:0*/ __Vtemp_h0220fa5d__0;
    VlWide<3>/*95:0*/ __Vtemp_h0220faa0__0;
    // Body
    __Vtemp_h0220dd5c__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][0U];
    __Vtemp_h0220dd5c__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][1U];
    __Vtemp_h0220dd5c__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][2U];
    bufp->fullWData(oldp+1,(__Vtemp_h0220dd5c__0),67);
    __Vtemp_h02211999__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][0U];
    __Vtemp_h02211999__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][1U];
    __Vtemp_h02211999__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][2U];
    bufp->fullWData(oldp+4,(__Vtemp_h02211999__0),67);
    __Vtemp_h0220f9da__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][0U];
    __Vtemp_h0220f9da__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][1U];
    __Vtemp_h0220f9da__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][2U];
    bufp->fullWData(oldp+7,(__Vtemp_h0220f9da__0),67);
    __Vtemp_h0220fa1f__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][0U];
    __Vtemp_h0220fa1f__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][1U];
    __Vtemp_h0220fa1f__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][2U];
    bufp->fullWData(oldp+10,(__Vtemp_h0220fa1f__0),67);
    __Vtemp_h0220fa5d__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][0U];
    __Vtemp_h0220fa5d__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][1U];
    __Vtemp_h0220fa5d__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][2U];
    bufp->fullWData(oldp+13,(__Vtemp_h0220fa5d__0),67);
    __Vtemp_h0220faa0__0[0U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][0U];
    __Vtemp_h0220faa0__0[1U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][1U];
    __Vtemp_h0220faa0__0[2U] = vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][2U];
    bufp->fullWData(oldp+16,(__Vtemp_h0220faa0__0),67);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.awready));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.wready));
    bufp->fullBit(oldp+21,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+22,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+23,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+24,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+25,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+26,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+27,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+28,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+29,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+32,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+33,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+34,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+35,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+36,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+37,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+38,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+39,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+40,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+41,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+42,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+43,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+44,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+45,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+46,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+48,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+49,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+50,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+51,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+52,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+53,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+55,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+56,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+57,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+58,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+59,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+60,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+61,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+62,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+63,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullBit(oldp+64,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+65,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+66,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+67,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+68,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+69,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+70,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+71,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+72,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+73,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+74,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready));
    bufp->fullBit(oldp+75,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_tgt_rvalid));
    bufp->fullBit(oldp+76,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rvalid));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready));
    bufp->fullBit(oldp+80,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+81,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+82,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+83,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+84,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+85,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+86,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving));
    bufp->fullCData(oldp+87,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+88,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullCData(oldp+89,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
    bufp->fullBit(oldp+90,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+91,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+92,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+93,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullCData(oldp+94,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_next_state),2);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rresp),2);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rdata),32);
    bufp->fullBit(oldp+97,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rlast));
    bufp->fullBit(oldp+98,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+99,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+100,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+101,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+102,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+105,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+106,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+107,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+108,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+109,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+110,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+111,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+112,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+113,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+114,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+115,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+116,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+117,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+118,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+121,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+122,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+123,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+124,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+125,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+126,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+127,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+128,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+129,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+130,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+131,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+132,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+133,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+134,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+136,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullBit(oldp+137,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+138,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+139,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+140,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+141,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+142,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+143,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+144,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+145,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.bready));
    bufp->fullBit(oldp+147,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw_avail));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bvalid));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready));
    bufp->fullBit(oldp+150,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+151,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+152,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+153,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullBit(oldp+154,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving));
    bufp->fullCData(oldp+155,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullSData(oldp+156,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+157,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+158,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullCData(oldp+159,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bresp),2);
    bufp->fullBit(oldp+160,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+161,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+162,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+163,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+165,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+166,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+167,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+168,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+169,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+170,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+171,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+172,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+173,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+174,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+175,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next),2);
    bufp->fullCData(oldp+176,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next),3);
    bufp->fullBit(oldp+177,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next));
    bufp->fullBit(oldp+178,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next));
    bufp->fullBit(oldp+179,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullCData(oldp+180,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+181,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q 
                                        >> 8U))),8);
    bufp->fullCData(oldp+182,((0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q)),8);
    bufp->fullBit(oldp+183,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync_q));
    bufp->fullBit(oldp+184,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync_q));
    bufp->fullBit(oldp+185,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q))));
    bufp->fullBit(oldp+186,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+187,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+188,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+189,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+191,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+192,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+193,((0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+194,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+195,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+196,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+197,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+199,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+200,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+201,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+202,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+203,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+204,((0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+205,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+206,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+207,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+208,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+209,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+210,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+211,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+212,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+213,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+214,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+215,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+216,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+217,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+218,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+220,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+221,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+222,((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+224,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+226,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+227,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+228,((3U & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+229,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+230,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+231,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+232,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+233,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+234,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+235,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+236,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+237,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+238,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+239,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+240,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+241,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+242,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+243,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+244,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+245,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+246,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+248,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+250,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+252,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+253,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+254,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+255,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+256,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+257,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+258,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+259,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+261,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+263,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+265,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+266,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+267,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+268,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+269,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+270,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+271,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+272,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+274,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+276,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+278,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+279,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+280,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+281,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+282,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+283,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+284,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+285,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+287,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+289,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+291,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+295,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+296,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+299,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+300,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_h2168da81__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_h2168da81__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_h2168da81__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_h2168da81__0
                                                             : 0U)
                                                            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+301,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+302,((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+303,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+304,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+305,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+306,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+307,((1U & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+308,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+309,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+310,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+311,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+312,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+313,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+314,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+315,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+316,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+317,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+318,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+319,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+320,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+321,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+322,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+323,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+324,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+325,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+326,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+327,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+328,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+329,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+330,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+331,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+332,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+333,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+334,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+335,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+337,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+338,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+339,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+341,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+342,((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+343,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+345,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+346,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+347,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+348,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+349,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+350,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+351,(((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_h2168da81__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_h2168da81__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_h2168da81__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_h2168da81__0
                                                        : 0U)
                                                       : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+352,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+353,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+354,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+355,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+356,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+357,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+358,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+359,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+360,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+361,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+362,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+363,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+364,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+365,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+366,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+367,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+368,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+369,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+370,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+371,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+372,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+373,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+374,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+375,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+376,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+377,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+378,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+379,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+380,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+381,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+382,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+383,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+384,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+385,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+386,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+387,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+388,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+389,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+390,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+391,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+392,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+393,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+394,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+395,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+396,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+397,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+398,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+399,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+400,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+401,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+402,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+403,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+404,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+405,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+406,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+407,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+408,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+409,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+410,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+411,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+412,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+413,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+415,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+416,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+417,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+418,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+419,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+420,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+421,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+422,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+423,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+424,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+425,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+426,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+427,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+428,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+429,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+430,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+431,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+432,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+433,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+434,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+435,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+436,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+437,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+438,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+439,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+440,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+441,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+442,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+443,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+444,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+445,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+446,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+447,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+448,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+449,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+450,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+451,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+452,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+453,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+454,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+455,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+456,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+457,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+458,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+459,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+460,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+461,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+462,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+463,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+464,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+465,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+466,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+467,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+468,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+469,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+470,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+471,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+472,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+473,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+474,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+475,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+476,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+477,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+478,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+479,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+480,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+481,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+482,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+483,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+484,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+485,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+486,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+487,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+488,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+489,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+490,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+491,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+492,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+493,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+494,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+495,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+496,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+497,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+498,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+499,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+500,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+501,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+502,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+503,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+506,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+507,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+508,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+509,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+510,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+511,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+512,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+513,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+514,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+515,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+589,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+590,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+591,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+601,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+602,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+603,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+604,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+605,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+606,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+607,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+609,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+610,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+611,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+612,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+613,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+614,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+615,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+616,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+617,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+618,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+619,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+620,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+621,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+622,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+623,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+624,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+625,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+626,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+627,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+628,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+629,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+630,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+631,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+632,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+633,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+634,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+635,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+636,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+637,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+638,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+639,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+640,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+641,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+642,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+643,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+644,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+645,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+646,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+647,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+648,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+649,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+650,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+651,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+652,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+653,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+654,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+655,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+656,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+657,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+658,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+659,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+660,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+661,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+662,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+663,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+664,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+665,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+666,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+667,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+668,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+669,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+670,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+671,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+672,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+673,((0x7ffffU & (((IData)(0x280U) 
                                            * ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                                ? (0x3ffU 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                      - (IData)(0x24U)))
                                                : 0U)) 
                                           + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                               ? (0x3ffU 
                                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                     - (IData)(0x91U)))
                                               : 0U)))),19);
    bufp->fullIData(oldp+674,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q),32);
    bufp->fullBit(oldp+675,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q));
    bufp->fullBit(oldp+676,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q));
    bufp->fullCData(oldp+677,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__buffer),8);
    bufp->fullCData(oldp+678,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__bits),4);
    bufp->fullIData(oldp+679,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata),32);
    bufp->fullCData(oldp+680,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize),3);
    bufp->fullWData(oldp+681,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg),1024);
    bufp->fullQData(oldp+713,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_work_cyc),64);
    bufp->fullQData(oldp+715,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_block_cyc),64);
    bufp->fullBit(oldp+717,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush));
    bufp->fullIData(oldp+718,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush),32);
    bufp->fullIData(oldp+719,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+720,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+721,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd));
    bufp->fullBit(oldp+722,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de));
    bufp->fullBit(oldp+723,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi));
    bufp->fullBit(oldp+724,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti));
    bufp->fullBit(oldp+725,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu));
    bufp->fullBit(oldp+726,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori));
    bufp->fullBit(oldp+727,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori));
    bufp->fullBit(oldp+728,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi));
    bufp->fullBit(oldp+729,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli));
    bufp->fullBit(oldp+730,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli));
    bufp->fullBit(oldp+731,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai));
    bufp->fullBit(oldp+732,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__add));
    bufp->fullBit(oldp+733,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub));
    bufp->fullBit(oldp+734,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll));
    bufp->fullBit(oldp+735,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt));
    bufp->fullBit(oldp+736,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu));
    bufp->fullBit(oldp+737,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst));
    bufp->fullBit(oldp+738,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl));
    bufp->fullBit(oldp+739,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra));
    bufp->fullBit(oldp+740,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst));
    bufp->fullBit(oldp+741,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst));
    bufp->fullBit(oldp+742,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb));
    bufp->fullBit(oldp+743,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh));
    bufp->fullBit(oldp+744,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw));
    bufp->fullBit(oldp+745,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu));
    bufp->fullBit(oldp+746,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu));
    bufp->fullBit(oldp+747,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb));
    bufp->fullBit(oldp+748,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh));
    bufp->fullBit(oldp+749,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw));
    bufp->fullBit(oldp+750,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq));
    bufp->fullBit(oldp+751,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne));
    bufp->fullBit(oldp+752,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt));
    bufp->fullBit(oldp+753,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge));
    bufp->fullBit(oldp+754,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu));
    bufp->fullBit(oldp+755,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu));
    bufp->fullBit(oldp+756,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal));
    bufp->fullBit(oldp+757,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr));
    bufp->fullBit(oldp+758,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui));
    bufp->fullBit(oldp+759,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc));
    bufp->fullBit(oldp+760,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak));
    bufp->fullBit(oldp+761,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall));
    bufp->fullBit(oldp+762,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw));
    bufp->fullBit(oldp+763,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs));
    bufp->fullBit(oldp+764,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc));
    bufp->fullBit(oldp+765,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret));
    bufp->fullBit(oldp+766,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i));
    bufp->fullCData(oldp+767,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+768,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+769,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+770,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w),32);
    bufp->fullQData(oldp+771,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blockf_cyc),64);
    bufp->fullQData(oldp+773,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_blcokbl_cyc),64);
    bufp->fullQData(oldp+775,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_work_cyc),64);
    bufp->fullBit(oldp+777,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls));
    bufp->fullBit(oldp+778,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bypass_data_valid));
    bufp->fullBit(oldp+779,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el));
    bufp->fullBit(oldp+780,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el));
    bufp->fullBit(oldp+781,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)))));
    bufp->fullCData(oldp+782,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save))
                                ? 2U : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save)) 
                                         | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save))
                                         ? 1U : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save)) 
                                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save))
                                                  ? 0U
                                                  : 3U)))),2);
    bufp->fullBit(oldp+783,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save))));
    bufp->fullCData(oldp+784,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save),5);
    bufp->fullCData(oldp+785,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save),5);
    bufp->fullCData(oldp+786,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save),5);
    bufp->fullIData(oldp+787,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2),32);
    bufp->fullIData(oldp+788,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w),32);
    bufp->fullIData(oldp+789,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata),32);
    bufp->fullIData(oldp+790,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr
                              [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save]),32);
    bufp->fullQData(oldp+791,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blockf_cyc),64);
    bufp->fullQData(oldp+793,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blcokb_cyc),64);
    bufp->fullQData(oldp+795,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_work_cyc),64);
    bufp->fullBit(oldp+797,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_blockf));
    bufp->fullBit(oldp+798,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw));
    bufp->fullBit(oldp+799,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw));
    bufp->fullCData(oldp+800,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save),5);
    bufp->fullQData(oldp+801,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_blockf_cyc),64);
    bufp->fullQData(oldp+803,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_work_cyc),64);
    bufp->fullBit(oldp+805,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_blockf));
    bufp->fullIData(oldp+806,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_pc_out),32);
    bufp->fullBit(oldp+807,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
    bufp->fullCData(oldp+808,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu),5);
    bufp->fullIData(oldp+809,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu),32);
    bufp->fullIData(oldp+810,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_pc_out),32);
    bufp->fullIData(oldp+811,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+812,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+813,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+814,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+815,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+816,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+817,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+818,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+819,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+820,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+821,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+822,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+823,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+824,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+825,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+826,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullIData(oldp+827,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[16]),32);
    bufp->fullIData(oldp+828,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[17]),32);
    bufp->fullIData(oldp+829,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[18]),32);
    bufp->fullIData(oldp+830,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[19]),32);
    bufp->fullIData(oldp+831,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[20]),32);
    bufp->fullIData(oldp+832,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[21]),32);
    bufp->fullIData(oldp+833,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[22]),32);
    bufp->fullIData(oldp+834,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[23]),32);
    bufp->fullIData(oldp+835,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[24]),32);
    bufp->fullIData(oldp+836,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[25]),32);
    bufp->fullIData(oldp+837,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[26]),32);
    bufp->fullIData(oldp+838,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[27]),32);
    bufp->fullIData(oldp+839,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[28]),32);
    bufp->fullIData(oldp+840,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[29]),32);
    bufp->fullIData(oldp+841,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[30]),32);
    bufp->fullIData(oldp+842,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[31]),32);
    bufp->fullIData(oldp+843,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+844,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end));
    bufp->fullIData(oldp+845,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list),32);
    bufp->fullIData(oldp+846,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt),32);
    bufp->fullBit(oldp+847,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save));
    bufp->fullCData(oldp+848,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save),5);
    bufp->fullBit(oldp+849,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bypass_active));
    bufp->fullIData(oldp+850,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bypass_data),32);
    bufp->fullIData(oldp+851,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus),32);
    bufp->fullIData(oldp+852,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc),32);
    bufp->fullIData(oldp+853,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause),32);
    bufp->fullIData(oldp+854,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec),32);
    bufp->fullIData(oldp+855,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle),32);
    bufp->fullIData(oldp+856,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh),32);
    bufp->fullIData(oldp+857,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid),32);
    bufp->fullIData(oldp+858,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid),32);
    bufp->fullIData(oldp+859,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save),32);
    bufp->fullIData(oldp+860,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save),32);
    bufp->fullIData(oldp+861,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save),32);
    bufp->fullBit(oldp+862,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save));
    bufp->fullBit(oldp+863,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save));
    bufp->fullBit(oldp+864,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save));
    bufp->fullBit(oldp+865,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save));
    bufp->fullBit(oldp+866,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save));
    bufp->fullBit(oldp+867,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save));
    bufp->fullBit(oldp+868,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save));
    bufp->fullBit(oldp+869,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save));
    bufp->fullBit(oldp+870,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save));
    bufp->fullBit(oldp+871,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save));
    bufp->fullBit(oldp+872,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save));
    bufp->fullBit(oldp+873,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save));
    bufp->fullBit(oldp+874,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save));
    bufp->fullBit(oldp+875,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save));
    bufp->fullBit(oldp+876,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save));
    bufp->fullBit(oldp+877,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save));
    bufp->fullBit(oldp+878,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save));
    bufp->fullBit(oldp+879,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save));
    bufp->fullBit(oldp+880,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save));
    bufp->fullBit(oldp+881,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save));
    bufp->fullBit(oldp+882,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save));
    bufp->fullBit(oldp+883,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save));
    bufp->fullBit(oldp+884,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save));
    bufp->fullBit(oldp+885,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save));
    bufp->fullBit(oldp+886,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save));
    bufp->fullBit(oldp+887,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save));
    bufp->fullBit(oldp+888,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save));
    bufp->fullBit(oldp+889,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save));
    bufp->fullBit(oldp+890,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save));
    bufp->fullBit(oldp+891,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save));
    bufp->fullBit(oldp+892,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save));
    bufp->fullBit(oldp+893,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save));
    bufp->fullBit(oldp+894,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save));
    bufp->fullBit(oldp+895,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save));
    bufp->fullBit(oldp+896,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save));
    bufp->fullBit(oldp+897,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save));
    bufp->fullBit(oldp+898,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save));
    bufp->fullBit(oldp+899,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save));
    bufp->fullBit(oldp+900,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save));
    bufp->fullBit(oldp+901,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save));
    bufp->fullBit(oldp+902,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save));
    bufp->fullBit(oldp+903,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save));
    bufp->fullBit(oldp+904,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save));
    bufp->fullBit(oldp+905,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save));
    bufp->fullIData(oldp+906,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save),32);
    bufp->fullIData(oldp+907,((((((((((0x300U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w) 
                                      | (0x305U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                     | (0x341U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                    | (0x342U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                   | (0xb00U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                  | (0xb80U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                 | (0xf11U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)) 
                                | (0xf12U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w))
                                ? ((0x300U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus
                                    : ((0x305U == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                        ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec
                                        : ((0x341U 
                                            == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc
                                            : ((0x342U 
                                                == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause
                                                : (
                                                   (0xb00U 
                                                    == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle
                                                    : 
                                                   ((0xb80U 
                                                     == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                     ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh
                                                     : 
                                                    ((0xf11U 
                                                      == vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w)
                                                      ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid
                                                      : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid)))))))
                                : 0U)),32);
    bufp->fullCData(oldp+908,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),2);
    bufp->fullCData(oldp+909,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next),2);
    bufp->fullBit(oldp+910,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read));
    bufp->fullBit(oldp+911,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write));
    bufp->fullBit(oldp+912,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb));
    bufp->fullBit(oldp+913,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save) 
                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save))))));
    bufp->fullBit(oldp+914,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save) 
                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save) 
                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save) 
                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save) 
                                         | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save) 
                                            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save) 
                                               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save) 
                                                  | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save) 
                                                     | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save))))))))))));
    bufp->fullBit(oldp+915,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save)))));
    bufp->fullBit(oldp+916,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type));
    bufp->fullBit(oldp+917,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type));
    bufp->fullBit(oldp+918,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__i_type));
    bufp->fullBit(oldp+919,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__gpr_read_valid));
    bufp->fullIData(oldp+920,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul),32);
    bufp->fullIData(oldp+921,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__new_pc),32);
    bufp->fullIData(oldp+922,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft),32);
    bufp->fullCData(oldp+923,((0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),5);
    bufp->fullCData(oldp+924,((0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),5);
    bufp->fullIData(oldp+925,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                      | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                         | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                            | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                               | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                  | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul)),32);
    bufp->fullIData(oldp+926,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2
                                : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+927,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               - vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+928,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+929,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+930,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+931,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+932,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+933,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+934,(VL_LTS_III(32, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+935,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               < vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+936,(VL_LTS_III(32, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+937,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               < vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+938,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+939,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+940,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+941,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul 
                               >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+942,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, 
                                             (0x1fU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+943,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rdata1_ul, 
                                             (0x1fU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullWData(oldp+944,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[0]),128);
    bufp->fullWData(oldp+948,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[1]),128);
    bufp->fullWData(oldp+952,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[2]),128);
    bufp->fullWData(oldp+956,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[3]),128);
    bufp->fullWData(oldp+960,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[4]),128);
    bufp->fullWData(oldp+964,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[5]),128);
    bufp->fullWData(oldp+968,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[6]),128);
    bufp->fullWData(oldp+972,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[7]),128);
    bufp->fullWData(oldp+976,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[8]),128);
    bufp->fullWData(oldp+980,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[9]),128);
    bufp->fullWData(oldp+984,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[10]),128);
    bufp->fullWData(oldp+988,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[11]),128);
    bufp->fullWData(oldp+992,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[12]),128);
    bufp->fullWData(oldp+996,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[13]),128);
    bufp->fullWData(oldp+1000,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[14]),128);
    bufp->fullWData(oldp+1004,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[15]),128);
    bufp->fullIData(oldp+1008,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[0]),24);
    bufp->fullIData(oldp+1009,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[1]),24);
    bufp->fullIData(oldp+1010,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[2]),24);
    bufp->fullIData(oldp+1011,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[3]),24);
    bufp->fullIData(oldp+1012,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[4]),24);
    bufp->fullIData(oldp+1013,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[5]),24);
    bufp->fullIData(oldp+1014,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[6]),24);
    bufp->fullIData(oldp+1015,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[7]),24);
    bufp->fullIData(oldp+1016,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[8]),24);
    bufp->fullIData(oldp+1017,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[9]),24);
    bufp->fullIData(oldp+1018,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[10]),24);
    bufp->fullIData(oldp+1019,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[11]),24);
    bufp->fullIData(oldp+1020,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[12]),24);
    bufp->fullIData(oldp+1021,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[13]),24);
    bufp->fullIData(oldp+1022,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[14]),24);
    bufp->fullIData(oldp+1023,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[15]),24);
    bufp->fullBit(oldp+1024,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0]));
    bufp->fullBit(oldp+1025,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1]));
    bufp->fullBit(oldp+1026,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2]));
    bufp->fullBit(oldp+1027,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3]));
    bufp->fullBit(oldp+1028,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4]));
    bufp->fullBit(oldp+1029,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5]));
    bufp->fullBit(oldp+1030,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6]));
    bufp->fullBit(oldp+1031,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7]));
    bufp->fullBit(oldp+1032,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[8]));
    bufp->fullBit(oldp+1033,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[9]));
    bufp->fullBit(oldp+1034,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[10]));
    bufp->fullBit(oldp+1035,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[11]));
    bufp->fullBit(oldp+1036,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[12]));
    bufp->fullBit(oldp+1037,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[13]));
    bufp->fullBit(oldp+1038,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[14]));
    bufp->fullBit(oldp+1039,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[15]));
    bufp->fullIData(oldp+1040,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save),32);
    bufp->fullCData(oldp+1041,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save),2);
    bufp->fullCData(oldp+1042,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__bid_save),4);
    bufp->fullIData(oldp+1043,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rdata_save),32);
    bufp->fullCData(oldp+1044,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat),2);
    bufp->fullIData(oldp+1045,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                >> 8U)),24);
    bufp->fullCData(oldp+1046,((0xfU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                        >> 4U))),4);
    bufp->fullIData(oldp+1047,((3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                      >> 2U))),32);
    bufp->fullIData(oldp+1048,((0xfffffff0U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save)),32);
    bufp->fullIData(oldp+1049,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat) 
                                << 5U)),32);
    bufp->fullCData(oldp+1050,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__araddr_save 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1051,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable));
    bufp->fullCData(oldp+1052,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state),3);
    bufp->fullIData(oldp+1053,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1054,((0x7fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),7);
    bufp->fullCData(oldp+1055,((7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1056,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1057,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w),32);
    bufp->fullIData(oldp+1058,((0xfffff000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+1059,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1060,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                      >> 7U)))))),32);
    bufp->fullIData(oldp+1061,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1062,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x14U)),32);
    bufp->fullCData(oldp+1063,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__error_save),2);
    bufp->fullBit(oldp+1064,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__master_validation_error_save));
    bufp->fullBit(oldp+1065,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save));
    bufp->fullIData(oldp+1066,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save),32);
    bufp->fullIData(oldp+1067,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullCData(oldp+1068,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullCData(oldp+1069,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next),2);
    bufp->fullCData(oldp+1070,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__error_save),2);
    bufp->fullBit(oldp+1071,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save));
    bufp->fullCData(oldp+1072,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save),2);
    bufp->fullBit(oldp+1073,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save));
    bufp->fullIData(oldp+1074,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save),32);
    bufp->fullIData(oldp+1075,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save),32);
    bufp->fullIData(oldp+1076,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out),32);
    bufp->fullCData(oldp+1077,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullBit(oldp+1078,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done));
    bufp->fullBit(oldp+1079,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done));
    bufp->fullBit(oldp+1080,((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
    bufp->fullBit(oldp+1081,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                              & (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))));
    bufp->fullBit(oldp+1082,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save))));
    bufp->fullBit(oldp+1083,(((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save))));
    bufp->fullBit(oldp+1084,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                              & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save)))));
    bufp->fullQData(oldp+1085,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime),64);
    bufp->fullCData(oldp+1087,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state),2);
    bufp->fullIData(oldp+1088,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rdata_save),32);
    bufp->fullCData(oldp+1089,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rresp_save),2);
    bufp->fullCData(oldp+1090,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rid_save),4);
    bufp->fullCData(oldp+1091,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__bid_save),4);
    bufp->fullBit(oldp+1092,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_busy));
    bufp->fullBit(oldp+1093,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint));
    bufp->fullBit(oldp+1094,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint));
    bufp->fullBit(oldp+1095,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state));
    bufp->fullBit(oldp+1096,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next));
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arvalid));
    bufp->fullBit(oldp+1098,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arready));
    bufp->fullIData(oldp+1099,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rdata),32);
    bufp->fullCData(oldp+1100,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rresp),2);
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rvalid));
    bufp->fullBit(oldp+1102,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rready));
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rlast));
    bufp->fullCData(oldp+1104,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bresp),2);
    bufp->fullBit(oldp+1105,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bvalid));
    bufp->fullCData(oldp+1106,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bid),4);
    bufp->fullBit(oldp+1107,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
    bufp->fullCData(oldp+1108,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize),3);
    bufp->fullBit(oldp+1109,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
    bufp->fullBit(oldp+1110,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
    bufp->fullIData(oldp+1111,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata),32);
    bufp->fullCData(oldp+1112,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp),2);
    bufp->fullBit(oldp+1113,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid));
    bufp->fullCData(oldp+1114,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rid),4);
    bufp->fullBit(oldp+1115,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast));
    bufp->fullCData(oldp+1116,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bresp),2);
    bufp->fullBit(oldp+1117,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bvalid));
    bufp->fullCData(oldp+1118,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bid),4);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.araddr),32);
    bufp->fullBit(oldp+1120,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid));
    bufp->fullCData(oldp+1121,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable)
                                 ? 3U : 0U)),8);
    bufp->fullCData(oldp+1122,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+1123,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl),8);
    bufp->fullIData(oldp+1124,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1125,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1126,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__dout),4);
    bufp->fullCData(oldp+1127,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_hi),4);
    bufp->fullBit(oldp+1128,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi));
    bufp->fullBit(oldp+1129,((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))));
    bufp->fullCData(oldp+1130,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 1U : 7U)),8);
    bufp->fullCData(oldp+1131,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 2U : 8U)),8);
    bufp->fullCData(oldp+1132,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+1133,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+1134,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+1135,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 0x15U : 0x1bU)),8);
    bufp->fullCData(oldp+1136,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+1137,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                 ? 0xfU : 0x15U)),8);
    bufp->fullCData(oldp+1138,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off),8);
    bufp->fullCData(oldp+1139,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off),8);
    bufp->fullCData(oldp+1140,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off) 
                                      >> 1U))),2);
    bufp->fullBit(oldp+1141,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off))));
    bufp->fullCData(oldp+1142,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                      >> 1U))),2);
    bufp->fullIData(oldp+1143,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_idx),22);
    bufp->fullIData(oldp+1144,((0x3fffffU & (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr 
                                             + (3U 
                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                                   >> 1U))))),22);
    bufp->fullSData(oldp+1145,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r),16);
    bufp->fullCData(oldp+1146,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1147,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1148,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1149,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1150,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1151,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1152,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1153,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1154,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 4U) | ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 6U)) 
                                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
    bufp->fullBit(oldp+1155,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck));
    bufp->fullCData(oldp+1156,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1157,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1158,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1159,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1160,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1161,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+1162,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+1163,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
    bufp->fullIData(oldp+1164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save),32);
    bufp->fullBit(oldp+1165,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save));
    bufp->fullBit(oldp+1166,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+1167,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1168,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+1169,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1170,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+1171,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state),2);
    bufp->fullQData(oldp+1172,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0]),33);
    bufp->fullQData(oldp+1174,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1]),33);
    bufp->fullQData(oldp+1176,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2]),33);
    bufp->fullQData(oldp+1178,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3]),33);
    bufp->fullQData(oldp+1180,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4]),33);
    bufp->fullQData(oldp+1182,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5]),33);
    bufp->fullQData(oldp+1184,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6]),33);
    bufp->fullQData(oldp+1186,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7]),33);
    bufp->fullQData(oldp+1188,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8]),33);
    bufp->fullQData(oldp+1190,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9]),33);
    bufp->fullQData(oldp+1192,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[10]),33);
    bufp->fullQData(oldp+1194,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[11]),33);
    bufp->fullQData(oldp+1196,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[12]),33);
    bufp->fullQData(oldp+1198,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[13]),33);
    bufp->fullQData(oldp+1200,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[14]),33);
    bufp->fullQData(oldp+1202,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[15]),33);
    bufp->fullQData(oldp+1204,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[16]),33);
    bufp->fullQData(oldp+1206,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[17]),33);
    bufp->fullQData(oldp+1208,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[18]),33);
    bufp->fullQData(oldp+1210,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[19]),33);
    bufp->fullQData(oldp+1212,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[20]),33);
    bufp->fullQData(oldp+1214,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[21]),33);
    bufp->fullQData(oldp+1216,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[22]),33);
    bufp->fullQData(oldp+1218,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[23]),33);
    bufp->fullQData(oldp+1220,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[24]),33);
    bufp->fullQData(oldp+1222,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[25]),33);
    bufp->fullQData(oldp+1224,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[26]),33);
    bufp->fullQData(oldp+1226,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[27]),33);
    bufp->fullQData(oldp+1228,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[28]),33);
    bufp->fullQData(oldp+1230,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[29]),33);
    bufp->fullQData(oldp+1232,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[30]),33);
    bufp->fullQData(oldp+1234,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[31]),33);
    bufp->fullIData(oldp+1236,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0]),32);
    bufp->fullIData(oldp+1237,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1]),32);
    bufp->fullIData(oldp+1238,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2]),32);
    bufp->fullIData(oldp+1239,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3]),32);
    bufp->fullIData(oldp+1240,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4]),32);
    bufp->fullIData(oldp+1241,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5]),32);
    bufp->fullIData(oldp+1242,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6]),32);
    bufp->fullIData(oldp+1243,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7]),32);
    bufp->fullIData(oldp+1244,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8]),32);
    bufp->fullIData(oldp+1245,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9]),32);
    bufp->fullIData(oldp+1246,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[10]),32);
    bufp->fullIData(oldp+1247,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[11]),32);
    bufp->fullIData(oldp+1248,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[12]),32);
    bufp->fullIData(oldp+1249,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[13]),32);
    bufp->fullIData(oldp+1250,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[14]),32);
    bufp->fullIData(oldp+1251,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[15]),32);
    bufp->fullIData(oldp+1252,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[16]),32);
    bufp->fullIData(oldp+1253,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[17]),32);
    bufp->fullIData(oldp+1254,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[18]),32);
    bufp->fullIData(oldp+1255,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[19]),32);
    bufp->fullIData(oldp+1256,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[20]),32);
    bufp->fullIData(oldp+1257,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[21]),32);
    bufp->fullIData(oldp+1258,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[22]),32);
    bufp->fullIData(oldp+1259,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[23]),32);
    bufp->fullIData(oldp+1260,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[24]),32);
    bufp->fullIData(oldp+1261,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[25]),32);
    bufp->fullIData(oldp+1262,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[26]),32);
    bufp->fullIData(oldp+1263,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[27]),32);
    bufp->fullIData(oldp+1264,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[28]),32);
    bufp->fullIData(oldp+1265,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[29]),32);
    bufp->fullIData(oldp+1266,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[30]),32);
    bufp->fullIData(oldp+1267,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[31]),32);
    bufp->fullCData(oldp+1268,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat),6);
    bufp->fullCData(oldp+1269,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat),6);
    bufp->fullCData(oldp+1270,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save),5);
    bufp->fullCData(oldp+1271,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save),4);
    bufp->fullCData(oldp+1272,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save),2);
    bufp->fullQData(oldp+1273,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter),33);
    bufp->fullBit(oldp+1275,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received));
    bufp->fullCData(oldp+1276,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save),4);
    bufp->fullCData(oldp+1277,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_save),2);
    bufp->fullIData(oldp+1278,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullCData(oldp+1279,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r),8);
    bufp->fullCData(oldp+1280,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r),8);
    bufp->fullCData(oldp+1281,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r),8);
    bufp->fullCData(oldp+1282,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r),8);
    bufp->fullCData(oldp+1283,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullCData(oldp+1284,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter),8);
    bufp->fullBit(oldp+1285,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc));
    bufp->fullBit(oldp+1286,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok));
    bufp->fullCData(oldp+1287,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode),8);
    bufp->fullBit(oldp+1288,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid));
    bufp->fullBit(oldp+1289,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1290,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1291,((0xfU & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                         ? (1U & (0x35U 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                         : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                             <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 1U
                                                  : 7U))
                                             ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                  ? 0xbU
                                                  : 0xeU)
                                                 : 
                                                (1U 
                                                 & (0xebU 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(7U) 
                                                        - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))
                                             : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                    : 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 4U)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 8U)
                                                    : 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                    ? 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U))))
                                                 : 0U))))),4);
    bufp->fullBit(oldp+1292,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0))));
    bufp->fullBit(oldp+1293,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1294,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1295,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1296,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+1297,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    bufp->fullBit(oldp+1298,(((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1299,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullCData(oldp+1300,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
    bufp->fullCData(oldp+1301,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1302,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1303,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 1U : 7U)),8);
    bufp->fullCData(oldp+1304,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 2U : 8U)),8);
    bufp->fullCData(oldp+1305,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+1306,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+1307,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+1308,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? 0xeU
                                             : 0x14U)))),8);
    bufp->fullCData(oldp+1309,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                     ? 0xbU : 0xeU)
                                 : (1U & (0xebU >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))),4);
    bufp->fullCData(oldp+1310,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8),8);
    bufp->fullCData(oldp+1311,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+1312,((0xfU & ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                         ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                             ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                             : ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                 : 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 4U)))
                                         : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                             ? ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0xcU))
                                             : ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                 >> 0x14U)))))),4);
    bufp->fullCData(oldp+1313,((0xffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                          >> 1U) - 
                                         ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                           ? 7U : 0xaU)))),8);
    bufp->fullCData(oldp+1314,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 7U
                                                  : 0xaU)))),2);
    bufp->fullBit(oldp+1315,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1316,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1317,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullCData(oldp+1318,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+1319,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                 ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                     ? 8U : 3U) : (1U 
                                                   & (0x38U 
                                                      >> 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))),4);
    bufp->fullCData(oldp+1320,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8),8);
    bufp->fullCData(oldp+1321,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+1322,((0xfU & ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                         ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                             ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                             : ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                 : 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 4U)))
                                         : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                             ? ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 8U)
                                                 : 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0xcU))
                                             : ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x10U)
                                                 : 
                                                (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                 >> 0x14U)))))),4);
    bufp->fullCData(oldp+1323,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8),8);
    bufp->fullCData(oldp+1324,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))),3);
    bufp->fullCData(oldp+1325,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                      >> 1U))),2);
    bufp->fullBit(oldp+1326,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1327,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1328,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+1329,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1330,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1331,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1332,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1333,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1334,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1335,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1336,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1337,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1338,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1339,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1340,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1341,((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1342,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1343,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1344,(((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1345,(((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1346,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1347,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1348,((1U & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1349,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1350,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1351,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1352,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1353,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1354,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1355,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1356,((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1357,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1358,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1359,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1360,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1361,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1362,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1363,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+1364,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+1365,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+1366,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+1367,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1368,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+1369,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),14);
    bufp->fullSData(oldp+1370,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),14);
    bufp->fullSData(oldp+1371,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),14);
    bufp->fullSData(oldp+1372,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),14);
    bufp->fullCData(oldp+1373,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1374,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1375,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1376,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1377,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+1378,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1379,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1380,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1381,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o),32);
    bufp->fullBit(oldp+1382,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack));
    bufp->fullCData(oldp+1383,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullIData(oldp+1384,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr),32);
    bufp->fullIData(oldp+1385,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+1386,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready));
    bufp->fullBit(oldp+1387,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen));
    bufp->fullCData(oldp+1388,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr),5);
    bufp->fullIData(oldp+1389,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat),32);
    bufp->fullBit(oldp+1390,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we));
    bufp->fullBit(oldp+1391,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req));
    bufp->fullBit(oldp+1392,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
    bufp->fullIData(oldp+1393,((0x3000000U | (0xffffffU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr))),32);
    bufp->fullIData(oldp+1394,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                     >> 8U)) 
                                                 | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                    >> 0x18U))))),32);
    bufp->fullSData(oldp+1395,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1396,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1397,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1398,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1402,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1403,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1404,((0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1405,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1406,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1407,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1408,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1409,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1410,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1411,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1412,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1413,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1414,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1415,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1416,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1417,((0xffU & ((0x800U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1418,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1419,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1420,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1421,((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1422,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1423,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1424,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1425,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1426,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1427,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1428,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1429,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1430,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1431,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1432,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1433,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1434,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1435,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1436,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1437,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1438,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1439,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1440,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1441,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1442,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1443,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1444,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1445,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1446,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1447,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1448,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+1449,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1450,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1451,((1U & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1452,((1U & (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0))));
    bufp->fullBit(oldp+1453,((1U & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1454,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1455,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1456,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1457,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1458,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1459,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1460,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1461,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1462,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1463,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1464,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1465,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1466,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1467,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1468,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1469,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1470,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1471,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1472,((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xaU] 
                                                                      | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xbU] 
                                                                         | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xcU] 
                                                                            | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xdU] 
                                                                               | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+1473,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1474,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1475,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1476,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1477,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1478,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1479,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1480,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1481,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1482,(((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                  >> 6U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
    bufp->fullBit(oldp+1483,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1484,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1485,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1486,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1487,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1488,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1489,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1490,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1491,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1492,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1493,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1494,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1495,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1496,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1497,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1498,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1499,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1500,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1501,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1502,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1503,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1504,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1505,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1506,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1507,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1508,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1509,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1510,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1511,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1512,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1513,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1514,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1515,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1516,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1517,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1518,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1519,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1520,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1521,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1522,((7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1523,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1524,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1525,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1526,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1527,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1528,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1529,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1530,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1531,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1532,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1533,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1534,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1535,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1536,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1537,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1538,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1539,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1540,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1541,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1542,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1543,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1544,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1545,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1546,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1547,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1548,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1549,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1550,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1551,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1552,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1553,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1554,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1555,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1556,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1557,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1558,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1559,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1560,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1561,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1562,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1563,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1564,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1565,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1566,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1567,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1568,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1569,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1570,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1571,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1572,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1573,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1574,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1575,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1576,(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso));
    bufp->fullCData(oldp+1577,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__next),2);
    bufp->fullBit(oldp+1578,(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+1579,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd));
    bufp->fullCData(oldp+1580,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1581,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1582,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1583,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1584,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1585,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1586,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1587,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1588,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1589,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1590,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1591,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1592,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1593,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1594,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1595,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1596,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1597,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1598,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1599,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1600,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1601,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1602,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1603,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1604,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1605,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1606,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1607,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1608,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1609,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1610,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1611,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1612,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1613,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1614,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1615,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1616,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1617,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1618,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1619,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1620,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1621,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1622,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1623,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1624,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1625,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1626,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1627,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullIData(oldp+1628,(vlSelf->difftest_top__DOT__u_ref__DOT__instr),32);
    bufp->fullIData(oldp+1629,(vlSelf->difftest_top__DOT__u_ref__DOT__pc),32);
    bufp->fullIData(oldp+1630,(vlSelf->difftest_top__DOT__u_ref__DOT__last_pc),32);
    bufp->fullIData(oldp+1631,(vlSelf->difftest_top__DOT__u_ref__DOT__mstatus),32);
    bufp->fullIData(oldp+1632,(vlSelf->difftest_top__DOT__u_ref__DOT__mepc),32);
    bufp->fullIData(oldp+1633,(vlSelf->difftest_top__DOT__u_ref__DOT__mcause),32);
    bufp->fullIData(oldp+1634,(vlSelf->difftest_top__DOT__u_ref__DOT__mtvec),32);
    bufp->fullIData(oldp+1635,(vlSelf->difftest_top__DOT__u_ref__DOT__mcycle),32);
    bufp->fullIData(oldp+1636,(vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh),32);
    bufp->fullIData(oldp+1637,(vlSelf->difftest_top__DOT__u_ref__DOT__mvendorid),32);
    bufp->fullIData(oldp+1638,(vlSelf->difftest_top__DOT__u_ref__DOT__marchid),32);
    bufp->fullBit(oldp+1639,(vlSelf->difftest_top__DOT__u_ref__DOT__addi));
    bufp->fullBit(oldp+1640,(vlSelf->difftest_top__DOT__u_ref__DOT__slti));
    bufp->fullBit(oldp+1641,(vlSelf->difftest_top__DOT__u_ref__DOT__sltiu));
    bufp->fullBit(oldp+1642,(vlSelf->difftest_top__DOT__u_ref__DOT__xori));
    bufp->fullBit(oldp+1643,(vlSelf->difftest_top__DOT__u_ref__DOT__ori));
    bufp->fullBit(oldp+1644,(vlSelf->difftest_top__DOT__u_ref__DOT__andi));
    bufp->fullBit(oldp+1645,(vlSelf->difftest_top__DOT__u_ref__DOT__slli));
    bufp->fullBit(oldp+1646,(vlSelf->difftest_top__DOT__u_ref__DOT__srli));
    bufp->fullBit(oldp+1647,(vlSelf->difftest_top__DOT__u_ref__DOT__srai));
    bufp->fullBit(oldp+1648,(vlSelf->difftest_top__DOT__u_ref__DOT__add));
    bufp->fullBit(oldp+1649,(vlSelf->difftest_top__DOT__u_ref__DOT__sub));
    bufp->fullBit(oldp+1650,(vlSelf->difftest_top__DOT__u_ref__DOT__sll));
    bufp->fullBit(oldp+1651,(vlSelf->difftest_top__DOT__u_ref__DOT__slt));
    bufp->fullBit(oldp+1652,(vlSelf->difftest_top__DOT__u_ref__DOT__sltu));
    bufp->fullBit(oldp+1653,(vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst));
    bufp->fullBit(oldp+1654,(vlSelf->difftest_top__DOT__u_ref__DOT__srl));
    bufp->fullBit(oldp+1655,(vlSelf->difftest_top__DOT__u_ref__DOT__sra));
    bufp->fullBit(oldp+1656,(vlSelf->difftest_top__DOT__u_ref__DOT__or_inst));
    bufp->fullBit(oldp+1657,(vlSelf->difftest_top__DOT__u_ref__DOT__and_inst));
    bufp->fullBit(oldp+1658,(vlSelf->difftest_top__DOT__u_ref__DOT__lb));
    bufp->fullBit(oldp+1659,(vlSelf->difftest_top__DOT__u_ref__DOT__lh));
    bufp->fullBit(oldp+1660,(vlSelf->difftest_top__DOT__u_ref__DOT__lw));
    bufp->fullBit(oldp+1661,(vlSelf->difftest_top__DOT__u_ref__DOT__lbu));
    bufp->fullBit(oldp+1662,(vlSelf->difftest_top__DOT__u_ref__DOT__lhu));
    bufp->fullBit(oldp+1663,(vlSelf->difftest_top__DOT__u_ref__DOT__sb));
    bufp->fullBit(oldp+1664,(vlSelf->difftest_top__DOT__u_ref__DOT__sh));
    bufp->fullBit(oldp+1665,(vlSelf->difftest_top__DOT__u_ref__DOT__sw));
    bufp->fullBit(oldp+1666,(vlSelf->difftest_top__DOT__u_ref__DOT__beq));
    bufp->fullBit(oldp+1667,(vlSelf->difftest_top__DOT__u_ref__DOT__bne));
    bufp->fullBit(oldp+1668,(vlSelf->difftest_top__DOT__u_ref__DOT__blt));
    bufp->fullBit(oldp+1669,(vlSelf->difftest_top__DOT__u_ref__DOT__bge));
    bufp->fullBit(oldp+1670,(vlSelf->difftest_top__DOT__u_ref__DOT__bltu));
    bufp->fullBit(oldp+1671,(vlSelf->difftest_top__DOT__u_ref__DOT__bgeu));
    bufp->fullBit(oldp+1672,(vlSelf->difftest_top__DOT__u_ref__DOT__jal));
    bufp->fullBit(oldp+1673,(vlSelf->difftest_top__DOT__u_ref__DOT__jalr));
    bufp->fullBit(oldp+1674,(vlSelf->difftest_top__DOT__u_ref__DOT__lui));
    bufp->fullBit(oldp+1675,(vlSelf->difftest_top__DOT__u_ref__DOT__auipc));
    bufp->fullBit(oldp+1676,(vlSelf->difftest_top__DOT__u_ref__DOT__ebreak));
    bufp->fullBit(oldp+1677,(vlSelf->difftest_top__DOT__u_ref__DOT__ecall));
    bufp->fullBit(oldp+1678,(vlSelf->difftest_top__DOT__u_ref__DOT__mret));
    bufp->fullBit(oldp+1679,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrw));
    bufp->fullBit(oldp+1680,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrs));
    bufp->fullBit(oldp+1681,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrc));
    bufp->fullCData(oldp+1682,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 7U))),5);
    bufp->fullCData(oldp+1683,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1684,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1685,(vlSelf->difftest_top__DOT__u_ref__DOT__immI),32);
    bufp->fullIData(oldp+1686,((0xfffff000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)),32);
    bufp->fullIData(oldp+1687,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1688,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                      >> 7U)))))),32);
    bufp->fullIData(oldp+1689,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->difftest_top__DOT__u_ref__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1690,((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                >> 0x14U)),32);
    bufp->fullIData(oldp+1691,(vlSelf->difftest_top__DOT__u_ref__DOT__wdata),32);
    bufp->fullIData(oldp+1692,(vlSelf->difftest_top__DOT__u_ref__DOT__rdata1),32);
    bufp->fullIData(oldp+1693,(vlSelf->difftest_top__DOT__u_ref__DOT__rdata2),32);
    bufp->fullIData(oldp+1694,(((IData)(4U) + vlSelf->difftest_top__DOT__u_ref__DOT__pc)),32);
    bufp->fullIData(oldp+1695,((((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc) 
                                 | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal) 
                                    | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_heb8827dd__0)))
                                 ? vlSelf->difftest_top__DOT__u_ref__DOT__pc
                                 : vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1696,(vlSelf->difftest_top__DOT__u_ref__DOT__add2),32);
    bufp->fullIData(oldp+1697,(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst),32);
    bufp->fullIData(oldp+1698,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                - vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1699,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1700,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1701,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                | vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1702,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                | vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1703,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1704,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                & vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1705,(VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1706,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                < vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1707,(VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__immI)),32);
    bufp->fullIData(oldp+1708,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                < vlSelf->difftest_top__DOT__u_ref__DOT__immI)),32);
    bufp->fullCData(oldp+1709,((0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),5);
    bufp->fullIData(oldp+1710,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                << (0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
    bufp->fullIData(oldp+1711,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                << (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x14U)))),32);
    bufp->fullIData(oldp+1712,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                >> (0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
    bufp->fullIData(oldp+1713,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                >> (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x14U)))),32);
    bufp->fullIData(oldp+1714,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
    bufp->fullIData(oldp+1715,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                              (0x1fU 
                                               & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+1716,(vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst),32);
    bufp->fullIData(oldp+1717,(vlSelf->difftest_top__DOT__u_ref__DOT__read_rst),32);
    bufp->fullIData(oldp+1718,(vlSelf->difftest_top__DOT__u_ref__DOT__lw_rst),32);
    bufp->fullIData(oldp+1719,(vlSelf->difftest_top__DOT__u_ref__DOT__lbu_rst),32);
    bufp->fullIData(oldp+1720,(vlSelf->difftest_top__DOT__u_ref__DOT__lhu_rst),32);
    bufp->fullIData(oldp+1721,(vlSelf->difftest_top__DOT__u_ref__DOT__lb_rst),32);
    bufp->fullIData(oldp+1722,(vlSelf->difftest_top__DOT__u_ref__DOT__lh_rst),32);
    bufp->fullCData(oldp+1723,((0x7fU & vlSelf->difftest_top__DOT__u_ref__DOT__instr)),7);
    bufp->fullCData(oldp+1724,((7U & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1725,((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1726,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+1727,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+1728,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+1729,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+1730,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+1731,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+1732,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+1733,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+1734,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+1735,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+1736,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+1737,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+1738,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+1739,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+1740,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+1741,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullIData(oldp+1742,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[16]),32);
    bufp->fullIData(oldp+1743,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[17]),32);
    bufp->fullIData(oldp+1744,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[18]),32);
    bufp->fullIData(oldp+1745,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[19]),32);
    bufp->fullIData(oldp+1746,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[20]),32);
    bufp->fullIData(oldp+1747,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[21]),32);
    bufp->fullIData(oldp+1748,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[22]),32);
    bufp->fullIData(oldp+1749,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[23]),32);
    bufp->fullIData(oldp+1750,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[24]),32);
    bufp->fullIData(oldp+1751,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[25]),32);
    bufp->fullIData(oldp+1752,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[26]),32);
    bufp->fullIData(oldp+1753,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[27]),32);
    bufp->fullIData(oldp+1754,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[28]),32);
    bufp->fullIData(oldp+1755,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[29]),32);
    bufp->fullIData(oldp+1756,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[30]),32);
    bufp->fullIData(oldp+1757,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[31]),32);
    bufp->fullIData(oldp+1758,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1759,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1760,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1761,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1762,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+1763,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1764,((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1765,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1766,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1767,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1768,((0U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1769,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1770,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1771,((2U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullIData(oldp+1772,((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1773,(((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x10002000U))),32);
    bufp->fullCData(oldp+1774,((0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),4);
    bufp->fullCData(oldp+1775,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync),2);
    bufp->fullCData(oldp+1776,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync),2);
    bufp->fullBit(oldp+1777,((IData)((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))));
    bufp->fullBit(oldp+1778,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                    >> 1U))));
    bufp->fullCData(oldp+1779,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1780,((0xffU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata
                                          : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                               >> 1U) 
                                              & (1U 
                                                 == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                              ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                 >> 8U)
                                              : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                   >> 2U) 
                                                  & (1U 
                                                     == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                  ? 
                                                 (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                  >> 0x10U)
                                                  : 
                                                 ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                    >> 3U) 
                                                   & (1U 
                                                      == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                   >> 0x18U)
                                                   : 
                                                  ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb) 
                                                     >> 2U) 
                                                    & (2U 
                                                       == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)))
                                                    ? 
                                                   (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                                    >> 0x10U)
                                                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata))))))),8);
    bufp->fullCData(oldp+1781,((0xffU & ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 8U)
                                          : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 0x18U)))),8);
    bufp->fullCData(oldp+1782,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1783,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1784,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata),32);
    bufp->fullIData(oldp+1785,((0xfffffcU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1786,((0xffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1787,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1788,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel));
    bufp->fullCData(oldp+1789,((7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1790,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1791,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1792,((0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 2U))),19);
    bufp->fullCData(oldp+1793,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1794,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1795,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1796,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1797,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr),32);
    bufp->fullCData(oldp+1798,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen),8);
    bufp->fullCData(oldp+1799,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize),3);
    bufp->fullCData(oldp+1800,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? 0U : 1U)),2);
    bufp->fullIData(oldp+1801,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save),32);
    bufp->fullIData(oldp+1802,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata),32);
    bufp->fullCData(oldp+1803,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb),4);
    bufp->fullBit(oldp+1804,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.awvalid));
    bufp->fullBit(oldp+1805,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.wvalid));
    bufp->fullBit(oldp+1806,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
    bufp->fullBit(oldp+1807,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1808,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1809,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1810,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1811,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1812,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_lw),32);
    bufp->fullIData(oldp+1813,((0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1814,((0xffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1815,((((- (IData)((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1816,((((- (IData)((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1817,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted),32);
    bufp->fullIData(oldp+1818,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rdata_now),32);
    bufp->fullCData(oldp+1819,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__rresp_now),2);
    bufp->fullBit(oldp+1820,((0x200U == (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save 
                                         >> 0x10U))));
    bufp->fullBit(oldp+1821,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_sel_clint));
    bufp->fullCData(oldp+1822,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state),2);
    bufp->fullBit(oldp+1823,((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))));
    bufp->fullBit(oldp+1824,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))));
    bufp->fullBit(oldp+1825,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid));
    bufp->fullBit(oldp+1826,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready));
    bufp->fullBit(oldp+1827,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.awvalid));
    bufp->fullBit(oldp+1828,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.awready));
    bufp->fullBit(oldp+1829,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wvalid));
    bufp->fullBit(oldp+1830,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wready));
    bufp->fullBit(oldp+1831,(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1832,(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1833,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1834,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1835,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1836,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1837,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullBit(oldp+1838,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullIData(oldp+1839,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_prdata),32);
    bufp->fullBit(oldp+1840,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
    bufp->fullCData(oldp+1841,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1842,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1843,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullBit(oldp+1844,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))));
    bufp->fullBit(oldp+1845,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1846,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1847,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+1848,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1849,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1850,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1851,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1852,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1853,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1854,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1855,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1856,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1857,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1858,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1859,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1860,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1861,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1862,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1863,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1864,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1865,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1866,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1867,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access));
    bufp->fullCData(oldp+1868,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1869,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1870,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1871,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1872,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1873,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1874,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1875,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1876,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr));
    bufp->fullBit(oldp+1877,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1878,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT),8);
    bufp->fullCData(oldp+1879,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr),5);
    bufp->fullIData(oldp+1880,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i),32);
    bufp->fullCData(oldp+1881,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel),4);
    bufp->fullBit(oldp+1882,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we));
    bufp->fullBit(oldp+1883,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    bufp->fullBit(oldp+1884,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc));
    bufp->fullIData(oldp+1885,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1886,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullBit(oldp+1887,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1888,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1889,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1890,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1891,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1892,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1893,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullSData(oldp+1894,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1895,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1896,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1897,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1898,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1899,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1900,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1903,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen));
    bufp->fullCData(oldp+1904,((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1905,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1906,(vlSelf->difftest_top__DOT__soc__DOT___dq_wire),32);
    bufp->fullSData(oldp+1907,((0xffffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1908,((vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+1909,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1910,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+1911,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1912,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1913,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1914,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1915,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1916,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1917,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1918,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1919,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1920,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1921,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1922,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1924,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1925,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1926,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1927,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1928,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1929,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1930,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1931,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1932,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1933,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1934,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1935,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1936,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1937,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1938,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1939,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1940,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1941,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1942,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1943,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1944,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1945,((0xfffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1946,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1947,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1948,((0xfffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1949,((0x7800U == (0x7fffU & 
                                          (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1950,((0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1951,((0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1952,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1953,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1954,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1955,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1956,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1957,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1958,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1959,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1960,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1961,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1962,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1963,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1964,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1965,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1966,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1967,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1968,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1969,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1970,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1971,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1972,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1973,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1974,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1975,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1976,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1977,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1978,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1979,(vlSelf->difftest_top__DOT__soc__DOT___dio_wire),4);
    bufp->fullCData(oldp+1980,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next),3);
    bufp->fullCData(oldp+1981,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done),8);
    bufp->fullBit(oldp+1982,((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1983,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1984,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1985,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1986,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1987,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1988,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1989,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1990,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1991,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1992,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1993,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1994,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1995,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullBit(oldp+1996,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1997,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1998,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1999,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+2000,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+2001,((0x1ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+2002,((0x1fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+2003,((3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullCData(oldp+2004,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+2005,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+2006,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullBit(oldp+2007,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awready));
    bufp->fullBit(oldp+2008,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arready));
    bufp->fullCData(oldp+2009,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+2010,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next),3);
    bufp->fullCData(oldp+2011,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+2012,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next),3);
    bufp->fullBit(oldp+2013,(vlSelf->clock));
    bufp->fullBit(oldp+2014,(vlSelf->reset));
    bufp->fullBit(oldp+2015,(vlSelf->ref_clk));
    bufp->fullBit(oldp+2016,(vlSelf->ref_rst));
    bufp->fullIData(oldp+2017,(vlSelf->ref_pc),32);
    bufp->fullWData(oldp+2018,(vlSelf->ref_gpr),1024);
    bufp->fullBit(oldp+2050,(vlSelf->ref_wen));
    bufp->fullIData(oldp+2051,(vlSelf->ref_instr),32);
    bufp->fullIData(oldp+2052,(vlSelf->ref_last_pc),32);
    bufp->fullBit(oldp+2053,(((IData)(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                      ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                      : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+2054,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+2055,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                [(0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 2U))]
                                 : 0U)),32);
    bufp->fullBit(oldp+2056,((IData)(((0U == (0x30000000U 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+2057,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+2058,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                        | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    bufp->fullIData(oldp+2059,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)),32);
    bufp->fullIData(oldp+2060,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+2061,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+2062,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+2063,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullQData(oldp+2065,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+2067,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+2069,(((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.bready) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+2070,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+2071,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+2072,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                        ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                           | ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))
                                        : 0U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullBit(oldp+2073,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready)))));
    bufp->fullBit(oldp+2074,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+2075,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next),3);
    bufp->fullCData(oldp+2076,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next),2);
    bufp->fullBit(oldp+2077,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                               ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullBit(oldp+2078,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                              & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))));
    bufp->fullBit(oldp+2079,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+2080,((0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                         <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                              ? 1U : 7U))
                                         ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                             ? ((1U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                                 ? 8U
                                                 : 3U)
                                             : (1U 
                                                & (0x38U 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))
                                         : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                             <= ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                  ? 7U
                                                  : 0xdU))
                                             ? ((4U 
                                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                  ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0xcU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                   ? 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x10U)
                                                   : 
                                                  (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U))))
                                             : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
                                                 <= (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                                  ? 
                                                 (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                                  >> 
                                                  (0x18U 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                      << 2U)))
                                                  : 
                                                 (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x18U 
                                                       & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                          << 2U))))))
                                                 : 0U))))),4);
    bufp->fullBit(oldp+2081,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+2082,(((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                 ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd)
                                     ? 2U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                    ? 
                                                   (((7U 
                                                      == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)
                                                      ? 0U
                                                      : 2U)
                                                     : 0U)))),2);
    bufp->fullCData(oldp+2083,((0xfU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
                                         ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                            >> (0x18U 
                                                & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                   << 2U)))
                                         : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata 
                                            >> (0x1fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x18U 
                                                    & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                                       << 2U)))))))),4);
    bufp->fullCData(oldp+2084,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid)
                                 ? 0U : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid)
                                          ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen)
                                          : 0U))),8);
    bufp->fullCData(oldp+2085,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | ((0U == (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arlen)) 
                                             << 4U))
                                 : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? 0x10U : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                 << 5U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+2086,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid))));
    bufp->fullSData(oldp+2087,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0))),11);
    bufp->fullCData(oldp+2088,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+2089,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+2090,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))));
    bufp->fullBit(oldp+2091,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                         ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                         : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+2092,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+2093,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+2094,(((0xfffffeU & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+2095,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+2096,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd)) 
                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+2097,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0x1aU)) 
                                               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd)))))));
    bufp->fullBit(oldp+2098,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                  ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready)))));
    bufp->fullIData(oldp+2099,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                 ? vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
    bufp->fullCData(oldp+2100,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint)
                                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rid)
                                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+2101,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_sel_clint)
                               ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.wready)
                               : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                  & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullCData(oldp+2102,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint)
                                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.bid)
                                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5))),4);
    bufp->fullCData(oldp+2103,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? 0U : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__req_cacheable)
                                          ? 3U : 0U))),8);
    bufp->fullCData(oldp+2104,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))
                                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize)
                                 : 2U)),3);
    bufp->fullBit(oldp+2105,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint) 
                               & (2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)))
                               ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready)
                               : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_sel_clint) 
                                   & (1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state))) 
                                  & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready)))));
    bufp->fullBit(oldp+2106,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_busy) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__w_clint)) 
                              & (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready))));
    bufp->fullSData(oldp+2107,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_in),16);
    bufp->fullBit(oldp+2108,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_ps2_clk));
    bufp->fullBit(oldp+2109,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_ps2_data));
    bufp->fullBit(oldp+2110,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_uart_rx));
    bufp->fullCData(oldp+2111,(1U),3);
    bufp->fullIData(oldp+2112,(0x64U),32);
    bufp->fullIData(oldp+2113,(0x3e8U),32);
    bufp->fullIData(oldp+2114,(0xaU),32);
    bufp->fullIData(oldp+2115,(0xa0000000U),32);
    bufp->fullIData(oldp+2116,(0xbfffffffU),32);
    bufp->fullCData(oldp+2117,(0U),2);
    bufp->fullCData(oldp+2118,(1U),2);
    bufp->fullCData(oldp+2119,(2U),2);
    bufp->fullBit(oldp+2120,(0U));
    bufp->fullBit(oldp+2121,(1U));
    bufp->fullCData(oldp+2122,(0U),4);
    bufp->fullCData(oldp+2123,(0U),8);
    bufp->fullIData(oldp+2124,(0x20U),32);
    bufp->fullIData(oldp+2125,(6U),32);
    bufp->fullIData(oldp+2126,(5U),32);
    bufp->fullIData(oldp+2127,(9U),32);
    bufp->fullSData(oldp+2128,(1U),16);
    bufp->fullBit(oldp+2129,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+2130,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+2131,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+2132,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+2133,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+2134,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+2135,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+2136,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+2137,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+2138,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+2139,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+2140,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+2141,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+2142,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+2143,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+2144,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+2145,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+2146,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+2147,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+2148,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+2149,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+2150,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+2151,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+2152,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+2153,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+2154,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+2155,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+2156,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+2157,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+2158,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+2159,(0U),32);
    bufp->fullCData(oldp+2160,(0U),3);
    bufp->fullBit(oldp+2161,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_exu_rd));
    bufp->fullBit(oldp+2162,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_lsu_rd));
    bufp->fullCData(oldp+2163,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_exu),5);
    bufp->fullBit(oldp+2164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_flush));
    bufp->fullCData(oldp+2165,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_release),5);
    bufp->fullIData(oldp+2166,(0U),32);
    bufp->fullIData(oldp+2167,(1U),32);
    bufp->fullIData(oldp+2168,(2U),32);
    bufp->fullIData(oldp+2169,(3U),32);
    bufp->fullIData(oldp+2170,(0x10U),32);
    bufp->fullIData(oldp+2171,(4U),32);
    bufp->fullIData(oldp+2172,(0x18U),32);
    bufp->fullIData(oldp+2173,(0x80U),32);
    bufp->fullCData(oldp+2174,(3U),8);
    bufp->fullCData(oldp+2175,(3U),4);
    bufp->fullCData(oldp+2176,(0xaU),4);
    bufp->fullCData(oldp+2177,(0xbU),4);
    bufp->fullIData(oldp+2178,(0x2000000U),32);
    bufp->fullIData(oldp+2179,(0x2000004U),32);
    bufp->fullBit(oldp+2180,(0U));
    bufp->fullBit(oldp+2181,(1U));
    bufp->fullIData(oldp+2182,(0x10002000U),32);
    bufp->fullCData(oldp+2183,(4U),3);
    bufp->fullCData(oldp+2184,(0xebU),8);
    bufp->fullCData(oldp+2185,(0x35U),8);
    bufp->fullCData(oldp+2186,(0x38U),8);
    bufp->fullIData(oldp+2187,(0x19U),32);
    bufp->fullIData(oldp+2188,(0xdU),32);
    bufp->fullIData(oldp+2189,(0xbU),32);
    bufp->fullIData(oldp+2190,(0x1aU),32);
    bufp->fullIData(oldp+2191,(0x2000U),32);
    bufp->fullIData(oldp+2192,(0x2710U),32);
    bufp->fullIData(oldp+2193,(0x30cU),32);
    bufp->fullCData(oldp+2194,(7U),4);
    bufp->fullCData(oldp+2195,(5U),4);
    bufp->fullCData(oldp+2196,(4U),4);
    bufp->fullCData(oldp+2197,(6U),4);
    bufp->fullCData(oldp+2198,(2U),4);
    bufp->fullCData(oldp+2199,(1U),4);
    bufp->fullSData(oldp+2200,(0x20U),13);
    bufp->fullCData(oldp+2201,(8U),4);
    bufp->fullCData(oldp+2202,(9U),4);
    bufp->fullIData(oldp+2203,(0x11U),32);
    bufp->fullIData(oldp+2204,(0x30000000U),32);
    bufp->fullIData(oldp+2205,(0x3fffffffU),32);
    bufp->fullIData(oldp+2206,(8U),32);
    bufp->fullCData(oldp+2207,(0U),5);
    bufp->fullCData(oldp+2208,(4U),5);
    bufp->fullCData(oldp+2209,(0x10U),5);
    bufp->fullCData(oldp+2210,(0x14U),5);
    bufp->fullCData(oldp+2211,(0x18U),5);
    bufp->fullIData(oldp+2212,(0x40U),32);
    bufp->fullIData(oldp+2213,(0x100U),32);
    bufp->fullCData(oldp+2214,(2U),3);
    bufp->fullCData(oldp+2215,(3U),3);
    bufp->fullCData(oldp+2216,(5U),3);
    bufp->fullIData(oldp+2217,(0x13U),32);
    bufp->fullSData(oldp+2218,(0x320U),10);
    bufp->fullSData(oldp+2219,(0x60U),10);
    bufp->fullSData(oldp+2220,(0x90U),10);
    bufp->fullSData(oldp+2221,(0x310U),10);
    bufp->fullSData(oldp+2222,(0x20dU),10);
    bufp->fullSData(oldp+2223,(2U),10);
    bufp->fullSData(oldp+2224,(0x23U),10);
    bufp->fullSData(oldp+2225,(0x203U),10);
    bufp->fullCData(oldp+2226,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__state),2);
    bufp->fullBit(oldp+2227,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.awready));
    bufp->fullBit(oldp+2228,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wready));
    bufp->fullBit(oldp+2229,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wlast));
    bufp->fullCData(oldp+2230,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bresp),2);
    bufp->fullBit(oldp+2231,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bvalid));
    bufp->fullCData(oldp+2232,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bid),4);
}
