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
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1848,"ref_clk", false,-1);
    tracep->declBit(c+1849,"ref_rst", false,-1);
    tracep->declBus(c+1850,"ref_pc", false,-1, 31,0);
    tracep->declArray(c+1851,"ref_gpr", false,-1, 511,0);
    tracep->declBit(c+1867,"ref_wen", false,-1);
    tracep->declBus(c+1868,"ref_instr", false,-1, 31,0);
    tracep->declBus(c+1869,"ref_last_pc", false,-1, 31,0);
    tracep->pushNamePrefix("difftest_top ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1848,"ref_clk", false,-1);
    tracep->declBit(c+1849,"ref_rst", false,-1);
    tracep->declBus(c+1850,"ref_pc", false,-1, 31,0);
    tracep->declArray(c+1851,"ref_gpr", false,-1, 511,0);
    tracep->declBit(c+1867,"ref_wen", false,-1);
    tracep->declBus(c+1868,"ref_instr", false,-1, 31,0);
    tracep->declBus(c+1869,"ref_last_pc", false,-1, 31,0);
    tracep->pushNamePrefix("soc ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBus(c+769,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1960,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+770,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+771,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+772,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+773,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+774,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+775,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+776,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+777,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1961,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1962,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+145,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+146,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+147,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+148,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+149,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+150,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1963,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+778,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+779,"spi_sck", false,-1);
    tracep->declBus(c+780,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+781,"spi_mosi", false,-1);
    tracep->declBit(c+1870,"spi_miso", false,-1);
    tracep->declBit(c+1963,"uart_rx", false,-1);
    tracep->declBit(c+778,"uart_tx", false,-1);
    tracep->declBit(c+1664,"psram_sck", false,-1);
    tracep->declBit(c+1665,"psram_ce_n", false,-1);
    tracep->declBus(c+1814,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1871,"sdram_clk", false,-1);
    tracep->declBit(c+1726,"sdram_cke", false,-1);
    tracep->declBit(c+782,"sdram_cs", false,-1);
    tracep->declBit(c+783,"sdram_ras", false,-1);
    tracep->declBit(c+784,"sdram_cas", false,-1);
    tracep->declBit(c+785,"sdram_we", false,-1);
    tracep->declBus(c+1727,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1728,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1729,"sdram_dqm", false,-1, 3,0);
    tracep->declBit(c+1817,"sdram_sel", false,-1);
    tracep->declBus(c+1739,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+769,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1960,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+770,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+771,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+772,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+773,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+774,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+775,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+776,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+777,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1961,"ps2_clk", false,-1);
    tracep->declBit(c+1962,"ps2_data", false,-1);
    tracep->declBus(c+145,"vga_r", false,-1, 7,0);
    tracep->declBus(c+146,"vga_g", false,-1, 7,0);
    tracep->declBus(c+147,"vga_b", false,-1, 7,0);
    tracep->declBit(c+148,"vga_hsync", false,-1);
    tracep->declBit(c+149,"vga_vsync", false,-1);
    tracep->declBit(c+150,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+151,"in_psel", false,-1);
    tracep->declBit(c+152,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBus(c+1370,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1666,"in_pready", false,-1);
    tracep->declBus(c+1667,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1668,"in_pslverr", false,-1);
    tracep->declBus(c+1370,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1669,"out_psel", false,-1);
    tracep->declBit(c+1670,"out_penable", false,-1);
    tracep->declBus(c+1964,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1371,"out_pwrite", false,-1);
    tracep->declBus(c+1372,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1671,"out_pready", false,-1);
    tracep->declBus(c+1672,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1673,"out_pslverr", false,-1);
    tracep->declBus(c+1965,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1966,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1967,"R", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+1969,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+1970,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1971,"COUNT", false,-1, 1,0);
    tracep->declBus(c+1972,"DELAY", false,-1, 1,0);
    tracep->declBus(c+786,"state", false,-1, 1,0);
    tracep->declBus(c+1674,"next", false,-1, 1,0);
    tracep->declBus(c+787,"delay_counter", false,-1, 31,0);
    tracep->declBus(c+788,"prdata_save", false,-1, 31,0);
    tracep->declBit(c+789,"pslverr_save", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1669,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1670,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1964,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1671,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1673,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1672,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1675,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1676,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1964,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1677,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1973,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1872,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1678,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1679,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1375,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1964,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1680,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1973,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1681,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1682,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1375,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1964,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1684,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1685,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1686,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1687,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1873,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1964,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1874,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1973,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+153,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1688,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1689,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1375,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1964,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1690,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1973,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1691,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1692,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1693,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1371,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1964,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1875,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1876,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1377,"sel_0", false,-1);
    tracep->declBit(c+1378,"sel_1", false,-1);
    tracep->declBit(c+1379,"sel_2", false,-1);
    tracep->declBit(c+1380,"sel_3", false,-1);
    tracep->declBit(c+1381,"sel_4", false,-1);
    tracep->declBit(c+1382,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+154,"auto_in_awready", false,-1);
    tracep->declBit(c+155,"auto_in_awvalid", false,-1);
    tracep->declBus(c+156,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+158,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+159,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+154,"auto_in_wready", false,-1);
    tracep->declBit(c+160,"auto_in_wvalid", false,-1);
    tracep->declBus(c+161,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+162,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+163,"auto_in_bready", false,-1);
    tracep->declBit(c+1694,"auto_in_bvalid", false,-1);
    tracep->declBus(c+164,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1695,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_in_arready", false,-1);
    tracep->declBit(c+166,"auto_in_arvalid", false,-1);
    tracep->declBus(c+167,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+170,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+171,"auto_in_rready", false,-1);
    tracep->declBit(c+1696,"auto_in_rvalid", false,-1);
    tracep->declBus(c+172,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1877,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1695,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+151,"auto_out_psel", false,-1);
    tracep->declBit(c+152,"auto_out_penable", false,-1);
    tracep->declBit(c+1371,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1372,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1666,"auto_out_pready", false,-1);
    tracep->declBit(c+1668,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1667,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+152,"nodeOut_penable", false,-1);
    tracep->declBus(c+173,"state", false,-1, 1,0);
    tracep->declBit(c+165,"accept_read", false,-1);
    tracep->declBit(c+154,"accept_write", false,-1);
    tracep->declBit(c+174,"is_write_r", false,-1);
    tracep->declBit(c+1371,"is_write", false,-1);
    tracep->declBus(c+172,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+164,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+175,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+176,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+177,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+178,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1697,"resp", false,-1, 1,0);
    tracep->declBus(c+179,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1695,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1696,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+180,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1694,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+181,"auto_in_awready", false,-1);
    tracep->declBit(c+1742,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1743,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_in_wready", false,-1);
    tracep->declBit(c+1744,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1747,"auto_in_wlast", false,-1);
    tracep->declBit(c+82,"auto_in_bready", false,-1);
    tracep->declBit(c+185,"auto_in_bvalid", false,-1);
    tracep->declBus(c+186,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_in_arready", false,-1);
    tracep->declBit(c+1748,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+9,"auto_in_rready", false,-1);
    tracep->declBit(c+190,"auto_in_rvalid", false,-1);
    tracep->declBus(c+191,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+192,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+193,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+194,"auto_in_rlast", false,-1);
    tracep->declBit(c+154,"auto_out_awready", false,-1);
    tracep->declBit(c+155,"auto_out_awvalid", false,-1);
    tracep->declBus(c+156,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+157,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+158,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+159,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+154,"auto_out_wready", false,-1);
    tracep->declBit(c+160,"auto_out_wvalid", false,-1);
    tracep->declBus(c+161,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+162,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+163,"auto_out_bready", false,-1);
    tracep->declBit(c+1694,"auto_out_bvalid", false,-1);
    tracep->declBus(c+164,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1695,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_out_arready", false,-1);
    tracep->declBit(c+166,"auto_out_arvalid", false,-1);
    tracep->declBus(c+167,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+170,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+171,"auto_out_rready", false,-1);
    tracep->declBit(c+1696,"auto_out_rvalid", false,-1);
    tracep->declBus(c+172,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1877,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1695,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+163,"io_enq_ready", false,-1);
    tracep->declBit(c+1694,"io_enq_valid", false,-1);
    tracep->declBus(c+164,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1695,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+82,"io_deq_ready", false,-1);
    tracep->declBit(c+185,"io_deq_valid", false,-1);
    tracep->declBus(c+186,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+187,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+195,"wrap", false,-1);
    tracep->declBit(c+196,"wrap_1", false,-1);
    tracep->declBit(c+197,"maybe_full", false,-1);
    tracep->declBit(c+198,"ptr_match", false,-1);
    tracep->declBit(c+199,"empty", false,-1);
    tracep->declBit(c+200,"full", false,-1);
    tracep->declBit(c+1698,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+196,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declBus(c+201,"R0_data", false,-1, 5,0);
    tracep->declBit(c+195,"W0_addr", false,-1);
    tracep->declBit(c+1698,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declBus(c+1878,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+202+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+204,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+171,"io_enq_ready", false,-1);
    tracep->declBit(c+1696,"io_enq_valid", false,-1);
    tracep->declBus(c+172,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1877,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1695,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+190,"io_deq_valid", false,-1);
    tracep->declBus(c+191,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+192,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+193,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+194,"io_deq_bits_last", false,-1);
    tracep->declBit(c+205,"wrap", false,-1);
    tracep->declBit(c+206,"wrap_1", false,-1);
    tracep->declBit(c+207,"maybe_full", false,-1);
    tracep->declBit(c+208,"ptr_match", false,-1);
    tracep->declBit(c+209,"empty", false,-1);
    tracep->declBit(c+210,"full", false,-1);
    tracep->declBit(c+1699,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+206,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declQuad(c+211,"R0_data", false,-1, 38,0);
    tracep->declBit(c+205,"W0_addr", false,-1);
    tracep->declBit(c+1699,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declQuad(c+1879,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+213+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+217,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+188,"io_enq_ready", false,-1);
    tracep->declBit(c+1748,"io_enq_valid", false,-1);
    tracep->declBus(c+189,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1749,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1750,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1751,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+165,"io_deq_ready", false,-1);
    tracep->declBit(c+166,"io_deq_valid", false,-1);
    tracep->declBus(c+167,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+168,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+169,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+170,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+218,"wrap", false,-1);
    tracep->declBit(c+219,"wrap_1", false,-1);
    tracep->declBit(c+220,"maybe_full", false,-1);
    tracep->declBit(c+221,"ptr_match", false,-1);
    tracep->declBit(c+222,"empty", false,-1);
    tracep->declBit(c+223,"full", false,-1);
    tracep->declBit(c+1752,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+219,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declQuad(c+224,"R0_data", false,-1, 46,0);
    tracep->declBit(c+218,"W0_addr", false,-1);
    tracep->declBit(c+1752,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declQuad(c+1881,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+226+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+181,"io_enq_ready", false,-1);
    tracep->declBit(c+1742,"io_enq_valid", false,-1);
    tracep->declBus(c+182,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1743,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1405,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+183,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+154,"io_deq_ready", false,-1);
    tracep->declBit(c+155,"io_deq_valid", false,-1);
    tracep->declBus(c+156,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+157,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+158,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+159,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+231,"wrap", false,-1);
    tracep->declBit(c+232,"wrap_1", false,-1);
    tracep->declBit(c+233,"maybe_full", false,-1);
    tracep->declBit(c+234,"ptr_match", false,-1);
    tracep->declBit(c+235,"empty", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+1753,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+232,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declQuad(c+237,"R0_data", false,-1, 46,0);
    tracep->declBit(c+231,"W0_addr", false,-1);
    tracep->declBit(c+1753,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declQuad(c+1883,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+239+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+243,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+184,"io_enq_ready", false,-1);
    tracep->declBit(c+1744,"io_enq_valid", false,-1);
    tracep->declBus(c+1745,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1746,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1747,"io_enq_bits_last", false,-1);
    tracep->declBit(c+154,"io_deq_ready", false,-1);
    tracep->declBit(c+160,"io_deq_valid", false,-1);
    tracep->declBus(c+161,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+162,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+244,"wrap", false,-1);
    tracep->declBit(c+245,"wrap_1", false,-1);
    tracep->declBit(c+246,"maybe_full", false,-1);
    tracep->declBit(c+247,"ptr_match", false,-1);
    tracep->declBit(c+248,"empty", false,-1);
    tracep->declBit(c+249,"full", false,-1);
    tracep->declBit(c+1754,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+245,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declQuad(c+250,"R0_data", false,-1, 35,0);
    tracep->declBit(c+244,"W0_addr", false,-1);
    tracep->declBit(c+1754,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declQuad(c+1755,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+252+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1818,"in_arready", false,-1);
    tracep->declBit(c+1757,"in_arvalid", false,-1);
    tracep->declBus(c+1975,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+50,"in_rready", false,-1);
    tracep->declBit(c+57,"in_rvalid", false,-1);
    tracep->declBus(c+58,"in_rid", false,-1, 3,0);
    tracep->declBus(c+59,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+61,"in_rlast", false,-1);
    tracep->declBit(c+1819,"in_awready", false,-1);
    tracep->declBit(c+1758,"in_awvalid", false,-1);
    tracep->declBus(c+1975,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1820,"in_wready", false,-1);
    tracep->declBit(c+1759,"in_wvalid", false,-1);
    tracep->declBus(c+1418,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"in_wlast", false,-1);
    tracep->declBit(c+1885,"in_bready", false,-1);
    tracep->declBit(c+115,"in_bvalid", false,-1);
    tracep->declBus(c+116,"in_bid", false,-1, 3,0);
    tracep->declBus(c+117,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1818,"out_arready", false,-1);
    tracep->declBit(c+1757,"out_arvalid", false,-1);
    tracep->declBus(c+1975,"out_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"out_rready", false,-1);
    tracep->declBit(c+790,"out_rvalid", false,-1);
    tracep->declBus(c+791,"out_rid", false,-1, 3,0);
    tracep->declBus(c+792,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1970,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+793,"out_rlast", false,-1);
    tracep->declBit(c+1819,"out_awready", false,-1);
    tracep->declBit(c+1758,"out_awvalid", false,-1);
    tracep->declBus(c+1975,"out_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1820,"out_wready", false,-1);
    tracep->declBit(c+1759,"out_wvalid", false,-1);
    tracep->declBus(c+1418,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"out_wlast", false,-1);
    tracep->declBit(c+118,"out_bready", false,-1);
    tracep->declBit(c+794,"out_bvalid", false,-1);
    tracep->declBus(c+791,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1970,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1965,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1966,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1967,"R", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+1969,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+1977,"MAX_ALLOWED_BURST_LEN", false,-1, 31,0);
    tracep->declBus(c+1978,"CNT_W", false,-1, 31,0);
    tracep->declBus(c+1979,"IDX_W", false,-1, 31,0);
    tracep->declBus(c+1979,"ALEN_W", false,-1, 31,0);
    tracep->declBus(c+1980,"STEP", false,-1, 31,0);
    tracep->declBus(c+1970,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1971,"READ", false,-1, 1,0);
    tracep->declBus(c+1972,"WRITE", false,-1, 1,0);
    tracep->declBus(c+795,"state", false,-1, 1,0);
    tracep->declBus(c+140,"next", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+796+i*2,"read_counters", true,(i+0), 32,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+860+i*1,"rdata_save", true,(i+0), 31,0);
    }
    tracep->declBus(c+892,"get_beat", false,-1, 5,0);
    tracep->declBus(c+893,"return_beat", false,-1, 5,0);
    tracep->declBus(c+894,"arlen_save", false,-1, 4,0);
    tracep->declBus(c+895,"rid_save", false,-1, 3,0);
    tracep->declBus(c+896,"rresp_save", false,-1, 1,0);
    tracep->declQuad(c+897,"write_counter", false,-1, 32,0);
    tracep->declBit(c+899,"b_received", false,-1);
    tracep->declBus(c+900,"bid_save", false,-1, 3,0);
    tracep->declBus(c+901,"bresp_save", false,-1, 1,0);
    tracep->declBus(c+902,"i", false,-1, 31,0);
    tracep->declBit(c+63,"r_beat_arriving", false,-1);
    tracep->declBit(c+119,"b_arriving", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+257,"auto_in_awready", false,-1);
    tracep->declBit(c+1760,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1975,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+258,"auto_in_wready", false,-1);
    tracep->declBit(c+1761,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1418,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"auto_in_wlast", false,-1);
    tracep->declBit(c+1886,"auto_in_bready", false,-1);
    tracep->declBit(c+259,"auto_in_bvalid", false,-1);
    tracep->declBus(c+260,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+262,"auto_in_arready", false,-1);
    tracep->declBit(c+1762,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1975,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+263,"auto_in_rvalid", false,-1);
    tracep->declBus(c+264,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_in_rlast", false,-1);
    tracep->declBit(c+125,"auto_out_awready", false,-1);
    tracep->declBit(c+1763,"auto_out_awvalid", false,-1);
    tracep->declBus(c+182,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1743,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+268,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+126,"auto_out_wready", false,-1);
    tracep->declBit(c+1764,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1747,"auto_out_wlast", false,-1);
    tracep->declBit(c+1887,"auto_out_bready", false,-1);
    tracep->declBit(c+269,"auto_out_bvalid", false,-1);
    tracep->declBus(c+260,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+271,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+72,"auto_out_arready", false,-1);
    tracep->declBit(c+1765,"auto_out_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1766,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+51,"auto_out_rready", false,-1);
    tracep->declBit(c+263,"auto_out_rvalid", false,-1);
    tracep->declBus(c+264,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+272,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+273,"auto_out_rlast", false,-1);
    tracep->declBit(c+1764,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+274,"w_idle", false,-1);
    tracep->declBit(c+127,"in_awready", false,-1);
    tracep->declBit(c+275,"busy", false,-1);
    tracep->declBus(c+276,"r_addr", false,-1, 31,0);
    tracep->declBus(c+277,"r_len", false,-1, 7,0);
    tracep->declBus(c+1767,"len", false,-1, 7,0);
    tracep->declBus(c+1768,"addr", false,-1, 31,0);
    tracep->declBit(c+278,"busy_1", false,-1);
    tracep->declBus(c+279,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+280,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+281,"len_1", false,-1, 7,0);
    tracep->declBus(c+1769,"addr_1", false,-1, 31,0);
    tracep->declBit(c+282,"wbeats_latched", false,-1);
    tracep->declBit(c+1763,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1770,"wbeats_valid", false,-1);
    tracep->declBus(c+283,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1771,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1747,"w_last", false,-1);
    tracep->declBit(c+1887,"nodeOut_bready", false,-1);
    tracep->declBus(c+284,"error_0", false,-1, 1,0);
    tracep->declBus(c+285,"error_1", false,-1, 1,0);
    tracep->declBus(c+286,"error_2", false,-1, 1,0);
    tracep->declBus(c+287,"error_3", false,-1, 1,0);
    tracep->declBus(c+288,"error_4", false,-1, 1,0);
    tracep->declBus(c+289,"error_5", false,-1, 1,0);
    tracep->declBus(c+290,"error_6", false,-1, 1,0);
    tracep->declBus(c+291,"error_7", false,-1, 1,0);
    tracep->declBus(c+292,"error_8", false,-1, 1,0);
    tracep->declBus(c+293,"error_9", false,-1, 1,0);
    tracep->declBus(c+294,"error_10", false,-1, 1,0);
    tracep->declBus(c+295,"error_11", false,-1, 1,0);
    tracep->declBus(c+296,"error_12", false,-1, 1,0);
    tracep->declBus(c+297,"error_13", false,-1, 1,0);
    tracep->declBus(c+298,"error_14", false,-1, 1,0);
    tracep->declBus(c+299,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+262,"io_enq_ready", false,-1);
    tracep->declBit(c+1762,"io_enq_valid", false,-1);
    tracep->declBus(c+1975,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1413,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1414,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1415,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1416,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+73,"io_deq_ready", false,-1);
    tracep->declBit(c+1765,"io_deq_valid", false,-1);
    tracep->declBus(c+189,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1772,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1773,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1750,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1751,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+300,"ram", false,-1, 48,0);
    tracep->declBit(c+302,"full", false,-1);
    tracep->declBit(c+1765,"io_deq_valid_0", false,-1);
    tracep->declBit(c+74,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+1760,"io_enq_valid", false,-1);
    tracep->declBus(c+1975,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1417,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1976,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+651,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1970,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+128,"io_deq_ready", false,-1);
    tracep->declBit(c+1774,"io_deq_valid", false,-1);
    tracep->declBus(c+182,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1775,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+303,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1405,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+183,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+304,"ram", false,-1, 48,0);
    tracep->declBit(c+306,"full", false,-1);
    tracep->declBit(c+1774,"io_deq_valid_0", false,-1);
    tracep->declBit(c+129,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+1761,"io_enq_valid", false,-1);
    tracep->declBus(c+1418,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1419,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1974,"io_enq_bits_last", false,-1);
    tracep->declBit(c+130,"io_deq_ready", false,-1);
    tracep->declBit(c+1776,"io_deq_valid", false,-1);
    tracep->declBus(c+1745,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1746,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+307,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+308,"ram", false,-1, 36,0);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+1776,"io_deq_valid_0", false,-1);
    tracep->declBit(c+131,"do_enq", false,-1);
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
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+132,"auto_in_awready", false,-1);
    tracep->declBit(c+1777,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1778,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1888,"auto_in_wready", false,-1);
    tracep->declBit(c+1779,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1889,"auto_in_bready", false,-1);
    tracep->declBit(c+311,"auto_in_bvalid", false,-1);
    tracep->declBus(c+312,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+313,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_arready", false,-1);
    tracep->declBit(c+1780,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1781,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+53,"auto_in_rready", false,-1);
    tracep->declBit(c+314,"auto_in_rvalid", false,-1);
    tracep->declBus(c+315,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+316,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+317,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"nodeIn_arready", false,-1);
    tracep->declBit(c+132,"nodeIn_awready", false,-1);
    tracep->declBit(c+1782,"w_sel0", false,-1);
    tracep->declBit(c+311,"w_full", false,-1);
    tracep->declBus(c+312,"w_id", false,-1, 3,0);
    tracep->declBit(c+318,"r_sel1", false,-1);
    tracep->declBit(c+319,"w_sel1", false,-1);
    tracep->declBit(c+314,"r_full", false,-1);
    tracep->declBus(c+315,"r_id", false,-1, 3,0);
    tracep->declBit(c+75,"ren", false,-1);
    tracep->declBit(c+320,"rdata_REG", false,-1);
    tracep->declBus(c+321,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+322,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+323,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+324,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1783,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+75,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declBus(c+325,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1784,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+133,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declBus(c+1745,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1746,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1821,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+652,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1975,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1890,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+653,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1418,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+654,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+120,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+121,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1891,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1822,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1420,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1975,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+43,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+64,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1819,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1758,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1975,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+1820,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1759,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1418,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1885,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+115,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+116,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+1818,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1757,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1975,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+50,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+58,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+257,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1760,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1975,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+258,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1761,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1418,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1886,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+259,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+260,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+261,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+262,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1762,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1975,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+263,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+264,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+267,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+120,"in_0_bvalid", false,-1);
    tracep->declBit(c+43,"in_0_rvalid", false,-1);
    tracep->declBit(c+1823,"in_0_wready", false,-1);
    tracep->declBit(c+1824,"in_0_awready", false,-1);
    tracep->declBit(c+1892,"in_0_arready", false,-1);
    tracep->declBit(c+1821,"anonIn_awready", false,-1);
    tracep->declBit(c+1822,"anonIn_arready", false,-1);
    tracep->declBit(c+1421,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1422,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1423,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1424,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1981,"arSel", false,-1, 15,0);
    tracep->declBus(c+1981,"awSel", false,-1, 15,0);
    tracep->declBus(c+68,"rSel", false,-1, 15,0);
    tracep->declBus(c+122,"bSel", false,-1, 15,0);
    tracep->declBus(c+326,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+327,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+328,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+329,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+330,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1982,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+331,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1983,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+332,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1984,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+333,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1985,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+334,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1986,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+335,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1987,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+336,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1988,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+337,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1989,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+338,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1990,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+339,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1991,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+340,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1992,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+341,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1993,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+342,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1994,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+343,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1995,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+344,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1996,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+345,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1997,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+346,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1998,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+347,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1999,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+348,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+2000,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+349,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+2001,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+350,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+2002,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+351,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+2003,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+352,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+2004,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+353,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+2005,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+354,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+2006,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+355,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+2007,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+356,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+2008,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+357,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+2009,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+358,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+2010,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+359,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+2011,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1785,"in_0_arvalid", false,-1);
    tracep->declBit(c+360,"latched", false,-1);
    tracep->declBit(c+1786,"in_0_awvalid", false,-1);
    tracep->declBit(c+1406,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1407,"in_0_wvalid", false,-1);
    tracep->declBit(c+361,"idle_2", false,-1);
    tracep->declBit(c+44,"anyValid", false,-1);
    tracep->declBus(c+45,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+362,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+46,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+47,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+48,"prefixOR_1", false,-1);
    tracep->declBit(c+69,"winner_2_1", false,-1);
    tracep->declBit(c+363,"state_2_0", false,-1);
    tracep->declBit(c+364,"state_2_1", false,-1);
    tracep->declBit(c+49,"muxState_2_0", false,-1);
    tracep->declBit(c+70,"muxState_2_1", false,-1);
    tracep->declBit(c+365,"idle_3", false,-1);
    tracep->declBit(c+123,"anyValid_1", false,-1);
    tracep->declBus(c+1893,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+366,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1894,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1895,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1896,"winner_3_0", false,-1);
    tracep->declBit(c+124,"winner_3_1", false,-1);
    tracep->declBit(c+367,"state_3_0", false,-1);
    tracep->declBit(c+368,"state_3_1", false,-1);
    tracep->declBit(c+1897,"muxState_3_0", false,-1);
    tracep->declBit(c+1898,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+1406,"io_enq_valid", false,-1);
    tracep->declBus(c+1425,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1825,"io_deq_ready", false,-1);
    tracep->declBit(c+1408,"io_deq_valid", false,-1);
    tracep->declBus(c+1787,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+370,"wrap", false,-1);
    tracep->declBit(c+371,"wrap_1", false,-1);
    tracep->declBit(c+372,"maybe_full", false,-1);
    tracep->declBit(c+373,"ptr_match", false,-1);
    tracep->declBit(c+374,"empty", false,-1);
    tracep->declBit(c+375,"full", false,-1);
    tracep->declBit(c+1408,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1826,"do_deq", false,-1);
    tracep->declBit(c+1827,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+371,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declBus(c+376,"R0_data", false,-1, 1,0);
    tracep->declBit(c+370,"W0_addr", false,-1);
    tracep->declBit(c+1827,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declBus(c+1425,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+377+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+134,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1788,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1743,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+126,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1764,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1747,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1887,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+269,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+260,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1789,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+263,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+264,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+273,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+132,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1777,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1778,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1888,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1779,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1889,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+311,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+312,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+313,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1780,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1781,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+53,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+314,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+315,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+316,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+317,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1790,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1791,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+379,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1792,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1793,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+10,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+380,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+381,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+382,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+181,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1742,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+182,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1743,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+184,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1744,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1747,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+82,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+185,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+186,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+187,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+188,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1748,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+189,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+9,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+190,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+191,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+192,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+193,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+194,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+269,"in_0_bvalid", false,-1);
    tracep->declBit(c+263,"in_0_rvalid", false,-1);
    tracep->declBit(c+135,"in_0_wready", false,-1);
    tracep->declBit(c+136,"in_0_awready", false,-1);
    tracep->declBit(c+76,"in_0_arready", false,-1);
    tracep->declBit(c+134,"anonIn_awready", false,-1);
    tracep->declBit(c+1794,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1795,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1796,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1797,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1798,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1799,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+383,"arSel", false,-1, 15,0);
    tracep->declBus(c+384,"awSel", false,-1, 15,0);
    tracep->declBus(c+385,"rSel", false,-1, 15,0);
    tracep->declBus(c+386,"bSel", false,-1, 15,0);
    tracep->declBit(c+387,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+388,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+389,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+390,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+391,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+392,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+393,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+394,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+395,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+396,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+397,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+398,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+399,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+400,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+401,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+402,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+403,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+404,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+405,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+406,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+407,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+408,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+409,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+410,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+411,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+412,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+413,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+414,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+415,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+416,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+417,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+418,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+419,"latched", false,-1);
    tracep->declBit(c+1800,"in_0_awvalid", false,-1);
    tracep->declBit(c+1801,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1802,"in_0_wvalid", false,-1);
    tracep->declBit(c+420,"idle_3", false,-1);
    tracep->declBit(c+421,"anyValid", false,-1);
    tracep->declBus(c+422,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+423,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+424,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+425,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+426,"prefixOR_1", false,-1);
    tracep->declBit(c+427,"winner_3_1", false,-1);
    tracep->declBit(c+428,"winner_3_2", false,-1);
    tracep->declBit(c+429,"state_3_0", false,-1);
    tracep->declBit(c+430,"state_3_1", false,-1);
    tracep->declBit(c+431,"state_3_2", false,-1);
    tracep->declBit(c+432,"muxState_3_0", false,-1);
    tracep->declBit(c+433,"muxState_3_1", false,-1);
    tracep->declBit(c+434,"muxState_3_2", false,-1);
    tracep->declBit(c+435,"idle_4", false,-1);
    tracep->declBit(c+436,"anyValid_1", false,-1);
    tracep->declBus(c+437,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+438,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+439,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+440,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+441,"winner_4_0", false,-1);
    tracep->declBit(c+442,"winner_4_2", false,-1);
    tracep->declBit(c+443,"state_4_0", false,-1);
    tracep->declBit(c+444,"state_4_2", false,-1);
    tracep->declBit(c+445,"muxState_4_0", false,-1);
    tracep->declBit(c+446,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+447,"io_enq_ready", false,-1);
    tracep->declBit(c+1801,"io_enq_valid", false,-1);
    tracep->declBus(c+1803,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+137,"io_deq_ready", false,-1);
    tracep->declBit(c+1804,"io_deq_valid", false,-1);
    tracep->declBus(c+1805,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+448,"wrap", false,-1);
    tracep->declBit(c+449,"wrap_1", false,-1);
    tracep->declBit(c+450,"maybe_full", false,-1);
    tracep->declBit(c+451,"ptr_match", false,-1);
    tracep->declBit(c+452,"empty", false,-1);
    tracep->declBit(c+453,"full", false,-1);
    tracep->declBit(c+1804,"io_deq_valid_0", false,-1);
    tracep->declBit(c+138,"do_deq", false,-1);
    tracep->declBit(c+139,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+449,"R0_addr", false,-1);
    tracep->declBit(c+1974,"R0_en", false,-1);
    tracep->declBit(c+1846,"R0_clk", false,-1);
    tracep->declBus(c+454,"R0_data", false,-1, 2,0);
    tracep->declBit(c+448,"W0_addr", false,-1);
    tracep->declBit(c+139,"W0_en", false,-1);
    tracep->declBit(c+1846,"W0_clk", false,-1);
    tracep->declBus(c+1803,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+455+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+125,"auto_in_awready", false,-1);
    tracep->declBit(c+1763,"auto_in_awvalid", false,-1);
    tracep->declBus(c+182,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1743,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+268,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+126,"auto_in_wready", false,-1);
    tracep->declBit(c+1764,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1747,"auto_in_wlast", false,-1);
    tracep->declBit(c+1887,"auto_in_bready", false,-1);
    tracep->declBit(c+269,"auto_in_bvalid", false,-1);
    tracep->declBus(c+260,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+271,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+72,"auto_in_arready", false,-1);
    tracep->declBit(c+1765,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1766,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+51,"auto_in_rready", false,-1);
    tracep->declBit(c+263,"auto_in_rvalid", false,-1);
    tracep->declBus(c+264,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+272,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+273,"auto_in_rlast", false,-1);
    tracep->declBit(c+134,"auto_out_awready", false,-1);
    tracep->declBit(c+1788,"auto_out_awvalid", false,-1);
    tracep->declBus(c+182,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1743,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+183,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+126,"auto_out_wready", false,-1);
    tracep->declBit(c+1764,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1745,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1746,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1747,"auto_out_wlast", false,-1);
    tracep->declBit(c+1887,"auto_out_bready", false,-1);
    tracep->declBit(c+269,"auto_out_bvalid", false,-1);
    tracep->declBus(c+260,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+270,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+76,"auto_out_arready", false,-1);
    tracep->declBit(c+1789,"auto_out_arvalid", false,-1);
    tracep->declBus(c+189,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1749,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1750,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1751,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_out_rready", false,-1);
    tracep->declBit(c+263,"auto_out_rvalid", false,-1);
    tracep->declBus(c+264,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+265,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+266,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+273,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+457,"io_enq_ready", false,-1);
    tracep->declBit(c+27,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+458,"io_deq_valid", false,-1);
    tracep->declBit(c+459,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+458,"full", false,-1);
    tracep->declBit(c+459,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+460,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+461,"io_enq_ready", false,-1);
    tracep->declBit(c+28,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+462,"io_deq_valid", false,-1);
    tracep->declBit(c+463,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+462,"full", false,-1);
    tracep->declBit(c+463,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+464,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+465,"io_enq_ready", false,-1);
    tracep->declBit(c+29,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+466,"io_deq_valid", false,-1);
    tracep->declBit(c+467,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+466,"full", false,-1);
    tracep->declBit(c+467,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+468,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+469,"io_enq_ready", false,-1);
    tracep->declBit(c+30,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+470,"io_deq_valid", false,-1);
    tracep->declBit(c+471,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+470,"full", false,-1);
    tracep->declBit(c+471,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+472,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+473,"io_enq_ready", false,-1);
    tracep->declBit(c+31,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+474,"io_deq_valid", false,-1);
    tracep->declBit(c+475,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+474,"full", false,-1);
    tracep->declBit(c+475,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+476,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+477,"io_enq_ready", false,-1);
    tracep->declBit(c+32,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+478,"io_deq_valid", false,-1);
    tracep->declBit(c+479,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+478,"full", false,-1);
    tracep->declBit(c+479,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+480,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+481,"io_enq_ready", false,-1);
    tracep->declBit(c+33,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+482,"io_deq_valid", false,-1);
    tracep->declBit(c+483,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+482,"full", false,-1);
    tracep->declBit(c+483,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+484,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+485,"io_enq_ready", false,-1);
    tracep->declBit(c+34,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+486,"io_deq_valid", false,-1);
    tracep->declBit(c+487,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+486,"full", false,-1);
    tracep->declBit(c+487,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+488,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+99,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+83,"io_deq_ready", false,-1);
    tracep->declBit(c+490,"io_deq_valid", false,-1);
    tracep->declBit(c+491,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+490,"full", false,-1);
    tracep->declBit(c+491,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+492,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+493,"io_enq_ready", false,-1);
    tracep->declBit(c+100,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+84,"io_deq_ready", false,-1);
    tracep->declBit(c+494,"io_deq_valid", false,-1);
    tracep->declBit(c+495,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+494,"full", false,-1);
    tracep->declBit(c+495,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+496,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+497,"io_enq_ready", false,-1);
    tracep->declBit(c+101,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+85,"io_deq_ready", false,-1);
    tracep->declBit(c+498,"io_deq_valid", false,-1);
    tracep->declBit(c+499,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+498,"full", false,-1);
    tracep->declBit(c+499,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+500,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+102,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+86,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+35,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+103,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+87,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+104,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+88,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+105,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+89,"io_deq_ready", false,-1);
    tracep->declBit(c+518,"io_deq_valid", false,-1);
    tracep->declBit(c+519,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+518,"full", false,-1);
    tracep->declBit(c+519,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+520,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+106,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+90,"io_deq_ready", false,-1);
    tracep->declBit(c+522,"io_deq_valid", false,-1);
    tracep->declBit(c+523,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+522,"full", false,-1);
    tracep->declBit(c+523,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+524,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+107,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+91,"io_deq_ready", false,-1);
    tracep->declBit(c+526,"io_deq_valid", false,-1);
    tracep->declBit(c+527,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+526,"full", false,-1);
    tracep->declBit(c+527,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+528,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+529,"io_enq_ready", false,-1);
    tracep->declBit(c+108,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+92,"io_deq_ready", false,-1);
    tracep->declBit(c+530,"io_deq_valid", false,-1);
    tracep->declBit(c+531,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+530,"full", false,-1);
    tracep->declBit(c+531,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+532,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+533,"io_enq_ready", false,-1);
    tracep->declBit(c+109,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+93,"io_deq_ready", false,-1);
    tracep->declBit(c+534,"io_deq_valid", false,-1);
    tracep->declBit(c+535,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+534,"full", false,-1);
    tracep->declBit(c+535,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+536,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+537,"io_enq_ready", false,-1);
    tracep->declBit(c+110,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+94,"io_deq_ready", false,-1);
    tracep->declBit(c+538,"io_deq_valid", false,-1);
    tracep->declBit(c+539,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+538,"full", false,-1);
    tracep->declBit(c+539,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+540,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+541,"io_enq_ready", false,-1);
    tracep->declBit(c+111,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+95,"io_deq_ready", false,-1);
    tracep->declBit(c+542,"io_deq_valid", false,-1);
    tracep->declBit(c+543,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+542,"full", false,-1);
    tracep->declBit(c+543,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+544,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+545,"io_enq_ready", false,-1);
    tracep->declBit(c+112,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+96,"io_deq_ready", false,-1);
    tracep->declBit(c+546,"io_deq_valid", false,-1);
    tracep->declBit(c+547,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+546,"full", false,-1);
    tracep->declBit(c+547,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+548,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+549,"io_enq_ready", false,-1);
    tracep->declBit(c+36,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+550,"io_deq_valid", false,-1);
    tracep->declBit(c+551,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+550,"full", false,-1);
    tracep->declBit(c+551,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+552,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+553,"io_enq_ready", false,-1);
    tracep->declBit(c+113,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+97,"io_deq_ready", false,-1);
    tracep->declBit(c+554,"io_deq_valid", false,-1);
    tracep->declBit(c+555,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+554,"full", false,-1);
    tracep->declBit(c+555,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+556,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+557,"io_enq_ready", false,-1);
    tracep->declBit(c+114,"io_enq_valid", false,-1);
    tracep->declBit(c+268,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+98,"io_deq_ready", false,-1);
    tracep->declBit(c+558,"io_deq_valid", false,-1);
    tracep->declBit(c+559,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+558,"full", false,-1);
    tracep->declBit(c+559,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+560,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+37,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+562,"io_deq_valid", false,-1);
    tracep->declBit(c+563,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+562,"full", false,-1);
    tracep->declBit(c+563,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+564,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+565,"io_enq_ready", false,-1);
    tracep->declBit(c+38,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+566,"io_deq_valid", false,-1);
    tracep->declBit(c+567,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+566,"full", false,-1);
    tracep->declBit(c+567,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+568,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+569,"io_enq_ready", false,-1);
    tracep->declBit(c+39,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+570,"io_deq_valid", false,-1);
    tracep->declBit(c+571,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+570,"full", false,-1);
    tracep->declBit(c+571,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+572,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+573,"io_enq_ready", false,-1);
    tracep->declBit(c+40,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+24,"io_deq_ready", false,-1);
    tracep->declBit(c+574,"io_deq_valid", false,-1);
    tracep->declBit(c+575,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+574,"full", false,-1);
    tracep->declBit(c+575,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+576,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+577,"io_enq_ready", false,-1);
    tracep->declBit(c+41,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+25,"io_deq_ready", false,-1);
    tracep->declBit(c+578,"io_deq_valid", false,-1);
    tracep->declBit(c+579,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+578,"full", false,-1);
    tracep->declBit(c+579,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+580,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+581,"io_enq_ready", false,-1);
    tracep->declBit(c+42,"io_enq_valid", false,-1);
    tracep->declBit(c+1766,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+26,"io_deq_ready", false,-1);
    tracep->declBit(c+582,"io_deq_valid", false,-1);
    tracep->declBit(c+583,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+582,"full", false,-1);
    tracep->declBit(c+583,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+584,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+1821,"auto_master_out_awready", false,-1);
    tracep->declBit(c+652,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1975,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1890,"auto_master_out_wready", false,-1);
    tracep->declBit(c+653,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1418,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+654,"auto_master_out_bready", false,-1);
    tracep->declBit(c+120,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+121,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1891,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1822,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1420,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1975,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+54,"auto_master_out_rready", false,-1);
    tracep->declBit(c+43,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+64,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+65,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+1973,"io_interrupt", false,-1);
    tracep->declBit(c+652,"io_master_awvalid", false,-1);
    tracep->declBit(c+1821,"io_master_awready", false,-1);
    tracep->declBus(c+1975,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+653,"io_master_wvalid", false,-1);
    tracep->declBit(c+1890,"io_master_wready", false,-1);
    tracep->declBus(c+1418,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"io_master_wlast", false,-1);
    tracep->declBit(c+120,"io_master_bvalid", false,-1);
    tracep->declBit(c+654,"io_master_bready", false,-1);
    tracep->declBus(c+121,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1891,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+1420,"io_master_arvalid", false,-1);
    tracep->declBit(c+1822,"io_master_arready", false,-1);
    tracep->declBus(c+1975,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+43,"io_master_rvalid", false,-1);
    tracep->declBit(c+54,"io_master_rready", false,-1);
    tracep->declBus(c+64,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+65,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+66,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+67,"io_master_rlast", false,-1);
    tracep->declBit(c+1973,"io_slave_awvalid", false,-1);
    tracep->declBit(c+1973,"io_slave_awready", false,-1);
    tracep->declBus(c+1975,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+2012,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+2013,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1973,"io_slave_wvalid", false,-1);
    tracep->declBit(c+1973,"io_slave_wready", false,-1);
    tracep->declBus(c+2012,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1975,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1973,"io_slave_wlast", false,-1);
    tracep->declBit(c+1973,"io_slave_bvalid", false,-1);
    tracep->declBit(c+1973,"io_slave_bready", false,-1);
    tracep->declBus(c+1975,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1970,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1973,"io_slave_arvalid", false,-1);
    tracep->declBit(c+1973,"io_slave_arready", false,-1);
    tracep->declBus(c+1975,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+2012,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1976,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+2013,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1970,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1973,"io_slave_rvalid", false,-1);
    tracep->declBit(c+1973,"io_slave_rready", false,-1);
    tracep->declBus(c+1975,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+2012,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1970,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1973,"io_slave_rlast", false,-1);
    tracep->declArray(c+1426,"dbg_reg", false,-1, 511,0);
    tracep->declBit(c+1442,"fetch_valid", false,-1);
    tracep->declBit(c+77,"instr_valid", false,-1);
    tracep->declBus(c+78,"instr_icache", false,-1, 31,0);
    tracep->declBus(c+79,"fetch_error", false,-1, 1,0);
    tracep->declBus(c+1443,"fetch_addr", false,-1, 31,0);
    tracep->declBit(c+1444,"icache_flush", false,-1);
    tracep->declBit(c+1445,"bt_valid", false,-1);
    tracep->declBus(c+1446,"b_pc", false,-1, 31,0);
    tracep->declBus(c+1806,"b_target", false,-1, 31,0);
    tracep->declBit(c+1447,"taken", false,-1);
    tracep->declBit(c+1448,"ifu_exception_0", false,-1);
    tracep->declBit(c+1449,"ifu_exception_1", false,-1);
    tracep->declBit(c+1807,"flush", false,-1);
    tracep->declBus(c+1808,"pc_flush", false,-1, 31,0);
    tracep->declBus(c+1450,"pc", false,-1, 31,0);
    tracep->declBus(c+1451,"instr", false,-1, 31,0);
    tracep->declBit(c+1452,"valid_fd", false,-1);
    tracep->declBit(c+1453,"ready_rd", false,-1);
    tracep->declBit(c+1454,"compulsory_branch_instrs", false,-1);
    tracep->declBit(c+1452,"valid_de", false,-1);
    tracep->declBit(c+1453,"ready_de", false,-1);
    tracep->declBus(c+1450,"pc_d", false,-1, 31,0);
    tracep->declBit(c+1455,"addi", false,-1);
    tracep->declBit(c+1456,"slti", false,-1);
    tracep->declBit(c+1457,"sltiu", false,-1);
    tracep->declBit(c+1458,"xori", false,-1);
    tracep->declBit(c+1459,"ori", false,-1);
    tracep->declBit(c+1460,"andi", false,-1);
    tracep->declBit(c+1461,"slli", false,-1);
    tracep->declBit(c+1462,"srli", false,-1);
    tracep->declBit(c+1463,"srai", false,-1);
    tracep->declBit(c+1464,"add", false,-1);
    tracep->declBit(c+1465,"sub", false,-1);
    tracep->declBit(c+1466,"sll", false,-1);
    tracep->declBit(c+1467,"slt", false,-1);
    tracep->declBit(c+1468,"sltu", false,-1);
    tracep->declBit(c+1469,"xor_inst", false,-1);
    tracep->declBit(c+1470,"srl", false,-1);
    tracep->declBit(c+1471,"sra", false,-1);
    tracep->declBit(c+1472,"or_inst", false,-1);
    tracep->declBit(c+1473,"and_inst", false,-1);
    tracep->declBit(c+1474,"lb", false,-1);
    tracep->declBit(c+1475,"lh", false,-1);
    tracep->declBit(c+1476,"lw", false,-1);
    tracep->declBit(c+1477,"lbu", false,-1);
    tracep->declBit(c+1478,"lhu", false,-1);
    tracep->declBit(c+1479,"sb", false,-1);
    tracep->declBit(c+1480,"sh", false,-1);
    tracep->declBit(c+1481,"sw", false,-1);
    tracep->declBit(c+1482,"beq", false,-1);
    tracep->declBit(c+1483,"bne", false,-1);
    tracep->declBit(c+1484,"blt", false,-1);
    tracep->declBit(c+1485,"bge", false,-1);
    tracep->declBit(c+1486,"bltu", false,-1);
    tracep->declBit(c+1487,"bgeu", false,-1);
    tracep->declBit(c+1488,"jal", false,-1);
    tracep->declBit(c+1489,"jalr", false,-1);
    tracep->declBit(c+1490,"lui", false,-1);
    tracep->declBit(c+1491,"auipc", false,-1);
    tracep->declBit(c+1492,"ebreak", false,-1);
    tracep->declBit(c+1493,"ecall", false,-1);
    tracep->declBit(c+1494,"csrrw", false,-1);
    tracep->declBit(c+1495,"csrrs", false,-1);
    tracep->declBit(c+1496,"csrrc", false,-1);
    tracep->declBit(c+1497,"mret", false,-1);
    tracep->declBit(c+1498,"fence_i", false,-1);
    tracep->declBit(c+1499,"exception_0", false,-1);
    tracep->declBit(c+1500,"exception_1", false,-1);
    tracep->declBit(c+1501,"exception_2", false,-1);
    tracep->declBus(c+1502,"rd", false,-1, 4,0);
    tracep->declBus(c+1503,"rs1", false,-1, 4,0);
    tracep->declBus(c+1504,"rs2", false,-1, 4,0);
    tracep->declBus(c+1505,"imm", false,-1, 31,0);
    tracep->declBus(c+1451,"instr_de", false,-1, 31,0);
    tracep->declBit(c+1447,"taken_de", false,-1);
    tracep->declBit(c+1506,"is_ls", false,-1);
    tracep->declBit(c+1507,"ren", false,-1);
    tracep->declBit(c+1508,"valid_el", false,-1);
    tracep->declBit(c+1509,"ready_el", false,-1);
    tracep->declBit(c+1510,"io", false,-1);
    tracep->declBus(c+1511,"io_type", false,-1, 1,0);
    tracep->declBit(c+1512,"read_is_u", false,-1);
    tracep->declBus(c+1513,"rd_out", false,-1, 4,0);
    tracep->declBus(c+1514,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+1515,"rs2_out", false,-1, 4,0);
    tracep->declBus(c+1516,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1383,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1809,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+1517,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1516,"rdata2", false,-1, 31,0);
    tracep->declBit(c+655,"valid_lw", false,-1);
    tracep->declBit(c+656,"ready_lw", false,-1);
    tracep->declBus(c+1900,"wdata_lw", false,-1, 31,0);
    tracep->declBus(c+657,"rd_lsu", false,-1, 4,0);
    tracep->declBus(c+658,"lsu_pc_out", false,-1, 31,0);
    tracep->declBit(c+1518,"wen", false,-1);
    tracep->declBus(c+1519,"rd_wbu", false,-1, 4,0);
    tracep->declBus(c+659,"wdata_wbu", false,-1, 31,0);
    tracep->declBus(c+660,"wbu_pc_out", false,-1, 31,0);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+1518,"wen", false,-1);
    tracep->declBit(c+1507,"ren", false,-1);
    tracep->declBus(c+1514,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1515,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1519,"waddr", false,-1, 4,0);
    tracep->declBus(c+659,"wdata", false,-1, 31,0);
    tracep->declBus(c+1517,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1516,"rdata2", false,-1, 31,0);
    tracep->declArray(c+1426,"dbg_regs", false,-1, 511,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1520+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1536,"raddr1_idx", false,-1, 3,0);
    tracep->declBus(c+1537,"raddr2_idx", false,-1, 3,0);
    tracep->declBus(c+1538,"waddr_idx", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+661,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBus(c+1450,"pc", false,-1, 31,0);
    tracep->declBus(c+1451,"instr", false,-1, 31,0);
    tracep->declBus(c+1517,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1516,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1505,"imm", false,-1, 31,0);
    tracep->declBit(c+1464,"add", false,-1);
    tracep->declBit(c+1455,"addi", false,-1);
    tracep->declBit(c+1465,"sub", false,-1);
    tracep->declBit(c+1490,"lui", false,-1);
    tracep->declBit(c+1491,"auipc", false,-1);
    tracep->declBit(c+1473,"and_inst", false,-1);
    tracep->declBit(c+1472,"or_inst", false,-1);
    tracep->declBit(c+1469,"xor_inst", false,-1);
    tracep->declBit(c+1460,"andi", false,-1);
    tracep->declBit(c+1459,"ori", false,-1);
    tracep->declBit(c+1458,"xori", false,-1);
    tracep->declBit(c+1466,"sll", false,-1);
    tracep->declBit(c+1470,"srl", false,-1);
    tracep->declBit(c+1471,"sra", false,-1);
    tracep->declBit(c+1461,"slli", false,-1);
    tracep->declBit(c+1462,"srli", false,-1);
    tracep->declBit(c+1463,"srai", false,-1);
    tracep->declBit(c+1467,"slt", false,-1);
    tracep->declBit(c+1468,"sltu", false,-1);
    tracep->declBit(c+1456,"slti", false,-1);
    tracep->declBit(c+1457,"sltiu", false,-1);
    tracep->declBit(c+1488,"jal", false,-1);
    tracep->declBit(c+1489,"jalr", false,-1);
    tracep->declBit(c+1474,"lb", false,-1);
    tracep->declBit(c+1475,"lh", false,-1);
    tracep->declBit(c+1476,"lw", false,-1);
    tracep->declBit(c+1477,"lbu", false,-1);
    tracep->declBit(c+1478,"lhu", false,-1);
    tracep->declBit(c+1479,"sb", false,-1);
    tracep->declBit(c+1480,"sh", false,-1);
    tracep->declBit(c+1481,"sw", false,-1);
    tracep->declBit(c+1482,"beq", false,-1);
    tracep->declBit(c+1483,"bne", false,-1);
    tracep->declBit(c+1484,"blt", false,-1);
    tracep->declBit(c+1485,"bge", false,-1);
    tracep->declBit(c+1486,"bltu", false,-1);
    tracep->declBit(c+1487,"bgeu", false,-1);
    tracep->declBit(c+1492,"ebreak", false,-1);
    tracep->declBit(c+1493,"ecall", false,-1);
    tracep->declBit(c+1497,"mret", false,-1);
    tracep->declBit(c+1498,"fence_i", false,-1);
    tracep->declBit(c+1494,"csrrw", false,-1);
    tracep->declBit(c+1495,"csrrs", false,-1);
    tracep->declBit(c+1496,"csrrc", false,-1);
    tracep->declBit(c+1499,"exception_0", false,-1);
    tracep->declBit(c+1500,"exception_1", false,-1);
    tracep->declBit(c+1501,"exception_2", false,-1);
    tracep->declBus(c+1502,"rd", false,-1, 4,0);
    tracep->declBus(c+1503,"rs1", false,-1, 4,0);
    tracep->declBus(c+1504,"rs2", false,-1, 4,0);
    tracep->declBit(c+1518,"wen", false,-1);
    tracep->declBus(c+1519,"rd_wb", false,-1, 4,0);
    tracep->declBit(c+1452,"in_valid", false,-1);
    tracep->declBit(c+1453,"in_ready", false,-1);
    tracep->declBit(c+1508,"out_valid", false,-1);
    tracep->declBit(c+1509,"out_ready", false,-1);
    tracep->declBit(c+1506,"is_ls", false,-1);
    tracep->declBit(c+1510,"io", false,-1);
    tracep->declBus(c+1511,"io_type", false,-1, 1,0);
    tracep->declBit(c+1512,"read_is_u", false,-1);
    tracep->declBus(c+1513,"rd_out", false,-1, 4,0);
    tracep->declBus(c+1516,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1383,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1809,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+1514,"rs1_out", false,-1, 4,0);
    tracep->declBus(c+1515,"rs2_out", false,-1, 4,0);
    tracep->declBit(c+1807,"flush", false,-1);
    tracep->declBus(c+1808,"pc_flush", false,-1, 31,0);
    tracep->declBit(c+1539,"ebreak_end", false,-1);
    tracep->declBit(c+1507,"ren", false,-1);
    tracep->declBit(c+1445,"bt_valid", false,-1);
    tracep->declBus(c+1446,"b_pc", false,-1, 31,0);
    tracep->declBus(c+1806,"b_target", false,-1, 31,0);
    tracep->declBit(c+1447,"taken", false,-1);
    tracep->declBit(c+1444,"icache_flush", false,-1);
    tracep->declBus(c+1540,"rd_list", false,-1, 31,0);
    tracep->declBus(c+1541,"rd_amt", false,-1, 31,0);
    tracep->declBit(c+1542,"wen_save", false,-1);
    tracep->declBus(c+1543,"rd_wb_save", false,-1, 4,0);
    tracep->declBus(c+1544,"mstatus", false,-1, 31,0);
    tracep->declBus(c+1545,"mepc", false,-1, 31,0);
    tracep->declBus(c+1546,"mcause", false,-1, 31,0);
    tracep->declBus(c+1547,"mtvec", false,-1, 31,0);
    tracep->declBus(c+662,"mcycle", false,-1, 31,0);
    tracep->declBus(c+663,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+664,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+665,"marchid", false,-1, 31,0);
    tracep->declBus(c+1548,"pc_save", false,-1, 31,0);
    tracep->declBus(c+1549,"imm_save", false,-1, 31,0);
    tracep->declBus(c+1550,"instr_save", false,-1, 31,0);
    tracep->declBit(c+1551,"add_save", false,-1);
    tracep->declBit(c+1552,"addi_save", false,-1);
    tracep->declBit(c+1553,"sub_save", false,-1);
    tracep->declBit(c+1554,"lui_save", false,-1);
    tracep->declBit(c+1555,"auipc_save", false,-1);
    tracep->declBit(c+1556,"and_inst_save", false,-1);
    tracep->declBit(c+1557,"or_inst_save", false,-1);
    tracep->declBit(c+1558,"xor_inst_save", false,-1);
    tracep->declBit(c+1559,"andi_save", false,-1);
    tracep->declBit(c+1560,"ori_save", false,-1);
    tracep->declBit(c+1561,"xori_save", false,-1);
    tracep->declBit(c+1562,"sll_save", false,-1);
    tracep->declBit(c+1563,"srl_save", false,-1);
    tracep->declBit(c+1564,"sra_save", false,-1);
    tracep->declBit(c+1565,"slli_save", false,-1);
    tracep->declBit(c+1566,"srli_save", false,-1);
    tracep->declBit(c+1567,"srai_save", false,-1);
    tracep->declBit(c+1568,"slt_save", false,-1);
    tracep->declBit(c+1569,"sltu_save", false,-1);
    tracep->declBit(c+1570,"slti_save", false,-1);
    tracep->declBit(c+1571,"sltiu_save", false,-1);
    tracep->declBit(c+1572,"jal_save", false,-1);
    tracep->declBit(c+1573,"jalr_save", false,-1);
    tracep->declBit(c+1574,"lb_save", false,-1);
    tracep->declBit(c+1575,"lh_save", false,-1);
    tracep->declBit(c+1576,"lw_save", false,-1);
    tracep->declBit(c+1577,"lbu_save", false,-1);
    tracep->declBit(c+1578,"lhu_save", false,-1);
    tracep->declBit(c+1579,"sb_save", false,-1);
    tracep->declBit(c+1580,"sh_save", false,-1);
    tracep->declBit(c+1581,"sw_save", false,-1);
    tracep->declBit(c+1582,"beq_save", false,-1);
    tracep->declBit(c+1583,"bne_save", false,-1);
    tracep->declBit(c+1584,"blt_save", false,-1);
    tracep->declBit(c+1585,"bge_save", false,-1);
    tracep->declBit(c+1586,"bltu_save", false,-1);
    tracep->declBit(c+1587,"bgeu_save", false,-1);
    tracep->declBit(c+1588,"ebreak_save", false,-1);
    tracep->declBit(c+1589,"ecall_save", false,-1);
    tracep->declBit(c+1590,"mret_save", false,-1);
    tracep->declBit(c+1591,"fence_i_save", false,-1);
    tracep->declBit(c+1592,"csrrw_save", false,-1);
    tracep->declBit(c+1593,"csrrs_save", false,-1);
    tracep->declBit(c+1594,"csrrc_save", false,-1);
    tracep->declBit(c+1595,"exception_0_save", false,-1);
    tracep->declBit(c+1596,"exception_1_save", false,-1);
    tracep->declBit(c+1597,"exception_2_save", false,-1);
    tracep->declBus(c+1513,"rd_save", false,-1, 4,0);
    tracep->declBus(c+1514,"rs1_save", false,-1, 4,0);
    tracep->declBus(c+1515,"rs2_save", false,-1, 4,0);
    tracep->declBus(c+1598,"csr_rst_save", false,-1, 31,0);
    tracep->declBus(c+1599,"csrw_rst", false,-1, 31,0);
    tracep->declBit(c+1600,"taken_save", false,-1);
    tracep->declBus(c+2013,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1964,"BLOCK", false,-1, 2,0);
    tracep->declBus(c+2014,"EX", false,-1, 2,0);
    tracep->declBus(c+2015,"BRANCH", false,-1, 2,0);
    tracep->declBus(c+1601,"state", false,-1, 2,0);
    tracep->declBus(c+1602,"next", false,-1, 2,0);
    tracep->declBit(c+1603,"read", false,-1);
    tracep->declBit(c+1604,"write", false,-1);
    tracep->declBit(c+1605,"is_nlwb", false,-1);
    tracep->declBit(c+1606,"exception", false,-1);
    tracep->declBit(c+1607,"nrs", false,-1);
    tracep->declBit(c+1608,"r_type", false,-1);
    tracep->declBit(c+1609,"s_type", false,-1);
    tracep->declBit(c+1610,"b_type", false,-1);
    tracep->declBit(c+1611,"rsb_type", false,-1);
    tracep->declBit(c+1612,"single_rs", false,-1);
    tracep->declBit(c+1613,"gpr_read_valid", false,-1);
    tracep->declBus(c+1614,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+1615,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+1616,"add1", false,-1, 31,0);
    tracep->declBus(c+1617,"add2", false,-1, 31,0);
    tracep->declBus(c+1618,"add_rst_w", false,-1, 31,0);
    tracep->declBus(c+1619,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+1620,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+1621,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+1622,"or_rst", false,-1, 31,0);
    tracep->declBus(c+1623,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+1624,"and_rst", false,-1, 31,0);
    tracep->declBus(c+1625,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+585,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+586,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+1626,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+1627,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+1628,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+1629,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+1630,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+1631,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+1632,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+1633,"srai_rst", false,-1, 31,0);
    tracep->declBus(c+1634,"csrr_wb", false,-1, 31,0);
    tracep->declBus(c+1635,"csrr_wb_en", false,-1, 2,0);
    tracep->declBus(c+2016,"new_pc", false,-1, 31,0);
    tracep->declBus(c+587,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+1383,"add_rst_w_save", false,-1, 31,0);
    tracep->declBit(c+588,"cmp_lt", false,-1);
    tracep->declBit(c+589,"cmp_eq", false,-1);
    tracep->declBit(c+590,"cmp_ltu", false,-1);
    tracep->declBit(c+1810,"br_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+1442,"fetch_valid", false,-1);
    tracep->declBit(c+77,"instr_valid", false,-1);
    tracep->declBus(c+78,"instr", false,-1, 31,0);
    tracep->declBus(c+79,"fetch_error", false,-1, 1,0);
    tracep->declBus(c+1443,"fetch_addr", false,-1, 31,0);
    tracep->declBit(c+1444,"icache_flush", false,-1);
    tracep->declBus(c+2017,"ICACHE_LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+2018,"ICACHE_LINE_AMT", false,-1, 31,0);
    tracep->declBus(c+2019,"OFFSET_LEN", false,-1, 31,0);
    tracep->declBus(c+2020,"INDEX_LEN", false,-1, 31,0);
    tracep->declBus(c+2021,"TAG_LEN", false,-1, 31,0);
    tracep->declBus(c+2022,"CACHE_LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+2019,"LINE_WORDS", false,-1, 31,0);
    tracep->declBus(c+2023,"BEAT_LEN", false,-1, 31,0);
    tracep->declBus(c+2024,"ARLEN", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+666+i*4,"icache", true,(i+0), 127,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+698+i*1,"tag", true,(i+0), 24,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+706+i*1,"valid", true,(i+0));
    }
    tracep->declBus(c+714,"rresp_save", false,-1, 1,0);
    tracep->declBus(c+715,"beat", false,-1, 1,0);
    tracep->declBus(c+1636,"current_tag", false,-1, 24,0);
    tracep->declBus(c+1637,"current_index", false,-1, 2,0);
    tracep->declBus(c+1638,"current_word", false,-1, 31,0);
    tracep->declBus(c+1639,"line_addr", false,-1, 31,0);
    tracep->declBus(c+716,"state", false,-1, 1,0);
    tracep->declBus(c+80,"next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+717,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+718,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+1450,"in_pc", false,-1, 31,0);
    tracep->declBus(c+1451,"in_instr", false,-1, 31,0);
    tracep->declBit(c+1452,"in_valid", false,-1);
    tracep->declBit(c+1453,"in_ready", false,-1);
    tracep->declBit(c+1452,"out_valid", false,-1);
    tracep->declBit(c+1453,"out_ready", false,-1);
    tracep->declBus(c+1450,"out_pc", false,-1, 31,0);
    tracep->declBit(c+1447,"taken", false,-1);
    tracep->declBit(c+1447,"taken_out", false,-1);
    tracep->declBit(c+1448,"ifu_exception_0", false,-1);
    tracep->declBit(c+1449,"ifu_exception_1", false,-1);
    tracep->declBit(c+1455,"addi", false,-1);
    tracep->declBit(c+1456,"slti", false,-1);
    tracep->declBit(c+1457,"sltiu", false,-1);
    tracep->declBit(c+1458,"xori", false,-1);
    tracep->declBit(c+1459,"ori", false,-1);
    tracep->declBit(c+1460,"andi", false,-1);
    tracep->declBit(c+1461,"slli", false,-1);
    tracep->declBit(c+1462,"srli", false,-1);
    tracep->declBit(c+1463,"srai", false,-1);
    tracep->declBit(c+1464,"add", false,-1);
    tracep->declBit(c+1465,"sub", false,-1);
    tracep->declBit(c+1466,"sll", false,-1);
    tracep->declBit(c+1467,"slt", false,-1);
    tracep->declBit(c+1468,"sltu", false,-1);
    tracep->declBit(c+1469,"xor_inst", false,-1);
    tracep->declBit(c+1470,"srl", false,-1);
    tracep->declBit(c+1471,"sra", false,-1);
    tracep->declBit(c+1472,"or_inst", false,-1);
    tracep->declBit(c+1473,"and_inst", false,-1);
    tracep->declBit(c+1474,"lb", false,-1);
    tracep->declBit(c+1475,"lh", false,-1);
    tracep->declBit(c+1476,"lw", false,-1);
    tracep->declBit(c+1477,"lbu", false,-1);
    tracep->declBit(c+1478,"lhu", false,-1);
    tracep->declBit(c+1479,"sb", false,-1);
    tracep->declBit(c+1480,"sh", false,-1);
    tracep->declBit(c+1481,"sw", false,-1);
    tracep->declBit(c+1482,"beq", false,-1);
    tracep->declBit(c+1483,"bne", false,-1);
    tracep->declBit(c+1484,"blt", false,-1);
    tracep->declBit(c+1485,"bge", false,-1);
    tracep->declBit(c+1486,"bltu", false,-1);
    tracep->declBit(c+1487,"bgeu", false,-1);
    tracep->declBit(c+1488,"jal", false,-1);
    tracep->declBit(c+1489,"jalr", false,-1);
    tracep->declBit(c+1490,"lui", false,-1);
    tracep->declBit(c+1491,"auipc", false,-1);
    tracep->declBit(c+1492,"ebreak", false,-1);
    tracep->declBit(c+1493,"ecall", false,-1);
    tracep->declBit(c+1494,"csrrw", false,-1);
    tracep->declBit(c+1495,"csrrs", false,-1);
    tracep->declBit(c+1496,"csrrc", false,-1);
    tracep->declBit(c+1497,"mret", false,-1);
    tracep->declBit(c+1498,"fence_i", false,-1);
    tracep->declBit(c+1499,"exception_0", false,-1);
    tracep->declBit(c+1500,"exception_1", false,-1);
    tracep->declBit(c+1501,"exception_2", false,-1);
    tracep->declBus(c+1502,"rd", false,-1, 4,0);
    tracep->declBus(c+1503,"rs1", false,-1, 4,0);
    tracep->declBus(c+1504,"rs2", false,-1, 4,0);
    tracep->declBus(c+1505,"imm", false,-1, 31,0);
    tracep->declBus(c+1451,"out_instr", false,-1, 31,0);
    tracep->declBus(c+1640,"opcode", false,-1, 6,0);
    tracep->declBus(c+1641,"funct3", false,-1, 2,0);
    tracep->declBus(c+1642,"funct7", false,-1, 6,0);
    tracep->declBus(c+1643,"immI_w", false,-1, 31,0);
    tracep->declBus(c+1644,"immU_w", false,-1, 31,0);
    tracep->declBus(c+1645,"immS_w", false,-1, 31,0);
    tracep->declBus(c+1646,"immB_w", false,-1, 31,0);
    tracep->declBus(c+1647,"immJ_w", false,-1, 31,0);
    tracep->declBus(c+1648,"immCSR_w", false,-1, 31,0);
    tracep->declBus(c+1505,"imm_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+1442,"fetch_valid", false,-1);
    tracep->declBit(c+77,"instr_valid", false,-1);
    tracep->declBus(c+78,"instr", false,-1, 31,0);
    tracep->declBus(c+79,"fetch_error", false,-1, 1,0);
    tracep->declBus(c+1443,"fetch_addr", false,-1, 31,0);
    tracep->declBit(c+1452,"out_valid", false,-1);
    tracep->declBit(c+1453,"out_ready", false,-1);
    tracep->declBus(c+1451,"out_instr", false,-1, 31,0);
    tracep->declBus(c+1450,"out_pc", false,-1, 31,0);
    tracep->declBit(c+1807,"flush", false,-1);
    tracep->declBus(c+1808,"pc_flush", false,-1, 31,0);
    tracep->declBit(c+1454,"cbi", false,-1);
    tracep->declBit(c+1445,"bt_valid", false,-1);
    tracep->declBus(c+1446,"b_pc", false,-1, 31,0);
    tracep->declBus(c+1806,"b_target", false,-1, 31,0);
    tracep->declBit(c+1447,"taken", false,-1);
    tracep->declBit(c+1448,"exception_0", false,-1);
    tracep->declBit(c+1449,"exception_1", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1649+i*1,"btb_pc", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1651+i*1,"btb_target", true,(i+0), 31,0);
    }
    tracep->declBus(c+1653,"valid", false,-1, 1,0);
    tracep->declBit(c+1654,"flush_save", false,-1);
    tracep->declBus(c+1655,"pc_flush_save", false,-1, 31,0);
    tracep->declBus(c+1443,"pc", false,-1, 31,0);
    tracep->declBus(c+1656,"state", false,-1, 1,0);
    tracep->declBus(c+81,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+1506,"is_ls", false,-1);
    tracep->declBit(c+1510,"io", false,-1);
    tracep->declBus(c+1511,"io_type", false,-1, 1,0);
    tracep->declBit(c+1512,"read_is_u", false,-1);
    tracep->declBus(c+1513,"rd", false,-1, 4,0);
    tracep->declBus(c+1516,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1383,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1809,"ic_wb_wdata", false,-1, 31,0);
    tracep->declBus(c+1548,"pc_in", false,-1, 31,0);
    tracep->declBit(c+1508,"in_valid", false,-1);
    tracep->declBit(c+1509,"in_ready", false,-1);
    tracep->declBit(c+655,"out_valid", false,-1);
    tracep->declBit(c+656,"out_ready", false,-1);
    tracep->declBus(c+1900,"wdata", false,-1, 31,0);
    tracep->declBus(c+657,"rd_out", false,-1, 4,0);
    tracep->declBus(c+658,"pc_out", false,-1, 31,0);
    tracep->declBit(c+719,"io_save", false,-1);
    tracep->declBus(c+720,"io_type_save", false,-1, 1,0);
    tracep->declBit(c+721,"read_is_u_save", false,-1);
    tracep->declBus(c+657,"rd_save", false,-1, 4,0);
    tracep->declBus(c+722,"lsu_data_save", false,-1, 31,0);
    tracep->declBus(c+1417,"lsu_addr_save", false,-1, 31,0);
    tracep->declBus(c+723,"ic_wb_wdata_save", false,-1, 31,0);
    tracep->declBus(c+724,"rdata_out", false,-1, 31,0);
    tracep->declBus(c+725,"state", false,-1, 2,0);
    tracep->declBus(c+141,"next", false,-1, 2,0);
    tracep->declBit(c+726,"aw_done", false,-1);
    tracep->declBit(c+727,"w_done", false,-1);
    tracep->declBit(c+142,"aw_done_next", false,-1);
    tracep->declBit(c+143,"w_done_next", false,-1);
    tracep->declBus(c+1657,"lsu_rdata_shifted", false,-1, 31,0);
    tracep->declBit(c+728,"is_word", false,-1);
    tracep->declBit(c+729,"is_half", false,-1);
    tracep->declBit(c+730,"is_byte", false,-1);
    tracep->declBus(c+1901,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBus(c+2025,"MTIME_ADDR", false,-1, 31,0);
    tracep->declBus(c+2026,"MTIMEH_ADDR", false,-1, 31,0);
    tracep->declQuad(c+731,"mtime", false,-1, 63,0);
    tracep->declBus(c+733,"araddr_save", false,-1, 31,0);
    tracep->declBus(c+734,"state", false,-1, 1,0);
    tracep->declBus(c+1658,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBus(c+1659,"state", false,-1, 1,0);
    tracep->declBus(c+71,"next", false,-1, 1,0);
    tracep->declBit(c+735,"sel_clint", false,-1);
    tracep->declBit(c+1660,"sel_lsu", false,-1);
    tracep->declBit(c+1661,"sel_ifu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1899,"reset", false,-1);
    tracep->declBit(c+655,"in_valid", false,-1);
    tracep->declBit(c+656,"in_ready", false,-1);
    tracep->declBus(c+657,"rd", false,-1, 4,0);
    tracep->declBus(c+1900,"wdata", false,-1, 31,0);
    tracep->declBus(c+658,"pc_in", false,-1, 31,0);
    tracep->declBit(c+1518,"wen", false,-1);
    tracep->declBus(c+659,"wdata_wb", false,-1, 31,0);
    tracep->declBus(c+1519,"rd_wb", false,-1, 4,0);
    tracep->declBus(c+660,"pc_out", false,-1, 31,0);
    tracep->declBus(c+2027,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2028,"WB", false,-1, 0,0);
    tracep->declBit(c+736,"state", false,-1);
    tracep->declBit(c+737,"next", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"io_d", false,-1);
    tracep->declBit(c+591,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"io_d", false,-1);
    tracep->declBit(c+591,"io_q", false,-1);
    tracep->declBit(c+591,"sync_0", false,-1);
    tracep->declBit(c+592,"sync_1", false,-1);
    tracep->declBit(c+593,"sync_2", false,-1);
    tracep->declBit(c+594,"sync_3", false,-1);
    tracep->declBit(c+595,"sync_4", false,-1);
    tracep->declBit(c+596,"sync_5", false,-1);
    tracep->declBit(c+597,"sync_6", false,-1);
    tracep->declBit(c+598,"sync_7", false,-1);
    tracep->declBit(c+599,"sync_8", false,-1);
    tracep->declBit(c+600,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1682,"auto_in_psel", false,-1);
    tracep->declBit(c+1683,"auto_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1375,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1964,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1684,"auto_in_pready", false,-1);
    tracep->declBit(c+1685,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1686,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+769,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1960,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+770,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+771,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+772,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+773,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+774,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+775,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+776,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+777,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBus(c+1384,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1682,"in_psel", false,-1);
    tracep->declBit(c+1683,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1684,"in_pready", false,-1);
    tracep->declBus(c+1686,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1685,"in_pslverr", false,-1);
    tracep->declBus(c+769,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1960,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+770,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+771,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+772,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+773,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+774,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+775,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+776,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+777,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+2029,"GPIO_BASE", false,-1, 31,0);
    tracep->declBus(c+769,"gpio_out_r", false,-1, 15,0);
    tracep->declBus(c+903,"seg_reg_0_r", false,-1, 7,0);
    tracep->declBus(c+904,"seg_reg_1_r", false,-1, 7,0);
    tracep->declBus(c+905,"seg_reg_2_r", false,-1, 7,0);
    tracep->declBus(c+906,"seg_reg_3_r", false,-1, 7,0);
    tracep->declBit(c+1700,"valid_access", false,-1);
    tracep->declBus(c+1385,"addr_off", false,-1, 31,0);
    tracep->declBus(c+1386,"addr_sel", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1678,"auto_in_psel", false,-1);
    tracep->declBit(c+1679,"auto_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1375,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1964,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1680,"auto_in_pready", false,-1);
    tracep->declBit(c+1973,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1681,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1961,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1962,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBus(c+1384,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1678,"in_psel", false,-1);
    tracep->declBit(c+1679,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1680,"in_pready", false,-1);
    tracep->declBus(c+1681,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1973,"in_pslverr", false,-1);
    tracep->declBit(c+1961,"ps2_clk", false,-1);
    tracep->declBit(c+1962,"ps2_data", false,-1);
    tracep->declBus(c+1387,"clk_sync", false,-1, 1,0);
    tracep->declBus(c+1388,"dat_sync", false,-1, 1,0);
    tracep->declBit(c+1389,"clk_fall", false,-1);
    tracep->declBit(c+1390,"dat", false,-1);
    tracep->declBus(c+907,"bit_cnt", false,-1, 3,0);
    tracep->declBus(c+908,"shifter", false,-1, 7,0);
    tracep->declBit(c+909,"par_acc", false,-1);
    tracep->declBit(c+910,"frame_ok", false,-1);
    tracep->declBus(c+911,"scancode", false,-1, 7,0);
    tracep->declBit(c+912,"scancode_valid", false,-1);
    tracep->declBit(c+1902,"apb_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1790,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1791,"auto_in_wvalid", false,-1);
    tracep->declBit(c+379,"auto_in_arready", false,-1);
    tracep->declBit(c+1792,"auto_in_arvalid", false,-1);
    tracep->declBus(c+189,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1793,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+10,"auto_in_rready", false,-1);
    tracep->declBit(c+380,"auto_in_rvalid", false,-1);
    tracep->declBus(c+381,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+382,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+380,"state", false,-1);
    tracep->declBus(c+382,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+381,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1811,"raddr", false,-1, 31,0);
    tracep->declBit(c+1812,"ren", false,-1);
    tracep->declBus(c+1813,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1687,"auto_in_psel", false,-1);
    tracep->declBit(c+1873,"auto_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1370,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1964,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1874,"auto_in_pready", false,-1);
    tracep->declBit(c+1973,"auto_in_pslverr", false,-1);
    tracep->declBus(c+153,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1664,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1665,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1814,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBus(c+1370,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1687,"in_psel", false,-1);
    tracep->declBit(c+1873,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1874,"in_pready", false,-1);
    tracep->declBus(c+153,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1973,"in_pslverr", false,-1);
    tracep->declBit(c+1664,"qspi_sck", false,-1);
    tracep->declBit(c+1665,"qspi_ce_n", false,-1);
    tracep->declBus(c+1814,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1814,"din", false,-1, 3,0);
    tracep->declBus(c+1701,"dout", false,-1, 3,0);
    tracep->declBus(c+1702,"douten", false,-1, 3,0);
    tracep->declBit(c+1903,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBus(c+1370,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1372,"dat_i", false,-1, 31,0);
    tracep->declBus(c+153,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1373,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1687,"cyc_i", false,-1);
    tracep->declBit(c+1687,"stb_i", false,-1);
    tracep->declBit(c+1903,"ack_o", false,-1);
    tracep->declBit(c+1371,"we_i", false,-1);
    tracep->declBit(c+1664,"sck", false,-1);
    tracep->declBit(c+1665,"ce_n", false,-1);
    tracep->declBus(c+1814,"din", false,-1, 3,0);
    tracep->declBus(c+1701,"dout", false,-1, 3,0);
    tracep->declBus(c+1702,"douten", false,-1, 3,0);
    tracep->declBus(c+2027,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+2028,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+913,"mr_sck", false,-1);
    tracep->declBit(c+914,"mr_ce_n", false,-1);
    tracep->declBus(c+1814,"mr_din", false,-1, 3,0);
    tracep->declBus(c+915,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+916,"mr_doe", false,-1);
    tracep->declBit(c+917,"mw_sck", false,-1);
    tracep->declBit(c+918,"mw_ce_n", false,-1);
    tracep->declBus(c+1814,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1904,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+919,"mw_doe", false,-1);
    tracep->declBit(c+1703,"mr_rd", false,-1);
    tracep->declBit(c+920,"mr_done", false,-1);
    tracep->declBit(c+1704,"mw_wr", false,-1);
    tracep->declBit(c+1705,"mw_done", false,-1);
    tracep->declBit(c+921,"qpi_mode", false,-1);
    tracep->declBit(c+922,"mr_busy", false,-1);
    tracep->declBit(c+1687,"wb_valid", false,-1);
    tracep->declBit(c+1706,"wb_we", false,-1);
    tracep->declBit(c+1707,"wb_re", false,-1);
    tracep->declBit(c+921,"allow_xfer", false,-1);
    tracep->declBit(c+923,"state", false,-1);
    tracep->declBit(c+1708,"nstate", false,-1);
    tracep->declBus(c+1391,"size", false,-1, 2,0);
    tracep->declBus(c+1392,"byte0", false,-1, 7,0);
    tracep->declBus(c+1393,"byte1", false,-1, 7,0);
    tracep->declBus(c+1394,"byte2", false,-1, 7,0);
    tracep->declBus(c+1395,"byte3", false,-1, 7,0);
    tracep->declBus(c+1396,"wdata", false,-1, 31,0);
    tracep->declBit(c+1709,"use_mr", false,-1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1905,"rst_n", false,-1);
    tracep->declBus(c+1397,"addr", false,-1, 23,0);
    tracep->declBit(c+1703,"rd", false,-1);
    tracep->declBus(c+2030,"size", false,-1, 2,0);
    tracep->declBit(c+920,"done", false,-1);
    tracep->declBus(c+153,"line", false,-1, 31,0);
    tracep->declBit(c+913,"sck", false,-1);
    tracep->declBit(c+914,"ce_n", false,-1);
    tracep->declBus(c+1814,"din", false,-1, 3,0);
    tracep->declBus(c+915,"dout", false,-1, 3,0);
    tracep->declBit(c+916,"douten", false,-1);
    tracep->declBit(c+921,"qpi", false,-1);
    tracep->declBit(c+922,"busy", false,-1);
    tracep->declBus(c+1970,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1971,"ENTER_QPI", false,-1, 1,0);
    tracep->declBus(c+1972,"READ", false,-1, 1,0);
    tracep->declBus(c+2031,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+2032,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+924,"state", false,-1, 1,0);
    tracep->declBus(c+1906,"nstate", false,-1, 1,0);
    tracep->declBus(c+925,"counter", false,-1, 7,0);
    tracep->declBus(c+926,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+601+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+927,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+928,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+929,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+930,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+931,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+932,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+933,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+934,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+935,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+936,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+937,"byte_cnt", false,-1, 7,0);
    tracep->declBus(c+938,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1905,"rst_n", false,-1);
    tracep->declBus(c+1398,"addr", false,-1, 23,0);
    tracep->declBus(c+1396,"line", false,-1, 31,0);
    tracep->declBus(c+1391,"size", false,-1, 2,0);
    tracep->declBit(c+1704,"wr", false,-1);
    tracep->declBit(c+921,"qpi", false,-1);
    tracep->declBit(c+1705,"done", false,-1);
    tracep->declBit(c+917,"sck", false,-1);
    tracep->declBit(c+918,"ce_n", false,-1);
    tracep->declBus(c+1814,"din", false,-1, 3,0);
    tracep->declBus(c+1904,"dout", false,-1, 3,0);
    tracep->declBit(c+919,"douten", false,-1);
    tracep->declBus(c+2027,"IDLE", false,-1, 0,0);
    tracep->declBus(c+2028,"WRITE", false,-1, 0,0);
    tracep->declBit(c+939,"state", false,-1);
    tracep->declBit(c+1710,"nstate", false,-1);
    tracep->declBus(c+940,"counter", false,-1, 7,0);
    tracep->declBus(c+941,"saddr", false,-1, 23,0);
    tracep->declBus(c+2033,"CMD_38H", false,-1, 7,0);
    tracep->declBus(c+927,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+928,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+929,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+942,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1711,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+943,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+944,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+945,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+946,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+947,"dat_off8", false,-1, 7,0);
    tracep->declBus(c+948,"dat_off", false,-1, 2,0);
    tracep->declBus(c+949,"dat_byte", false,-1, 1,0);
    tracep->declBus(c+1907,"dat_nib", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1819,"auto_in_awready", false,-1);
    tracep->declBit(c+1758,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1975,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1417,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1976,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1820,"auto_in_wready", false,-1);
    tracep->declBit(c+1759,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1418,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"auto_in_wlast", false,-1);
    tracep->declBit(c+118,"auto_in_bready", false,-1);
    tracep->declBit(c+794,"auto_in_bvalid", false,-1);
    tracep->declBus(c+791,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1970,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1818,"auto_in_arready", false,-1);
    tracep->declBit(c+1757,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1975,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1413,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1414,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_in_rready", false,-1);
    tracep->declBit(c+790,"auto_in_rvalid", false,-1);
    tracep->declBus(c+791,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+792,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1970,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+793,"auto_in_rlast", false,-1);
    tracep->declBit(c+1871,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1726,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+782,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+783,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+784,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+785,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1727,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1728,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1729,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"sdram_bundle_dq", false,-1, 31,0);
    tracep->declBit(c+1817,"sdram_bundle_sel", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1819,"in_awready", false,-1);
    tracep->declBit(c+1758,"in_awvalid", false,-1);
    tracep->declBus(c+1417,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1975,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1976,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+651,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1970,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1820,"in_wready", false,-1);
    tracep->declBit(c+1759,"in_wvalid", false,-1);
    tracep->declBus(c+1418,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1974,"in_wlast", false,-1);
    tracep->declBit(c+118,"in_bready", false,-1);
    tracep->declBit(c+794,"in_bvalid", false,-1);
    tracep->declBus(c+1970,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+791,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1818,"in_arready", false,-1);
    tracep->declBit(c+1757,"in_arvalid", false,-1);
    tracep->declBus(c+1413,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1975,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1414,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1415,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1416,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+62,"in_rready", false,-1);
    tracep->declBit(c+790,"in_rvalid", false,-1);
    tracep->declBus(c+1970,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+792,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+793,"in_rlast", false,-1);
    tracep->declBus(c+791,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1871,"sdram_clk", false,-1);
    tracep->declBit(c+1726,"sdram_cke", false,-1);
    tracep->declBit(c+782,"sdram_cs", false,-1);
    tracep->declBit(c+783,"sdram_ras", false,-1);
    tracep->declBit(c+784,"sdram_cas", false,-1);
    tracep->declBit(c+785,"sdram_we", false,-1);
    tracep->declBus(c+1727,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1728,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1729,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1817,"sdram_sel", false,-1);
    tracep->declBit(c+950,"sdram_dout_en", false,-1);
    tracep->declBus(c+951,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBit(c+1758,"inport_awvalid_i", false,-1);
    tracep->declBus(c+1417,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1975,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+1976,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1970,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1759,"inport_wvalid_i", false,-1);
    tracep->declBus(c+1418,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1419,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1974,"inport_wlast_i", false,-1);
    tracep->declBit(c+118,"inport_bready_i", false,-1);
    tracep->declBit(c+1757,"inport_arvalid_i", false,-1);
    tracep->declBus(c+1413,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1975,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+1414,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1416,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+62,"inport_rready_i", false,-1);
    tracep->declBus(c+1739,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1819,"inport_awready_o", false,-1);
    tracep->declBit(c+1820,"inport_wready_o", false,-1);
    tracep->declBit(c+794,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1970,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+791,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1818,"inport_arready_o", false,-1);
    tracep->declBit(c+790,"inport_rvalid_o", false,-1);
    tracep->declBus(c+792,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1970,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+791,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+793,"inport_rlast_o", false,-1);
    tracep->declBit(c+1871,"sdram_clk_o", false,-1);
    tracep->declBit(c+1726,"sdram_cke_o", false,-1);
    tracep->declBit(c+782,"sdram_cs_o", false,-1);
    tracep->declBit(c+783,"sdram_ras_o", false,-1);
    tracep->declBit(c+784,"sdram_cas_o", false,-1);
    tracep->declBit(c+785,"sdram_we_o", false,-1);
    tracep->declBus(c+1729,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1727,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1728,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+951,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+950,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1817,"sdram_sel_o", false,-1);
    tracep->declBus(c+1965,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2021,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1980,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1828,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1829,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1830,"ram_rd_w", false,-1);
    tracep->declBit(c+1730,"ram_accept_w", false,-1);
    tracep->declBus(c+1418,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+952,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+1908,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+953,"ram_ack_w", false,-1);
    tracep->declBit(c+1973,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBit(c+1758,"axi_awvalid_i", false,-1);
    tracep->declBus(c+1417,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+1975,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+1976,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+1970,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+1759,"axi_wvalid_i", false,-1);
    tracep->declBus(c+1418,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+1419,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+1974,"axi_wlast_i", false,-1);
    tracep->declBit(c+118,"axi_bready_i", false,-1);
    tracep->declBit(c+1757,"axi_arvalid_i", false,-1);
    tracep->declBus(c+1413,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+1975,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+1414,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+1416,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+62,"axi_rready_i", false,-1);
    tracep->declBit(c+1730,"ram_accept_i", false,-1);
    tracep->declBit(c+953,"ram_ack_i", false,-1);
    tracep->declBit(c+1973,"ram_error_i", false,-1);
    tracep->declBus(c+952,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1819,"axi_awready_o", false,-1);
    tracep->declBit(c+1820,"axi_wready_o", false,-1);
    tracep->declBit(c+794,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1970,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+791,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1818,"axi_arready_o", false,-1);
    tracep->declBit(c+790,"axi_rvalid_o", false,-1);
    tracep->declBus(c+792,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1970,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+791,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+793,"axi_rlast_o", false,-1);
    tracep->declBus(c+1829,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+1830,"ram_rd_o", false,-1);
    tracep->declBus(c+1908,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1828,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+1418,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+954,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+955,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+956,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+957,"req_rd_q", false,-1);
    tracep->declBit(c+958,"req_wr_q", false,-1);
    tracep->declBus(c+959,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+960,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+961,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+962,"req_prio_q", false,-1);
    tracep->declBit(c+963,"req_hold_rd_q", false,-1);
    tracep->declBit(c+964,"req_hold_wr_q", false,-1);
    tracep->declBit(c+965,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1831,"req_push_w", false,-1);
    tracep->declBus(c+1909,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+966,"req_out_valid_w", false,-1);
    tracep->declBus(c+967,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+144,"resp_accept_w", false,-1);
    tracep->declBit(c+968,"resp_is_write_w", false,-1);
    tracep->declBit(c+969,"resp_is_read_w", false,-1);
    tracep->declBit(c+793,"resp_is_last_w", false,-1);
    tracep->declBus(c+791,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+970,"resp_valid_w", false,-1);
    tracep->declBit(c+971,"write_prio_w", false,-1);
    tracep->declBit(c+972,"read_prio_w", false,-1);
    tracep->declBit(c+1832,"write_active_w", false,-1);
    tracep->declBit(c+1830,"read_active_w", false,-1);
    tracep->declBus(c+1828,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1910,"wr_w", false,-1);
    tracep->declBit(c+1830,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1978,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2019,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2023,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBus(c+1909,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1831,"push_i", false,-1);
    tracep->declBit(c+144,"pop_i", false,-1);
    tracep->declBus(c+967,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+965,"accept_o", false,-1);
    tracep->declBit(c+966,"valid_o", false,-1);
    tracep->declBus(c+2020,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+973+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+977,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+978,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+979,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1977,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+2019,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+2023,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBus(c+952,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+953,"push_i", false,-1);
    tracep->declBit(c+144,"pop_i", false,-1);
    tracep->declBus(c+792,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+980,"accept_o", false,-1);
    tracep->declBit(c+970,"valid_o", false,-1);
    tracep->declBus(c+2020,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+981+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+985,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+986,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+987,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBus(c+1829,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1830,"inport_rd_i", false,-1);
    tracep->declBus(c+1908,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1828,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1418,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1739,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1730,"inport_accept_o", false,-1);
    tracep->declBit(c+953,"inport_ack_o", false,-1);
    tracep->declBit(c+1973,"inport_error_o", false,-1);
    tracep->declBus(c+952,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1871,"sdram_clk_o", false,-1);
    tracep->declBit(c+1726,"sdram_cke_o", false,-1);
    tracep->declBit(c+782,"sdram_cs_o", false,-1);
    tracep->declBit(c+783,"sdram_ras_o", false,-1);
    tracep->declBit(c+784,"sdram_cas_o", false,-1);
    tracep->declBit(c+785,"sdram_we_o", false,-1);
    tracep->declBus(c+1729,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1727,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1728,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+951,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+950,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1817,"sdram_sel_o", false,-1);
    tracep->declBus(c+1965,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+2021,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1980,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+2019,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+2019,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+2034,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_COL_LSB", false,-1, 31,0);
    tracep->declBus(c+2035,"SDRAM_BANK_LSB", false,-1, 31,0);
    tracep->declBus(c+2034,"SDRAM_ROW_LSB", false,-1, 31,0);
    tracep->declBus(c+2036,"SDRAM_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+2037,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+2038,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+2039,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2019,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+2040,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+2041,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+2042,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+2043,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+2044,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+2045,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2046,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1975,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+2047,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+2019,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1975,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+2046,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+2045,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+2041,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+2043,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+2042,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+2044,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+2040,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+2048,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+2049,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+2050,"STATE_READ_GAP", false,-1, 3,0);
    tracep->declBus(c+2051,"STATE_WRITE_GAP", false,-1, 3,0);
    tracep->declBus(c+1967,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1967,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1977,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1967,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+2023,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1978,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1828,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1829,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1830,"ram_rd_w", false,-1);
    tracep->declBit(c+1730,"ram_accept_w", false,-1);
    tracep->declBus(c+1418,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+952,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+953,"ram_ack_w", false,-1);
    tracep->declBit(c+1833,"ram_req_w", false,-1);
    tracep->declBus(c+988,"command_q", false,-1, 3,0);
    tracep->declBus(c+1727,"addr_q", false,-1, 12,0);
    tracep->declBus(c+951,"data_q", false,-1, 31,0);
    tracep->declBit(c+989,"data_rd_en_q", false,-1);
    tracep->declBus(c+1729,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1726,"cke_q", false,-1);
    tracep->declBus(c+1728,"bank_q", false,-1, 1,0);
    tracep->declBus(c+952,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+990,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1739,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+991,"refresh_q", false,-1);
    tracep->declBus(c+992,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+993+i*1,"active_row_q", true,(i+0), 13,0);
    }
    tracep->declBus(c+1731,"state_q", false,-1, 3,0);
    tracep->declBus(c+1834,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1835,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+997,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+998,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+1817,"sdram_sel", false,-1);
    tracep->declBus(c+1836,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1837,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1838,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+2019,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+999,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1839,"delay_r", false,-1, 3,0);
    tracep->declBus(c+2052,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1732,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1000,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+1001,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1002,"idx", false,-1, 31,0);
    tracep->declBus(c+1003,"rd_q", false,-1, 3,0);
    tracep->declBit(c+953,"ack_q", false,-1);
    tracep->declArray(c+1733,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1692,"auto_in_psel", false,-1);
    tracep->declBit(c+1693,"auto_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1964,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1875,"auto_in_pready", false,-1);
    tracep->declBit(c+1376,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1876,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+779,"spi_bundle_sck", false,-1);
    tracep->declBus(c+780,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+781,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1870,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+2053,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2054,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+2018,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBus(c+1399,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1692,"in_psel", false,-1);
    tracep->declBit(c+1693,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1875,"in_pready", false,-1);
    tracep->declBus(c+1876,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1376,"in_pslverr", false,-1);
    tracep->declBit(c+779,"spi_sck", false,-1);
    tracep->declBus(c+780,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+781,"spi_mosi", false,-1);
    tracep->declBit(c+1870,"spi_miso", false,-1);
    tracep->declBit(c+1004,"spi_irq_out", false,-1);
    tracep->declBit(c+1400,"xip_sel", false,-1);
    tracep->declBus(c+2055,"REG_TX0", false,-1, 4,0);
    tracep->declBus(c+2056,"REG_TX1", false,-1, 4,0);
    tracep->declBus(c+2055,"REG_RX0", false,-1, 4,0);
    tracep->declBus(c+2057,"REG_CTRL", false,-1, 4,0);
    tracep->declBus(c+2058,"REG_DIV", false,-1, 4,0);
    tracep->declBus(c+2059,"REG_SS", false,-1, 4,0);
    tracep->declBus(c+2060,"CTRL_XFER64", false,-1, 31,0);
    tracep->declBus(c+2061,"CTRL_GO", false,-1, 31,0);
    tracep->declBus(c+1712,"spi_adr", false,-1, 4,0);
    tracep->declBus(c+1713,"spi_dat_i", false,-1, 31,0);
    tracep->declBus(c+1714,"spi_sel", false,-1, 3,0);
    tracep->declBit(c+1715,"spi_we", false,-1);
    tracep->declBit(c+1716,"spi_stb", false,-1);
    tracep->declBit(c+1717,"spi_cyc", false,-1);
    tracep->declBus(c+1005,"spi_dat_o", false,-1, 31,0);
    tracep->declBit(c+1006,"spi_ack", false,-1);
    tracep->declBit(c+1973,"spi_err", false,-1);
    tracep->declBus(c+1975,"S_IDLE", false,-1, 3,0);
    tracep->declBus(c+2046,"S_DIV", false,-1, 3,0);
    tracep->declBus(c+2045,"S_SS", false,-1, 3,0);
    tracep->declBus(c+2041,"S_TX1", false,-1, 3,0);
    tracep->declBus(c+2043,"S_TX0", false,-1, 3,0);
    tracep->declBus(c+2042,"S_CTRL", false,-1, 3,0);
    tracep->declBus(c+2044,"S_POLL", false,-1, 3,0);
    tracep->declBus(c+2040,"S_RX", false,-1, 3,0);
    tracep->declBus(c+2048,"S_RXLAT", false,-1, 3,0);
    tracep->declBus(c+2049,"S_UNSS", false,-1, 3,0);
    tracep->declBus(c+2050,"S_DONE", false,-1, 3,0);
    tracep->declBus(c+1007,"state", false,-1, 3,0);
    tracep->declBus(c+1008,"xip_addr", false,-1, 31,0);
    tracep->declBus(c+1009,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+1010,"xip_ready", false,-1);
    tracep->declBit(c+1011,"poll_go_seen", false,-1);
    tracep->declBit(c+1736,"wr_err_seen", false,-1);
    tracep->declBus(c+1012,"xip_adr", false,-1, 4,0);
    tracep->declBus(c+1013,"xip_dat", false,-1, 31,0);
    tracep->declBit(c+1014,"xip_we", false,-1);
    tracep->declBit(c+1015,"xip_req", false,-1);
    tracep->declBit(c+1016,"xip_busy", false,-1);
    tracep->declBus(c+1017,"xip_cmd", false,-1, 31,0);
    tracep->declBus(c+1018,"rx_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+2062,"Tp", false,-1, 31,0);
    tracep->declBit(c+1846,"wb_clk_i", false,-1);
    tracep->declBit(c+1847,"wb_rst_i", false,-1);
    tracep->declBus(c+1712,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1713,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+1005,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1714,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1715,"wb_we_i", false,-1);
    tracep->declBit(c+1716,"wb_stb_i", false,-1);
    tracep->declBit(c+1717,"wb_cyc_i", false,-1);
    tracep->declBit(c+1006,"wb_ack_o", false,-1);
    tracep->declBit(c+1973,"wb_err_o", false,-1);
    tracep->declBit(c+1004,"wb_int_o", false,-1);
    tracep->declBus(c+780,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+779,"sclk_pad_o", false,-1);
    tracep->declBit(c+781,"mosi_pad_o", false,-1);
    tracep->declBit(c+1870,"miso_pad_i", false,-1);
    tracep->declBus(c+1019,"divider", false,-1, 15,0);
    tracep->declBus(c+1020,"ctrl", false,-1, 13,0);
    tracep->declBus(c+1021,"ss", false,-1, 7,0);
    tracep->declBus(c+1718,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+1022,"rx", false,-1, 127,0);
    tracep->declBit(c+1026,"rx_negedge", false,-1);
    tracep->declBit(c+1027,"tx_negedge", false,-1);
    tracep->declBus(c+1028,"char_len", false,-1, 6,0);
    tracep->declBit(c+1029,"go", false,-1);
    tracep->declBit(c+1030,"lsb", false,-1);
    tracep->declBit(c+1031,"ie", false,-1);
    tracep->declBit(c+1032,"ass", false,-1);
    tracep->declBit(c+1719,"spi_divider_sel", false,-1);
    tracep->declBit(c+1720,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1721,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1722,"spi_ss_sel", false,-1);
    tracep->declBit(c+1033,"tip", false,-1);
    tracep->declBit(c+1034,"pos_edge", false,-1);
    tracep->declBit(c+1035,"neg_edge", false,-1);
    tracep->declBit(c+1036,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+2062,"Tp", false,-1, 31,0);
    tracep->declBit(c+1846,"clk_in", false,-1);
    tracep->declBit(c+1847,"rst", false,-1);
    tracep->declBit(c+1033,"enable", false,-1);
    tracep->declBit(c+1029,"go", false,-1);
    tracep->declBit(c+1036,"last_clk", false,-1);
    tracep->declBus(c+1019,"divider", false,-1, 15,0);
    tracep->declBit(c+779,"clk_out", false,-1);
    tracep->declBit(c+1034,"pos_edge", false,-1);
    tracep->declBit(c+1035,"neg_edge", false,-1);
    tracep->declBus(c+1037,"cnt", false,-1, 15,0);
    tracep->declBit(c+1038,"cnt_zero", false,-1);
    tracep->declBit(c+1039,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+2062,"Tp", false,-1, 31,0);
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1847,"rst", false,-1);
    tracep->declBus(c+1723,"latch", false,-1, 3,0);
    tracep->declBus(c+1714,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+1028,"len", false,-1, 6,0);
    tracep->declBit(c+1030,"lsb", false,-1);
    tracep->declBit(c+1029,"go", false,-1);
    tracep->declBit(c+1034,"pos_edge", false,-1);
    tracep->declBit(c+1035,"neg_edge", false,-1);
    tracep->declBit(c+1026,"rx_negedge", false,-1);
    tracep->declBit(c+1027,"tx_negedge", false,-1);
    tracep->declBit(c+1033,"tip", false,-1);
    tracep->declBit(c+1036,"last", false,-1);
    tracep->declBus(c+1713,"p_in", false,-1, 31,0);
    tracep->declArray(c+1022,"p_out", false,-1, 127,0);
    tracep->declBit(c+779,"s_clk", false,-1);
    tracep->declBit(c+1870,"s_in", false,-1);
    tracep->declBit(c+781,"s_out", false,-1);
    tracep->declBus(c+1040,"cnt", false,-1, 7,0);
    tracep->declArray(c+1022,"data", false,-1, 127,0);
    tracep->declBus(c+1041,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+1042,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+1043,"rx_clk", false,-1);
    tracep->declBit(c+1044,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1688,"auto_in_psel", false,-1);
    tracep->declBit(c+1689,"auto_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1375,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1964,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1690,"auto_in_pready", false,-1);
    tracep->declBit(c+1973,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1691,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1963,"uart_rx", false,-1);
    tracep->declBit(c+778,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1688,"in_psel", false,-1);
    tracep->declBit(c+1689,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1690,"in_pready", false,-1);
    tracep->declBit(c+1973,"in_pslverr", false,-1);
    tracep->declBus(c+1384,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1691,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1963,"uart_rx", false,-1);
    tracep->declBit(c+778,"uart_tx", false,-1);
    tracep->declBit(c+1045,"rtsn", false,-1);
    tracep->declBit(c+1973,"ctsn", false,-1);
    tracep->declBit(c+1046,"dtr_pad_o", false,-1);
    tracep->declBit(c+1973,"dsr_pad_i", false,-1);
    tracep->declBit(c+1973,"ri_pad_i", false,-1);
    tracep->declBit(c+1973,"dcd_pad_i", false,-1);
    tracep->declBit(c+1047,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1401,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1402,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+605,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1724,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1048,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1847,"wb_rst_i", false,-1);
    tracep->declBus(c+1401,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1403,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1724,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+778,"stx_pad_o", false,-1);
    tracep->declBit(c+1963,"srx_pad_i", false,-1);
    tracep->declBus(c+2048,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1048,"rts_pad_o", false,-1);
    tracep->declBit(c+1046,"dtr_pad_o", false,-1);
    tracep->declBit(c+1047,"int_o", false,-1);
    tracep->declBit(c+1049,"enable", false,-1);
    tracep->declBit(c+1050,"srx_pad", false,-1);
    tracep->declBus(c+1051,"ier", false,-1, 3,0);
    tracep->declBus(c+1052,"iir", false,-1, 3,0);
    tracep->declBus(c+1053,"fcr", false,-1, 1,0);
    tracep->declBus(c+1054,"mcr", false,-1, 4,0);
    tracep->declBus(c+1055,"lcr", false,-1, 7,0);
    tracep->declBus(c+1056,"msr", false,-1, 7,0);
    tracep->declBus(c+1057,"dl", false,-1, 15,0);
    tracep->declBus(c+1058,"scratch", false,-1, 7,0);
    tracep->declBit(c+1059,"start_dlc", false,-1);
    tracep->declBit(c+1060,"lsr_mask_d", false,-1);
    tracep->declBit(c+1061,"msi_reset", false,-1);
    tracep->declBus(c+1062,"dlc", false,-1, 15,0);
    tracep->declBus(c+1063,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1064,"rx_reset", false,-1);
    tracep->declBit(c+1065,"tx_reset", false,-1);
    tracep->declBit(c+1066,"dlab", false,-1);
    tracep->declBit(c+1974,"cts_pad_i", false,-1);
    tracep->declBit(c+1973,"dsr_pad_i", false,-1);
    tracep->declBit(c+1973,"ri_pad_i", false,-1);
    tracep->declBit(c+1973,"dcd_pad_i", false,-1);
    tracep->declBit(c+1067,"loopback", false,-1);
    tracep->declBit(c+1973,"cts", false,-1);
    tracep->declBit(c+1974,"dsr", false,-1);
    tracep->declBit(c+1974,"ri", false,-1);
    tracep->declBit(c+1974,"dcd", false,-1);
    tracep->declBit(c+1068,"cts_c", false,-1);
    tracep->declBit(c+1069,"dsr_c", false,-1);
    tracep->declBit(c+1070,"ri_c", false,-1);
    tracep->declBit(c+1071,"dcd_c", false,-1);
    tracep->declBus(c+1072,"lsr", false,-1, 7,0);
    tracep->declBit(c+1073,"lsr0", false,-1);
    tracep->declBit(c+1074,"lsr1", false,-1);
    tracep->declBit(c+1075,"lsr2", false,-1);
    tracep->declBit(c+1076,"lsr3", false,-1);
    tracep->declBit(c+1077,"lsr4", false,-1);
    tracep->declBit(c+1078,"lsr5", false,-1);
    tracep->declBit(c+1079,"lsr6", false,-1);
    tracep->declBit(c+1080,"lsr7", false,-1);
    tracep->declBit(c+1081,"lsr0r", false,-1);
    tracep->declBit(c+1082,"lsr1r", false,-1);
    tracep->declBit(c+1083,"lsr2r", false,-1);
    tracep->declBit(c+1084,"lsr3r", false,-1);
    tracep->declBit(c+1085,"lsr4r", false,-1);
    tracep->declBit(c+1086,"lsr5r", false,-1);
    tracep->declBit(c+1087,"lsr6r", false,-1);
    tracep->declBit(c+1088,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+1089,"rls_int", false,-1);
    tracep->declBit(c+1090,"rda_int", false,-1);
    tracep->declBit(c+1091,"ti_int", false,-1);
    tracep->declBit(c+1092,"thre_int", false,-1);
    tracep->declBit(c+1093,"ms_int", false,-1);
    tracep->declBit(c+1094,"tf_push", false,-1);
    tracep->declBit(c+1095,"rf_pop", false,-1);
    tracep->declBus(c+1911,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1096,"rf_error_bit", false,-1);
    tracep->declBit(c+1074,"rf_overrun", false,-1);
    tracep->declBit(c+1097,"rf_push_pulse", false,-1);
    tracep->declBus(c+1098,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1099,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1100,"tstate", false,-1, 2,0);
    tracep->declBus(c+1101,"rstate", false,-1, 3,0);
    tracep->declBus(c+1102,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1103,"thre_set_en", false,-1);
    tracep->declBus(c+1104,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1105,"block_value", false,-1, 7,0);
    tracep->declBit(c+1106,"serial_out", false,-1);
    tracep->declBit(c+1107,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+1108,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1109,"lsr0_d", false,-1);
    tracep->declBit(c+1110,"lsr1_d", false,-1);
    tracep->declBit(c+1111,"lsr2_d", false,-1);
    tracep->declBit(c+1112,"lsr3_d", false,-1);
    tracep->declBit(c+1113,"lsr4_d", false,-1);
    tracep->declBit(c+1114,"lsr5_d", false,-1);
    tracep->declBit(c+1115,"lsr6_d", false,-1);
    tracep->declBit(c+1116,"lsr7_d", false,-1);
    tracep->declBit(c+1117,"rls_int_d", false,-1);
    tracep->declBit(c+1118,"thre_int_d", false,-1);
    tracep->declBit(c+1119,"ms_int_d", false,-1);
    tracep->declBit(c+1120,"ti_int_d", false,-1);
    tracep->declBit(c+1121,"rda_int_d", false,-1);
    tracep->declBit(c+1122,"rls_int_rise", false,-1);
    tracep->declBit(c+1123,"thre_int_rise", false,-1);
    tracep->declBit(c+1124,"ms_int_rise", false,-1);
    tracep->declBit(c+1125,"ti_int_rise", false,-1);
    tracep->declBit(c+1126,"rda_int_rise", false,-1);
    tracep->declBit(c+1127,"rls_int_pnd", false,-1);
    tracep->declBit(c+1128,"rda_int_pnd", false,-1);
    tracep->declBit(c+1129,"thre_int_pnd", false,-1);
    tracep->declBit(c+1130,"ms_int_pnd", false,-1);
    tracep->declBit(c+1131,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+2062,"Tp", false,-1, 31,0);
    tracep->declBus(c+2062,"width", false,-1, 31,0);
    tracep->declBus(c+2028,"init_value", false,-1, 0,0);
    tracep->declBit(c+1847,"rst_i", false,-1);
    tracep->declBit(c+1846,"clk_i", false,-1);
    tracep->declBit(c+1973,"stage1_rst_i", false,-1);
    tracep->declBit(c+1974,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1963,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1050,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1132,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1847,"wb_rst_i", false,-1);
    tracep->declBus(c+1055,"lcr", false,-1, 7,0);
    tracep->declBit(c+1095,"rf_pop", false,-1);
    tracep->declBit(c+1107,"srx_pad_i", false,-1);
    tracep->declBit(c+1049,"enable", false,-1);
    tracep->declBit(c+1064,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+1102,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1098,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1911,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1074,"rf_overrun", false,-1);
    tracep->declBit(c+1096,"rf_error_bit", false,-1);
    tracep->declBus(c+1101,"rstate", false,-1, 3,0);
    tracep->declBit(c+1097,"rf_push_pulse", false,-1);
    tracep->declBus(c+1133,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1134,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1135,"rshift", false,-1, 7,0);
    tracep->declBit(c+1136,"rparity", false,-1);
    tracep->declBit(c+1137,"rparity_error", false,-1);
    tracep->declBit(c+1138,"rframing_error", false,-1);
    tracep->declBit(c+1139,"rbit_in", false,-1);
    tracep->declBit(c+1140,"rparity_xor", false,-1);
    tracep->declBus(c+1141,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1142,"rf_push_q", false,-1);
    tracep->declBus(c+1143,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1144,"rf_push", false,-1);
    tracep->declBit(c+1145,"break_error", false,-1);
    tracep->declBit(c+1146,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1147,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1148,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1149,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1975,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+2046,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+2045,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+2041,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+2043,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+2042,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+2044,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+2040,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+2048,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2049,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2050,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1150,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1151,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+2035,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2017,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2019,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1979,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1847,"wb_rst_i", false,-1);
    tracep->declBit(c+1097,"push", false,-1);
    tracep->declBit(c+1095,"pop", false,-1);
    tracep->declBus(c+1143,"data_in", false,-1, 10,0);
    tracep->declBit(c+1064,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1911,"data_out", false,-1, 10,0);
    tracep->declBit(c+1074,"overrun", false,-1);
    tracep->declBus(c+1098,"count", false,-1, 4,0);
    tracep->declBit(c+1096,"error_bit", false,-1);
    tracep->declBus(c+1912,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1152+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1168,"top", false,-1, 3,0);
    tracep->declBus(c+1169,"bottom", false,-1, 3,0);
    tracep->declBus(c+1170,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1171,"word0", false,-1, 2,0);
    tracep->declBus(c+1172,"word1", false,-1, 2,0);
    tracep->declBus(c+1173,"word2", false,-1, 2,0);
    tracep->declBus(c+1174,"word3", false,-1, 2,0);
    tracep->declBus(c+1175,"word4", false,-1, 2,0);
    tracep->declBus(c+1176,"word5", false,-1, 2,0);
    tracep->declBus(c+1177,"word6", false,-1, 2,0);
    tracep->declBus(c+1178,"word7", false,-1, 2,0);
    tracep->declBus(c+1179,"word8", false,-1, 2,0);
    tracep->declBus(c+1180,"word9", false,-1, 2,0);
    tracep->declBus(c+1181,"word10", false,-1, 2,0);
    tracep->declBus(c+1182,"word11", false,-1, 2,0);
    tracep->declBus(c+1183,"word12", false,-1, 2,0);
    tracep->declBus(c+1184,"word13", false,-1, 2,0);
    tracep->declBus(c+1185,"word14", false,-1, 2,0);
    tracep->declBus(c+1186,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+2019,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2018,"data_width", false,-1, 31,0);
    tracep->declBus(c+2017,"depth", false,-1, 31,0);
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1097,"we", false,-1);
    tracep->declBus(c+1168,"a", false,-1, 3,0);
    tracep->declBus(c+1169,"dpra", false,-1, 3,0);
    tracep->declBus(c+1187,"di", false,-1, 7,0);
    tracep->declBus(c+1912,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+606+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1847,"wb_rst_i", false,-1);
    tracep->declBus(c+1055,"lcr", false,-1, 7,0);
    tracep->declBit(c+1094,"tf_push", false,-1);
    tracep->declBus(c+1403,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1049,"enable", false,-1);
    tracep->declBit(c+1065,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+1106,"stx_pad_o", false,-1);
    tracep->declBus(c+1100,"tstate", false,-1, 2,0);
    tracep->declBus(c+1099,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1188,"counter", false,-1, 4,0);
    tracep->declBus(c+1189,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1190,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1191,"stx_o_tmp", false,-1);
    tracep->declBit(c+1192,"parity_xor", false,-1);
    tracep->declBit(c+1193,"tf_pop", false,-1);
    tracep->declBit(c+1194,"bit_out", false,-1);
    tracep->declBus(c+1403,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1725,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1195,"tf_overrun", false,-1);
    tracep->declBus(c+2013,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1964,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+2015,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+2014,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+2030,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+2063,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+2018,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+2017,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+2019,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1979,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1847,"wb_rst_i", false,-1);
    tracep->declBit(c+1094,"push", false,-1);
    tracep->declBit(c+1193,"pop", false,-1);
    tracep->declBus(c+1403,"data_in", false,-1, 7,0);
    tracep->declBit(c+1065,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1725,"data_out", false,-1, 7,0);
    tracep->declBit(c+1195,"overrun", false,-1);
    tracep->declBus(c+1099,"count", false,-1, 4,0);
    tracep->declBus(c+1196,"top", false,-1, 3,0);
    tracep->declBus(c+1197,"bottom", false,-1, 3,0);
    tracep->declBus(c+1198,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+2019,"addr_width", false,-1, 31,0);
    tracep->declBus(c+2018,"data_width", false,-1, 31,0);
    tracep->declBus(c+2017,"depth", false,-1, 31,0);
    tracep->declBit(c+1846,"clk", false,-1);
    tracep->declBit(c+1094,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 3,0);
    tracep->declBus(c+1197,"dpra", false,-1, 3,0);
    tracep->declBus(c+1403,"di", false,-1, 7,0);
    tracep->declBus(c+1725,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+622+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBit(c+1675,"auto_in_psel", false,-1);
    tracep->declBit(c+1676,"auto_in_penable", false,-1);
    tracep->declBit(c+1371,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1964,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1372,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1677,"auto_in_pready", false,-1);
    tracep->declBit(c+1973,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1872,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+145,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+146,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+147,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+148,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+149,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+150,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1846,"clock", false,-1);
    tracep->declBit(c+1847,"reset", false,-1);
    tracep->declBus(c+1399,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1675,"in_psel", false,-1);
    tracep->declBit(c+1676,"in_penable", false,-1);
    tracep->declBus(c+1964,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1371,"in_pwrite", false,-1);
    tracep->declBus(c+1372,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1373,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1677,"in_pready", false,-1);
    tracep->declBus(c+1872,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1973,"in_pslverr", false,-1);
    tracep->declBus(c+145,"vga_r", false,-1, 7,0);
    tracep->declBus(c+146,"vga_g", false,-1, 7,0);
    tracep->declBus(c+147,"vga_b", false,-1, 7,0);
    tracep->declBit(c+148,"vga_hsync", false,-1);
    tracep->declBit(c+149,"vga_vsync", false,-1);
    tracep->declBit(c+150,"vga_valid", false,-1);
    tracep->declBus(c+2064,"FB_AW", false,-1, 31,0);
    tracep->declBit(c+1913,"apb_wr", false,-1);
    tracep->declBit(c+1914,"apb_rd", false,-1);
    tracep->declBus(c+1404,"fb_index", false,-1, 18,0);
    tracep->declBus(c+2065,"H_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2066,"H_SYNC", false,-1, 9,0);
    tracep->declBus(c+2067,"H_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2068,"H_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+2069,"V_TOTAL", false,-1, 9,0);
    tracep->declBus(c+2070,"V_SYNC", false,-1, 9,0);
    tracep->declBus(c+2071,"V_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+2072,"V_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+638,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+639,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+640,"h_valid", false,-1);
    tracep->declBit(c+641,"v_valid", false,-1);
    tracep->declBus(c+642,"h_addr", false,-1, 9,0);
    tracep->declBus(c+643,"v_addr", false,-1, 9,0);
    tracep->declBus(c+644,"vga_index", false,-1, 18,0);
    tracep->declBus(c+645,"pixel_q", false,-1, 31,0);
    tracep->declBit(c+646,"h_valid_q", false,-1);
    tracep->declBit(c+647,"v_valid_q", false,-1);
    tracep->declBit(c+148,"hsync_q", false,-1);
    tracep->declBit(c+149,"vsync_q", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+779,"sck", false,-1);
    tracep->declBit(c+1199,"ss", false,-1);
    tracep->declBit(c+781,"mosi", false,-1);
    tracep->declBit(c+1200,"miso", false,-1);
    tracep->declBus(c+648,"buffer", false,-1, 7,0);
    tracep->declBus(c+649,"bits", false,-1, 3,0);
    tracep->declBus(c+2073,"state", false,-1, 1,0);
    tracep->declBus(c+1201,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+779,"sck", false,-1);
    tracep->declBit(c+1202,"ss", false,-1);
    tracep->declBit(c+781,"mosi", false,-1);
    tracep->declBit(c+1915,"miso", false,-1);
    tracep->declBit(c+1202,"reset", false,-1);
    tracep->declBus(c+1409,"state", false,-1, 2,0);
    tracep->declBus(c+1410,"counter", false,-1, 7,0);
    tracep->declBus(c+1916,"cmd", false,-1, 7,0);
    tracep->declBus(c+1917,"addr", false,-1, 23,0);
    tracep->declBus(c+1411,"data", false,-1, 31,0);
    tracep->declBit(c+1412,"ren", false,-1);
    tracep->declBus(c+650,"rdata", false,-1, 31,0);
    tracep->declBus(c+1918,"raddr", false,-1, 31,0);
    tracep->declBus(c+1919,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+779,"clock", false,-1);
    tracep->declBit(c+1412,"valid", false,-1);
    tracep->declBus(c+1916,"cmd", false,-1, 7,0);
    tracep->declBus(c+1918,"addr", false,-1, 31,0);
    tracep->declBus(c+650,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1664,"sck", false,-1);
    tracep->declBit(c+1665,"ce_n", false,-1);
    tracep->declBus(c+1814,"dio", false,-1, 3,0);
    tracep->declBus(c+2013,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1964,"CTRL", false,-1, 2,0);
    tracep->declBus(c+2015,"ADDR", false,-1, 2,0);
    tracep->declBus(c+2014,"ARRG", false,-1, 2,0);
    tracep->declBus(c+2030,"READ", false,-1, 2,0);
    tracep->declBus(c+2063,"WRITE", false,-1, 2,0);
    tracep->declBus(c+2031,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+2033,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+2032,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+746,"state", false,-1, 2,0);
    tracep->declBus(c+1815,"next", false,-1, 2,0);
    tracep->declBus(c+747,"ctrl", false,-1, 7,0);
    tracep->declBus(c+748,"addr", false,-1, 23,0);
    tracep->declBus(c+749,"counter", false,-1, 7,0);
    tracep->declBus(c+750,"dout", false,-1, 3,0);
    tracep->declBus(c+751,"wr_hi", false,-1, 3,0);
    tracep->declBit(c+752,"qpi", false,-1);
    tracep->declBit(c+753,"douten", false,-1);
    tracep->declBus(c+754,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+755,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+756,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+757,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+758,"RD_FIRST", false,-1, 7,0);
    tracep->declBus(c+759,"RD_LAST", false,-1, 7,0);
    tracep->declBus(c+760,"WR_FIRST", false,-1, 7,0);
    tracep->declBus(c+761,"WR_LAST", false,-1, 7,0);
    tracep->declBus(c+762,"rd_off", false,-1, 7,0);
    tracep->declBus(c+763,"wr_off", false,-1, 7,0);
    tracep->declBus(c+764,"read_byte", false,-1, 1,0);
    tracep->declBit(c+765,"read_index", false,-1);
    tracep->declBus(c+766,"write_byte", false,-1, 1,0);
    tracep->declBus(c+767,"rd_idx", false,-1, 21,0);
    tracep->declBus(c+768,"wr_idx", false,-1, 21,0);
    tracep->declBus(c+1816,"ctrl_done", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+782,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1729,"dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"dq", false,-1, 31,0);
    tracep->declBit(c+1817,"sel", false,-1);
    tracep->declBit(c+1203,"broadcast_cmd", false,-1);
    tracep->pushNamePrefix("u_pair0 ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+1920,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1729,"dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+1920,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1737,"dqm", false,-1, 1,0);
    tracep->declBus(c+1740,"dq", false,-1, 15,0);
    tracep->declBus(c+2074,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2062,"MODE", false,-1, 31,0);
    tracep->declBus(c+2023,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2020,"READ", false,-1, 31,0);
    tracep->declBus(c+2019,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1204,"state", false,-1, 2,0);
    tracep->declBus(c+1842,"next", false,-1, 2,0);
    tracep->declBus(c+1205,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1206,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1207,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1840,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1208,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1209,"dq_oe", false,-1);
    tracep->declBus(c+1210,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1211,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1212+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+1920,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1738,"dqm", false,-1, 1,0);
    tracep->declBus(c+1741,"dq", false,-1, 15,0);
    tracep->declBus(c+2074,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2062,"MODE", false,-1, 31,0);
    tracep->declBus(c+2023,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2020,"READ", false,-1, 31,0);
    tracep->declBus(c+2019,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1216,"state", false,-1, 2,0);
    tracep->declBus(c+1843,"next", false,-1, 2,0);
    tracep->declBus(c+1217,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1218,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1219,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1840,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1220,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1221,"dq_oe", false,-1);
    tracep->declBus(c+1222,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1223,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1224+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pair1 ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+1921,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1729,"dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+1921,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1737,"dqm", false,-1, 1,0);
    tracep->declBus(c+1740,"dq", false,-1, 15,0);
    tracep->declBus(c+2074,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2062,"MODE", false,-1, 31,0);
    tracep->declBus(c+2023,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2020,"READ", false,-1, 31,0);
    tracep->declBus(c+2019,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1228,"state", false,-1, 2,0);
    tracep->declBus(c+1844,"next", false,-1, 2,0);
    tracep->declBus(c+1229,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1230,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1231,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1841,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1232,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1233,"dq_oe", false,-1);
    tracep->declBus(c+1234,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1235,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1236+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1871,"clk", false,-1);
    tracep->declBit(c+1726,"cke", false,-1);
    tracep->declBit(c+1921,"cs", false,-1);
    tracep->declBit(c+783,"ras", false,-1);
    tracep->declBit(c+784,"cas", false,-1);
    tracep->declBit(c+785,"we", false,-1);
    tracep->declBus(c+1727,"a", false,-1, 12,0);
    tracep->declBus(c+1728,"ba", false,-1, 1,0);
    tracep->declBus(c+1738,"dqm", false,-1, 1,0);
    tracep->declBus(c+1741,"dq", false,-1, 15,0);
    tracep->declBus(c+2074,"IDLE", false,-1, 31,0);
    tracep->declBus(c+2062,"MODE", false,-1, 31,0);
    tracep->declBus(c+2023,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+2020,"READ", false,-1, 31,0);
    tracep->declBus(c+2019,"WRITE", false,-1, 31,0);
    tracep->declBus(c+1240,"state", false,-1, 2,0);
    tracep->declBus(c+1845,"next", false,-1, 2,0);
    tracep->declBus(c+1241,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+1242,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+1243,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1841,"ctrl", false,-1, 3,0);
    tracep->declBus(c+1244,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1245,"dq_oe", false,-1);
    tracep->declBus(c+1246,"cur_a", false,-1, 8,0);
    tracep->declBus(c+1247,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1248+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_ref ");
    tracep->declBit(c+1848,"clk", false,-1);
    tracep->declBit(c+1849,"rst", false,-1);
    tracep->declArray(c+1922,"dbg_reg", false,-1, 1023,0);
    tracep->declBus(c+1252,"instr", false,-1, 31,0);
    tracep->declBus(c+1253,"pc", false,-1, 31,0);
    tracep->declBus(c+1254,"last_pc", false,-1, 31,0);
    tracep->declBus(c+1255,"mstatus", false,-1, 31,0);
    tracep->declBus(c+1256,"mepc", false,-1, 31,0);
    tracep->declBus(c+1257,"mcause", false,-1, 31,0);
    tracep->declBus(c+1258,"mtvec", false,-1, 31,0);
    tracep->declBus(c+1259,"mcycle", false,-1, 31,0);
    tracep->declBus(c+1260,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+1261,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+1262,"marchid", false,-1, 31,0);
    tracep->declBit(c+1263,"addi", false,-1);
    tracep->declBit(c+1264,"slti", false,-1);
    tracep->declBit(c+1265,"sltiu", false,-1);
    tracep->declBit(c+1266,"xori", false,-1);
    tracep->declBit(c+1267,"ori", false,-1);
    tracep->declBit(c+1268,"andi", false,-1);
    tracep->declBit(c+1269,"slli", false,-1);
    tracep->declBit(c+1270,"srli", false,-1);
    tracep->declBit(c+1271,"srai", false,-1);
    tracep->declBit(c+1272,"add", false,-1);
    tracep->declBit(c+1273,"sub", false,-1);
    tracep->declBit(c+1274,"sll", false,-1);
    tracep->declBit(c+1275,"slt", false,-1);
    tracep->declBit(c+1276,"sltu", false,-1);
    tracep->declBit(c+1277,"xor_inst", false,-1);
    tracep->declBit(c+1278,"srl", false,-1);
    tracep->declBit(c+1279,"sra", false,-1);
    tracep->declBit(c+1280,"or_inst", false,-1);
    tracep->declBit(c+1281,"and_inst", false,-1);
    tracep->declBit(c+1282,"lb", false,-1);
    tracep->declBit(c+1283,"lh", false,-1);
    tracep->declBit(c+1284,"lw", false,-1);
    tracep->declBit(c+1285,"lbu", false,-1);
    tracep->declBit(c+1286,"lhu", false,-1);
    tracep->declBit(c+1287,"sb", false,-1);
    tracep->declBit(c+1288,"sh", false,-1);
    tracep->declBit(c+1289,"sw", false,-1);
    tracep->declBit(c+1290,"beq", false,-1);
    tracep->declBit(c+1291,"bne", false,-1);
    tracep->declBit(c+1292,"blt", false,-1);
    tracep->declBit(c+1293,"bge", false,-1);
    tracep->declBit(c+1294,"bltu", false,-1);
    tracep->declBit(c+1295,"bgeu", false,-1);
    tracep->declBit(c+1296,"jal", false,-1);
    tracep->declBit(c+1297,"jalr", false,-1);
    tracep->declBit(c+1298,"lui", false,-1);
    tracep->declBit(c+1299,"auipc", false,-1);
    tracep->declBit(c+1300,"ebreak", false,-1);
    tracep->declBit(c+1301,"ecall", false,-1);
    tracep->declBit(c+1302,"mret", false,-1);
    tracep->declBit(c+1303,"csrrw", false,-1);
    tracep->declBit(c+1304,"csrrs", false,-1);
    tracep->declBit(c+1305,"csrrc", false,-1);
    tracep->declBus(c+1306,"rd", false,-1, 4,0);
    tracep->declBus(c+1307,"rs1", false,-1, 4,0);
    tracep->declBus(c+1308,"rs2", false,-1, 4,0);
    tracep->declBus(c+1309,"immI", false,-1, 31,0);
    tracep->declBus(c+1310,"immU", false,-1, 31,0);
    tracep->declBus(c+1311,"immS", false,-1, 31,0);
    tracep->declBus(c+1312,"immB", false,-1, 31,0);
    tracep->declBus(c+1313,"immJ", false,-1, 31,0);
    tracep->declBus(c+1314,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1315,"wdata", false,-1, 31,0);
    tracep->declBus(c+1316,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1317,"rdata2", false,-1, 31,0);
    tracep->declBit(c+1867,"wen", false,-1);
    tracep->declBus(c+1318,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+1319,"add1", false,-1, 31,0);
    tracep->declBus(c+1320,"add2", false,-1, 31,0);
    tracep->declBus(c+1321,"add_rst", false,-1, 31,0);
    tracep->declBus(c+1322,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+1323,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+1324,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+1325,"or_rst", false,-1, 31,0);
    tracep->declBus(c+1326,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+1327,"and_rst", false,-1, 31,0);
    tracep->declBus(c+1328,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+1329,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+1330,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+1331,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+1332,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+1333,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+1308,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+1334,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+1335,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+1336,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+1337,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+1338,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+1339,"srai_rst", false,-1, 31,0);
    tracep->declBus(c+1340,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+1341,"read_rst", false,-1, 31,0);
    tracep->declBus(c+1342,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1343,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1344,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1345,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1346,"lh_rst", false,-1, 31,0);
    tracep->pushNamePrefix("Decode ");
    tracep->declBus(c+1252,"instr", false,-1, 31,0);
    tracep->declBit(c+1263,"addi", false,-1);
    tracep->declBit(c+1264,"slti", false,-1);
    tracep->declBit(c+1265,"sltiu", false,-1);
    tracep->declBit(c+1266,"xori", false,-1);
    tracep->declBit(c+1267,"ori", false,-1);
    tracep->declBit(c+1268,"andi", false,-1);
    tracep->declBit(c+1269,"slli", false,-1);
    tracep->declBit(c+1270,"srli", false,-1);
    tracep->declBit(c+1271,"srai", false,-1);
    tracep->declBit(c+1272,"add", false,-1);
    tracep->declBit(c+1273,"sub", false,-1);
    tracep->declBit(c+1274,"sll", false,-1);
    tracep->declBit(c+1275,"slt", false,-1);
    tracep->declBit(c+1276,"sltu", false,-1);
    tracep->declBit(c+1277,"xor_inst", false,-1);
    tracep->declBit(c+1278,"srl", false,-1);
    tracep->declBit(c+1279,"sra", false,-1);
    tracep->declBit(c+1280,"or_inst", false,-1);
    tracep->declBit(c+1281,"and_inst", false,-1);
    tracep->declBit(c+1282,"lb", false,-1);
    tracep->declBit(c+1283,"lh", false,-1);
    tracep->declBit(c+1284,"lw", false,-1);
    tracep->declBit(c+1285,"lbu", false,-1);
    tracep->declBit(c+1286,"lhu", false,-1);
    tracep->declBit(c+1287,"sb", false,-1);
    tracep->declBit(c+1288,"sh", false,-1);
    tracep->declBit(c+1289,"sw", false,-1);
    tracep->declBit(c+1290,"beq", false,-1);
    tracep->declBit(c+1291,"bne", false,-1);
    tracep->declBit(c+1292,"blt", false,-1);
    tracep->declBit(c+1293,"bge", false,-1);
    tracep->declBit(c+1294,"bltu", false,-1);
    tracep->declBit(c+1295,"bgeu", false,-1);
    tracep->declBit(c+1296,"jal", false,-1);
    tracep->declBit(c+1297,"jalr", false,-1);
    tracep->declBit(c+1298,"lui", false,-1);
    tracep->declBit(c+1299,"auipc", false,-1);
    tracep->declBit(c+1300,"ebreak", false,-1);
    tracep->declBit(c+1301,"ecall", false,-1);
    tracep->declBit(c+1303,"csrrw", false,-1);
    tracep->declBit(c+1304,"csrrs", false,-1);
    tracep->declBit(c+1305,"csrrc", false,-1);
    tracep->declBit(c+1302,"mret", false,-1);
    tracep->declBus(c+1306,"rd", false,-1, 4,0);
    tracep->declBus(c+1307,"rs1", false,-1, 4,0);
    tracep->declBus(c+1308,"rs2", false,-1, 4,0);
    tracep->declBus(c+1309,"immI", false,-1, 31,0);
    tracep->declBus(c+1310,"immU", false,-1, 31,0);
    tracep->declBus(c+1311,"immS", false,-1, 31,0);
    tracep->declBus(c+1312,"immB", false,-1, 31,0);
    tracep->declBus(c+1313,"immJ", false,-1, 31,0);
    tracep->declBus(c+1314,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1347,"opcode", false,-1, 6,0);
    tracep->declBus(c+1348,"funct3", false,-1, 2,0);
    tracep->declBus(c+1349,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+1848,"clk", false,-1);
    tracep->declBit(c+1849,"rst", false,-1);
    tracep->declBit(c+1867,"wen", false,-1);
    tracep->declBus(c+1307,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1308,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1306,"waddr", false,-1, 4,0);
    tracep->declBus(c+1315,"wdata", false,-1, 31,0);
    tracep->declBus(c+1316,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1317,"rdata2", false,-1, 31,0);
    tracep->declArray(c+1851,"dbg_regs", false,-1, 511,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1350+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+1366,"raddr1_idx", false,-1, 3,0);
    tracep->declBus(c+1367,"raddr2_idx", false,-1, 3,0);
    tracep->declBus(c+1368,"waddr_idx", false,-1, 3,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1369,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1417,"araddr", false,-1, 31,0);
    tracep->declBit(c+738,"arvalid", false,-1);
    tracep->declBit(c+1954,"arready", false,-1);
    tracep->declBus(c+1975,"arid", false,-1, 3,0);
    tracep->declBus(c+1976,"arlen", false,-1, 7,0);
    tracep->declBus(c+1970,"arburst", false,-1, 1,0);
    tracep->declBus(c+739,"arsize", false,-1, 2,0);
    tracep->declBus(c+1955,"rdata", false,-1, 31,0);
    tracep->declBus(c+1956,"rresp", false,-1, 1,0);
    tracep->declBit(c+55,"rvalid", false,-1);
    tracep->declBit(c+740,"rready", false,-1);
    tracep->declBus(c+1957,"rid", false,-1, 3,0);
    tracep->declBit(c+1958,"rlast", false,-1);
    tracep->declBus(c+1417,"awaddr", false,-1, 31,0);
    tracep->declBit(c+652,"awvalid", false,-1);
    tracep->declBit(c+1821,"awready", false,-1);
    tracep->declBus(c+651,"awsize", false,-1, 2,0);
    tracep->declBus(c+1975,"awid", false,-1, 3,0);
    tracep->declBus(c+1976,"awlen", false,-1, 7,0);
    tracep->declBus(c+1970,"awburst", false,-1, 1,0);
    tracep->declBus(c+1418,"wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"wstrb", false,-1, 3,0);
    tracep->declBit(c+653,"wvalid", false,-1);
    tracep->declBit(c+1890,"wready", false,-1);
    tracep->declBit(c+1974,"wlast", false,-1);
    tracep->declBus(c+1891,"bresp", false,-1, 1,0);
    tracep->declBit(c+120,"bvalid", false,-1);
    tracep->declBit(c+654,"bready", false,-1);
    tracep->declBus(c+121,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1413,"araddr", false,-1, 31,0);
    tracep->declBit(c+1420,"arvalid", false,-1);
    tracep->declBit(c+1822,"arready", false,-1);
    tracep->declBus(c+1975,"arid", false,-1, 3,0);
    tracep->declBus(c+1414,"arlen", false,-1, 7,0);
    tracep->declBus(c+1416,"arburst", false,-1, 1,0);
    tracep->declBus(c+1415,"arsize", false,-1, 2,0);
    tracep->declBus(c+65,"rdata", false,-1, 31,0);
    tracep->declBus(c+66,"rresp", false,-1, 1,0);
    tracep->declBit(c+43,"rvalid", false,-1);
    tracep->declBit(c+54,"rready", false,-1);
    tracep->declBus(c+64,"rid", false,-1, 3,0);
    tracep->declBit(c+67,"rlast", false,-1);
    tracep->declBus(c+1417,"awaddr", false,-1, 31,0);
    tracep->declBit(c+652,"awvalid", false,-1);
    tracep->declBit(c+1821,"awready", false,-1);
    tracep->declBus(c+651,"awsize", false,-1, 2,0);
    tracep->declBus(c+1975,"awid", false,-1, 3,0);
    tracep->declBus(c+1976,"awlen", false,-1, 7,0);
    tracep->declBus(c+1970,"awburst", false,-1, 1,0);
    tracep->declBus(c+1418,"wdata", false,-1, 31,0);
    tracep->declBus(c+1419,"wstrb", false,-1, 3,0);
    tracep->declBit(c+653,"wvalid", false,-1);
    tracep->declBit(c+1890,"wready", false,-1);
    tracep->declBit(c+1974,"wlast", false,-1);
    tracep->declBus(c+1891,"bresp", false,-1, 1,0);
    tracep->declBit(c+120,"bvalid", false,-1);
    tracep->declBit(c+654,"bready", false,-1);
    tracep->declBus(c+121,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1417,"araddr", false,-1, 31,0);
    tracep->declBit(c+1662,"arvalid", false,-1);
    tracep->declBit(c+1663,"arready", false,-1);
    tracep->declBus(c+1975,"arid", false,-1, 3,0);
    tracep->declBus(c+1976,"arlen", false,-1, 7,0);
    tracep->declBus(c+1970,"arburst", false,-1, 1,0);
    tracep->declBus(c+739,"arsize", false,-1, 2,0);
    tracep->declBus(c+741,"rdata", false,-1, 31,0);
    tracep->declBus(c+742,"rresp", false,-1, 1,0);
    tracep->declBit(c+743,"rvalid", false,-1);
    tracep->declBit(c+740,"rready", false,-1);
    tracep->declBus(c+1975,"rid", false,-1, 3,0);
    tracep->declBit(c+744,"rlast", false,-1);
    tracep->declBus(c+2012,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1973,"awvalid", false,-1);
    tracep->declBit(c+1973,"awready", false,-1);
    tracep->declBus(c+2013,"awsize", false,-1, 2,0);
    tracep->declBus(c+1975,"awid", false,-1, 3,0);
    tracep->declBus(c+1976,"awlen", false,-1, 7,0);
    tracep->declBus(c+1970,"awburst", false,-1, 1,0);
    tracep->declBus(c+2012,"wdata", false,-1, 31,0);
    tracep->declBus(c+1975,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1973,"wvalid", false,-1);
    tracep->declBit(c+1973,"wready", false,-1);
    tracep->declBit(c+1973,"wlast", false,-1);
    tracep->declBus(c+1970,"bresp", false,-1, 1,0);
    tracep->declBit(c+1973,"bvalid", false,-1);
    tracep->declBit(c+1973,"bready", false,-1);
    tracep->declBus(c+1975,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1639,"araddr", false,-1, 31,0);
    tracep->declBit(c+745,"arvalid", false,-1);
    tracep->declBit(c+1959,"arready", false,-1);
    tracep->declBus(c+1975,"arid", false,-1, 3,0);
    tracep->declBus(c+2024,"arlen", false,-1, 7,0);
    tracep->declBus(c+1971,"arburst", false,-1, 1,0);
    tracep->declBus(c+2015,"arsize", false,-1, 2,0);
    tracep->declBus(c+65,"rdata", false,-1, 31,0);
    tracep->declBus(c+66,"rresp", false,-1, 1,0);
    tracep->declBit(c+43,"rvalid", false,-1);
    tracep->declBit(c+56,"rready", false,-1);
    tracep->declBus(c+64,"rid", false,-1, 3,0);
    tracep->declBit(c+67,"rlast", false,-1);
    tracep->declBus(c+2012,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1973,"awvalid", false,-1);
    tracep->declBit(c+2075,"awready", false,-1);
    tracep->declBus(c+2015,"awsize", false,-1, 2,0);
    tracep->declBus(c+1975,"awid", false,-1, 3,0);
    tracep->declBus(c+1976,"awlen", false,-1, 7,0);
    tracep->declBus(c+1970,"awburst", false,-1, 1,0);
    tracep->declBus(c+2012,"wdata", false,-1, 31,0);
    tracep->declBus(c+1975,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1973,"wvalid", false,-1);
    tracep->declBit(c+2076,"wready", false,-1);
    tracep->declBit(c+2077,"wlast", false,-1);
    tracep->declBus(c+2078,"bresp", false,-1, 1,0);
    tracep->declBit(c+2079,"bvalid", false,-1);
    tracep->declBit(c+1973,"bready", false,-1);
    tracep->declBus(c+2080,"bid", false,-1, 3,0);
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
    tracep->pushNamePrefix("bus_lsu\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_master\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache ");
    tracep->pushNamePrefix("mbus\211 ");
    Vtop___024root__trace_init_sub__TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache__0(vlSelf, tracep);
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
    VlWide<32>/*1023:0*/ __Vtemp_hf4c6a2b0__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+2,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+3,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                           & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+12,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+13,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+14,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+15,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+16,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+17,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+19,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+21,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+23,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+24,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+25,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+26,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+28,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+29,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+30,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+31,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+32,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+33,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+35,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+36,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+37,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+38,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+39,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+40,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+41,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+42,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+43,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_rvalid));
    bufp->fullBit(oldp+44,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+45,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+46,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+47,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+48,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+49,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+50,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_rready));
    bufp->fullBit(oldp+51,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+52,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+53,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.rready));
    bufp->fullBit(oldp+57,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+58,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rid),4);
    bufp->fullIData(oldp+59,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rdata),32);
    bufp->fullCData(oldp+60,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rresp),2);
    bufp->fullBit(oldp+61,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+62,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+63,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__r_beat_arriving));
    bufp->fullCData(oldp+64,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12),4);
    bufp->fullIData(oldp+65,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata),32);
    bufp->fullCData(oldp+66,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp),2);
    bufp->fullBit(oldp+67,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3));
    bufp->fullSData(oldp+68,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12)))),16);
    bufp->fullBit(oldp+69,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+70,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullCData(oldp+71,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__next),2);
    bufp->fullBit(oldp+72,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+73,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+74,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+75,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+76,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+77,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_valid));
    bufp->fullIData(oldp+78,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr_icache),32);
    bufp->fullCData(oldp+79,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_error),2);
    bufp->fullCData(oldp+80,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__next),2);
    bufp->fullCData(oldp+81,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next),2);
    bufp->fullBit(oldp+82,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                            & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+84,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+85,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+86,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+87,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+88,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+89,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+90,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+91,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+92,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 9U)))));
    bufp->fullBit(oldp+93,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+94,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+95,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+96,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+97,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                  & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & ((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+100,((0x7fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+101,((0x3fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+102,((0x1fffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+103,((0xfffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+104,((0x7ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+105,((0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+106,((0x1ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+107,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+108,((0x7fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+109,((0x3fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+110,((0x1fU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+111,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+112,((7U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+113,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+115,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+116,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bid),4);
    bufp->fullCData(oldp+117,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bresp),2);
    bufp->fullBit(oldp+118,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullBit(oldp+119,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_arriving));
    bufp->fullBit(oldp+120,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_bvalid));
    bufp->fullCData(oldp+121,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5),4);
    bufp->fullSData(oldp+122,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_bT_5)))),16);
    bufp->fullBit(oldp+123,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullBit(oldp+124,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+125,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+126,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+127,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+128,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+129,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+130,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+131,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+132,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+133,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+134,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+135,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+136,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+137,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+138,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+139,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullCData(oldp+140,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__next),2);
    bufp->fullCData(oldp+141,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next),3);
    bufp->fullBit(oldp+142,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next));
    bufp->fullBit(oldp+143,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next));
    bufp->fullBit(oldp+144,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullCData(oldp+145,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+146,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q 
                                        >> 8U))),8);
    bufp->fullCData(oldp+147,((0xffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q)),8);
    bufp->fullBit(oldp+148,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync_q));
    bufp->fullBit(oldp+149,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync_q));
    bufp->fullBit(oldp+150,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q) 
                             & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q))));
    bufp->fullBit(oldp+151,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+152,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+153,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+154,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+155,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+156,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+157,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+158,((0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+159,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+161,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+162,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+163,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+165,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+167,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 0x2bU)))),4);
    bufp->fullIData(oldp+168,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                       >> 0xbU))),32);
    bufp->fullCData(oldp+169,((0xffU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                                >> 3U)))),8);
    bufp->fullCData(oldp+170,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+171,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+172,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+173,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+174,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+175,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+176,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+177,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+178,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+179,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+180,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+181,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+182,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+183,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+184,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+185,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+186,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                       >> 2U))),4);
    bufp->fullCData(oldp+187,((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+188,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+189,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullBit(oldp+190,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+191,((0xfU & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                               >> 0x23U)))),4);
    bufp->fullIData(oldp+192,((IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+193,((3U & (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+194,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+195,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+196,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+197,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+198,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+199,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+200,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+201,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+202,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+203,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+204,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+205,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+206,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+207,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+208,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+209,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+210,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+211,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+213,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+215,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+217,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+218,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+219,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+220,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+221,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+222,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+223,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+224,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+226,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+228,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+230,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+231,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+232,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+233,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+234,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+235,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+236,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+237,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+239,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+241,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+243,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+244,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+245,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+246,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+247,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+248,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+249,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+250,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+252,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+254,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+256,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+260,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+261,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+263,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+264,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+265,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_h2168da81__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_h2168da81__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_h2168da81__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_h2168da81__0
                                                             : 0U)
                                                            : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+266,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+267,((((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+268,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+269,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+270,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+271,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+272,((1U & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+273,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+274,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+275,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+276,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+277,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+278,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+279,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+280,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+281,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+282,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+283,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+284,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+285,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+286,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+287,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+288,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+289,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+290,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+291,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+292,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+293,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+294,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+295,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+296,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+297,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+298,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+299,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+300,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+302,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+303,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+304,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+306,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+307,((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+308,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+310,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+312,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+313,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+314,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+315,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+316,(((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_h2168da81__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_h2168da81__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_h2168da81__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_h2168da81__0
                                                        : 0U)
                                                       : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+317,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+318,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+319,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+320,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+321,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+322,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+323,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+324,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+325,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+326,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+327,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+328,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+329,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+330,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+331,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+332,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+333,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+334,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+335,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+336,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+337,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+338,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+339,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+340,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+341,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+342,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+343,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+344,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+345,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+346,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+347,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+348,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+349,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+350,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+351,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+352,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+353,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+354,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+355,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+356,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+357,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+358,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+359,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+360,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+361,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+362,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+363,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+364,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+365,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+366,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+367,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+368,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+371,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+372,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+373,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+374,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+375,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+376,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+377,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+378,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+380,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+381,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+382,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+383,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+384,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+385,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+386,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+387,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+388,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+389,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+390,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+391,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+392,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+393,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+394,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+395,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+396,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+397,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+398,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+399,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+400,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+401,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+402,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+403,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+404,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+405,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+406,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+407,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+408,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+409,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+410,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+411,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+412,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+413,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+414,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+415,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+416,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+417,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+418,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+419,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+420,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+421,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+422,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+423,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+424,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+425,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+426,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+427,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+428,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+429,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+430,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+431,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+432,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+433,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+434,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+435,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+436,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+437,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+438,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+439,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+440,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+441,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+442,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+443,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+444,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+445,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+446,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+448,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+449,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+450,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+451,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+452,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+453,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+454,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+455,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+456,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+457,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+458,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+459,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+460,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+461,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+462,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+463,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+464,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+465,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+466,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+467,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+468,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+470,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+471,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+472,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+473,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+474,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+475,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+476,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+477,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+478,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+479,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+480,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+481,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+482,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+483,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+484,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+485,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+486,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+487,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+488,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+491,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+492,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+493,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+494,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+495,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+496,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+497,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+498,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+499,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+500,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+517,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+518,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+519,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+520,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+522,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+523,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+524,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+526,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+527,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+528,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+530,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+531,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+532,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+533,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+534,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+535,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+536,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+537,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+538,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+539,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+540,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+541,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+542,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+543,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+544,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+546,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+547,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+548,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+549,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+550,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+551,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+552,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+553,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+554,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+555,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+556,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+558,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+559,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+560,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+563,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+564,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+566,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+567,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+568,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+569,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+570,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+571,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+572,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+574,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+575,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+576,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+578,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+579,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+580,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+581,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+582,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+583,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+584,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+585,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt),32);
    bufp->fullIData(oldp+586,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu),32);
    bufp->fullIData(oldp+587,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_next_dft),32);
    bufp->fullBit(oldp+588,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_lt));
    bufp->fullBit(oldp+589,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_eq));
    bufp->fullBit(oldp+590,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__cmp_ltu));
    bufp->fullBit(oldp+591,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+592,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+593,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+594,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+595,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+596,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+597,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+598,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+599,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+600,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+601,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+602,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+603,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+604,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+605,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+606,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+607,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+608,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+609,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+610,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+611,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+612,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+613,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+614,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+615,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+616,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+617,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+618,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+619,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+620,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+621,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+622,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+623,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+624,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+625,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+626,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+627,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+628,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+629,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+630,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+631,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+632,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+633,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+634,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+635,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+636,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+637,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+638,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+639,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+640,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+641,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+642,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+643,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+644,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullIData(oldp+645,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q),32);
    bufp->fullBit(oldp+646,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q));
    bufp->fullBit(oldp+647,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q));
    bufp->fullCData(oldp+648,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__buffer),8);
    bufp->fullCData(oldp+649,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__bits),4);
    bufp->fullIData(oldp+650,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__rdata),32);
    bufp->fullCData(oldp+651,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize),3);
    bufp->fullBit(oldp+652,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
    bufp->fullBit(oldp+653,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
    bufp->fullBit(oldp+654,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready));
    bufp->fullBit(oldp+655,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_lw));
    bufp->fullBit(oldp+656,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_lw));
    bufp->fullCData(oldp+657,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rd_save),5);
    bufp->fullIData(oldp+658,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_pc_out),32);
    bufp->fullIData(oldp+659,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata_wbu),32);
    bufp->fullIData(oldp+660,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_pc_out),32);
    bufp->fullIData(oldp+661,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+662,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycle),32);
    bufp->fullIData(oldp+663,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcycleh),32);
    bufp->fullIData(oldp+664,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mvendorid),32);
    bufp->fullIData(oldp+665,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__marchid),32);
    bufp->fullWData(oldp+666,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[0]),128);
    bufp->fullWData(oldp+670,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[1]),128);
    bufp->fullWData(oldp+674,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[2]),128);
    bufp->fullWData(oldp+678,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[3]),128);
    bufp->fullWData(oldp+682,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[4]),128);
    bufp->fullWData(oldp+686,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[5]),128);
    bufp->fullWData(oldp+690,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[6]),128);
    bufp->fullWData(oldp+694,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__icache[7]),128);
    bufp->fullIData(oldp+698,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[0]),25);
    bufp->fullIData(oldp+699,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[1]),25);
    bufp->fullIData(oldp+700,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[2]),25);
    bufp->fullIData(oldp+701,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[3]),25);
    bufp->fullIData(oldp+702,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[4]),25);
    bufp->fullIData(oldp+703,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[5]),25);
    bufp->fullIData(oldp+704,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[6]),25);
    bufp->fullIData(oldp+705,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__tag[7]),25);
    bufp->fullBit(oldp+706,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[0]));
    bufp->fullBit(oldp+707,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[1]));
    bufp->fullBit(oldp+708,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[2]));
    bufp->fullBit(oldp+709,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[3]));
    bufp->fullBit(oldp+710,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[4]));
    bufp->fullBit(oldp+711,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[5]));
    bufp->fullBit(oldp+712,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[6]));
    bufp->fullBit(oldp+713,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__valid[7]));
    bufp->fullCData(oldp+714,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__rresp_save),2);
    bufp->fullCData(oldp+715,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__beat),2);
    bufp->fullCData(oldp+716,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__state),2);
    bufp->fullIData(oldp+717,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+718,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache__DOT__unnamedblk2__DOT__i),32);
    bufp->fullBit(oldp+719,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_save));
    bufp->fullCData(oldp+720,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save),2);
    bufp->fullBit(oldp+721,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save));
    bufp->fullIData(oldp+722,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_data_save),32);
    bufp->fullIData(oldp+723,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save),32);
    bufp->fullIData(oldp+724,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out),32);
    bufp->fullCData(oldp+725,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullBit(oldp+726,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done));
    bufp->fullBit(oldp+727,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done));
    bufp->fullBit(oldp+728,((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
    bufp->fullBit(oldp+729,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
    bufp->fullBit(oldp+730,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))));
    bufp->fullQData(oldp+731,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime),64);
    bufp->fullIData(oldp+733,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__araddr_save),32);
    bufp->fullCData(oldp+734,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__state),2);
    bufp->fullBit(oldp+735,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint));
    bufp->fullBit(oldp+736,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__state));
    bufp->fullBit(oldp+737,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__next));
    bufp->fullBit(oldp+738,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
    bufp->fullCData(oldp+739,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize),3);
    bufp->fullBit(oldp+740,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready));
    bufp->fullIData(oldp+741,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata),32);
    bufp->fullCData(oldp+742,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp),2);
    bufp->fullBit(oldp+743,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rvalid));
    bufp->fullBit(oldp+744,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast));
    bufp->fullBit(oldp+745,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.arvalid));
    bufp->fullCData(oldp+746,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+747,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl),8);
    bufp->fullIData(oldp+748,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+749,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+750,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__dout),4);
    bufp->fullCData(oldp+751,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_hi),4);
    bufp->fullBit(oldp+752,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi));
    bufp->fullBit(oldp+753,((4U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__state))));
    bufp->fullCData(oldp+754,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 1U : 7U)),8);
    bufp->fullCData(oldp+755,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 2U : 8U)),8);
    bufp->fullCData(oldp+756,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+757,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+758,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+759,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 0x15U : 0x1bU)),8);
    bufp->fullCData(oldp+760,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+761,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__qpi)
                                ? 0xfU : 0x15U)),8);
    bufp->fullCData(oldp+762,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off),8);
    bufp->fullCData(oldp+763,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off),8);
    bufp->fullCData(oldp+764,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+765,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_off))));
    bufp->fullCData(oldp+766,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                     >> 1U))),2);
    bufp->fullIData(oldp+767,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__rd_idx),22);
    bufp->fullIData(oldp+768,((0x3fffffU & (vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__addr 
                                            + (3U & 
                                               ((IData)(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__wr_off) 
                                                >> 1U))))),22);
    bufp->fullSData(oldp+769,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r),16);
    bufp->fullCData(oldp+770,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+771,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+772,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+773,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+774,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+775,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+776,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+777,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+778,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U) | ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 6U)) 
                                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))))));
    bufp->fullBit(oldp+779,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_sck));
    bufp->fullCData(oldp+780,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+781,(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+782,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+783,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+784,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+785,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullCData(oldp+786,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+787,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
    bufp->fullIData(oldp+788,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save),32);
    bufp->fullBit(oldp+789,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save));
    bufp->fullBit(oldp+790,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+791,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+792,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_rdata),32);
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+794,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullCData(oldp+795,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__state),2);
    bufp->fullQData(oldp+796,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[0]),33);
    bufp->fullQData(oldp+798,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[1]),33);
    bufp->fullQData(oldp+800,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[2]),33);
    bufp->fullQData(oldp+802,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[3]),33);
    bufp->fullQData(oldp+804,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[4]),33);
    bufp->fullQData(oldp+806,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[5]),33);
    bufp->fullQData(oldp+808,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[6]),33);
    bufp->fullQData(oldp+810,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[7]),33);
    bufp->fullQData(oldp+812,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[8]),33);
    bufp->fullQData(oldp+814,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[9]),33);
    bufp->fullQData(oldp+816,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[10]),33);
    bufp->fullQData(oldp+818,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[11]),33);
    bufp->fullQData(oldp+820,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[12]),33);
    bufp->fullQData(oldp+822,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[13]),33);
    bufp->fullQData(oldp+824,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[14]),33);
    bufp->fullQData(oldp+826,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[15]),33);
    bufp->fullQData(oldp+828,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[16]),33);
    bufp->fullQData(oldp+830,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[17]),33);
    bufp->fullQData(oldp+832,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[18]),33);
    bufp->fullQData(oldp+834,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[19]),33);
    bufp->fullQData(oldp+836,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[20]),33);
    bufp->fullQData(oldp+838,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[21]),33);
    bufp->fullQData(oldp+840,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[22]),33);
    bufp->fullQData(oldp+842,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[23]),33);
    bufp->fullQData(oldp+844,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[24]),33);
    bufp->fullQData(oldp+846,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[25]),33);
    bufp->fullQData(oldp+848,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[26]),33);
    bufp->fullQData(oldp+850,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[27]),33);
    bufp->fullQData(oldp+852,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[28]),33);
    bufp->fullQData(oldp+854,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[29]),33);
    bufp->fullQData(oldp+856,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[30]),33);
    bufp->fullQData(oldp+858,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__read_counters[31]),33);
    bufp->fullIData(oldp+860,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[0]),32);
    bufp->fullIData(oldp+861,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[1]),32);
    bufp->fullIData(oldp+862,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[2]),32);
    bufp->fullIData(oldp+863,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[3]),32);
    bufp->fullIData(oldp+864,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[4]),32);
    bufp->fullIData(oldp+865,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[5]),32);
    bufp->fullIData(oldp+866,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[6]),32);
    bufp->fullIData(oldp+867,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[7]),32);
    bufp->fullIData(oldp+868,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[8]),32);
    bufp->fullIData(oldp+869,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[9]),32);
    bufp->fullIData(oldp+870,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[10]),32);
    bufp->fullIData(oldp+871,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[11]),32);
    bufp->fullIData(oldp+872,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[12]),32);
    bufp->fullIData(oldp+873,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[13]),32);
    bufp->fullIData(oldp+874,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[14]),32);
    bufp->fullIData(oldp+875,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[15]),32);
    bufp->fullIData(oldp+876,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[16]),32);
    bufp->fullIData(oldp+877,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[17]),32);
    bufp->fullIData(oldp+878,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[18]),32);
    bufp->fullIData(oldp+879,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[19]),32);
    bufp->fullIData(oldp+880,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[20]),32);
    bufp->fullIData(oldp+881,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[21]),32);
    bufp->fullIData(oldp+882,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[22]),32);
    bufp->fullIData(oldp+883,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[23]),32);
    bufp->fullIData(oldp+884,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[24]),32);
    bufp->fullIData(oldp+885,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[25]),32);
    bufp->fullIData(oldp+886,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[26]),32);
    bufp->fullIData(oldp+887,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[27]),32);
    bufp->fullIData(oldp+888,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[28]),32);
    bufp->fullIData(oldp+889,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[29]),32);
    bufp->fullIData(oldp+890,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[30]),32);
    bufp->fullIData(oldp+891,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_save[31]),32);
    bufp->fullCData(oldp+892,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__get_beat),6);
    bufp->fullCData(oldp+893,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__return_beat),6);
    bufp->fullCData(oldp+894,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_save),5);
    bufp->fullCData(oldp+895,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rid_save),4);
    bufp->fullCData(oldp+896,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__rresp_save),2);
    bufp->fullQData(oldp+897,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__write_counter),33);
    bufp->fullBit(oldp+899,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__b_received));
    bufp->fullCData(oldp+900,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bid_save),4);
    bufp->fullCData(oldp+901,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_save),2);
    bufp->fullIData(oldp+902,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullCData(oldp+903,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r),8);
    bufp->fullCData(oldp+904,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r),8);
    bufp->fullCData(oldp+905,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r),8);
    bufp->fullCData(oldp+906,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r),8);
    bufp->fullCData(oldp+907,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullCData(oldp+908,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter),8);
    bufp->fullBit(oldp+909,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc));
    bufp->fullBit(oldp+910,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok));
    bufp->fullCData(oldp+911,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode),8);
    bufp->fullBit(oldp+912,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid));
    bufp->fullBit(oldp+913,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+914,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+915,((0xfU & ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
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
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 0xbU
                                                    : 0xeU)
                                                : (1U 
                                                   & (0xebU 
                                                      >> 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))
                                            : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)
                                                ? (
                                                   (4U 
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
    bufp->fullBit(oldp+916,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0))));
    bufp->fullBit(oldp+917,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+918,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+919,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+920,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+921,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    bufp->fullBit(oldp+922,(((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+923,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullCData(oldp+924,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
    bufp->fullCData(oldp+925,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+926,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+927,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 1U : 7U)),8);
    bufp->fullCData(oldp+928,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 2U : 8U)),8);
    bufp->fullCData(oldp+929,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+930,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+931,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+932,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                            ? 0xeU : 0x14U)))),8);
    bufp->fullCData(oldp+933,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0xbU : 0xeU) : 
                               (1U & (0xebU >> (7U 
                                                & ((IData)(7U) 
                                                   - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))),4);
    bufp->fullCData(oldp+934,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8),8);
    bufp->fullCData(oldp+935,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+936,((0xfU & ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                        ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                            : ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)))
                                        : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                            ? ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU))
                                            : ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x14U)))))),4);
    bufp->fullCData(oldp+937,((0xffU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                    ? 7U
                                                    : 0xaU)))),8);
    bufp->fullCData(oldp+938,((3U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 7U
                                                 : 0xaU)))),2);
    bufp->fullBit(oldp+939,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+940,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+941,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullCData(oldp+942,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+943,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                    ? 8U : 3U) : (1U 
                                                  & (0x38U 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))),4);
    bufp->fullCData(oldp+944,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8),8);
    bufp->fullCData(oldp+945,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+946,((0xfU & ((4U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                        ? ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                            ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                            : ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)))
                                        : ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                            ? ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0xcU))
                                            : ((1U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x10U)
                                                : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U)))))),4);
    bufp->fullCData(oldp+947,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8),8);
    bufp->fullCData(oldp+948,((7U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))),3);
    bufp->fullCData(oldp+949,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+950,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+951,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+952,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullBit(oldp+953,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+954,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+955,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+956,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+957,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+958,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+959,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+960,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+961,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+962,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+963,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+964,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+965,((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+966,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+967,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+968,(((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+969,(((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+970,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+971,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+972,((1U & ((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+973,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+974,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+975,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+976,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+977,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+978,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+979,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+980,((4U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+981,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+982,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+983,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+984,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+985,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+986,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+987,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+988,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+989,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullCData(oldp+990,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+991,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+992,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),4);
    bufp->fullSData(oldp+993,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),14);
    bufp->fullSData(oldp+994,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),14);
    bufp->fullSData(oldp+995,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),14);
    bufp->fullSData(oldp+996,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),14);
    bufp->fullCData(oldp+997,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+998,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+999,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1000,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1001,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullIData(oldp+1002,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1003,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1004,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+1005,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o),32);
    bufp->fullBit(oldp+1006,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack));
    bufp->fullCData(oldp+1007,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullIData(oldp+1008,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr),32);
    bufp->fullIData(oldp+1009,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+1010,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready));
    bufp->fullBit(oldp+1011,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen));
    bufp->fullCData(oldp+1012,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr),5);
    bufp->fullIData(oldp+1013,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat),32);
    bufp->fullBit(oldp+1014,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we));
    bufp->fullBit(oldp+1015,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req));
    bufp->fullBit(oldp+1016,((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
    bufp->fullIData(oldp+1017,((0x3000000U | (0xffffffU 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr))),32);
    bufp->fullIData(oldp+1018,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                     >> 8U)) 
                                                 | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                    >> 0x18U))))),32);
    bufp->fullSData(oldp+1019,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1020,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1021,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1022,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1026,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1027,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1028,((0x7fU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1029,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1030,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1031,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1032,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1033,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1034,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1035,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1036,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1037,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1038,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1039,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1040,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1041,((0xffU & ((0x800U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1042,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1043,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1044,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1045,((1U & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1046,((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1047,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1048,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1049,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1050,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1051,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1052,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1053,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1054,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1055,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1056,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1057,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1058,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1059,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1060,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1061,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1062,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1063,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1064,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1065,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1066,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1067,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1068,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1069,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1070,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1071,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1072,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+1073,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1074,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1075,((1U & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1076,((1U & (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0))));
    bufp->fullBit(oldp+1077,((1U & ((IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1078,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1079,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1080,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1081,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1082,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1083,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1084,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1085,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1086,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1087,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1088,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1089,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1090,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1091,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1092,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1093,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1094,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1095,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1096,((0U != (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1097,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1098,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1099,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1100,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1101,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1102,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1103,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1104,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1105,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1106,(((~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                  >> 6U)) & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))));
    bufp->fullBit(oldp+1107,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1108,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1109,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1110,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1111,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1112,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1113,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1114,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1115,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1116,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1117,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1118,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1119,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1120,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1121,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1122,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1123,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1124,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1125,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1126,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1127,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1128,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1129,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1130,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1131,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1132,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1133,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1134,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1135,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1136,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1137,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1138,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1139,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1140,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1141,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1142,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1143,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1144,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1145,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1146,((7U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1147,((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1148,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1149,((0xfU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1150,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1151,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1152,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1153,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1154,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1155,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1156,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1157,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1158,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1159,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1160,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1161,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1162,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1163,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1164,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1165,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1166,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1167,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1168,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1169,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1170,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1171,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1172,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1173,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1174,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1175,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1176,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1177,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1178,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1179,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1180,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1181,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1182,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1183,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1184,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1185,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1186,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1187,((0xffU & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1188,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1189,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1190,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1191,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1192,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1193,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1194,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1195,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1196,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1197,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1198,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1199,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1200,(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso));
    bufp->fullCData(oldp+1201,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__next),2);
    bufp->fullBit(oldp+1202,(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+1203,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd));
    bufp->fullCData(oldp+1204,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1205,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1206,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1207,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1208,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1209,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1210,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1211,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1212,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1213,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1214,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1215,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1216,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1217,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1218,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1219,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1220,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1221,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1222,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1223,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1224,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1225,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1226,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1227,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1228,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+1229,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1230,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+1231,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+1232,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+1233,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+1234,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+1235,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+1236,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1237,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1238,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1239,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+1240,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+1241,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+1242,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+1243,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+1244,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+1245,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+1246,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+1247,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+1248,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+1249,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+1250,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+1251,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullIData(oldp+1252,(vlSelf->difftest_top__DOT__u_ref__DOT__instr),32);
    bufp->fullIData(oldp+1253,(vlSelf->difftest_top__DOT__u_ref__DOT__pc),32);
    bufp->fullIData(oldp+1254,(vlSelf->difftest_top__DOT__u_ref__DOT__last_pc),32);
    bufp->fullIData(oldp+1255,(vlSelf->difftest_top__DOT__u_ref__DOT__mstatus),32);
    bufp->fullIData(oldp+1256,(vlSelf->difftest_top__DOT__u_ref__DOT__mepc),32);
    bufp->fullIData(oldp+1257,(vlSelf->difftest_top__DOT__u_ref__DOT__mcause),32);
    bufp->fullIData(oldp+1258,(vlSelf->difftest_top__DOT__u_ref__DOT__mtvec),32);
    bufp->fullIData(oldp+1259,(vlSelf->difftest_top__DOT__u_ref__DOT__mcycle),32);
    bufp->fullIData(oldp+1260,(vlSelf->difftest_top__DOT__u_ref__DOT__mcycleh),32);
    bufp->fullIData(oldp+1261,(vlSelf->difftest_top__DOT__u_ref__DOT__mvendorid),32);
    bufp->fullIData(oldp+1262,(vlSelf->difftest_top__DOT__u_ref__DOT__marchid),32);
    bufp->fullBit(oldp+1263,(vlSelf->difftest_top__DOT__u_ref__DOT__addi));
    bufp->fullBit(oldp+1264,(vlSelf->difftest_top__DOT__u_ref__DOT__slti));
    bufp->fullBit(oldp+1265,(vlSelf->difftest_top__DOT__u_ref__DOT__sltiu));
    bufp->fullBit(oldp+1266,(vlSelf->difftest_top__DOT__u_ref__DOT__xori));
    bufp->fullBit(oldp+1267,(vlSelf->difftest_top__DOT__u_ref__DOT__ori));
    bufp->fullBit(oldp+1268,(vlSelf->difftest_top__DOT__u_ref__DOT__andi));
    bufp->fullBit(oldp+1269,(vlSelf->difftest_top__DOT__u_ref__DOT__slli));
    bufp->fullBit(oldp+1270,(vlSelf->difftest_top__DOT__u_ref__DOT__srli));
    bufp->fullBit(oldp+1271,(vlSelf->difftest_top__DOT__u_ref__DOT__srai));
    bufp->fullBit(oldp+1272,(vlSelf->difftest_top__DOT__u_ref__DOT__add));
    bufp->fullBit(oldp+1273,(vlSelf->difftest_top__DOT__u_ref__DOT__sub));
    bufp->fullBit(oldp+1274,(vlSelf->difftest_top__DOT__u_ref__DOT__sll));
    bufp->fullBit(oldp+1275,(vlSelf->difftest_top__DOT__u_ref__DOT__slt));
    bufp->fullBit(oldp+1276,(vlSelf->difftest_top__DOT__u_ref__DOT__sltu));
    bufp->fullBit(oldp+1277,(vlSelf->difftest_top__DOT__u_ref__DOT__xor_inst));
    bufp->fullBit(oldp+1278,(vlSelf->difftest_top__DOT__u_ref__DOT__srl));
    bufp->fullBit(oldp+1279,(vlSelf->difftest_top__DOT__u_ref__DOT__sra));
    bufp->fullBit(oldp+1280,(vlSelf->difftest_top__DOT__u_ref__DOT__or_inst));
    bufp->fullBit(oldp+1281,(vlSelf->difftest_top__DOT__u_ref__DOT__and_inst));
    bufp->fullBit(oldp+1282,(vlSelf->difftest_top__DOT__u_ref__DOT__lb));
    bufp->fullBit(oldp+1283,(vlSelf->difftest_top__DOT__u_ref__DOT__lh));
    bufp->fullBit(oldp+1284,(vlSelf->difftest_top__DOT__u_ref__DOT__lw));
    bufp->fullBit(oldp+1285,(vlSelf->difftest_top__DOT__u_ref__DOT__lbu));
    bufp->fullBit(oldp+1286,(vlSelf->difftest_top__DOT__u_ref__DOT__lhu));
    bufp->fullBit(oldp+1287,(vlSelf->difftest_top__DOT__u_ref__DOT__sb));
    bufp->fullBit(oldp+1288,(vlSelf->difftest_top__DOT__u_ref__DOT__sh));
    bufp->fullBit(oldp+1289,(vlSelf->difftest_top__DOT__u_ref__DOT__sw));
    bufp->fullBit(oldp+1290,(vlSelf->difftest_top__DOT__u_ref__DOT__beq));
    bufp->fullBit(oldp+1291,(vlSelf->difftest_top__DOT__u_ref__DOT__bne));
    bufp->fullBit(oldp+1292,(vlSelf->difftest_top__DOT__u_ref__DOT__blt));
    bufp->fullBit(oldp+1293,(vlSelf->difftest_top__DOT__u_ref__DOT__bge));
    bufp->fullBit(oldp+1294,(vlSelf->difftest_top__DOT__u_ref__DOT__bltu));
    bufp->fullBit(oldp+1295,(vlSelf->difftest_top__DOT__u_ref__DOT__bgeu));
    bufp->fullBit(oldp+1296,(vlSelf->difftest_top__DOT__u_ref__DOT__jal));
    bufp->fullBit(oldp+1297,(vlSelf->difftest_top__DOT__u_ref__DOT__jalr));
    bufp->fullBit(oldp+1298,(vlSelf->difftest_top__DOT__u_ref__DOT__lui));
    bufp->fullBit(oldp+1299,(vlSelf->difftest_top__DOT__u_ref__DOT__auipc));
    bufp->fullBit(oldp+1300,(vlSelf->difftest_top__DOT__u_ref__DOT__ebreak));
    bufp->fullBit(oldp+1301,(vlSelf->difftest_top__DOT__u_ref__DOT__ecall));
    bufp->fullBit(oldp+1302,(vlSelf->difftest_top__DOT__u_ref__DOT__mret));
    bufp->fullBit(oldp+1303,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrw));
    bufp->fullBit(oldp+1304,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrs));
    bufp->fullBit(oldp+1305,(vlSelf->difftest_top__DOT__u_ref__DOT__csrrc));
    bufp->fullCData(oldp+1306,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 7U))),5);
    bufp->fullCData(oldp+1307,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1308,((0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1309,(vlSelf->difftest_top__DOT__u_ref__DOT__immI),32);
    bufp->fullIData(oldp+1310,((0xfffff000U & vlSelf->difftest_top__DOT__u_ref__DOT__instr)),32);
    bufp->fullIData(oldp+1311,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1312,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
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
    bufp->fullIData(oldp+1313,((((- (IData)((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->difftest_top__DOT__u_ref__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1314,((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                >> 0x14U)),32);
    bufp->fullIData(oldp+1315,(vlSelf->difftest_top__DOT__u_ref__DOT__wdata),32);
    bufp->fullIData(oldp+1316,(vlSelf->difftest_top__DOT__u_ref__DOT__rdata1),32);
    bufp->fullIData(oldp+1317,(vlSelf->difftest_top__DOT__u_ref__DOT__rdata2),32);
    bufp->fullIData(oldp+1318,(((IData)(4U) + vlSelf->difftest_top__DOT__u_ref__DOT__pc)),32);
    bufp->fullIData(oldp+1319,((((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__auipc) 
                                 | ((IData)(vlSelf->difftest_top__DOT__u_ref__DOT__jal) 
                                    | (IData)(vlSelf->difftest_top__DOT__u_ref__DOT____VdfgTmp_heb8827dd__0)))
                                 ? vlSelf->difftest_top__DOT__u_ref__DOT__pc
                                 : vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1320,(vlSelf->difftest_top__DOT__u_ref__DOT__add2),32);
    bufp->fullIData(oldp+1321,(vlSelf->difftest_top__DOT__u_ref__DOT__add_rst),32);
    bufp->fullIData(oldp+1322,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                - vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1323,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1324,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                ^ vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1325,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                | vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1326,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                | vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1327,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1328,((vlSelf->difftest_top__DOT__u_ref__DOT__immI 
                                & vlSelf->difftest_top__DOT__u_ref__DOT__rdata1)),32);
    bufp->fullIData(oldp+1329,(VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1330,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                < vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),32);
    bufp->fullIData(oldp+1331,(VL_LTS_III(32, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, vlSelf->difftest_top__DOT__u_ref__DOT__immI)),32);
    bufp->fullIData(oldp+1332,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                < vlSelf->difftest_top__DOT__u_ref__DOT__immI)),32);
    bufp->fullCData(oldp+1333,((0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2)),5);
    bufp->fullIData(oldp+1334,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                << (0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
    bufp->fullIData(oldp+1335,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                << (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x14U)))),32);
    bufp->fullIData(oldp+1336,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                >> (0x1fU & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
    bufp->fullIData(oldp+1337,((vlSelf->difftest_top__DOT__u_ref__DOT__rdata1 
                                >> (0x1fU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                             >> 0x14U)))),32);
    bufp->fullIData(oldp+1338,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->difftest_top__DOT__u_ref__DOT__rdata2))),32);
    bufp->fullIData(oldp+1339,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__u_ref__DOT__rdata1, 
                                              (0x1fU 
                                               & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+1340,(vlSelf->difftest_top__DOT__u_ref__DOT__csrw_rst),32);
    bufp->fullIData(oldp+1341,(vlSelf->difftest_top__DOT__u_ref__DOT__read_rst),32);
    bufp->fullIData(oldp+1342,(vlSelf->difftest_top__DOT__u_ref__DOT__lw_rst),32);
    bufp->fullIData(oldp+1343,(vlSelf->difftest_top__DOT__u_ref__DOT__lbu_rst),32);
    bufp->fullIData(oldp+1344,(vlSelf->difftest_top__DOT__u_ref__DOT__lhu_rst),32);
    bufp->fullIData(oldp+1345,(vlSelf->difftest_top__DOT__u_ref__DOT__lb_rst),32);
    bufp->fullIData(oldp+1346,(vlSelf->difftest_top__DOT__u_ref__DOT__lh_rst),32);
    bufp->fullCData(oldp+1347,((0x7fU & vlSelf->difftest_top__DOT__u_ref__DOT__instr)),7);
    bufp->fullCData(oldp+1348,((7U & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1349,((vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1350,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+1351,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+1352,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+1353,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+1354,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+1355,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+1356,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+1357,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+1358,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+1359,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+1360,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+1361,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+1362,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+1363,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+1364,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+1365,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullCData(oldp+1366,((0xfU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                        >> 0xfU))),4);
    bufp->fullCData(oldp+1367,((0xfU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                        >> 0x14U))),4);
    bufp->fullCData(oldp+1368,((0xfU & (vlSelf->difftest_top__DOT__u_ref__DOT__instr 
                                        >> 7U))),4);
    bufp->fullIData(oldp+1369,(vlSelf->difftest_top__DOT__u_ref__DOT__GPR__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1370,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1371,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1372,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1373,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+1374,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1375,((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1376,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1377,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1378,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1379,((0U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1380,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1381,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1382,((2U == (3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullIData(oldp+1383,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_rst_w_save),32);
    bufp->fullIData(oldp+1384,((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1385,(((0x1fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x10002000U))),32);
    bufp->fullCData(oldp+1386,((0xfU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),4);
    bufp->fullCData(oldp+1387,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync),2);
    bufp->fullCData(oldp+1388,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync),2);
    bufp->fullBit(oldp+1389,((IData)((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))));
    bufp->fullBit(oldp+1390,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                    >> 1U))));
    bufp->fullCData(oldp+1391,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1392,((0xffU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
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
    bufp->fullCData(oldp+1393,((0xffU & ((2U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 8U)
                                          : (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 0x18U)))),8);
    bufp->fullCData(oldp+1394,((0xffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1395,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1396,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata),32);
    bufp->fullIData(oldp+1397,((0xfffffcU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1398,((0xffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1399,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1400,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel));
    bufp->fullCData(oldp+1401,((7U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1402,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1403,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1404,((0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 2U))),19);
    bufp->fullCData(oldp+1405,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1406,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1407,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1408,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1409,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1410,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1411,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1412,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1413,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr),32);
    bufp->fullCData(oldp+1414,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                 ? 0U : 3U)),8);
    bufp->fullCData(oldp+1415,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize),3);
    bufp->fullCData(oldp+1416,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                 ? 0U : 1U)),2);
    bufp->fullIData(oldp+1417,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_addr_save),32);
    bufp->fullIData(oldp+1418,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata),32);
    bufp->fullCData(oldp+1419,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb),4);
    bufp->fullBit(oldp+1420,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
    bufp->fullBit(oldp+1421,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1422,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1423,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1424,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1425,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullWData(oldp+1426,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg),512);
    bufp->fullBit(oldp+1442,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_valid));
    bufp->fullIData(oldp+1443,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc),32);
    bufp->fullBit(oldp+1444,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_flush));
    bufp->fullBit(oldp+1445,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bt_valid));
    bufp->fullIData(oldp+1446,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_pc),32);
    bufp->fullBit(oldp+1447,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__taken));
    bufp->fullBit(oldp+1448,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_0));
    bufp->fullBit(oldp+1449,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_exception_1));
    bufp->fullIData(oldp+1450,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+1451,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr),32);
    bufp->fullBit(oldp+1452,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_fd));
    bufp->fullBit(oldp+1453,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_de));
    bufp->fullBit(oldp+1454,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__compulsory_branch_instrs));
    bufp->fullBit(oldp+1455,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi));
    bufp->fullBit(oldp+1456,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti));
    bufp->fullBit(oldp+1457,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu));
    bufp->fullBit(oldp+1458,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori));
    bufp->fullBit(oldp+1459,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori));
    bufp->fullBit(oldp+1460,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi));
    bufp->fullBit(oldp+1461,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli));
    bufp->fullBit(oldp+1462,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli));
    bufp->fullBit(oldp+1463,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai));
    bufp->fullBit(oldp+1464,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__add));
    bufp->fullBit(oldp+1465,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub));
    bufp->fullBit(oldp+1466,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll));
    bufp->fullBit(oldp+1467,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt));
    bufp->fullBit(oldp+1468,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu));
    bufp->fullBit(oldp+1469,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst));
    bufp->fullBit(oldp+1470,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl));
    bufp->fullBit(oldp+1471,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra));
    bufp->fullBit(oldp+1472,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst));
    bufp->fullBit(oldp+1473,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst));
    bufp->fullBit(oldp+1474,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb));
    bufp->fullBit(oldp+1475,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh));
    bufp->fullBit(oldp+1476,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw));
    bufp->fullBit(oldp+1477,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu));
    bufp->fullBit(oldp+1478,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu));
    bufp->fullBit(oldp+1479,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb));
    bufp->fullBit(oldp+1480,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh));
    bufp->fullBit(oldp+1481,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw));
    bufp->fullBit(oldp+1482,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq));
    bufp->fullBit(oldp+1483,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne));
    bufp->fullBit(oldp+1484,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt));
    bufp->fullBit(oldp+1485,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge));
    bufp->fullBit(oldp+1486,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu));
    bufp->fullBit(oldp+1487,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu));
    bufp->fullBit(oldp+1488,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal));
    bufp->fullBit(oldp+1489,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr));
    bufp->fullBit(oldp+1490,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui));
    bufp->fullBit(oldp+1491,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc));
    bufp->fullBit(oldp+1492,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak));
    bufp->fullBit(oldp+1493,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall));
    bufp->fullBit(oldp+1494,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw));
    bufp->fullBit(oldp+1495,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs));
    bufp->fullBit(oldp+1496,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc));
    bufp->fullBit(oldp+1497,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret));
    bufp->fullBit(oldp+1498,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__fence_i));
    bufp->fullBit(oldp+1499,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_0));
    bufp->fullBit(oldp+1500,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_1));
    bufp->fullBit(oldp+1501,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exception_2));
    bufp->fullCData(oldp+1502,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                         >> 7U))),5);
    bufp->fullCData(oldp+1503,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1504,((0x1fU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1505,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__imm_w),32);
    bufp->fullBit(oldp+1506,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_ls));
    bufp->fullBit(oldp+1507,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ren));
    bufp->fullBit(oldp+1508,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_el));
    bufp->fullBit(oldp+1509,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ready_el));
    bufp->fullBit(oldp+1510,((1U & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read)))));
    bufp->fullCData(oldp+1511,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save))
                                 ? 2U : ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                                           | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save)) 
                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save))
                                          ? 1U : ((
                                                   ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save)) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save))
                                                   ? 0U
                                                   : 3U)))),2);
    bufp->fullBit(oldp+1512,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save) 
                              | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save))));
    bufp->fullCData(oldp+1513,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_save),5);
    bufp->fullCData(oldp+1514,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save),5);
    bufp->fullCData(oldp+1515,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save),5);
    bufp->fullIData(oldp+1516,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2),32);
    bufp->fullIData(oldp+1517,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1),32);
    bufp->fullBit(oldp+1518,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
    bufp->fullCData(oldp+1519,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu),5);
    bufp->fullIData(oldp+1520,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+1521,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+1522,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+1523,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+1524,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+1525,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+1526,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+1527,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+1528,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+1529,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+1530,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+1531,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+1532,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+1533,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+1534,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+1535,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullCData(oldp+1536,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs1_save))),4);
    bufp->fullCData(oldp+1537,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save))),4);
    bufp->fullCData(oldp+1538,((0xfU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_wbu))),4);
    bufp->fullBit(oldp+1539,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT_____05Febreak_end));
    bufp->fullIData(oldp+1540,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list),32);
    bufp->fullIData(oldp+1541,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_amt),32);
    bufp->fullBit(oldp+1542,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__wen_save));
    bufp->fullCData(oldp+1543,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_wb_save),5);
    bufp->fullIData(oldp+1544,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mstatus),32);
    bufp->fullIData(oldp+1545,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mepc),32);
    bufp->fullIData(oldp+1546,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mcause),32);
    bufp->fullIData(oldp+1547,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mtvec),32);
    bufp->fullIData(oldp+1548,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save),32);
    bufp->fullIData(oldp+1549,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save),32);
    bufp->fullIData(oldp+1550,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__instr_save),32);
    bufp->fullBit(oldp+1551,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save));
    bufp->fullBit(oldp+1552,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__addi_save));
    bufp->fullBit(oldp+1553,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save));
    bufp->fullBit(oldp+1554,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save));
    bufp->fullBit(oldp+1555,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save));
    bufp->fullBit(oldp+1556,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save));
    bufp->fullBit(oldp+1557,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save));
    bufp->fullBit(oldp+1558,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save));
    bufp->fullBit(oldp+1559,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__andi_save));
    bufp->fullBit(oldp+1560,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ori_save));
    bufp->fullBit(oldp+1561,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xori_save));
    bufp->fullBit(oldp+1562,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save));
    bufp->fullBit(oldp+1563,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save));
    bufp->fullBit(oldp+1564,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save));
    bufp->fullBit(oldp+1565,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slli_save));
    bufp->fullBit(oldp+1566,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srli_save));
    bufp->fullBit(oldp+1567,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srai_save));
    bufp->fullBit(oldp+1568,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save));
    bufp->fullBit(oldp+1569,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save));
    bufp->fullBit(oldp+1570,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slti_save));
    bufp->fullBit(oldp+1571,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltiu_save));
    bufp->fullBit(oldp+1572,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save));
    bufp->fullBit(oldp+1573,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jalr_save));
    bufp->fullBit(oldp+1574,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lb_save));
    bufp->fullBit(oldp+1575,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lh_save));
    bufp->fullBit(oldp+1576,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lw_save));
    bufp->fullBit(oldp+1577,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lbu_save));
    bufp->fullBit(oldp+1578,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lhu_save));
    bufp->fullBit(oldp+1579,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save));
    bufp->fullBit(oldp+1580,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save));
    bufp->fullBit(oldp+1581,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save));
    bufp->fullBit(oldp+1582,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save));
    bufp->fullBit(oldp+1583,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save));
    bufp->fullBit(oldp+1584,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save));
    bufp->fullBit(oldp+1585,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save));
    bufp->fullBit(oldp+1586,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save));
    bufp->fullBit(oldp+1587,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save));
    bufp->fullBit(oldp+1588,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ebreak_save));
    bufp->fullBit(oldp+1589,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__ecall_save));
    bufp->fullBit(oldp+1590,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__mret_save));
    bufp->fullBit(oldp+1591,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save));
    bufp->fullBit(oldp+1592,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrw_save));
    bufp->fullBit(oldp+1593,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrs_save));
    bufp->fullBit(oldp+1594,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrrc_save));
    bufp->fullBit(oldp+1595,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_0_save));
    bufp->fullBit(oldp+1596,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_1_save));
    bufp->fullBit(oldp+1597,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception_2_save));
    bufp->fullIData(oldp+1598,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csr_rst_save),32);
    bufp->fullIData(oldp+1599,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrw_rst),32);
    bufp->fullBit(oldp+1600,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__taken_save));
    bufp->fullCData(oldp+1601,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__state),3);
    bufp->fullCData(oldp+1602,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__next),3);
    bufp->fullBit(oldp+1603,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__read));
    bufp->fullBit(oldp+1604,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__write));
    bufp->fullBit(oldp+1605,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__is_nlwb));
    bufp->fullBit(oldp+1606,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__exception));
    bufp->fullBit(oldp+1607,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                                       | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0)))))));
    bufp->fullBit(oldp+1608,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save) 
                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sub_save) 
                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sll_save) 
                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__slt_save) 
                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sltu_save) 
                                          | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__xor_inst_save) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__srl_save) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sra_save) 
                                                   | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__and_inst_save) 
                                                      | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__or_inst_save))))))))))));
    bufp->fullBit(oldp+1609,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sb_save) 
                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sh_save) 
                                 | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__sw_save)))));
    bufp->fullBit(oldp+1610,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__b_type));
    bufp->fullBit(oldp+1611,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type));
    bufp->fullBit(oldp+1612,((1U & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type)) 
                                    & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                          | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0))))))))));
    bufp->fullBit(oldp+1613,((1U & (~ (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type) 
                                        & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0) 
                                           | (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rd_list 
                                              >> (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rs2_save)))) 
                                       | (((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__rsb_type)) 
                                           & (~ ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__lui_save) 
                                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__fence_i_save) 
                                                          | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_hb54a109a__0))))))) 
                                          & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT____VdfgTmp_h3f1ed5a1__0)))))));
    bufp->fullCData(oldp+1614,((0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),5);
    bufp->fullCData(oldp+1615,((0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),5);
    bufp->fullIData(oldp+1616,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                    | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                       | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                          | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                             | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                                | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1617,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+1618,(((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__auipc_save) 
                                  | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__jal_save) 
                                     | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__blt_save) 
                                        | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bltu_save) 
                                           | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bge_save) 
                                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bgeu_save) 
                                                 | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__beq_save) 
                                                    | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__bne_save))))))))
                                  ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__pc_save
                                  : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1) 
                                + ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__add_save)
                                    ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2
                                    : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+1619,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                - vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1620,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1621,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                ^ vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1622,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1623,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                | vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1624,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1625,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save 
                                & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1626,(VL_LTS_III(32, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+1627,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                < vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save)),32);
    bufp->fullIData(oldp+1628,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+1629,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                << (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+1630,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+1631,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                >> (0x1fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+1632,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+1633,(VL_SHIFTRS_III(32,32,5, vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__imm_save))),32);
    bufp->fullIData(oldp+1634,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb),32);
    bufp->fullCData(oldp+1635,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__csrr_wb_en),3);
    bufp->fullIData(oldp+1636,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                >> 7U)),25);
    bufp->fullCData(oldp+1637,((7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                      >> 4U))),3);
    bufp->fullIData(oldp+1638,((3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc 
                                      >> 2U))),32);
    bufp->fullIData(oldp+1639,((0xfffffff0U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc)),32);
    bufp->fullCData(oldp+1640,((0x7fU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),7);
    bufp->fullCData(oldp+1641,((7U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1642,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x19U)),7);
    bufp->fullIData(oldp+1643,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu__DOT__immI_w),32);
    bufp->fullIData(oldp+1644,((0xfffff000U & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr)),32);
    bufp->fullIData(oldp+1645,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1646,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
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
    bufp->fullIData(oldp+1647,((((- (IData)((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr) 
                                              | ((0x800U 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1648,((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr 
                                >> 0x14U)),32);
    bufp->fullIData(oldp+1649,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc[0]),32);
    bufp->fullIData(oldp+1650,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_pc[1]),32);
    bufp->fullIData(oldp+1651,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target[0]),32);
    bufp->fullIData(oldp+1652,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__btb_target[1]),32);
    bufp->fullCData(oldp+1653,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__valid),2);
    bufp->fullBit(oldp+1654,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__flush_save));
    bufp->fullIData(oldp+1655,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pc_flush_save),32);
    bufp->fullCData(oldp+1656,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+1657,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted),32);
    bufp->fullCData(oldp+1658,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__next),2);
    bufp->fullCData(oldp+1659,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state),2);
    bufp->fullBit(oldp+1660,((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))));
    bufp->fullBit(oldp+1661,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))));
    bufp->fullBit(oldp+1662,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arvalid));
    bufp->fullBit(oldp+1663,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready));
    bufp->fullBit(oldp+1664,(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1665,(vlSelf->difftest_top__DOT__soc__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1666,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1667,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1668,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1669,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1670,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullBit(oldp+1671,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullIData(oldp+1672,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_prdata),32);
    bufp->fullBit(oldp+1673,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
    bufp->fullCData(oldp+1674,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__apbdelay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1675,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1676,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullBit(oldp+1677,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))));
    bufp->fullBit(oldp+1678,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1679,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1680,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+1681,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1682,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1683,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1684,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1685,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1686,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1687,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1688,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1689,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1690,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1691,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1692,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1693,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1694,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1695,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1696,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1697,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1698,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1699,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1700,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access));
    bufp->fullCData(oldp+1701,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1702,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1703,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1704,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1705,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1706,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1707,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1708,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1709,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr));
    bufp->fullBit(oldp+1710,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1711,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT),8);
    bufp->fullCData(oldp+1712,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr),5);
    bufp->fullIData(oldp+1713,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i),32);
    bufp->fullCData(oldp+1714,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel),4);
    bufp->fullBit(oldp+1715,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we));
    bufp->fullBit(oldp+1716,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    bufp->fullBit(oldp+1717,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc));
    bufp->fullIData(oldp+1718,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1719,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullBit(oldp+1720,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1721,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1722,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1723,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1724,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1725,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1726,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullSData(oldp+1727,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1728,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1729,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1730,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullCData(oldp+1731,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1732,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1733,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1736,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen));
    bufp->fullCData(oldp+1737,((3U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1738,((3U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1739,(vlSelf->difftest_top__DOT__soc__DOT___dq_wire),32);
    bufp->fullSData(oldp+1740,((0xffffU & vlSelf->difftest_top__DOT__soc__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1741,((vlSelf->difftest_top__DOT__soc__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+1742,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1743,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+1744,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1745,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1746,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1747,((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1748,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1749,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1750,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1751,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1752,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1753,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1754,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1755,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1757,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullBit(oldp+1758,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullBit(oldp+1759,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullBit(oldp+1760,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1761,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1762,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1763,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1764,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1765,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1766,((1U & (~ (IData)((0U != (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1767,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1768,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1769,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1770,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1771,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1772,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1773,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1774,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1775,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1776,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1777,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1778,((0xfffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1779,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1780,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1781,((0xfffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1782,((0x7800U == (0x7fffU & 
                                          (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1783,((0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1784,((0x7ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1785,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1786,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullCData(oldp+1787,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1788,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1789,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1790,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1791,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1792,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1793,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1794,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1795,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1796,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1797,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1798,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1799,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1800,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1801,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1802,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1803,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1804,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1805,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1806,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__b_target),32);
    bufp->fullBit(oldp+1807,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__flush));
    bufp->fullIData(oldp+1808,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_flush),32);
    bufp->fullIData(oldp+1809,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_wb_wdata),32);
    bufp->fullBit(oldp+1810,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__br_taken));
    bufp->fullIData(oldp+1811,((0x3fffffffU & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1812,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1813,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+1814,(vlSelf->difftest_top__DOT__soc__DOT___dio_wire),4);
    bufp->fullCData(oldp+1815,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__next),3);
    bufp->fullCData(oldp+1816,(vlSelf->difftest_top__DOT__soc__DOT__psram__DOT__ctrl_done),8);
    bufp->fullBit(oldp+1817,((1U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1818,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1819,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1820,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullBit(oldp+1821,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_awready));
    bufp->fullBit(oldp+1822,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready));
    bufp->fullBit(oldp+1823,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1824,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1825,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1826,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1827,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1828,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1829,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1830,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullBit(oldp+1831,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1832,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1833,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+1834,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1835,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+1836,((0x1ffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1837,((0x1fffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1838,((3U & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullCData(oldp+1839,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullCData(oldp+1840,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+1841,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+1842,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1843,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next),3);
    bufp->fullCData(oldp+1844,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1845,(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next),3);
    bufp->fullBit(oldp+1846,(vlSelf->clock));
    bufp->fullBit(oldp+1847,(vlSelf->reset));
    bufp->fullBit(oldp+1848,(vlSelf->ref_clk));
    bufp->fullBit(oldp+1849,(vlSelf->ref_rst));
    bufp->fullIData(oldp+1850,(vlSelf->ref_pc),32);
    bufp->fullWData(oldp+1851,(vlSelf->ref_gpr),512);
    bufp->fullBit(oldp+1867,(vlSelf->ref_wen));
    bufp->fullIData(oldp+1868,(vlSelf->ref_instr),32);
    bufp->fullIData(oldp+1869,(vlSelf->ref_last_pc),32);
    bufp->fullBit(oldp+1870,(((IData)(vlSelf->difftest_top__DOT__soc__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                      ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                      : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1871,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1872,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                [(0x7ffffU & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 2U))]
                                 : 0U)),32);
    bufp->fullBit(oldp+1873,((IData)(((0U == (0x30000000U 
                                              & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                      & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_out_penable)))));
    bufp->fullBit(oldp+1874,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1875,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                               ? ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                                  & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                     & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                        | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    bufp->fullIData(oldp+1876,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)),32);
    bufp->fullIData(oldp+1877,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1878,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1879,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1881,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1883,((((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1885,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1886,(((IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1887,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1888,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1889,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1890,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1891,((3U & ((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                         ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                         : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
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
                                        : 0U) | (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                   ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                   : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                  ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4delay_delayer_in_bresp)
                                                  : 0U)))),2);
    bufp->fullBit(oldp+1892,((((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready)))));
    bufp->fullCData(oldp+1893,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1894,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1895,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1896,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1897,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+1898,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1899,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1900,(((3U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__ic_wb_wdata_save
                                 : ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                     ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out
                                     : ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                            & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                               >> 0xfU))))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                         : ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                                & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                                   >> 7U))))) 
                                                 << 8U) 
                                                | (0xffU 
                                                   & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                             : 0U))))),32);
    bufp->fullIData(oldp+1901,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                 ? vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_out
                                 : ((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                        & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                           >> 0xfU))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                     : ((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__io_type_save))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_is_u_save)) 
                                                            & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted 
                                                               >> 7U))))) 
                                             << 8U) 
                                            | (0xffU 
                                               & vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__lsu_rdata_shifted))
                                         : 0U)))),32);
    bufp->fullBit(oldp+1902,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                              & ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))));
    bufp->fullBit(oldp+1903,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+1904,((0xfU & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
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
    bufp->fullBit(oldp+1905,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1906,(((0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
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
    bufp->fullCData(oldp+1907,((0xfU & ((1U & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
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
    bufp->fullCData(oldp+1908,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid)
                                 ? 0U : ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid)
                                          ? ((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                              ? 0U : 3U)
                                          : 0U))),8);
    bufp->fullCData(oldp+1909,((((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid) 
                                 & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | ((0U == 
                                              ((2U 
                                                == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state))
                                                ? 0U
                                                : 3U)) 
                                             << 4U))
                                 : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid) 
                                     & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? 0x10U : (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                                 << 5U) 
                                                | (((0U 
                                                     == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1910,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid))));
    bufp->fullSData(oldp+1911,(((vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_h8a1b6d6b__0))),11);
    bufp->fullCData(oldp+1912,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1913,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1914,(((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))));
    bufp->fullBit(oldp+1915,((1U & ((IData)(vlSelf->difftest_top__DOT__soc__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__counter)))
                                         ? vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap
                                         : vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1916,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1917,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1918,(((0xfffffeU & (vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->difftest_top__DOT__soc__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1919,(vlSelf->difftest_top__DOT__soc__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1920,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd)) 
                                               & (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+1921,((1U & (((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                     >> 3U) | ((~ (vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                                   >> 0x1aU)) 
                                               & (~ (IData)(vlSelf->difftest_top__DOT__soc__DOT__sdram__DOT__broadcast_cmd)))))));
    __Vtemp_hf4c6a2b0__0[0U] = vlSelf->ref_gpr[0U];
    __Vtemp_hf4c6a2b0__0[1U] = vlSelf->ref_gpr[1U];
    __Vtemp_hf4c6a2b0__0[2U] = vlSelf->ref_gpr[2U];
    __Vtemp_hf4c6a2b0__0[3U] = vlSelf->ref_gpr[3U];
    __Vtemp_hf4c6a2b0__0[4U] = vlSelf->ref_gpr[4U];
    __Vtemp_hf4c6a2b0__0[5U] = vlSelf->ref_gpr[5U];
    __Vtemp_hf4c6a2b0__0[6U] = vlSelf->ref_gpr[6U];
    __Vtemp_hf4c6a2b0__0[7U] = vlSelf->ref_gpr[7U];
    __Vtemp_hf4c6a2b0__0[8U] = vlSelf->ref_gpr[8U];
    __Vtemp_hf4c6a2b0__0[9U] = vlSelf->ref_gpr[9U];
    __Vtemp_hf4c6a2b0__0[0xaU] = vlSelf->ref_gpr[0xaU];
    __Vtemp_hf4c6a2b0__0[0xbU] = vlSelf->ref_gpr[0xbU];
    __Vtemp_hf4c6a2b0__0[0xcU] = vlSelf->ref_gpr[0xcU];
    __Vtemp_hf4c6a2b0__0[0xdU] = vlSelf->ref_gpr[0xdU];
    __Vtemp_hf4c6a2b0__0[0xeU] = vlSelf->ref_gpr[0xeU];
    __Vtemp_hf4c6a2b0__0[0xfU] = vlSelf->ref_gpr[0xfU];
    __Vtemp_hf4c6a2b0__0[0x10U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x11U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x12U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x13U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x14U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x15U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x16U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x17U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x18U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x19U] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1aU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1bU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1cU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1dU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1eU] = 0U;
    __Vtemp_hf4c6a2b0__0[0x1fU] = 0U;
    bufp->fullWData(oldp+1922,(__Vtemp_hf4c6a2b0__0),1024);
    bufp->fullBit(oldp+1954,(((2U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
                              & ((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                  ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.arready)
                                  : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready)))));
    bufp->fullIData(oldp+1955,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                 ? vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rdata
                                 : vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rdata)),32);
    bufp->fullCData(oldp+1956,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                 ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rresp)
                                 : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT___axi4xbar_auto_anon_in_rresp))),2);
    bufp->fullCData(oldp+1957,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                                 ? 0U : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_12))),4);
    bufp->fullBit(oldp+1958,(((IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__sel_clint)
                               ? (IData)(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_clint.rlast)
                               : (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT___in_0_rT_3))));
    bufp->fullBit(oldp+1959,(((1U == (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__state)) 
                              & (IData)(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__anonIn_arready))));
    bufp->fullSData(oldp+1960,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_gpio_in),16);
    bufp->fullBit(oldp+1961,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_ps2_clk));
    bufp->fullBit(oldp+1962,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_ps2_data));
    bufp->fullBit(oldp+1963,(vlSelf->difftest_top__DOT__soc__DOT__externalPins_uart_rx));
    bufp->fullCData(oldp+1964,(1U),3);
    bufp->fullIData(oldp+1965,(0x64U),32);
    bufp->fullIData(oldp+1966,(0x3e8U),32);
    bufp->fullIData(oldp+1967,(0xaU),32);
    bufp->fullIData(oldp+1968,(0xa0000000U),32);
    bufp->fullIData(oldp+1969,(0xbfffffffU),32);
    bufp->fullCData(oldp+1970,(0U),2);
    bufp->fullCData(oldp+1971,(1U),2);
    bufp->fullCData(oldp+1972,(2U),2);
    bufp->fullBit(oldp+1973,(0U));
    bufp->fullBit(oldp+1974,(1U));
    bufp->fullCData(oldp+1975,(0U),4);
    bufp->fullCData(oldp+1976,(0U),8);
    bufp->fullIData(oldp+1977,(0x20U),32);
    bufp->fullIData(oldp+1978,(6U),32);
    bufp->fullIData(oldp+1979,(5U),32);
    bufp->fullIData(oldp+1980,(9U),32);
    bufp->fullSData(oldp+1981,(1U),16);
    bufp->fullBit(oldp+1982,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+1983,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1984,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+1985,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1986,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+1987,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1988,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+1989,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1990,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+1991,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1992,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+1993,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1994,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+1995,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1996,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+1997,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1998,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+1999,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+2000,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+2001,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+2002,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+2003,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+2004,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+2005,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+2006,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+2007,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+2008,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+2009,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+2010,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+2011,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+2012,(0U),32);
    bufp->fullCData(oldp+2013,(0U),3);
    bufp->fullCData(oldp+2014,(3U),3);
    bufp->fullCData(oldp+2015,(2U),3);
    bufp->fullIData(oldp+2016,(vlSelf->difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu__DOT__new_pc),32);
    bufp->fullIData(oldp+2017,(0x10U),32);
    bufp->fullIData(oldp+2018,(8U),32);
    bufp->fullIData(oldp+2019,(4U),32);
    bufp->fullIData(oldp+2020,(3U),32);
    bufp->fullIData(oldp+2021,(0x19U),32);
    bufp->fullIData(oldp+2022,(0x80U),32);
    bufp->fullIData(oldp+2023,(2U),32);
    bufp->fullCData(oldp+2024,(3U),8);
    bufp->fullIData(oldp+2025,(0x2000000U),32);
    bufp->fullIData(oldp+2026,(0x2000004U),32);
    bufp->fullBit(oldp+2027,(0U));
    bufp->fullBit(oldp+2028,(1U));
    bufp->fullIData(oldp+2029,(0x10002000U),32);
    bufp->fullCData(oldp+2030,(4U),3);
    bufp->fullCData(oldp+2031,(0xebU),8);
    bufp->fullCData(oldp+2032,(0x35U),8);
    bufp->fullCData(oldp+2033,(0x38U),8);
    bufp->fullIData(oldp+2034,(0xdU),32);
    bufp->fullIData(oldp+2035,(0xbU),32);
    bufp->fullIData(oldp+2036,(0x1aU),32);
    bufp->fullIData(oldp+2037,(0x2000U),32);
    bufp->fullIData(oldp+2038,(0x2710U),32);
    bufp->fullIData(oldp+2039,(0x30cU),32);
    bufp->fullCData(oldp+2040,(7U),4);
    bufp->fullCData(oldp+2041,(3U),4);
    bufp->fullCData(oldp+2042,(5U),4);
    bufp->fullCData(oldp+2043,(4U),4);
    bufp->fullCData(oldp+2044,(6U),4);
    bufp->fullCData(oldp+2045,(2U),4);
    bufp->fullCData(oldp+2046,(1U),4);
    bufp->fullSData(oldp+2047,(0x20U),13);
    bufp->fullCData(oldp+2048,(8U),4);
    bufp->fullCData(oldp+2049,(9U),4);
    bufp->fullCData(oldp+2050,(0xaU),4);
    bufp->fullCData(oldp+2051,(0xbU),4);
    bufp->fullIData(oldp+2052,(0x11U),32);
    bufp->fullIData(oldp+2053,(0x30000000U),32);
    bufp->fullIData(oldp+2054,(0x3fffffffU),32);
    bufp->fullCData(oldp+2055,(0U),5);
    bufp->fullCData(oldp+2056,(4U),5);
    bufp->fullCData(oldp+2057,(0x10U),5);
    bufp->fullCData(oldp+2058,(0x14U),5);
    bufp->fullCData(oldp+2059,(0x18U),5);
    bufp->fullIData(oldp+2060,(0x40U),32);
    bufp->fullIData(oldp+2061,(0x100U),32);
    bufp->fullIData(oldp+2062,(1U),32);
    bufp->fullCData(oldp+2063,(5U),3);
    bufp->fullIData(oldp+2064,(0x13U),32);
    bufp->fullSData(oldp+2065,(0x320U),10);
    bufp->fullSData(oldp+2066,(0x60U),10);
    bufp->fullSData(oldp+2067,(0x90U),10);
    bufp->fullSData(oldp+2068,(0x310U),10);
    bufp->fullSData(oldp+2069,(0x20dU),10);
    bufp->fullSData(oldp+2070,(2U),10);
    bufp->fullSData(oldp+2071,(0x23U),10);
    bufp->fullSData(oldp+2072,(0x203U),10);
    bufp->fullCData(oldp+2073,(vlSelf->difftest_top__DOT__soc__DOT__bitrev__DOT__state),2);
    bufp->fullIData(oldp+2074,(0U),32);
    bufp->fullBit(oldp+2075,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.awready));
    bufp->fullBit(oldp+2076,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wready));
    bufp->fullBit(oldp+2077,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.wlast));
    bufp->fullCData(oldp+2078,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bresp),2);
    bufp->fullBit(oldp+2079,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bvalid));
    bufp->fullCData(oldp+2080,(vlSymsp->TOP__difftest_top__DOT__soc__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_icache.bid),4);
}
