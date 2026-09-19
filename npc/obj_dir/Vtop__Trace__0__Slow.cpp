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
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1394,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1395,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1396,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1397,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1398,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1399,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1400,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1401,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1402,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1403,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1404,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1405,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1406,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1407,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1408,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1409,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1410,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1411,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1412,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1413,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1394,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1395,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1396,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1397,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1398,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1399,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1400,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1401,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1402,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1403,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1404,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1405,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1406,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1407,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1408,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1409,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1410,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1411,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1412,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1413,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+609,"spi_sck", false,-1);
    tracep->declBus(c+610,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+611,"spi_mosi", false,-1);
    tracep->declBit(c+1414,"spi_miso", false,-1);
    tracep->declBit(c+1412,"uart_rx", false,-1);
    tracep->declBit(c+1413,"uart_tx", false,-1);
    tracep->declBit(c+1325,"psram_sck", false,-1);
    tracep->declBit(c+1326,"psram_ce_n", false,-1);
    tracep->declBus(c+1389,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1415,"sdram_clk", false,-1);
    tracep->declBit(c+1166,"sdram_cke", false,-1);
    tracep->declBit(c+612,"sdram_cs", false,-1);
    tracep->declBit(c+613,"sdram_ras", false,-1);
    tracep->declBit(c+614,"sdram_cas", false,-1);
    tracep->declBit(c+615,"sdram_we", false,-1);
    tracep->declBus(c+1167,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1168,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1169,"sdram_dqm", false,-1, 3,0);
    tracep->declBit(c+1300,"sdram_sel", false,-1);
    tracep->declBus(c+1179,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1394,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1395,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1396,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1397,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1398,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1399,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1400,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1401,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1402,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1403,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1404,"ps2_clk", false,-1);
    tracep->declBit(c+1405,"ps2_data", false,-1);
    tracep->declBus(c+1406,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1407,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1408,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1409,"vga_hsync", false,-1);
    tracep->declBit(c+1410,"vga_vsync", false,-1);
    tracep->declBit(c+1411,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+30,"in_psel", false,-1);
    tracep->declBit(c+31,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1327,"in_pready", false,-1);
    tracep->declBus(c+19,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1328,"in_pslverr", false,-1);
    tracep->declBus(c+1301,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1158,"out_psel", false,-1);
    tracep->declBit(c+1159,"out_penable", false,-1);
    tracep->declBus(c+1448,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"out_pwrite", false,-1);
    tracep->declBus(c+1138,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1329,"out_pready", false,-1);
    tracep->declBus(c+20,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1330,"out_pslverr", false,-1);
    tracep->declBus(c+1449,"SDRAM_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1450,"CPU_PERIOD", false,-1, 31,0);
    tracep->declBus(c+1451,"R", false,-1, 31,0);
    tracep->declBus(c+1452,"SDRAM_LOW", false,-1, 31,0);
    tracep->declBus(c+1453,"SDRAM_HIGH", false,-1, 31,0);
    tracep->declBus(c+1454,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1455,"COUNT", false,-1, 1,0);
    tracep->declBus(c+1456,"DELAY", false,-1, 1,0);
    tracep->declBus(c+616,"state", false,-1, 1,0);
    tracep->declBus(c+1331,"next", false,-1, 1,0);
    tracep->declBus(c+617,"delay_counter", false,-1, 31,0);
    tracep->declBus(c+618,"prdata_save", false,-1, 31,0);
    tracep->declBit(c+619,"pslverr_save", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1158,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+1159,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1301,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1448,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1329,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1330,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+20,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1416,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+1417,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+1301,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1448,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+620,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1457,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+621,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+1332,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1333,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1302,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1448,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1457,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1418,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1335,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1336,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1448,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1337,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1457,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1338,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1339,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1340,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1448,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1341,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1342,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+21,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1343,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1419,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1301,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1448,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1420,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1457,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+32,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1344,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1345,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1448,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1346,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1457,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1347,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1348,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1349,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1137,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1302,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1448,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1421,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1422,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1423,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"sel_0", false,-1);
    tracep->declBit(c+1305,"sel_1", false,-1);
    tracep->declBit(c+1306,"sel_2", false,-1);
    tracep->declBit(c+1307,"sel_3", false,-1);
    tracep->declBit(c+1308,"sel_4", false,-1);
    tracep->declBit(c+1309,"sel_5", false,-1);
    tracep->declBit(c+1310,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+33,"auto_in_awready", false,-1);
    tracep->declBit(c+34,"auto_in_awvalid", false,-1);
    tracep->declBus(c+35,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+37,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+38,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+33,"auto_in_wready", false,-1);
    tracep->declBit(c+39,"auto_in_wvalid", false,-1);
    tracep->declBus(c+40,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+42,"auto_in_bready", false,-1);
    tracep->declBit(c+1350,"auto_in_bvalid", false,-1);
    tracep->declBus(c+43,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+50,"auto_in_rready", false,-1);
    tracep->declBit(c+1352,"auto_in_rvalid", false,-1);
    tracep->declBus(c+51,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1424,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_out_psel", false,-1);
    tracep->declBit(c+31,"auto_out_penable", false,-1);
    tracep->declBit(c+1137,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1301,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1327,"auto_out_pready", false,-1);
    tracep->declBit(c+1328,"auto_out_pslverr", false,-1);
    tracep->declBus(c+19,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+31,"nodeOut_penable", false,-1);
    tracep->declBus(c+52,"state", false,-1, 1,0);
    tracep->declBit(c+44,"accept_read", false,-1);
    tracep->declBit(c+33,"accept_write", false,-1);
    tracep->declBit(c+53,"is_write_r", false,-1);
    tracep->declBit(c+1137,"is_write", false,-1);
    tracep->declBus(c+51,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+43,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+54,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+55,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+56,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+57,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1353,"resp", false,-1, 1,0);
    tracep->declBus(c+58,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1351,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1352,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+59,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1350,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+60,"auto_in_awready", false,-1);
    tracep->declBit(c+1182,"auto_in_awvalid", false,-1);
    tracep->declBus(c+61,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+62,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_in_wready", false,-1);
    tracep->declBit(c+1185,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1188,"auto_in_wlast", false,-1);
    tracep->declBit(c+535,"auto_in_bready", false,-1);
    tracep->declBit(c+64,"auto_in_bvalid", false,-1);
    tracep->declBus(c+65,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_in_arready", false,-1);
    tracep->declBit(c+1189,"auto_in_arvalid", false,-1);
    tracep->declBus(c+68,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+69,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+536,"auto_in_rready", false,-1);
    tracep->declBit(c+70,"auto_in_rvalid", false,-1);
    tracep->declBus(c+71,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+72,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+73,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+74,"auto_in_rlast", false,-1);
    tracep->declBit(c+33,"auto_out_awready", false,-1);
    tracep->declBit(c+34,"auto_out_awvalid", false,-1);
    tracep->declBus(c+35,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+37,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+38,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+33,"auto_out_wready", false,-1);
    tracep->declBit(c+39,"auto_out_wvalid", false,-1);
    tracep->declBus(c+40,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+41,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+42,"auto_out_bready", false,-1);
    tracep->declBit(c+1350,"auto_out_bvalid", false,-1);
    tracep->declBus(c+43,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1351,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"auto_out_arready", false,-1);
    tracep->declBit(c+45,"auto_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+49,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+50,"auto_out_rready", false,-1);
    tracep->declBit(c+1352,"auto_out_rvalid", false,-1);
    tracep->declBus(c+51,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1424,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1351,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+42,"io_enq_ready", false,-1);
    tracep->declBit(c+1350,"io_enq_valid", false,-1);
    tracep->declBus(c+43,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1351,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+535,"io_deq_ready", false,-1);
    tracep->declBit(c+64,"io_deq_valid", false,-1);
    tracep->declBus(c+65,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+66,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+75,"wrap", false,-1);
    tracep->declBit(c+76,"wrap_1", false,-1);
    tracep->declBit(c+77,"maybe_full", false,-1);
    tracep->declBit(c+78,"ptr_match", false,-1);
    tracep->declBit(c+79,"empty", false,-1);
    tracep->declBit(c+80,"full", false,-1);
    tracep->declBit(c+1354,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+76,"R0_addr", false,-1);
    tracep->declBit(c+1458,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declBus(c+81,"R0_data", false,-1, 5,0);
    tracep->declBit(c+75,"W0_addr", false,-1);
    tracep->declBit(c+1354,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declBus(c+1425,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+82+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+84,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+50,"io_enq_ready", false,-1);
    tracep->declBit(c+1352,"io_enq_valid", false,-1);
    tracep->declBus(c+51,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1424,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1351,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+70,"io_deq_valid", false,-1);
    tracep->declBus(c+71,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+72,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+73,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+74,"io_deq_bits_last", false,-1);
    tracep->declBit(c+85,"wrap", false,-1);
    tracep->declBit(c+86,"wrap_1", false,-1);
    tracep->declBit(c+87,"maybe_full", false,-1);
    tracep->declBit(c+88,"ptr_match", false,-1);
    tracep->declBit(c+89,"empty", false,-1);
    tracep->declBit(c+90,"full", false,-1);
    tracep->declBit(c+1355,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+86,"R0_addr", false,-1);
    tracep->declBit(c+1458,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declQuad(c+91,"R0_data", false,-1, 38,0);
    tracep->declBit(c+85,"W0_addr", false,-1);
    tracep->declBit(c+1355,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declQuad(c+1426,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+93+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+97,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+67,"io_enq_ready", false,-1);
    tracep->declBit(c+1189,"io_enq_valid", false,-1);
    tracep->declBus(c+68,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1190,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1191,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+69,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+44,"io_deq_ready", false,-1);
    tracep->declBit(c+45,"io_deq_valid", false,-1);
    tracep->declBus(c+46,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+47,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+48,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+49,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+98,"wrap", false,-1);
    tracep->declBit(c+99,"wrap_1", false,-1);
    tracep->declBit(c+100,"maybe_full", false,-1);
    tracep->declBit(c+101,"ptr_match", false,-1);
    tracep->declBit(c+102,"empty", false,-1);
    tracep->declBit(c+103,"full", false,-1);
    tracep->declBit(c+1192,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+99,"R0_addr", false,-1);
    tracep->declBit(c+1458,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declQuad(c+104,"R0_data", false,-1, 46,0);
    tracep->declBit(c+98,"W0_addr", false,-1);
    tracep->declBit(c+1192,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declQuad(c+537,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+106+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+110,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+60,"io_enq_ready", false,-1);
    tracep->declBit(c+1182,"io_enq_valid", false,-1);
    tracep->declBus(c+61,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1183,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1184,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+62,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+34,"io_deq_valid", false,-1);
    tracep->declBus(c+35,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+36,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+37,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+38,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+111,"wrap", false,-1);
    tracep->declBit(c+112,"wrap_1", false,-1);
    tracep->declBit(c+113,"maybe_full", false,-1);
    tracep->declBit(c+114,"ptr_match", false,-1);
    tracep->declBit(c+115,"empty", false,-1);
    tracep->declBit(c+116,"full", false,-1);
    tracep->declBit(c+1193,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+112,"R0_addr", false,-1);
    tracep->declBit(c+1458,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declQuad(c+117,"R0_data", false,-1, 46,0);
    tracep->declBit(c+111,"W0_addr", false,-1);
    tracep->declBit(c+1193,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declQuad(c+539,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+119+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+123,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+63,"io_enq_ready", false,-1);
    tracep->declBit(c+1185,"io_enq_valid", false,-1);
    tracep->declBus(c+1186,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1187,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1188,"io_enq_bits_last", false,-1);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+39,"io_deq_valid", false,-1);
    tracep->declBus(c+40,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+41,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+124,"wrap", false,-1);
    tracep->declBit(c+125,"wrap_1", false,-1);
    tracep->declBit(c+126,"maybe_full", false,-1);
    tracep->declBit(c+127,"ptr_match", false,-1);
    tracep->declBit(c+128,"empty", false,-1);
    tracep->declBit(c+129,"full", false,-1);
    tracep->declBit(c+1194,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+125,"R0_addr", false,-1);
    tracep->declBit(c+1458,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declQuad(c+130,"R0_data", false,-1, 35,0);
    tracep->declBit(c+124,"W0_addr", false,-1);
    tracep->declBit(c+1194,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declQuad(c+1195,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+132+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+136,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+137,"auto_in_awready", false,-1);
    tracep->declBit(c+959,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1459,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+960,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_in_wready", false,-1);
    tracep->declBit(c+961,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1198,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1458,"auto_in_wlast", false,-1);
    tracep->declBit(c+1200,"auto_in_bready", false,-1);
    tracep->declBit(c+1140,"auto_in_bvalid", false,-1);
    tracep->declBus(c+139,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_in_arready", false,-1);
    tracep->declBit(c+962,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1459,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1201,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+963,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_in_rready", false,-1);
    tracep->declBit(c+141,"auto_in_rvalid", false,-1);
    tracep->declBus(c+142,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"auto_in_rlast", false,-1);
    tracep->declBit(c+1203,"auto_out_awready", false,-1);
    tracep->declBit(c+1204,"auto_out_awvalid", false,-1);
    tracep->declBus(c+61,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+62,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+144,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1205,"auto_out_wready", false,-1);
    tracep->declBit(c+1206,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1188,"auto_out_wlast", false,-1);
    tracep->declBit(c+1207,"auto_out_bready", false,-1);
    tracep->declBit(c+145,"auto_out_bvalid", false,-1);
    tracep->declBus(c+139,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+146,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+147,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1208,"auto_out_arready", false,-1);
    tracep->declBit(c+1209,"auto_out_arvalid", false,-1);
    tracep->declBus(c+68,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+69,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+148,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1202,"auto_out_rready", false,-1);
    tracep->declBit(c+141,"auto_out_rvalid", false,-1);
    tracep->declBus(c+142,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+149,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+150,"auto_out_rlast", false,-1);
    tracep->declBit(c+1206,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+151,"w_idle", false,-1);
    tracep->declBit(c+1210,"in_awready", false,-1);
    tracep->declBit(c+152,"busy", false,-1);
    tracep->declBus(c+153,"r_addr", false,-1, 31,0);
    tracep->declBus(c+154,"r_len", false,-1, 7,0);
    tracep->declBus(c+155,"len", false,-1, 7,0);
    tracep->declBus(c+1211,"addr", false,-1, 31,0);
    tracep->declBit(c+156,"busy_1", false,-1);
    tracep->declBus(c+157,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+158,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+159,"len_1", false,-1, 7,0);
    tracep->declBus(c+1212,"addr_1", false,-1, 31,0);
    tracep->declBit(c+160,"wbeats_latched", false,-1);
    tracep->declBit(c+1204,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1213,"wbeats_valid", false,-1);
    tracep->declBus(c+161,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1214,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1188,"w_last", false,-1);
    tracep->declBit(c+1207,"nodeOut_bready", false,-1);
    tracep->declBus(c+162,"error_0", false,-1, 1,0);
    tracep->declBus(c+163,"error_1", false,-1, 1,0);
    tracep->declBus(c+164,"error_2", false,-1, 1,0);
    tracep->declBus(c+165,"error_3", false,-1, 1,0);
    tracep->declBus(c+166,"error_4", false,-1, 1,0);
    tracep->declBus(c+167,"error_5", false,-1, 1,0);
    tracep->declBus(c+168,"error_6", false,-1, 1,0);
    tracep->declBus(c+169,"error_7", false,-1, 1,0);
    tracep->declBus(c+170,"error_8", false,-1, 1,0);
    tracep->declBus(c+171,"error_9", false,-1, 1,0);
    tracep->declBus(c+172,"error_10", false,-1, 1,0);
    tracep->declBus(c+173,"error_11", false,-1, 1,0);
    tracep->declBus(c+174,"error_12", false,-1, 1,0);
    tracep->declBus(c+175,"error_13", false,-1, 1,0);
    tracep->declBus(c+176,"error_14", false,-1, 1,0);
    tracep->declBus(c+177,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+140,"io_enq_ready", false,-1);
    tracep->declBit(c+962,"io_enq_valid", false,-1);
    tracep->declBus(c+1459,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1201,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1460,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+963,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1454,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1215,"io_deq_ready", false,-1);
    tracep->declBit(c+1209,"io_deq_valid", false,-1);
    tracep->declBus(c+68,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1216,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+178,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1191,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+69,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+179,"ram", false,-1, 48,0);
    tracep->declBit(c+181,"full", false,-1);
    tracep->declBit(c+1209,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1217,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+137,"io_enq_ready", false,-1);
    tracep->declBit(c+959,"io_enq_valid", false,-1);
    tracep->declBus(c+1459,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1197,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1460,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+960,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1454,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1218,"io_deq_ready", false,-1);
    tracep->declBit(c+1219,"io_deq_valid", false,-1);
    tracep->declBus(c+61,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1220,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+182,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1184,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+62,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+183,"ram", false,-1, 48,0);
    tracep->declBit(c+185,"full", false,-1);
    tracep->declBit(c+1219,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1221,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+138,"io_enq_ready", false,-1);
    tracep->declBit(c+961,"io_enq_valid", false,-1);
    tracep->declBus(c+1198,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1199,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1458,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1222,"io_deq_ready", false,-1);
    tracep->declBit(c+1223,"io_deq_valid", false,-1);
    tracep->declBus(c+1186,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1187,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+186,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+187,"ram", false,-1, 36,0);
    tracep->declBit(c+189,"full", false,-1);
    tracep->declBit(c+1223,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1224,"do_enq", false,-1);
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
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1225,"auto_in_awready", false,-1);
    tracep->declBit(c+1226,"auto_in_awvalid", false,-1);
    tracep->declBus(c+61,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1227,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1228,"auto_in_wready", false,-1);
    tracep->declBit(c+1229,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1230,"auto_in_bready", false,-1);
    tracep->declBit(c+190,"auto_in_bvalid", false,-1);
    tracep->declBus(c+191,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+192,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1231,"auto_in_arready", false,-1);
    tracep->declBit(c+1232,"auto_in_arvalid", false,-1);
    tracep->declBus(c+68,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1233,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1234,"auto_in_rready", false,-1);
    tracep->declBit(c+193,"auto_in_rvalid", false,-1);
    tracep->declBus(c+194,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+196,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1231,"nodeIn_arready", false,-1);
    tracep->declBit(c+1225,"nodeIn_awready", false,-1);
    tracep->declBit(c+1235,"w_sel0", false,-1);
    tracep->declBit(c+190,"w_full", false,-1);
    tracep->declBus(c+191,"w_id", false,-1, 3,0);
    tracep->declBit(c+197,"r_sel1", false,-1);
    tracep->declBit(c+198,"w_sel1", false,-1);
    tracep->declBit(c+193,"r_full", false,-1);
    tracep->declBus(c+194,"r_id", false,-1, 3,0);
    tracep->declBit(c+1236,"ren", false,-1);
    tracep->declBit(c+199,"rdata_REG", false,-1);
    tracep->declBus(c+200,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+201,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+202,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+203,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1237,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1236,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declBus(c+204,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1238,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1239,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declBus(c+1186,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1187,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+137,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+959,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1459,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+960,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1198,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1458,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1200,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1140,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+139,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+962,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1459,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1201,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+963,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+141,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+142,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+137,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+959,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1459,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+960,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+961,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1198,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1458,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+1200,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+1140,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+139,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+962,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1459,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1201,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+963,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+141,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+142,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1240,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1241,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+62,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1205,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1206,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1188,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1207,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+145,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+139,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+146,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1242,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1243,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+69,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+141,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+142,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+150,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1225,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1226,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1227,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1228,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1229,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1230,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+190,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+191,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+192,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1231,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1232,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1233,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1234,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+193,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+194,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+195,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+196,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1244,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1245,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+205,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1246,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1247,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+541,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+206,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+207,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+60,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1182,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+61,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+62,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1185,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1188,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+535,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+64,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+65,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+66,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+67,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1189,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+68,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+69,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+536,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+70,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+71,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+72,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+73,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+74,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+145,"in_0_bvalid", false,-1);
    tracep->declBit(c+141,"in_0_rvalid", false,-1);
    tracep->declBit(c+1248,"in_0_wready", false,-1);
    tracep->declBit(c+1249,"in_0_awready", false,-1);
    tracep->declBit(c+1242,"in_0_arready", false,-1);
    tracep->declBit(c+1240,"anonIn_awready", false,-1);
    tracep->declBit(c+1250,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1251,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1252,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1253,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1254,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1255,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+209,"arSel", false,-1, 15,0);
    tracep->declBus(c+210,"awSel", false,-1, 15,0);
    tracep->declBus(c+211,"rSel", false,-1, 15,0);
    tracep->declBus(c+212,"bSel", false,-1, 15,0);
    tracep->declBit(c+213,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+214,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+215,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+216,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+217,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+218,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+219,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+220,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+221,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+222,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+223,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+224,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+225,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+226,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+227,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+228,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+229,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+230,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+231,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+232,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+233,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+234,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+235,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+236,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+237,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+238,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+239,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+240,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+241,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+242,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+243,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+244,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+245,"latched", false,-1);
    tracep->declBit(c+1256,"in_0_awvalid", false,-1);
    tracep->declBit(c+1257,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1258,"in_0_wvalid", false,-1);
    tracep->declBit(c+246,"idle_3", false,-1);
    tracep->declBit(c+247,"anyValid", false,-1);
    tracep->declBus(c+248,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+249,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+250,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+251,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+252,"prefixOR_1", false,-1);
    tracep->declBit(c+253,"winner_3_1", false,-1);
    tracep->declBit(c+254,"winner_3_2", false,-1);
    tracep->declBit(c+255,"state_3_0", false,-1);
    tracep->declBit(c+256,"state_3_1", false,-1);
    tracep->declBit(c+257,"state_3_2", false,-1);
    tracep->declBit(c+258,"muxState_3_0", false,-1);
    tracep->declBit(c+259,"muxState_3_1", false,-1);
    tracep->declBit(c+260,"muxState_3_2", false,-1);
    tracep->declBit(c+261,"idle_4", false,-1);
    tracep->declBit(c+262,"anyValid_1", false,-1);
    tracep->declBus(c+263,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+264,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+265,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+266,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+267,"winner_4_0", false,-1);
    tracep->declBit(c+268,"winner_4_2", false,-1);
    tracep->declBit(c+269,"state_4_0", false,-1);
    tracep->declBit(c+270,"state_4_2", false,-1);
    tracep->declBit(c+271,"muxState_4_0", false,-1);
    tracep->declBit(c+272,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+1257,"io_enq_valid", false,-1);
    tracep->declBus(c+1259,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1260,"io_deq_ready", false,-1);
    tracep->declBit(c+1261,"io_deq_valid", false,-1);
    tracep->declBus(c+1262,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+274,"wrap", false,-1);
    tracep->declBit(c+275,"wrap_1", false,-1);
    tracep->declBit(c+276,"maybe_full", false,-1);
    tracep->declBit(c+277,"ptr_match", false,-1);
    tracep->declBit(c+278,"empty", false,-1);
    tracep->declBit(c+279,"full", false,-1);
    tracep->declBit(c+1261,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1263,"do_deq", false,-1);
    tracep->declBit(c+1264,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+275,"R0_addr", false,-1);
    tracep->declBit(c+1458,"R0_en", false,-1);
    tracep->declBit(c+1392,"R0_clk", false,-1);
    tracep->declBus(c+280,"R0_data", false,-1, 2,0);
    tracep->declBit(c+274,"W0_addr", false,-1);
    tracep->declBit(c+1264,"W0_en", false,-1);
    tracep->declBit(c+1392,"W0_clk", false,-1);
    tracep->declBus(c+1259,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+281+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1203,"auto_in_awready", false,-1);
    tracep->declBit(c+1204,"auto_in_awvalid", false,-1);
    tracep->declBus(c+61,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+62,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+144,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1205,"auto_in_wready", false,-1);
    tracep->declBit(c+1206,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1188,"auto_in_wlast", false,-1);
    tracep->declBit(c+1207,"auto_in_bready", false,-1);
    tracep->declBit(c+145,"auto_in_bvalid", false,-1);
    tracep->declBus(c+139,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+146,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+147,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1208,"auto_in_arready", false,-1);
    tracep->declBit(c+1209,"auto_in_arvalid", false,-1);
    tracep->declBus(c+68,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+69,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+148,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1202,"auto_in_rready", false,-1);
    tracep->declBit(c+141,"auto_in_rvalid", false,-1);
    tracep->declBus(c+142,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+149,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+150,"auto_in_rlast", false,-1);
    tracep->declBit(c+1240,"auto_out_awready", false,-1);
    tracep->declBit(c+1241,"auto_out_awvalid", false,-1);
    tracep->declBus(c+61,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1183,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1184,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+62,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1205,"auto_out_wready", false,-1);
    tracep->declBit(c+1206,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1186,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1187,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1188,"auto_out_wlast", false,-1);
    tracep->declBit(c+1207,"auto_out_bready", false,-1);
    tracep->declBit(c+145,"auto_out_bvalid", false,-1);
    tracep->declBus(c+139,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+146,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1242,"auto_out_arready", false,-1);
    tracep->declBit(c+1243,"auto_out_arvalid", false,-1);
    tracep->declBus(c+68,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1190,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1191,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+69,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_out_rready", false,-1);
    tracep->declBit(c+141,"auto_out_rvalid", false,-1);
    tracep->declBus(c+142,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+150,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+542,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+543,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+545,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+547,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+549,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+551,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+553,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+555,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+557,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+559,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+561,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+563,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+565,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+567,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+569,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+571,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+573,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+575,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+576,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+577,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+578,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+579,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+580,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+581,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+582,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+583,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+584,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+585,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+586,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+587,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+588,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+589,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+590,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+591,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+592,"io_enq_valid", false,-1);
    tracep->declBit(c+144,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+593,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+594,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+595,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+596,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+597,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+395,"io_enq_ready", false,-1);
    tracep->declBit(c+598,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+599,"io_deq_ready", false,-1);
    tracep->declBit(c+396,"io_deq_valid", false,-1);
    tracep->declBit(c+397,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+397,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+398,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+399,"io_enq_ready", false,-1);
    tracep->declBit(c+600,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+601,"io_deq_ready", false,-1);
    tracep->declBit(c+400,"io_deq_valid", false,-1);
    tracep->declBit(c+401,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"full", false,-1);
    tracep->declBit(c+401,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+402,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+602,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+603,"io_deq_ready", false,-1);
    tracep->declBit(c+404,"io_deq_valid", false,-1);
    tracep->declBit(c+405,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"full", false,-1);
    tracep->declBit(c+405,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+406,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+407,"io_enq_ready", false,-1);
    tracep->declBit(c+604,"io_enq_valid", false,-1);
    tracep->declBit(c+148,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+605,"io_deq_ready", false,-1);
    tracep->declBit(c+408,"io_deq_valid", false,-1);
    tracep->declBit(c+409,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"full", false,-1);
    tracep->declBit(c+409,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+410,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1428,"reset", false,-1);
    tracep->declBit(c+137,"auto_master_out_awready", false,-1);
    tracep->declBit(c+959,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1459,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+960,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+138,"auto_master_out_wready", false,-1);
    tracep->declBit(c+961,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1198,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1458,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1200,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1140,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+139,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_master_out_arready", false,-1);
    tracep->declBit(c+962,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1459,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1201,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1460,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+963,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1454,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1202,"auto_master_out_rready", false,-1);
    tracep->declBit(c+141,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+142,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1428,"reset", false,-1);
    tracep->declBit(c+1457,"io_interrupt", false,-1);
    tracep->declBit(c+959,"io_master_awvalid", false,-1);
    tracep->declBit(c+137,"io_master_awready", false,-1);
    tracep->declBus(c+1459,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1197,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1460,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+960,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1454,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+961,"io_master_wvalid", false,-1);
    tracep->declBit(c+138,"io_master_wready", false,-1);
    tracep->declBus(c+1198,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1458,"io_master_wlast", false,-1);
    tracep->declBit(c+1140,"io_master_bvalid", false,-1);
    tracep->declBit(c+1200,"io_master_bready", false,-1);
    tracep->declBus(c+139,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"io_master_bresp", false,-1, 1,0);
    tracep->declBit(c+962,"io_master_arvalid", false,-1);
    tracep->declBit(c+140,"io_master_arready", false,-1);
    tracep->declBus(c+1459,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1201,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1460,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+963,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1454,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+141,"io_master_rvalid", false,-1);
    tracep->declBit(c+1202,"io_master_rready", false,-1);
    tracep->declBus(c+142,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+1142,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+143,"io_master_rlast", false,-1);
    tracep->declBit(c+1457,"io_slave_awvalid", false,-1);
    tracep->declBit(c+1457,"io_slave_awready", false,-1);
    tracep->declBus(c+1459,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1461,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1460,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1462,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1454,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1457,"io_slave_wvalid", false,-1);
    tracep->declBit(c+1457,"io_slave_wready", false,-1);
    tracep->declBus(c+1461,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1459,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"io_slave_wlast", false,-1);
    tracep->declBit(c+1457,"io_slave_bvalid", false,-1);
    tracep->declBit(c+1457,"io_slave_bready", false,-1);
    tracep->declBus(c+1459,"io_slave_bid", false,-1, 3,0);
    tracep->declBus(c+1454,"io_slave_bresp", false,-1, 1,0);
    tracep->declBit(c+1457,"io_slave_arvalid", false,-1);
    tracep->declBit(c+1457,"io_slave_arready", false,-1);
    tracep->declBus(c+1459,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1461,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1460,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1462,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1454,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1457,"io_slave_rvalid", false,-1);
    tracep->declBit(c+1457,"io_slave_rready", false,-1);
    tracep->declBus(c+1459,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1461,"io_slave_rdata", false,-1, 31,0);
    tracep->declBus(c+1454,"io_slave_rresp", false,-1, 1,0);
    tracep->declBit(c+1457,"io_slave_rlast", false,-1);
    tracep->declArray(c+411,"dbg_reg", false,-1, 1023,0);
    tracep->declBus(c+964,"pc", false,-1, 31,0);
    tracep->declBus(c+965,"mstatus", false,-1, 31,0);
    tracep->declBus(c+966,"mepc", false,-1, 31,0);
    tracep->declBus(c+967,"mcause", false,-1, 31,0);
    tracep->declBus(c+968,"mtvec", false,-1, 31,0);
    tracep->declBus(c+969,"mcycle", false,-1, 31,0);
    tracep->declBus(c+970,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+971,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+972,"marchid", false,-1, 31,0);
    tracep->declBit(c+973,"addi", false,-1);
    tracep->declBit(c+974,"slti", false,-1);
    tracep->declBit(c+975,"sltiu", false,-1);
    tracep->declBit(c+976,"xori", false,-1);
    tracep->declBit(c+977,"ori", false,-1);
    tracep->declBit(c+978,"andi", false,-1);
    tracep->declBit(c+979,"slli", false,-1);
    tracep->declBit(c+980,"srli", false,-1);
    tracep->declBit(c+981,"srai", false,-1);
    tracep->declBit(c+982,"add", false,-1);
    tracep->declBit(c+983,"sub", false,-1);
    tracep->declBit(c+984,"sll", false,-1);
    tracep->declBit(c+985,"slt", false,-1);
    tracep->declBit(c+986,"sltu", false,-1);
    tracep->declBit(c+987,"xor_inst", false,-1);
    tracep->declBit(c+988,"srl", false,-1);
    tracep->declBit(c+989,"sra", false,-1);
    tracep->declBit(c+990,"or_inst", false,-1);
    tracep->declBit(c+991,"and_inst", false,-1);
    tracep->declBit(c+992,"lb", false,-1);
    tracep->declBit(c+993,"lh", false,-1);
    tracep->declBit(c+994,"lw", false,-1);
    tracep->declBit(c+995,"lbu", false,-1);
    tracep->declBit(c+996,"lhu", false,-1);
    tracep->declBit(c+997,"sb", false,-1);
    tracep->declBit(c+998,"sh", false,-1);
    tracep->declBit(c+999,"sw", false,-1);
    tracep->declBit(c+1000,"beq", false,-1);
    tracep->declBit(c+1001,"bne", false,-1);
    tracep->declBit(c+1002,"blt", false,-1);
    tracep->declBit(c+1003,"bge", false,-1);
    tracep->declBit(c+1004,"bltu", false,-1);
    tracep->declBit(c+1005,"bgeu", false,-1);
    tracep->declBit(c+1006,"jal", false,-1);
    tracep->declBit(c+1007,"jalr", false,-1);
    tracep->declBit(c+1008,"lui", false,-1);
    tracep->declBit(c+1009,"auipc", false,-1);
    tracep->declBit(c+1010,"ebreak", false,-1);
    tracep->declBit(c+1011,"ecall", false,-1);
    tracep->declBit(c+1012,"mret", false,-1);
    tracep->declBit(c+1013,"csrrw", false,-1);
    tracep->declBit(c+1014,"csrrs", false,-1);
    tracep->declBit(c+1015,"csrrc", false,-1);
    tracep->declBus(c+1016,"rd", false,-1, 4,0);
    tracep->declBus(c+1017,"rs1", false,-1, 4,0);
    tracep->declBus(c+1018,"rs2", false,-1, 4,0);
    tracep->declBus(c+1019,"immI", false,-1, 31,0);
    tracep->declBus(c+1020,"immU", false,-1, 31,0);
    tracep->declBus(c+1021,"immS", false,-1, 31,0);
    tracep->declBus(c+1022,"immB", false,-1, 31,0);
    tracep->declBus(c+1023,"immJ", false,-1, 31,0);
    tracep->declBus(c+1024,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1197,"add_rst", false,-1, 31,0);
    tracep->declBus(c+1025,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+1265,"wdata", false,-1, 31,0);
    tracep->declBus(c+1266,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1267,"rdata2", false,-1, 31,0);
    tracep->declBit(c+1026,"wen", false,-1);
    tracep->declBus(c+1027,"pc_next_dft", false,-1, 31,0);
    tracep->declBus(c+1028,"jump_target", false,-1, 31,0);
    tracep->declBit(c+1029,"event_alu", false,-1);
    tracep->declBit(c+1030,"event_branch", false,-1);
    tracep->declBit(c+1031,"event_load", false,-1);
    tracep->declBit(c+1032,"event_store", false,-1);
    tracep->declBit(c+1033,"event_jump", false,-1);
    tracep->declBit(c+1034,"event_csr", false,-1);
    tracep->declBit(c+1035,"event_system", false,-1);
    tracep->declQuad(c+1036,"ifu_cycles", false,-1, 63,0);
    tracep->declQuad(c+1038,"lsu_cycles", false,-1, 63,0);
    tracep->declQuad(c+1040,"lsu_write_cycles", false,-1, 63,0);
    tracep->declQuad(c+1042,"lsu_read_cycles", false,-1, 63,0);
    tracep->declBit(c+1044,"ifu_hit_flash", false,-1);
    tracep->declBit(c+1045,"ifu_hit_sram", false,-1);
    tracep->declBit(c+1046,"ifu_hit_sdram", false,-1);
    tracep->declBit(c+1047,"ifu_hit_other", false,-1);
    tracep->declBit(c+1268,"lsu_hit_flash", false,-1);
    tracep->declBit(c+1269,"lsu_hit_sram", false,-1);
    tracep->declBit(c+1270,"lsu_hit_sdram", false,-1);
    tracep->declBit(c+1271,"lsu_hit_other", false,-1);
    tracep->declQuad(c+1048,"ifu_fetch_flash_cycles", false,-1, 63,0);
    tracep->declQuad(c+1050,"ifu_fetch_sram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1052,"ifu_fetch_sdram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1054,"ifu_fetch_other_cycles", false,-1, 63,0);
    tracep->declQuad(c+1056,"lsu_read_flash_cycles", false,-1, 63,0);
    tracep->declQuad(c+1058,"lsu_read_sram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1060,"lsu_read_sdram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1062,"lsu_read_other_cycles", false,-1, 63,0);
    tracep->declQuad(c+1064,"lsu_write_flash_cycles", false,-1, 63,0);
    tracep->declQuad(c+1066,"lsu_write_sram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1068,"lsu_write_sdram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1070,"lsu_write_other_cycles", false,-1, 63,0);
    tracep->declQuad(c+1072,"ifu_fetch_flash_count", false,-1, 63,0);
    tracep->declQuad(c+1074,"ifu_fetch_sram_count", false,-1, 63,0);
    tracep->declQuad(c+1076,"ifu_fetch_sdram_count", false,-1, 63,0);
    tracep->declQuad(c+1078,"ifu_fetch_other_count", false,-1, 63,0);
    tracep->declQuad(c+1080,"lsu_read_flash_count", false,-1, 63,0);
    tracep->declQuad(c+1082,"lsu_read_sram_count", false,-1, 63,0);
    tracep->declQuad(c+1084,"lsu_read_sdram_count", false,-1, 63,0);
    tracep->declQuad(c+1086,"lsu_read_other_count", false,-1, 63,0);
    tracep->declQuad(c+1088,"lsu_write_flash_count", false,-1, 63,0);
    tracep->declQuad(c+1090,"lsu_write_sram_count", false,-1, 63,0);
    tracep->declQuad(c+1092,"lsu_write_sdram_count", false,-1, 63,0);
    tracep->declQuad(c+1094,"lsu_write_other_count", false,-1, 63,0);
    tracep->declQuad(c+1096,"flash_cycles", false,-1, 63,0);
    tracep->declQuad(c+1098,"sram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1100,"sdram_cycles", false,-1, 63,0);
    tracep->declQuad(c+1102,"other_cycles", false,-1, 63,0);
    tracep->declBus(c+1104,"instr", false,-1, 31,0);
    tracep->declBus(c+1105,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1105,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1272,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1273,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1274,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1275,"lh_rst", false,-1, 31,0);
    tracep->declBus(c+1276,"lsu_rdata_shifted", false,-1, 31,0);
    tracep->declBus(c+1106,"state", false,-1, 1,0);
    tracep->declBus(c+1107,"next", false,-1, 1,0);
    tracep->declBit(c+1108,"io", false,-1);
    tracep->pushNamePrefix("Decode ");
    tracep->declBus(c+1104,"instr", false,-1, 31,0);
    tracep->declBit(c+973,"addi", false,-1);
    tracep->declBit(c+974,"slti", false,-1);
    tracep->declBit(c+975,"sltiu", false,-1);
    tracep->declBit(c+976,"xori", false,-1);
    tracep->declBit(c+977,"ori", false,-1);
    tracep->declBit(c+978,"andi", false,-1);
    tracep->declBit(c+979,"slli", false,-1);
    tracep->declBit(c+980,"srli", false,-1);
    tracep->declBit(c+981,"srai", false,-1);
    tracep->declBit(c+982,"add", false,-1);
    tracep->declBit(c+983,"sub", false,-1);
    tracep->declBit(c+984,"sll", false,-1);
    tracep->declBit(c+985,"slt", false,-1);
    tracep->declBit(c+986,"sltu", false,-1);
    tracep->declBit(c+987,"xor_inst", false,-1);
    tracep->declBit(c+988,"srl", false,-1);
    tracep->declBit(c+989,"sra", false,-1);
    tracep->declBit(c+990,"or_inst", false,-1);
    tracep->declBit(c+991,"and_inst", false,-1);
    tracep->declBit(c+992,"lb", false,-1);
    tracep->declBit(c+993,"lh", false,-1);
    tracep->declBit(c+994,"lw", false,-1);
    tracep->declBit(c+995,"lbu", false,-1);
    tracep->declBit(c+996,"lhu", false,-1);
    tracep->declBit(c+997,"sb", false,-1);
    tracep->declBit(c+998,"sh", false,-1);
    tracep->declBit(c+999,"sw", false,-1);
    tracep->declBit(c+1000,"beq", false,-1);
    tracep->declBit(c+1001,"bne", false,-1);
    tracep->declBit(c+1002,"blt", false,-1);
    tracep->declBit(c+1003,"bge", false,-1);
    tracep->declBit(c+1004,"bltu", false,-1);
    tracep->declBit(c+1005,"bgeu", false,-1);
    tracep->declBit(c+1006,"jal", false,-1);
    tracep->declBit(c+1007,"jalr", false,-1);
    tracep->declBit(c+1008,"lui", false,-1);
    tracep->declBit(c+1009,"auipc", false,-1);
    tracep->declBit(c+1010,"ebreak", false,-1);
    tracep->declBit(c+1011,"ecall", false,-1);
    tracep->declBit(c+1013,"csrrw", false,-1);
    tracep->declBit(c+1014,"csrrs", false,-1);
    tracep->declBit(c+1015,"csrrc", false,-1);
    tracep->declBit(c+1012,"mret", false,-1);
    tracep->declBus(c+1016,"rd", false,-1, 4,0);
    tracep->declBus(c+1017,"rs1", false,-1, 4,0);
    tracep->declBus(c+1018,"rs2", false,-1, 4,0);
    tracep->declBus(c+1019,"immI", false,-1, 31,0);
    tracep->declBus(c+1020,"immU", false,-1, 31,0);
    tracep->declBus(c+1021,"immS", false,-1, 31,0);
    tracep->declBus(c+1022,"immB", false,-1, 31,0);
    tracep->declBus(c+1023,"immJ", false,-1, 31,0);
    tracep->declBus(c+1024,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1109,"opcode", false,-1, 6,0);
    tracep->declBus(c+1110,"funct3", false,-1, 2,0);
    tracep->declBus(c+1111,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+1463,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1464,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1026,"wen", false,-1);
    tracep->declBus(c+1017,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1018,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1016,"waddr", false,-1, 4,0);
    tracep->declBus(c+1265,"wdata", false,-1, 31,0);
    tracep->declBus(c+1266,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1267,"rdata2", false,-1, 31,0);
    tracep->declArray(c+411,"dbg_regs", false,-1, 1023,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+443+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+964,"pc", false,-1, 31,0);
    tracep->declBus(c+1266,"rdata1", false,-1, 31,0);
    tracep->declBus(c+1267,"rdata2", false,-1, 31,0);
    tracep->declBus(c+1019,"immI", false,-1, 31,0);
    tracep->declBus(c+1020,"immU", false,-1, 31,0);
    tracep->declBus(c+1021,"immS", false,-1, 31,0);
    tracep->declBus(c+1022,"immB", false,-1, 31,0);
    tracep->declBus(c+1023,"immJ", false,-1, 31,0);
    tracep->declBus(c+1024,"immCSR", false,-1, 31,0);
    tracep->declBus(c+1027,"pc_next_dft", false,-1, 31,0);
    tracep->declBit(c+982,"add", false,-1);
    tracep->declBit(c+973,"addi", false,-1);
    tracep->declBit(c+983,"sub", false,-1);
    tracep->declBit(c+1008,"lui", false,-1);
    tracep->declBit(c+1009,"auipc", false,-1);
    tracep->declBit(c+991,"and_inst", false,-1);
    tracep->declBit(c+990,"or_inst", false,-1);
    tracep->declBit(c+987,"xor_inst", false,-1);
    tracep->declBit(c+978,"andi", false,-1);
    tracep->declBit(c+977,"ori", false,-1);
    tracep->declBit(c+976,"xori", false,-1);
    tracep->declBit(c+984,"sll", false,-1);
    tracep->declBit(c+988,"srl", false,-1);
    tracep->declBit(c+989,"sra", false,-1);
    tracep->declBit(c+979,"slli", false,-1);
    tracep->declBit(c+980,"srli", false,-1);
    tracep->declBit(c+981,"srai", false,-1);
    tracep->declBit(c+985,"slt", false,-1);
    tracep->declBit(c+986,"sltu", false,-1);
    tracep->declBit(c+974,"slti", false,-1);
    tracep->declBit(c+975,"sltiu", false,-1);
    tracep->declBit(c+1006,"jal", false,-1);
    tracep->declBit(c+1007,"jalr", false,-1);
    tracep->declBit(c+992,"lb", false,-1);
    tracep->declBit(c+993,"lh", false,-1);
    tracep->declBit(c+994,"lw", false,-1);
    tracep->declBit(c+995,"lbu", false,-1);
    tracep->declBit(c+996,"lhu", false,-1);
    tracep->declBit(c+997,"sb", false,-1);
    tracep->declBit(c+998,"sh", false,-1);
    tracep->declBit(c+999,"sw", false,-1);
    tracep->declBit(c+1000,"beq", false,-1);
    tracep->declBit(c+1001,"bne", false,-1);
    tracep->declBit(c+1002,"blt", false,-1);
    tracep->declBit(c+1003,"bge", false,-1);
    tracep->declBit(c+1004,"bltu", false,-1);
    tracep->declBit(c+1005,"bgeu", false,-1);
    tracep->declBit(c+1013,"csrrw", false,-1);
    tracep->declBit(c+1014,"csrrs", false,-1);
    tracep->declBit(c+1015,"csrrc", false,-1);
    tracep->declBus(c+965,"mstatus", false,-1, 31,0);
    tracep->declBus(c+968,"mtvec", false,-1, 31,0);
    tracep->declBus(c+966,"mepc", false,-1, 31,0);
    tracep->declBus(c+967,"mcause", false,-1, 31,0);
    tracep->declBus(c+969,"mcycle", false,-1, 31,0);
    tracep->declBus(c+970,"mcycleh", false,-1, 31,0);
    tracep->declBus(c+971,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+972,"marchid", false,-1, 31,0);
    tracep->declBus(c+1105,"lw_rst", false,-1, 31,0);
    tracep->declBus(c+1274,"lb_rst", false,-1, 31,0);
    tracep->declBus(c+1275,"lh_rst", false,-1, 31,0);
    tracep->declBus(c+1272,"lbu_rst", false,-1, 31,0);
    tracep->declBus(c+1273,"lhu_rst", false,-1, 31,0);
    tracep->declBus(c+1265,"wdata", false,-1, 31,0);
    tracep->declBus(c+1197,"add_rst", false,-1, 31,0);
    tracep->declBit(c+1026,"wen", false,-1);
    tracep->declBus(c+1025,"csrw_rst", false,-1, 31,0);
    tracep->declBus(c+1128,"add1", false,-1, 31,0);
    tracep->declBus(c+1277,"add2", false,-1, 31,0);
    tracep->declBus(c+1278,"sub_rst", false,-1, 31,0);
    tracep->declBus(c+1279,"xor_rst", false,-1, 31,0);
    tracep->declBus(c+1129,"xori_rst", false,-1, 31,0);
    tracep->declBus(c+1280,"or_rst", false,-1, 31,0);
    tracep->declBus(c+1130,"ori_rst", false,-1, 31,0);
    tracep->declBus(c+1281,"and_rst", false,-1, 31,0);
    tracep->declBus(c+1131,"andi_rst", false,-1, 31,0);
    tracep->declBus(c+1282,"slt_rst", false,-1, 31,0);
    tracep->declBus(c+1283,"sltu_rst", false,-1, 31,0);
    tracep->declBus(c+1132,"slti_rst", false,-1, 31,0);
    tracep->declBus(c+1133,"sltiu_rst", false,-1, 31,0);
    tracep->declBus(c+1284,"shamt_r", false,-1, 4,0);
    tracep->declBus(c+1018,"shamt_i", false,-1, 4,0);
    tracep->declBus(c+1285,"sll_rst", false,-1, 31,0);
    tracep->declBus(c+1134,"slli_rst", false,-1, 31,0);
    tracep->declBus(c+1286,"srl_rst", false,-1, 31,0);
    tracep->declBus(c+1135,"srli_rst", false,-1, 31,0);
    tracep->declBus(c+1287,"sra_rst", false,-1, 31,0);
    tracep->declBus(c+1136,"srai_rst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1428,"reset", false,-1);
    tracep->declBus(c+964,"pc", false,-1, 31,0);
    tracep->declBus(c+1104,"rdata", false,-1, 31,0);
    tracep->declBus(c+1465,"PMA_ENTRIES", false,-1, 31,0);
    tracep->pushNamePrefix("pma_table");
    tracep->declArray(c+1,"[0]", false,-1, 66,0);
    tracep->declArray(c+4,"[1]", false,-1, 66,0);
    tracep->declArray(c+7,"[2]", false,-1, 66,0);
    tracep->declArray(c+10,"[3]", false,-1, 66,0);
    tracep->declArray(c+13,"[4]", false,-1, 66,0);
    tracep->declArray(c+16,"[5]", false,-1, 66,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1104,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1112,"error_save", false,-1, 1,0);
    tracep->declBit(c+1113,"instr_valid_save", false,-1);
    tracep->declBit(c+1114,"master_validation_error_save", false,-1);
    tracep->declBus(c+1115,"state", false,-1, 1,0);
    tracep->declBus(c+1288,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1428,"reset", false,-1);
    tracep->declBus(c+1197,"addr", false,-1, 31,0);
    tracep->declBus(c+1267,"wdata", false,-1, 31,0);
    tracep->declBus(c+1105,"rdata", false,-1, 31,0);
    tracep->declBus(c+1105,"rdata_save", false,-1, 31,0);
    tracep->declBus(c+1116,"error_save", false,-1, 1,0);
    tracep->declBit(c+1117,"read_complete_save", false,-1);
    tracep->declBit(c+1118,"write_complete_save", false,-1);
    tracep->declBus(c+1119,"state", false,-1, 2,0);
    tracep->declBus(c+1289,"next", false,-1, 2,0);
    tracep->declBit(c+1120,"aw_done", false,-1);
    tracep->declBit(c+1121,"w_done", false,-1);
    tracep->declBit(c+1290,"aw_done_next", false,-1);
    tracep->declBit(c+1291,"w_done_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1428,"reset", false,-1);
    tracep->declBus(c+1122,"r_current_state", false,-1, 1,0);
    tracep->declBus(c+1292,"r_next_state", false,-1, 1,0);
    tracep->declBit(c+1123,"select_lsu_ar", false,-1);
    tracep->declBit(c+1124,"select_ifu_ar", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"io_d", false,-1);
    tracep->declBit(c+475,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"io_d", false,-1);
    tracep->declBit(c+475,"io_q", false,-1);
    tracep->declBit(c+475,"sync_0", false,-1);
    tracep->declBit(c+476,"sync_1", false,-1);
    tracep->declBit(c+477,"sync_2", false,-1);
    tracep->declBit(c+478,"sync_3", false,-1);
    tracep->declBit(c+479,"sync_4", false,-1);
    tracep->declBit(c+480,"sync_5", false,-1);
    tracep->declBit(c+481,"sync_6", false,-1);
    tracep->declBit(c+482,"sync_7", false,-1);
    tracep->declBit(c+483,"sync_8", false,-1);
    tracep->declBit(c+484,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1339,"auto_in_psel", false,-1);
    tracep->declBit(c+1340,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1341,"auto_in_pready", false,-1);
    tracep->declBit(c+1342,"auto_in_pslverr", false,-1);
    tracep->declBus(c+21,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1394,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1395,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1396,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1397,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1398,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1399,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1400,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1401,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1402,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1403,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1311,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1339,"in_psel", false,-1);
    tracep->declBit(c+1340,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1341,"in_pready", false,-1);
    tracep->declBus(c+21,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1342,"in_pslverr", false,-1);
    tracep->declBus(c+1394,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1395,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1396,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1397,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1398,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1399,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1400,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1401,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1402,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1403,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1466,"GPIO_BASE", false,-1, 31,0);
    tracep->declBus(c+622,"gpio_out_r", false,-1, 15,0);
    tracep->declBus(c+623,"seg_reg_0_r", false,-1, 7,0);
    tracep->declBus(c+624,"seg_reg_1_r", false,-1, 7,0);
    tracep->declBus(c+625,"seg_reg_2_r", false,-1, 7,0);
    tracep->declBus(c+626,"seg_reg_3_r", false,-1, 7,0);
    tracep->declBit(c+1356,"valid_access", false,-1);
    tracep->declBus(c+1312,"addr_off", false,-1, 31,0);
    tracep->declBus(c+1313,"addr_sel", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1335,"auto_in_psel", false,-1);
    tracep->declBit(c+1336,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1337,"auto_in_pready", false,-1);
    tracep->declBit(c+1457,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1338,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1404,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1405,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1311,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1335,"in_psel", false,-1);
    tracep->declBit(c+1336,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1337,"in_pready", false,-1);
    tracep->declBus(c+1338,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1457,"in_pslverr", false,-1);
    tracep->declBit(c+1404,"ps2_clk", false,-1);
    tracep->declBit(c+1405,"ps2_data", false,-1);
    tracep->declBus(c+1144,"clk_sync", false,-1, 1,0);
    tracep->declBus(c+1145,"dat_sync", false,-1, 1,0);
    tracep->declBit(c+1146,"clk_fall", false,-1);
    tracep->declBit(c+1147,"dat", false,-1);
    tracep->declBus(c+627,"bit_cnt", false,-1, 3,0);
    tracep->declBus(c+628,"shifter", false,-1, 7,0);
    tracep->declBit(c+629,"par_acc", false,-1);
    tracep->declBit(c+630,"frame_ok", false,-1);
    tracep->declBus(c+631,"scancode", false,-1, 7,0);
    tracep->declBit(c+632,"scancode_valid", false,-1);
    tracep->declBit(c+1429,"apb_read", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1244,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1245,"auto_in_wvalid", false,-1);
    tracep->declBit(c+205,"auto_in_arready", false,-1);
    tracep->declBit(c+1246,"auto_in_arvalid", false,-1);
    tracep->declBus(c+68,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1247,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+541,"auto_in_rready", false,-1);
    tracep->declBit(c+206,"auto_in_rvalid", false,-1);
    tracep->declBus(c+207,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+208,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+206,"state", false,-1);
    tracep->declBus(c+208,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+207,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1293,"raddr", false,-1, 31,0);
    tracep->declBit(c+1294,"ren", false,-1);
    tracep->declBus(c+1295,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1343,"auto_in_psel", false,-1);
    tracep->declBit(c+1419,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1301,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1420,"auto_in_pready", false,-1);
    tracep->declBit(c+1457,"auto_in_pslverr", false,-1);
    tracep->declBus(c+32,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1325,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1326,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1389,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1343,"in_psel", false,-1);
    tracep->declBit(c+1419,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1420,"in_pready", false,-1);
    tracep->declBus(c+32,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1457,"in_pslverr", false,-1);
    tracep->declBit(c+1325,"qspi_sck", false,-1);
    tracep->declBit(c+1326,"qspi_ce_n", false,-1);
    tracep->declBus(c+1389,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1389,"din", false,-1, 3,0);
    tracep->declBus(c+1357,"dout", false,-1, 3,0);
    tracep->declBus(c+1358,"douten", false,-1, 3,0);
    tracep->declBit(c+1430,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1392,"clk_i", false,-1);
    tracep->declBit(c+1393,"rst_i", false,-1);
    tracep->declBus(c+1301,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1138,"dat_i", false,-1, 31,0);
    tracep->declBus(c+32,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1139,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1343,"cyc_i", false,-1);
    tracep->declBit(c+1343,"stb_i", false,-1);
    tracep->declBit(c+1430,"ack_o", false,-1);
    tracep->declBit(c+1137,"we_i", false,-1);
    tracep->declBit(c+1325,"sck", false,-1);
    tracep->declBit(c+1326,"ce_n", false,-1);
    tracep->declBus(c+1389,"din", false,-1, 3,0);
    tracep->declBus(c+1357,"dout", false,-1, 3,0);
    tracep->declBus(c+1358,"douten", false,-1, 3,0);
    tracep->declBus(c+1467,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1468,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+633,"mr_sck", false,-1);
    tracep->declBit(c+634,"mr_ce_n", false,-1);
    tracep->declBus(c+1389,"mr_din", false,-1, 3,0);
    tracep->declBus(c+635,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+636,"mr_doe", false,-1);
    tracep->declBit(c+637,"mw_sck", false,-1);
    tracep->declBit(c+638,"mw_ce_n", false,-1);
    tracep->declBus(c+1389,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1431,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+639,"mw_doe", false,-1);
    tracep->declBit(c+1359,"mr_rd", false,-1);
    tracep->declBit(c+640,"mr_done", false,-1);
    tracep->declBit(c+1360,"mw_wr", false,-1);
    tracep->declBit(c+1160,"mw_done", false,-1);
    tracep->declBit(c+641,"qpi_mode", false,-1);
    tracep->declBit(c+642,"mr_busy", false,-1);
    tracep->declBit(c+1343,"wb_valid", false,-1);
    tracep->declBit(c+1361,"wb_we", false,-1);
    tracep->declBit(c+1362,"wb_re", false,-1);
    tracep->declBit(c+641,"allow_xfer", false,-1);
    tracep->declBit(c+643,"state", false,-1);
    tracep->declBit(c+1363,"nstate", false,-1);
    tracep->declBus(c+1148,"size", false,-1, 2,0);
    tracep->declBus(c+1149,"byte0", false,-1, 7,0);
    tracep->declBus(c+1150,"byte1", false,-1, 7,0);
    tracep->declBus(c+1151,"byte2", false,-1, 7,0);
    tracep->declBus(c+1152,"byte3", false,-1, 7,0);
    tracep->declBus(c+1153,"wdata", false,-1, 31,0);
    tracep->declBit(c+1364,"use_mr", false,-1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1432,"rst_n", false,-1);
    tracep->declBus(c+1314,"addr", false,-1, 23,0);
    tracep->declBit(c+1359,"rd", false,-1);
    tracep->declBus(c+1469,"size", false,-1, 2,0);
    tracep->declBit(c+640,"done", false,-1);
    tracep->declBus(c+32,"line", false,-1, 31,0);
    tracep->declBit(c+633,"sck", false,-1);
    tracep->declBit(c+634,"ce_n", false,-1);
    tracep->declBus(c+1389,"din", false,-1, 3,0);
    tracep->declBus(c+635,"dout", false,-1, 3,0);
    tracep->declBit(c+636,"douten", false,-1);
    tracep->declBit(c+641,"qpi", false,-1);
    tracep->declBit(c+642,"busy", false,-1);
    tracep->declBus(c+1454,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1455,"ENTER_QPI", false,-1, 1,0);
    tracep->declBus(c+1456,"READ", false,-1, 1,0);
    tracep->declBus(c+1470,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+1471,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+644,"state", false,-1, 1,0);
    tracep->declBus(c+1433,"nstate", false,-1, 1,0);
    tracep->declBus(c+645,"counter", false,-1, 7,0);
    tracep->declBus(c+646,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+485+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+647,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+648,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+649,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+650,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+651,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+652,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+653,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+654,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+655,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+656,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+657,"byte_cnt", false,-1, 7,0);
    tracep->declBus(c+658,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1432,"rst_n", false,-1);
    tracep->declBus(c+1315,"addr", false,-1, 23,0);
    tracep->declBus(c+1153,"line", false,-1, 31,0);
    tracep->declBus(c+1148,"size", false,-1, 2,0);
    tracep->declBit(c+1360,"wr", false,-1);
    tracep->declBit(c+641,"qpi", false,-1);
    tracep->declBit(c+1160,"done", false,-1);
    tracep->declBit(c+637,"sck", false,-1);
    tracep->declBit(c+638,"ce_n", false,-1);
    tracep->declBus(c+1389,"din", false,-1, 3,0);
    tracep->declBus(c+1431,"dout", false,-1, 3,0);
    tracep->declBit(c+639,"douten", false,-1);
    tracep->declBus(c+1467,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1468,"WRITE", false,-1, 0,0);
    tracep->declBit(c+659,"state", false,-1);
    tracep->declBit(c+1365,"nstate", false,-1);
    tracep->declBus(c+660,"counter", false,-1, 7,0);
    tracep->declBus(c+661,"saddr", false,-1, 23,0);
    tracep->declBus(c+1472,"CMD_38H", false,-1, 7,0);
    tracep->declBus(c+647,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+648,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+649,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+662,"DATA_FIRST", false,-1, 7,0);
    tracep->declBus(c+1161,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+663,"cmd_nib", false,-1, 3,0);
    tracep->declBus(c+664,"addr_ph8", false,-1, 7,0);
    tracep->declBus(c+665,"addr_ph", false,-1, 2,0);
    tracep->declBus(c+666,"addr_nib", false,-1, 3,0);
    tracep->declBus(c+667,"dat_off8", false,-1, 7,0);
    tracep->declBus(c+668,"dat_off", false,-1, 2,0);
    tracep->declBus(c+669,"dat_byte", false,-1, 1,0);
    tracep->declBus(c+1434,"dat_nib", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1416,"auto_in_psel", false,-1);
    tracep->declBit(c+1417,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1301,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+620,"auto_in_pready", false,-1);
    tracep->declBit(c+1457,"auto_in_pslverr", false,-1);
    tracep->declBus(c+621,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1415,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1166,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+612,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+613,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+614,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+615,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1167,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+1168,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1169,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1179,"sdram_bundle_dq", false,-1, 31,0);
    tracep->declBit(c+1300,"sdram_bundle_sel", false,-1);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1301,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1416,"in_psel", false,-1);
    tracep->declBit(c+1417,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+620,"in_pready", false,-1);
    tracep->declBus(c+621,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1457,"in_pslverr", false,-1);
    tracep->declBit(c+1415,"sdram_clk", false,-1);
    tracep->declBit(c+1166,"sdram_cke", false,-1);
    tracep->declBit(c+612,"sdram_cs", false,-1);
    tracep->declBit(c+613,"sdram_ras", false,-1);
    tracep->declBit(c+614,"sdram_cas", false,-1);
    tracep->declBit(c+615,"sdram_we", false,-1);
    tracep->declBus(c+1167,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+1168,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1169,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1179,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+1300,"sdram_sel", false,-1);
    tracep->declBit(c+670,"sdram_dout_en", false,-1);
    tracep->declBus(c+671,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+489,"state", false,-1, 1,0);
    tracep->declBit(c+1170,"req_accept", false,-1);
    tracep->declBit(c+1366,"is_read", false,-1);
    tracep->declBit(c+1367,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1392,"clk_i", false,-1);
    tracep->declBit(c+1393,"rst_i", false,-1);
    tracep->declBus(c+1368,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1366,"inport_rd_i", false,-1);
    tracep->declBus(c+1460,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1301,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1138,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1179,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1170,"inport_accept_o", false,-1);
    tracep->declBit(c+620,"inport_ack_o", false,-1);
    tracep->declBit(c+1457,"inport_error_o", false,-1);
    tracep->declBus(c+621,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1415,"sdram_clk_o", false,-1);
    tracep->declBit(c+1166,"sdram_cke_o", false,-1);
    tracep->declBit(c+612,"sdram_cs_o", false,-1);
    tracep->declBit(c+613,"sdram_ras_o", false,-1);
    tracep->declBit(c+614,"sdram_cas_o", false,-1);
    tracep->declBit(c+615,"sdram_we_o", false,-1);
    tracep->declBus(c+1169,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1167,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+1168,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+671,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+670,"sdram_data_out_en_o", false,-1);
    tracep->declBit(c+1300,"sdram_sel_o", false,-1);
    tracep->declBus(c+1449,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1473,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1474,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1475,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1475,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1476,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1476,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1477,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1475,"SDRAM_COL_LSB", false,-1, 31,0);
    tracep->declBus(c+1478,"SDRAM_BANK_LSB", false,-1, 31,0);
    tracep->declBus(c+1477,"SDRAM_ROW_LSB", false,-1, 31,0);
    tracep->declBus(c+1479,"SDRAM_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+1480,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1481,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1482,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1476,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1483,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1484,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1485,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1486,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1487,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1488,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1489,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1459,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1490,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1476,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1459,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1489,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1488,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1484,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1486,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1485,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1487,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1483,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1491,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1492,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1451,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1451,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1464,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1451,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1475,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1475,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1465,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1301,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1368,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1366,"ram_rd_w", false,-1);
    tracep->declBit(c+1170,"ram_accept_w", false,-1);
    tracep->declBus(c+1138,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+621,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+620,"ram_ack_w", false,-1);
    tracep->declBit(c+1369,"ram_req_w", false,-1);
    tracep->declBus(c+672,"command_q", false,-1, 3,0);
    tracep->declBus(c+1167,"addr_q", false,-1, 12,0);
    tracep->declBus(c+671,"data_q", false,-1, 31,0);
    tracep->declBit(c+673,"data_rd_en_q", false,-1);
    tracep->declBus(c+1169,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1166,"cke_q", false,-1);
    tracep->declBus(c+1168,"bank_q", false,-1, 1,0);
    tracep->declBus(c+621,"data_buffer_q", false,-1, 31,0);
    tracep->declBus(c+674,"dqm_buffer_q", false,-1, 3,0);
    tracep->declBus(c+1179,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+675,"refresh_q", false,-1);
    tracep->declBus(c+676,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+677+i*1,"active_row_q", true,(i+0), 13,0);
    }
    tracep->declBus(c+1171,"state_q", false,-1, 3,0);
    tracep->declBus(c+1370,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1371,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+681,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+682,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+1300,"sdram_sel", false,-1);
    tracep->declBus(c+1316,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1317,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1318,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1476,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+683,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1372,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1493,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1172,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+684,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+685,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+686,"idx", false,-1, 31,0);
    tracep->declBus(c+687,"rd_q", false,-1, 3,0);
    tracep->declBit(c+620,"ack_q", false,-1);
    tracep->declArray(c+1173,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1348,"auto_in_psel", false,-1);
    tracep->declBit(c+1349,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1302,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1421,"auto_in_pready", false,-1);
    tracep->declBit(c+1422,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1423,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+609,"spi_bundle_sck", false,-1);
    tracep->declBus(c+610,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+611,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1414,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1494,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1495,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1496,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1319,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1348,"in_psel", false,-1);
    tracep->declBit(c+1349,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1421,"in_pready", false,-1);
    tracep->declBus(c+1423,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1422,"in_pslverr", false,-1);
    tracep->declBit(c+609,"spi_sck", false,-1);
    tracep->declBus(c+610,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+611,"spi_mosi", false,-1);
    tracep->declBit(c+1414,"spi_miso", false,-1);
    tracep->declBit(c+688,"spi_irq_out", false,-1);
    tracep->declBit(c+1320,"xip_sel", false,-1);
    tracep->declBus(c+1497,"REG_TX0", false,-1, 4,0);
    tracep->declBus(c+1498,"REG_TX1", false,-1, 4,0);
    tracep->declBus(c+1497,"REG_RX0", false,-1, 4,0);
    tracep->declBus(c+1499,"REG_CTRL", false,-1, 4,0);
    tracep->declBus(c+1500,"REG_DIV", false,-1, 4,0);
    tracep->declBus(c+1501,"REG_SS", false,-1, 4,0);
    tracep->declBus(c+1502,"CTRL_XFER64", false,-1, 31,0);
    tracep->declBus(c+1503,"CTRL_GO", false,-1, 31,0);
    tracep->declBus(c+1373,"spi_adr", false,-1, 4,0);
    tracep->declBus(c+1162,"spi_dat_i", false,-1, 31,0);
    tracep->declBus(c+1163,"spi_sel", false,-1, 3,0);
    tracep->declBit(c+1164,"spi_we", false,-1);
    tracep->declBit(c+1374,"spi_stb", false,-1);
    tracep->declBit(c+1375,"spi_cyc", false,-1);
    tracep->declBus(c+689,"spi_dat_o", false,-1, 31,0);
    tracep->declBit(c+690,"spi_ack", false,-1);
    tracep->declBit(c+1457,"spi_err", false,-1);
    tracep->declBus(c+1459,"S_IDLE", false,-1, 3,0);
    tracep->declBus(c+1489,"S_DIV", false,-1, 3,0);
    tracep->declBus(c+1488,"S_SS", false,-1, 3,0);
    tracep->declBus(c+1484,"S_TX1", false,-1, 3,0);
    tracep->declBus(c+1486,"S_TX0", false,-1, 3,0);
    tracep->declBus(c+1485,"S_CTRL", false,-1, 3,0);
    tracep->declBus(c+1487,"S_POLL", false,-1, 3,0);
    tracep->declBus(c+1483,"S_RX", false,-1, 3,0);
    tracep->declBus(c+1491,"S_RXLAT", false,-1, 3,0);
    tracep->declBus(c+1492,"S_UNSS", false,-1, 3,0);
    tracep->declBus(c+1504,"S_DONE", false,-1, 3,0);
    tracep->declBus(c+691,"state", false,-1, 3,0);
    tracep->declBus(c+692,"xip_addr", false,-1, 31,0);
    tracep->declBus(c+693,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+694,"xip_ready", false,-1);
    tracep->declBit(c+695,"poll_go_seen", false,-1);
    tracep->declBit(c+1176,"wr_err_seen", false,-1);
    tracep->declBus(c+696,"xip_adr", false,-1, 4,0);
    tracep->declBus(c+697,"xip_dat", false,-1, 31,0);
    tracep->declBit(c+698,"xip_we", false,-1);
    tracep->declBit(c+699,"xip_req", false,-1);
    tracep->declBit(c+700,"xip_busy", false,-1);
    tracep->declBus(c+701,"xip_cmd", false,-1, 31,0);
    tracep->declBus(c+702,"rx_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1505,"Tp", false,-1, 31,0);
    tracep->declBit(c+1392,"wb_clk_i", false,-1);
    tracep->declBit(c+1393,"wb_rst_i", false,-1);
    tracep->declBus(c+1373,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1162,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+689,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1163,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1164,"wb_we_i", false,-1);
    tracep->declBit(c+1374,"wb_stb_i", false,-1);
    tracep->declBit(c+1375,"wb_cyc_i", false,-1);
    tracep->declBit(c+690,"wb_ack_o", false,-1);
    tracep->declBit(c+1457,"wb_err_o", false,-1);
    tracep->declBit(c+688,"wb_int_o", false,-1);
    tracep->declBus(c+610,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+609,"sclk_pad_o", false,-1);
    tracep->declBit(c+611,"mosi_pad_o", false,-1);
    tracep->declBit(c+1414,"miso_pad_i", false,-1);
    tracep->declBus(c+703,"divider", false,-1, 15,0);
    tracep->declBus(c+704,"ctrl", false,-1, 13,0);
    tracep->declBus(c+705,"ss", false,-1, 7,0);
    tracep->declBus(c+1376,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+706,"rx", false,-1, 127,0);
    tracep->declBit(c+710,"rx_negedge", false,-1);
    tracep->declBit(c+711,"tx_negedge", false,-1);
    tracep->declBus(c+712,"char_len", false,-1, 6,0);
    tracep->declBit(c+713,"go", false,-1);
    tracep->declBit(c+714,"lsb", false,-1);
    tracep->declBit(c+715,"ie", false,-1);
    tracep->declBit(c+716,"ass", false,-1);
    tracep->declBit(c+1377,"spi_divider_sel", false,-1);
    tracep->declBit(c+1378,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1379,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1380,"spi_ss_sel", false,-1);
    tracep->declBit(c+717,"tip", false,-1);
    tracep->declBit(c+718,"pos_edge", false,-1);
    tracep->declBit(c+719,"neg_edge", false,-1);
    tracep->declBit(c+720,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1505,"Tp", false,-1, 31,0);
    tracep->declBit(c+1392,"clk_in", false,-1);
    tracep->declBit(c+1393,"rst", false,-1);
    tracep->declBit(c+717,"enable", false,-1);
    tracep->declBit(c+713,"go", false,-1);
    tracep->declBit(c+720,"last_clk", false,-1);
    tracep->declBus(c+703,"divider", false,-1, 15,0);
    tracep->declBit(c+609,"clk_out", false,-1);
    tracep->declBit(c+718,"pos_edge", false,-1);
    tracep->declBit(c+719,"neg_edge", false,-1);
    tracep->declBus(c+721,"cnt", false,-1, 15,0);
    tracep->declBit(c+722,"cnt_zero", false,-1);
    tracep->declBit(c+723,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1505,"Tp", false,-1, 31,0);
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1393,"rst", false,-1);
    tracep->declBus(c+1381,"latch", false,-1, 3,0);
    tracep->declBus(c+1163,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+712,"len", false,-1, 6,0);
    tracep->declBit(c+714,"lsb", false,-1);
    tracep->declBit(c+713,"go", false,-1);
    tracep->declBit(c+718,"pos_edge", false,-1);
    tracep->declBit(c+719,"neg_edge", false,-1);
    tracep->declBit(c+710,"rx_negedge", false,-1);
    tracep->declBit(c+711,"tx_negedge", false,-1);
    tracep->declBit(c+717,"tip", false,-1);
    tracep->declBit(c+720,"last", false,-1);
    tracep->declBus(c+1162,"p_in", false,-1, 31,0);
    tracep->declArray(c+706,"p_out", false,-1, 127,0);
    tracep->declBit(c+609,"s_clk", false,-1);
    tracep->declBit(c+1414,"s_in", false,-1);
    tracep->declBit(c+611,"s_out", false,-1);
    tracep->declBus(c+724,"cnt", false,-1, 7,0);
    tracep->declArray(c+706,"data", false,-1, 127,0);
    tracep->declBus(c+725,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+726,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+727,"rx_clk", false,-1);
    tracep->declBit(c+728,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1344,"auto_in_psel", false,-1);
    tracep->declBit(c+1345,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1303,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1346,"auto_in_pready", false,-1);
    tracep->declBit(c+1457,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1347,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1412,"uart_rx", false,-1);
    tracep->declBit(c+1413,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1344,"in_psel", false,-1);
    tracep->declBit(c+1345,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1346,"in_pready", false,-1);
    tracep->declBit(c+1457,"in_pslverr", false,-1);
    tracep->declBus(c+1311,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1347,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1412,"uart_rx", false,-1);
    tracep->declBit(c+1413,"uart_tx", false,-1);
    tracep->declBit(c+729,"rtsn", false,-1);
    tracep->declBit(c+1457,"ctsn", false,-1);
    tracep->declBit(c+730,"dtr_pad_o", false,-1);
    tracep->declBit(c+1457,"dsr_pad_i", false,-1);
    tracep->declBit(c+1457,"ri_pad_i", false,-1);
    tracep->declBit(c+1457,"dcd_pad_i", false,-1);
    tracep->declBit(c+731,"interrupt", false,-1);
    tracep->declBit(c+22,"reg_we", false,-1);
    tracep->declBit(c+23,"reg_re", false,-1);
    tracep->declBus(c+1321,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1322,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+490,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1382,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+732,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1393,"wb_rst_i", false,-1);
    tracep->declBus(c+1321,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1323,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1382,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+22,"wb_we_i", false,-1);
    tracep->declBit(c+23,"wb_re_i", false,-1);
    tracep->declBit(c+1413,"stx_pad_o", false,-1);
    tracep->declBit(c+1412,"srx_pad_i", false,-1);
    tracep->declBus(c+1491,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+732,"rts_pad_o", false,-1);
    tracep->declBit(c+730,"dtr_pad_o", false,-1);
    tracep->declBit(c+731,"int_o", false,-1);
    tracep->declBit(c+733,"enable", false,-1);
    tracep->declBit(c+734,"srx_pad", false,-1);
    tracep->declBus(c+735,"ier", false,-1, 3,0);
    tracep->declBus(c+736,"iir", false,-1, 3,0);
    tracep->declBus(c+737,"fcr", false,-1, 1,0);
    tracep->declBus(c+738,"mcr", false,-1, 4,0);
    tracep->declBus(c+739,"lcr", false,-1, 7,0);
    tracep->declBus(c+740,"msr", false,-1, 7,0);
    tracep->declBus(c+741,"dl", false,-1, 15,0);
    tracep->declBus(c+742,"scratch", false,-1, 7,0);
    tracep->declBit(c+743,"start_dlc", false,-1);
    tracep->declBit(c+744,"lsr_mask_d", false,-1);
    tracep->declBit(c+745,"msi_reset", false,-1);
    tracep->declBus(c+746,"dlc", false,-1, 15,0);
    tracep->declBus(c+747,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+748,"rx_reset", false,-1);
    tracep->declBit(c+749,"tx_reset", false,-1);
    tracep->declBit(c+750,"dlab", false,-1);
    tracep->declBit(c+1458,"cts_pad_i", false,-1);
    tracep->declBit(c+1457,"dsr_pad_i", false,-1);
    tracep->declBit(c+1457,"ri_pad_i", false,-1);
    tracep->declBit(c+1457,"dcd_pad_i", false,-1);
    tracep->declBit(c+751,"loopback", false,-1);
    tracep->declBit(c+1457,"cts", false,-1);
    tracep->declBit(c+1458,"dsr", false,-1);
    tracep->declBit(c+1458,"ri", false,-1);
    tracep->declBit(c+1458,"dcd", false,-1);
    tracep->declBit(c+752,"cts_c", false,-1);
    tracep->declBit(c+753,"dsr_c", false,-1);
    tracep->declBit(c+754,"ri_c", false,-1);
    tracep->declBit(c+755,"dcd_c", false,-1);
    tracep->declBus(c+756,"lsr", false,-1, 7,0);
    tracep->declBit(c+757,"lsr0", false,-1);
    tracep->declBit(c+758,"lsr1", false,-1);
    tracep->declBit(c+759,"lsr2", false,-1);
    tracep->declBit(c+760,"lsr3", false,-1);
    tracep->declBit(c+761,"lsr4", false,-1);
    tracep->declBit(c+762,"lsr5", false,-1);
    tracep->declBit(c+763,"lsr6", false,-1);
    tracep->declBit(c+764,"lsr7", false,-1);
    tracep->declBit(c+765,"lsr0r", false,-1);
    tracep->declBit(c+766,"lsr1r", false,-1);
    tracep->declBit(c+767,"lsr2r", false,-1);
    tracep->declBit(c+768,"lsr3r", false,-1);
    tracep->declBit(c+769,"lsr4r", false,-1);
    tracep->declBit(c+770,"lsr5r", false,-1);
    tracep->declBit(c+771,"lsr6r", false,-1);
    tracep->declBit(c+772,"lsr7r", false,-1);
    tracep->declBit(c+24,"lsr_mask", false,-1);
    tracep->declBit(c+773,"rls_int", false,-1);
    tracep->declBit(c+774,"rda_int", false,-1);
    tracep->declBit(c+775,"ti_int", false,-1);
    tracep->declBit(c+776,"thre_int", false,-1);
    tracep->declBit(c+777,"ms_int", false,-1);
    tracep->declBit(c+778,"tf_push", false,-1);
    tracep->declBit(c+779,"rf_pop", false,-1);
    tracep->declBus(c+1435,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+780,"rf_error_bit", false,-1);
    tracep->declBit(c+758,"rf_overrun", false,-1);
    tracep->declBit(c+781,"rf_push_pulse", false,-1);
    tracep->declBus(c+782,"rf_count", false,-1, 4,0);
    tracep->declBus(c+783,"tf_count", false,-1, 4,0);
    tracep->declBus(c+784,"tstate", false,-1, 2,0);
    tracep->declBus(c+785,"rstate", false,-1, 3,0);
    tracep->declBus(c+786,"counter_t", false,-1, 9,0);
    tracep->declBit(c+787,"thre_set_en", false,-1);
    tracep->declBus(c+788,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+789,"block_value", false,-1, 7,0);
    tracep->declBit(c+790,"serial_out", false,-1);
    tracep->declBit(c+791,"serial_in", false,-1);
    tracep->declBit(c+25,"lsr_mask_condition", false,-1);
    tracep->declBit(c+26,"iir_read", false,-1);
    tracep->declBit(c+27,"msr_read", false,-1);
    tracep->declBit(c+28,"fifo_read", false,-1);
    tracep->declBit(c+29,"fifo_write", false,-1);
    tracep->declBus(c+792,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+793,"lsr0_d", false,-1);
    tracep->declBit(c+794,"lsr1_d", false,-1);
    tracep->declBit(c+795,"lsr2_d", false,-1);
    tracep->declBit(c+796,"lsr3_d", false,-1);
    tracep->declBit(c+797,"lsr4_d", false,-1);
    tracep->declBit(c+798,"lsr5_d", false,-1);
    tracep->declBit(c+799,"lsr6_d", false,-1);
    tracep->declBit(c+800,"lsr7_d", false,-1);
    tracep->declBit(c+801,"rls_int_d", false,-1);
    tracep->declBit(c+802,"thre_int_d", false,-1);
    tracep->declBit(c+803,"ms_int_d", false,-1);
    tracep->declBit(c+804,"ti_int_d", false,-1);
    tracep->declBit(c+805,"rda_int_d", false,-1);
    tracep->declBit(c+806,"rls_int_rise", false,-1);
    tracep->declBit(c+807,"thre_int_rise", false,-1);
    tracep->declBit(c+808,"ms_int_rise", false,-1);
    tracep->declBit(c+809,"ti_int_rise", false,-1);
    tracep->declBit(c+810,"rda_int_rise", false,-1);
    tracep->declBit(c+811,"rls_int_pnd", false,-1);
    tracep->declBit(c+812,"rda_int_pnd", false,-1);
    tracep->declBit(c+813,"thre_int_pnd", false,-1);
    tracep->declBit(c+814,"ms_int_pnd", false,-1);
    tracep->declBit(c+815,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1505,"Tp", false,-1, 31,0);
    tracep->declBus(c+1505,"width", false,-1, 31,0);
    tracep->declBus(c+1468,"init_value", false,-1, 0,0);
    tracep->declBit(c+1393,"rst_i", false,-1);
    tracep->declBit(c+1392,"clk_i", false,-1);
    tracep->declBit(c+1457,"stage1_rst_i", false,-1);
    tracep->declBit(c+1458,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1412,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+734,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+816,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1393,"wb_rst_i", false,-1);
    tracep->declBus(c+739,"lcr", false,-1, 7,0);
    tracep->declBit(c+779,"rf_pop", false,-1);
    tracep->declBit(c+791,"srx_pad_i", false,-1);
    tracep->declBit(c+733,"enable", false,-1);
    tracep->declBit(c+748,"rx_reset", false,-1);
    tracep->declBit(c+24,"lsr_mask", false,-1);
    tracep->declBus(c+786,"counter_t", false,-1, 9,0);
    tracep->declBus(c+782,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1435,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+758,"rf_overrun", false,-1);
    tracep->declBit(c+780,"rf_error_bit", false,-1);
    tracep->declBus(c+785,"rstate", false,-1, 3,0);
    tracep->declBit(c+781,"rf_push_pulse", false,-1);
    tracep->declBus(c+817,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+818,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+819,"rshift", false,-1, 7,0);
    tracep->declBit(c+820,"rparity", false,-1);
    tracep->declBit(c+821,"rparity_error", false,-1);
    tracep->declBit(c+822,"rframing_error", false,-1);
    tracep->declBit(c+823,"rbit_in", false,-1);
    tracep->declBit(c+824,"rparity_xor", false,-1);
    tracep->declBus(c+825,"counter_b", false,-1, 7,0);
    tracep->declBit(c+826,"rf_push_q", false,-1);
    tracep->declBus(c+827,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+828,"rf_push", false,-1);
    tracep->declBit(c+829,"break_error", false,-1);
    tracep->declBit(c+830,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+831,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+832,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+833,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1459,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1489,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1488,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1484,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1486,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1485,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1487,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1483,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1491,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1492,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1504,"sr_push", false,-1, 3,0);
    tracep->declBus(c+834,"toc_value", false,-1, 9,0);
    tracep->declBus(c+835,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1478,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1506,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1476,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1463,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1393,"wb_rst_i", false,-1);
    tracep->declBit(c+781,"push", false,-1);
    tracep->declBit(c+779,"pop", false,-1);
    tracep->declBus(c+827,"data_in", false,-1, 10,0);
    tracep->declBit(c+748,"fifo_reset", false,-1);
    tracep->declBit(c+24,"reset_status", false,-1);
    tracep->declBus(c+1435,"data_out", false,-1, 10,0);
    tracep->declBit(c+758,"overrun", false,-1);
    tracep->declBus(c+782,"count", false,-1, 4,0);
    tracep->declBit(c+780,"error_bit", false,-1);
    tracep->declBus(c+1436,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+836+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+852,"top", false,-1, 3,0);
    tracep->declBus(c+853,"bottom", false,-1, 3,0);
    tracep->declBus(c+854,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+855,"word0", false,-1, 2,0);
    tracep->declBus(c+856,"word1", false,-1, 2,0);
    tracep->declBus(c+857,"word2", false,-1, 2,0);
    tracep->declBus(c+858,"word3", false,-1, 2,0);
    tracep->declBus(c+859,"word4", false,-1, 2,0);
    tracep->declBus(c+860,"word5", false,-1, 2,0);
    tracep->declBus(c+861,"word6", false,-1, 2,0);
    tracep->declBus(c+862,"word7", false,-1, 2,0);
    tracep->declBus(c+863,"word8", false,-1, 2,0);
    tracep->declBus(c+864,"word9", false,-1, 2,0);
    tracep->declBus(c+865,"word10", false,-1, 2,0);
    tracep->declBus(c+866,"word11", false,-1, 2,0);
    tracep->declBus(c+867,"word12", false,-1, 2,0);
    tracep->declBus(c+868,"word13", false,-1, 2,0);
    tracep->declBus(c+869,"word14", false,-1, 2,0);
    tracep->declBus(c+870,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1476,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1496,"data_width", false,-1, 31,0);
    tracep->declBus(c+1506,"depth", false,-1, 31,0);
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+781,"we", false,-1);
    tracep->declBus(c+852,"a", false,-1, 3,0);
    tracep->declBus(c+853,"dpra", false,-1, 3,0);
    tracep->declBus(c+871,"di", false,-1, 7,0);
    tracep->declBus(c+1436,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+491+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1393,"wb_rst_i", false,-1);
    tracep->declBus(c+739,"lcr", false,-1, 7,0);
    tracep->declBit(c+778,"tf_push", false,-1);
    tracep->declBus(c+1323,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+733,"enable", false,-1);
    tracep->declBit(c+749,"tx_reset", false,-1);
    tracep->declBit(c+24,"lsr_mask", false,-1);
    tracep->declBit(c+790,"stx_pad_o", false,-1);
    tracep->declBus(c+784,"tstate", false,-1, 2,0);
    tracep->declBus(c+783,"tf_count", false,-1, 4,0);
    tracep->declBus(c+872,"counter", false,-1, 4,0);
    tracep->declBus(c+873,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+874,"shift_out", false,-1, 6,0);
    tracep->declBit(c+875,"stx_o_tmp", false,-1);
    tracep->declBit(c+876,"parity_xor", false,-1);
    tracep->declBit(c+877,"tf_pop", false,-1);
    tracep->declBit(c+878,"bit_out", false,-1);
    tracep->declBus(c+1323,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1165,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+879,"tf_overrun", false,-1);
    tracep->declBus(c+1462,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1448,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1507,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1508,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1469,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1509,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1496,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1506,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1476,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1463,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+1393,"wb_rst_i", false,-1);
    tracep->declBit(c+778,"push", false,-1);
    tracep->declBit(c+877,"pop", false,-1);
    tracep->declBus(c+1323,"data_in", false,-1, 7,0);
    tracep->declBit(c+749,"fifo_reset", false,-1);
    tracep->declBit(c+24,"reset_status", false,-1);
    tracep->declBus(c+1165,"data_out", false,-1, 7,0);
    tracep->declBit(c+879,"overrun", false,-1);
    tracep->declBus(c+783,"count", false,-1, 4,0);
    tracep->declBus(c+880,"top", false,-1, 3,0);
    tracep->declBus(c+881,"bottom", false,-1, 3,0);
    tracep->declBus(c+882,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1476,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1496,"data_width", false,-1, 31,0);
    tracep->declBus(c+1506,"depth", false,-1, 31,0);
    tracep->declBit(c+1392,"clk", false,-1);
    tracep->declBit(c+778,"we", false,-1);
    tracep->declBus(c+880,"a", false,-1, 3,0);
    tracep->declBus(c+881,"dpra", false,-1, 3,0);
    tracep->declBus(c+1323,"di", false,-1, 7,0);
    tracep->declBus(c+1165,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+507+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBit(c+1332,"auto_in_psel", false,-1);
    tracep->declBit(c+1333,"auto_in_penable", false,-1);
    tracep->declBit(c+1137,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1302,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1448,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"auto_in_pready", false,-1);
    tracep->declBit(c+1457,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1418,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1406,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1407,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1408,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1409,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1410,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1411,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1392,"clock", false,-1);
    tracep->declBit(c+1393,"reset", false,-1);
    tracep->declBus(c+1319,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1332,"in_psel", false,-1);
    tracep->declBit(c+1333,"in_penable", false,-1);
    tracep->declBus(c+1448,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1137,"in_pwrite", false,-1);
    tracep->declBus(c+1138,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1139,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1334,"in_pready", false,-1);
    tracep->declBus(c+1418,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1457,"in_pslverr", false,-1);
    tracep->declBus(c+1406,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1407,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1408,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1409,"vga_hsync", false,-1);
    tracep->declBit(c+1410,"vga_vsync", false,-1);
    tracep->declBit(c+1411,"vga_valid", false,-1);
    tracep->declBus(c+1510,"FB_AW", false,-1, 31,0);
    tracep->declBit(c+1437,"apb_wr", false,-1);
    tracep->declBit(c+1438,"apb_rd", false,-1);
    tracep->declBus(c+1324,"fb_index", false,-1, 18,0);
    tracep->declBus(c+1511,"H_TOTAL", false,-1, 9,0);
    tracep->declBus(c+1512,"H_SYNC", false,-1, 9,0);
    tracep->declBus(c+1513,"H_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+1514,"H_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+1515,"V_TOTAL", false,-1, 9,0);
    tracep->declBus(c+1516,"V_SYNC", false,-1, 9,0);
    tracep->declBus(c+1517,"V_ACTIVE", false,-1, 9,0);
    tracep->declBus(c+1518,"V_BACKPORCH", false,-1, 9,0);
    tracep->declBus(c+523,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+524,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+525,"h_valid", false,-1);
    tracep->declBit(c+526,"v_valid", false,-1);
    tracep->declBus(c+527,"h_addr", false,-1, 9,0);
    tracep->declBus(c+528,"v_addr", false,-1, 9,0);
    tracep->declBus(c+529,"vga_index", false,-1, 18,0);
    tracep->declBus(c+530,"pixel_q", false,-1, 31,0);
    tracep->declBit(c+531,"h_valid_q", false,-1);
    tracep->declBit(c+532,"v_valid_q", false,-1);
    tracep->declBit(c+533,"hsync_q", false,-1);
    tracep->declBit(c+534,"vsync_q", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+609,"sck", false,-1);
    tracep->declBit(c+883,"ss", false,-1);
    tracep->declBit(c+611,"mosi", false,-1);
    tracep->declBit(c+884,"miso", false,-1);
    tracep->declBus(c+606,"buffer", false,-1, 7,0);
    tracep->declBus(c+607,"bits", false,-1, 3,0);
    tracep->declBus(c+1519,"state", false,-1, 1,0);
    tracep->declBus(c+885,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+609,"sck", false,-1);
    tracep->declBit(c+886,"ss", false,-1);
    tracep->declBit(c+611,"mosi", false,-1);
    tracep->declBit(c+1439,"miso", false,-1);
    tracep->declBit(c+886,"reset", false,-1);
    tracep->declBus(c+1154,"state", false,-1, 2,0);
    tracep->declBus(c+1155,"counter", false,-1, 7,0);
    tracep->declBus(c+1440,"cmd", false,-1, 7,0);
    tracep->declBus(c+1441,"addr", false,-1, 23,0);
    tracep->declBus(c+1156,"data", false,-1, 31,0);
    tracep->declBit(c+1157,"ren", false,-1);
    tracep->declBus(c+608,"rdata", false,-1, 31,0);
    tracep->declBus(c+1442,"raddr", false,-1, 31,0);
    tracep->declBus(c+1443,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+609,"clock", false,-1);
    tracep->declBit(c+1157,"valid", false,-1);
    tracep->declBus(c+1440,"cmd", false,-1, 7,0);
    tracep->declBus(c+1442,"addr", false,-1, 31,0);
    tracep->declBus(c+608,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1325,"sck", false,-1);
    tracep->declBit(c+1326,"ce_n", false,-1);
    tracep->declBus(c+1389,"dio", false,-1, 3,0);
    tracep->declBus(c+1462,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1448,"CTRL", false,-1, 2,0);
    tracep->declBus(c+1507,"ADDR", false,-1, 2,0);
    tracep->declBus(c+1508,"ARRG", false,-1, 2,0);
    tracep->declBus(c+1469,"READ", false,-1, 2,0);
    tracep->declBus(c+1509,"WRITE", false,-1, 2,0);
    tracep->declBus(c+1470,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+1472,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+1471,"CMD_QPI", false,-1, 7,0);
    tracep->declBus(c+888,"state", false,-1, 2,0);
    tracep->declBus(c+1390,"next", false,-1, 2,0);
    tracep->declBus(c+889,"ctrl", false,-1, 7,0);
    tracep->declBus(c+890,"addr", false,-1, 23,0);
    tracep->declBus(c+891,"counter", false,-1, 7,0);
    tracep->declBus(c+892,"dout", false,-1, 3,0);
    tracep->declBus(c+893,"wr_hi", false,-1, 3,0);
    tracep->declBit(c+894,"qpi", false,-1);
    tracep->declBit(c+895,"douten", false,-1);
    tracep->declBus(c+896,"CMD_LAST", false,-1, 7,0);
    tracep->declBus(c+897,"ADDR_FIRST", false,-1, 7,0);
    tracep->declBus(c+898,"ADDR_LAST", false,-1, 7,0);
    tracep->declBus(c+899,"DUMMY_LAST", false,-1, 7,0);
    tracep->declBus(c+900,"RD_FIRST", false,-1, 7,0);
    tracep->declBus(c+901,"RD_LAST", false,-1, 7,0);
    tracep->declBus(c+902,"WR_FIRST", false,-1, 7,0);
    tracep->declBus(c+903,"WR_LAST", false,-1, 7,0);
    tracep->declBus(c+904,"rd_off", false,-1, 7,0);
    tracep->declBus(c+905,"wr_off", false,-1, 7,0);
    tracep->declBus(c+906,"read_byte", false,-1, 1,0);
    tracep->declBit(c+907,"read_index", false,-1);
    tracep->declBus(c+908,"write_byte", false,-1, 1,0);
    tracep->declBus(c+909,"rd_idx", false,-1, 21,0);
    tracep->declBus(c+910,"wr_idx", false,-1, 21,0);
    tracep->declBus(c+1391,"ctrl_done", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+612,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1169,"dqm", false,-1, 3,0);
    tracep->declBus(c+1179,"dq", false,-1, 31,0);
    tracep->declBit(c+1300,"sel", false,-1);
    tracep->declBit(c+887,"broadcast_cmd", false,-1);
    tracep->pushNamePrefix("u_pair0 ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+1444,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1169,"dqm", false,-1, 3,0);
    tracep->declBus(c+1179,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+1444,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1177,"dqm", false,-1, 1,0);
    tracep->declBus(c+1180,"dq", false,-1, 15,0);
    tracep->declBus(c+1520,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1505,"MODE", false,-1, 31,0);
    tracep->declBus(c+1475,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1521,"READ", false,-1, 31,0);
    tracep->declBus(c+1476,"WRITE", false,-1, 31,0);
    tracep->declBus(c+911,"state", false,-1, 2,0);
    tracep->declBus(c+1385,"next", false,-1, 2,0);
    tracep->declBus(c+912,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+913,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+914,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1383,"ctrl", false,-1, 3,0);
    tracep->declBus(c+915,"dq_out", false,-1, 15,0);
    tracep->declBit(c+916,"dq_oe", false,-1);
    tracep->declBus(c+917,"cur_a", false,-1, 8,0);
    tracep->declBus(c+918,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+919+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+1444,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1178,"dqm", false,-1, 1,0);
    tracep->declBus(c+1181,"dq", false,-1, 15,0);
    tracep->declBus(c+1520,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1505,"MODE", false,-1, 31,0);
    tracep->declBus(c+1475,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1521,"READ", false,-1, 31,0);
    tracep->declBus(c+1476,"WRITE", false,-1, 31,0);
    tracep->declBus(c+923,"state", false,-1, 2,0);
    tracep->declBus(c+1386,"next", false,-1, 2,0);
    tracep->declBus(c+924,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+925,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+926,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1383,"ctrl", false,-1, 3,0);
    tracep->declBus(c+927,"dq_out", false,-1, 15,0);
    tracep->declBit(c+928,"dq_oe", false,-1);
    tracep->declBus(c+929,"cur_a", false,-1, 8,0);
    tracep->declBus(c+930,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+931+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pair1 ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+1445,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1169,"dqm", false,-1, 3,0);
    tracep->declBus(c+1179,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("u_chip0 ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+1445,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1177,"dqm", false,-1, 1,0);
    tracep->declBus(c+1180,"dq", false,-1, 15,0);
    tracep->declBus(c+1520,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1505,"MODE", false,-1, 31,0);
    tracep->declBus(c+1475,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1521,"READ", false,-1, 31,0);
    tracep->declBus(c+1476,"WRITE", false,-1, 31,0);
    tracep->declBus(c+935,"state", false,-1, 2,0);
    tracep->declBus(c+1387,"next", false,-1, 2,0);
    tracep->declBus(c+936,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+937,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+938,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1384,"ctrl", false,-1, 3,0);
    tracep->declBus(c+939,"dq_out", false,-1, 15,0);
    tracep->declBit(c+940,"dq_oe", false,-1);
    tracep->declBus(c+941,"cur_a", false,-1, 8,0);
    tracep->declBus(c+942,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+943+i*1,"active_row", true,(i+0), 12,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_chip1 ");
    tracep->declBit(c+1415,"clk", false,-1);
    tracep->declBit(c+1166,"cke", false,-1);
    tracep->declBit(c+1445,"cs", false,-1);
    tracep->declBit(c+613,"ras", false,-1);
    tracep->declBit(c+614,"cas", false,-1);
    tracep->declBit(c+615,"we", false,-1);
    tracep->declBus(c+1167,"a", false,-1, 12,0);
    tracep->declBus(c+1168,"ba", false,-1, 1,0);
    tracep->declBus(c+1178,"dqm", false,-1, 1,0);
    tracep->declBus(c+1181,"dq", false,-1, 15,0);
    tracep->declBus(c+1520,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1505,"MODE", false,-1, 31,0);
    tracep->declBus(c+1475,"READ_WAIT", false,-1, 31,0);
    tracep->declBus(c+1521,"READ", false,-1, 31,0);
    tracep->declBus(c+1476,"WRITE", false,-1, 31,0);
    tracep->declBus(c+947,"state", false,-1, 2,0);
    tracep->declBus(c+1388,"next", false,-1, 2,0);
    tracep->declBus(c+948,"Mode_Reg", false,-1, 12,0);
    tracep->declBus(c+949,"cas_counter", false,-1, 2,0);
    tracep->declBus(c+950,"burst_counter", false,-1, 3,0);
    tracep->declBus(c+1384,"ctrl", false,-1, 3,0);
    tracep->declBus(c+951,"dq_out", false,-1, 15,0);
    tracep->declBit(c+952,"dq_oe", false,-1);
    tracep->declBus(c+953,"cur_a", false,-1, 8,0);
    tracep->declBus(c+954,"cur_ba", false,-1, 1,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+955+i*1,"active_row", true,(i+0), 12,0);
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
    tracep->declBus(c+964,"araddr", false,-1, 31,0);
    tracep->declBit(c+1125,"arvalid", false,-1);
    tracep->declBit(c+1446,"arready", false,-1);
    tracep->declBus(c+1459,"arid", false,-1, 3,0);
    tracep->declBus(c+1460,"arlen", false,-1, 7,0);
    tracep->declBus(c+1454,"arburst", false,-1, 1,0);
    tracep->declBus(c+1507,"arsize", false,-1, 2,0);
    tracep->declBus(c+1142,"rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"rresp", false,-1, 1,0);
    tracep->declBit(c+1296,"rvalid", false,-1);
    tracep->declBit(c+1297,"rready", false,-1);
    tracep->declBus(c+142,"rid", false,-1, 3,0);
    tracep->declBit(c+143,"rlast", false,-1);
    tracep->declBus(c+1461,"awaddr", false,-1, 31,0);
    tracep->declBit(c+1457,"awvalid", false,-1);
    tracep->declBit(c+1522,"awready", false,-1);
    tracep->declBus(c+1507,"awsize", false,-1, 2,0);
    tracep->declBus(c+1459,"awid", false,-1, 3,0);
    tracep->declBus(c+1460,"awlen", false,-1, 7,0);
    tracep->declBus(c+1454,"awburst", false,-1, 1,0);
    tracep->declBus(c+1461,"wdata", false,-1, 31,0);
    tracep->declBus(c+1459,"wstrb", false,-1, 3,0);
    tracep->declBit(c+1457,"wvalid", false,-1);
    tracep->declBit(c+1523,"wready", false,-1);
    tracep->declBit(c+1524,"wlast", false,-1);
    tracep->declBus(c+1525,"bresp", false,-1, 1,0);
    tracep->declBit(c+1526,"bvalid", false,-1);
    tracep->declBit(c+1457,"bready", false,-1);
    tracep->declBus(c+1527,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1197,"araddr", false,-1, 31,0);
    tracep->declBit(c+1126,"arvalid", false,-1);
    tracep->declBit(c+1447,"arready", false,-1);
    tracep->declBus(c+1459,"arid", false,-1, 3,0);
    tracep->declBus(c+1460,"arlen", false,-1, 7,0);
    tracep->declBus(c+1454,"arburst", false,-1, 1,0);
    tracep->declBus(c+1127,"arsize", false,-1, 2,0);
    tracep->declBus(c+1142,"rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"rresp", false,-1, 1,0);
    tracep->declBit(c+1298,"rvalid", false,-1);
    tracep->declBit(c+1299,"rready", false,-1);
    tracep->declBus(c+142,"rid", false,-1, 3,0);
    tracep->declBit(c+143,"rlast", false,-1);
    tracep->declBus(c+1197,"awaddr", false,-1, 31,0);
    tracep->declBit(c+959,"awvalid", false,-1);
    tracep->declBit(c+137,"awready", false,-1);
    tracep->declBus(c+960,"awsize", false,-1, 2,0);
    tracep->declBus(c+1459,"awid", false,-1, 3,0);
    tracep->declBus(c+1460,"awlen", false,-1, 7,0);
    tracep->declBus(c+1454,"awburst", false,-1, 1,0);
    tracep->declBus(c+1198,"wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"wstrb", false,-1, 3,0);
    tracep->declBit(c+961,"wvalid", false,-1);
    tracep->declBit(c+138,"wready", false,-1);
    tracep->declBit(c+1458,"wlast", false,-1);
    tracep->declBus(c+1141,"bresp", false,-1, 1,0);
    tracep->declBit(c+1140,"bvalid", false,-1);
    tracep->declBit(c+1200,"bready", false,-1);
    tracep->declBus(c+139,"bid", false,-1, 3,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1201,"araddr", false,-1, 31,0);
    tracep->declBit(c+962,"arvalid", false,-1);
    tracep->declBit(c+140,"arready", false,-1);
    tracep->declBus(c+1459,"arid", false,-1, 3,0);
    tracep->declBus(c+1460,"arlen", false,-1, 7,0);
    tracep->declBus(c+1454,"arburst", false,-1, 1,0);
    tracep->declBus(c+963,"arsize", false,-1, 2,0);
    tracep->declBus(c+1142,"rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"rresp", false,-1, 1,0);
    tracep->declBit(c+141,"rvalid", false,-1);
    tracep->declBit(c+1202,"rready", false,-1);
    tracep->declBus(c+142,"rid", false,-1, 3,0);
    tracep->declBit(c+143,"rlast", false,-1);
    tracep->declBus(c+1197,"awaddr", false,-1, 31,0);
    tracep->declBit(c+959,"awvalid", false,-1);
    tracep->declBit(c+137,"awready", false,-1);
    tracep->declBus(c+960,"awsize", false,-1, 2,0);
    tracep->declBus(c+1459,"awid", false,-1, 3,0);
    tracep->declBus(c+1460,"awlen", false,-1, 7,0);
    tracep->declBus(c+1454,"awburst", false,-1, 1,0);
    tracep->declBus(c+1198,"wdata", false,-1, 31,0);
    tracep->declBus(c+1199,"wstrb", false,-1, 3,0);
    tracep->declBit(c+961,"wvalid", false,-1);
    tracep->declBit(c+138,"wready", false,-1);
    tracep->declBit(c+1458,"wlast", false,-1);
    tracep->declBus(c+1141,"bresp", false,-1, 1,0);
    tracep->declBit(c+1140,"bvalid", false,-1);
    tracep->declBit(c+1200,"bready", false,-1);
    tracep->declBus(c+139,"bid", false,-1, 3,0);
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
    tracep->pushNamePrefix("bus_ifu\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_lsu\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_master\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->pushNamePrefix("bus\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_xbar ");
    tracep->pushNamePrefix("ifu_s\211 ");
    Vtop___024root__trace_init_sub__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu__0(vlSelf, tracep);
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
    VlWide<3>/*95:0*/ __Vtemp_h533d3b91__0;
    VlWide<3>/*95:0*/ __Vtemp_h533d5f52__0;
    VlWide<3>/*95:0*/ __Vtemp_h533d5eff__0;
    VlWide<3>/*95:0*/ __Vtemp_h533d5ec0__0;
    VlWide<3>/*95:0*/ __Vtemp_h533d5e7e__0;
    VlWide<3>/*95:0*/ __Vtemp_h533d5e3d__0;
    // Body
    __Vtemp_h533d3b91__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][0U];
    __Vtemp_h533d3b91__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][1U];
    __Vtemp_h533d3b91__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [0U][2U];
    bufp->fullWData(oldp+1,(__Vtemp_h533d3b91__0),67);
    __Vtemp_h533d5f52__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][0U];
    __Vtemp_h533d5f52__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][1U];
    __Vtemp_h533d5f52__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [1U][2U];
    bufp->fullWData(oldp+4,(__Vtemp_h533d5f52__0),67);
    __Vtemp_h533d5eff__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][0U];
    __Vtemp_h533d5eff__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][1U];
    __Vtemp_h533d5eff__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [2U][2U];
    bufp->fullWData(oldp+7,(__Vtemp_h533d5eff__0),67);
    __Vtemp_h533d5ec0__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][0U];
    __Vtemp_h533d5ec0__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][1U];
    __Vtemp_h533d5ec0__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [3U][2U];
    bufp->fullWData(oldp+10,(__Vtemp_h533d5ec0__0),67);
    __Vtemp_h533d5e7e__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][0U];
    __Vtemp_h533d5e7e__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][1U];
    __Vtemp_h533d5e7e__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [4U][2U];
    bufp->fullWData(oldp+13,(__Vtemp_h533d5e7e__0),67);
    __Vtemp_h533d5e3d__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][0U];
    __Vtemp_h533d5e3d__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][1U];
    __Vtemp_h533d5e3d__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__pma_table
        [5U][2U];
    bufp->fullWData(oldp+16,(__Vtemp_h533d5e3d__0),67);
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_prdata),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+31,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+32,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+35,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+36,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+37,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+38,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+40,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+41,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+45,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+46,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+47,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+48,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+49,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+50,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+60,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+63,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+64,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+65,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+66,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+67,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+71,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+72,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+73,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+74,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+143,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+144,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+148,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+149,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+151,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+186,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+192,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+195,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+196,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+209,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+210,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+211,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+212,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullWData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dbg_reg),1024);
    bufp->fullIData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[0]),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[1]),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[2]),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[3]),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[4]),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[5]),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[6]),32);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[7]),32);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[8]),32);
    bufp->fullIData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[9]),32);
    bufp->fullIData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[10]),32);
    bufp->fullIData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[11]),32);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[12]),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[13]),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[14]),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[15]),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[16]),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[17]),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[18]),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[19]),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[20]),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[21]),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[22]),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[23]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[24]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[25]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[26]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[27]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[28]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[29]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[30]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__gpr[31]),32);
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+527,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+528,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+529,((0x7ffffU & (((IData)(0x280U) 
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
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel_q),32);
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid_q));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid_q));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__hsync_q));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vsync_q));
    bufp->fullBit(oldp+535,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+536,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+537,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+539,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+541,(((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+544,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+545,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+546,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+547,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+548,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+549,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+550,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+551,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+552,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+553,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+554,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+555,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+557,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+560,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+561,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+562,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+563,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+564,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+565,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+566,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+567,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+568,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+569,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+570,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+571,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+572,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+573,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+574,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+575,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+576,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+577,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+578,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+579,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+580,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+581,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+582,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+583,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+584,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+585,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+586,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+587,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+588,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+589,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+590,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+591,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+594,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+595,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+596,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+597,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+598,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+599,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+600,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+601,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+602,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+603,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+604,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+605,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__buffer),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bits),4);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+612,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+613,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+614,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+615,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__delay_counter),32);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__prdata_save),32);
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__pslverr_save));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),32);
    bufp->fullSData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__gpio_out_r),16);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_0_r),8);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_1_r),8);
    bufp->fullCData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_2_r),8);
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_reg_3_r),8);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullCData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__shifter),8);
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__par_acc));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_ok));
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode),8);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__scancode_valid));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+635,((0xfU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
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
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 0xbU
                                                    : 0xeU)
                                                : (1U 
                                                   & (0xebU 
                                                      >> 
                                                      (7U 
                                                       & ((IData)(7U) 
                                                          - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0)
                                                ? (
                                                   (4U 
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
    bufp->fullBit(oldp+636,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT____VdfgTmp_hcd05e245__0))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+639,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode));
    bufp->fullBit(oldp+642,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state),2);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 1U : 7U)),8);
    bufp->fullCData(oldp+648,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 2U : 8U)),8);
    bufp->fullCData(oldp+649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+650,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+651,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+652,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                            ? 0xeU : 0x14U)))),8);
    bufp->fullCData(oldp+653,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                    ? 0xbU : 0xeU) : 
                               (1U & (0xebU >> (7U 
                                                & ((IData)(7U) 
                                                   - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))))),4);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8),8);
    bufp->fullCData(oldp+655,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+656,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                        ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 4U)))
                                        : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 8U)
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0xcU))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__addr_ph8))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x14U)))))),4);
    bufp->fullCData(oldp+657,((0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                         >> 1U) - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                    ? 7U
                                                    : 0xaU)))),8);
    bufp->fullCData(oldp+658,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                                 ? 7U
                                                 : 0xaU)))),2);
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullCData(oldp+662,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+663,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_mode)
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))
                                    ? 8U : 3U) : (1U 
                                                  & (0x38U 
                                                     >> 
                                                     (7U 
                                                      & ((IData)(7U) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter))))))),4);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8),8);
    bufp->fullCData(oldp+665,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))),3);
    bufp->fullCData(oldp+666,((0xfU & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                        ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 4U)))
                                        : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 8U)
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0xcU))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__addr_ph8))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x10U)
                                                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                                                   >> 0x14U)))))),4);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8),8);
    bufp->fullCData(oldp+668,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))),3);
    bufp->fullCData(oldp+669,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+670,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),14);
    bufp->fullSData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),14);
    bufp->fullSData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),14);
    bufp->fullSData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),14);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o),32);
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack));
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr),32);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__poll_go_seen));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_adr),5);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_dat),32);
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_we));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_req));
    bufp->fullBit(oldp+700,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
    bufp->fullIData(oldp+701,((0x3000000U | (0xffffffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr))),32);
    bufp->fullIData(oldp+702,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                    >> 8U)) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o 
                                                   >> 0x18U))))),32);
    bufp->fullSData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+710,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+711,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+712,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+713,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+714,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+715,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+720,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+722,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+723,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+725,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+729,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+730,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+732,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+750,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+751,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+752,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+753,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+754,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+755,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+756,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
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
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+760,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+761,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+780,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+787,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+806,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+807,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+808,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+809,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+810,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+829,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+830,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+831,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+832,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+833,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+835,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+854,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+871,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+882,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+883,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__next),2);
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd));
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl),8);
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dout),4);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_hi),4);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi));
    bufp->fullBit(oldp+895,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))));
    bufp->fullCData(oldp+896,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 1U : 7U)),8);
    bufp->fullCData(oldp+897,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 2U : 8U)),8);
    bufp->fullCData(oldp+898,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 7U : 0xdU)),8);
    bufp->fullCData(oldp+899,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 0xdU : 0x13U)),8);
    bufp->fullCData(oldp+900,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 0xeU : 0x14U)),8);
    bufp->fullCData(oldp+901,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 0x15U : 0x1bU)),8);
    bufp->fullCData(oldp+902,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 8U : 0xeU)),8);
    bufp->fullCData(oldp+903,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi)
                                ? 0xfU : 0x15U)),8);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off),8);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off),8);
    bufp->fullCData(oldp+906,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+907,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_off))));
    bufp->fullCData(oldp+908,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                                     >> 1U))),2);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_idx),22);
    bufp->fullIData(oldp+910,((0x3fffffU & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                            + (3U & 
                                               ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_off) 
                                                >> 1U))))),22);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+912,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+917,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+921,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+922,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+924,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+929,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+931,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+934,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__state),3);
    bufp->fullSData(oldp+936,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cas_counter),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__burst_counter),4);
    bufp->fullSData(oldp+939,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_out),16);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__dq_oe));
    bufp->fullSData(oldp+941,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_a),9);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__cur_ba),2);
    bufp->fullSData(oldp+943,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[0]),13);
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[1]),13);
    bufp->fullSData(oldp+945,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[2]),13);
    bufp->fullSData(oldp+946,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__active_row[3]),13);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__state),3);
    bufp->fullSData(oldp+948,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__Mode_Reg),13);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cas_counter),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__burst_counter),4);
    bufp->fullSData(oldp+951,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_out),16);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__dq_oe));
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_a),9);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__cur_ba),2);
    bufp->fullSData(oldp+955,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[0]),13);
    bufp->fullSData(oldp+956,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[1]),13);
    bufp->fullSData(oldp+957,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[2]),13);
    bufp->fullSData(oldp+958,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__active_row[3]),13);
    bufp->fullBit(oldp+959,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awvalid));
    bufp->fullCData(oldp+960,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.awsize),3);
    bufp->fullBit(oldp+961,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wvalid));
    bufp->fullBit(oldp+962,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arvalid));
    bufp->fullCData(oldp+963,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.arsize),3);
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mstatus),32);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mepc),32);
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcause),32);
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtvec),32);
    bufp->fullIData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcycle),32);
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mcycleh),32);
    bufp->fullIData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mvendorid),32);
    bufp->fullIData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__marchid),32);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sb));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sh));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sw));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc));
    bufp->fullCData(oldp+1016,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                         >> 7U))),5);
    bufp->fullCData(oldp+1017,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1018,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                         >> 0x14U))),5);
    bufp->fullIData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__immI),32);
    bufp->fullIData(oldp+1020,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save)),32);
    bufp->fullIData(oldp+1021,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+1022,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                      >> 7U)))))),32);
    bufp->fullIData(oldp+1023,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                       >> 0x14U)))))),32);
    bufp->fullIData(oldp+1024,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                >> 0x14U)),32);
    bufp->fullIData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrw_rst),32);
    bufp->fullBit(oldp+1026,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_inst__DOT____VdfgTmp_h71776485__0) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jalr) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lb) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lh) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lw) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lbu) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lhu) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_inst__DOT____VdfgTmp_haf3ace1d__0))))))))))))))))))))))))))))));
    bufp->fullIData(oldp+1027,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jump_target),32);
    bufp->fullBit(oldp+1029,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__addi) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slti) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltiu) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xori) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ori) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__andi) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slli) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srli) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srai) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sub) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sll) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__slt) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sltu) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xor_inst) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__srl) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sra) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__or_inst) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__and_inst) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lui)))))))))))))))))))))));
    bufp->fullBit(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__beq) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bne) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__blt) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bge) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bgeu) 
                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bltu))))))));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__event_load));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__event_store));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__event_jump));
    bufp->fullBit(oldp+1034,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrw) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrs) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csrrc) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret))))));
    bufp->fullBit(oldp+1035,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ebreak) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ecall))));
    bufp->fullQData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cycles),64);
    bufp->fullQData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_cycles),64);
    bufp->fullQData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_cycles),64);
    bufp->fullQData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_cycles),64);
    bufp->fullBit(oldp+1044,((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+1045,((0xfU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                       >> 0x18U))));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_hit_sdram));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_hit_other));
    bufp->fullQData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_flash_cycles),64);
    bufp->fullQData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_sram_cycles),64);
    bufp->fullQData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_sdram_cycles),64);
    bufp->fullQData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_other_cycles),64);
    bufp->fullQData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_flash_cycles),64);
    bufp->fullQData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_sram_cycles),64);
    bufp->fullQData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_sdram_cycles),64);
    bufp->fullQData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_other_cycles),64);
    bufp->fullQData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_flash_cycles),64);
    bufp->fullQData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_sram_cycles),64);
    bufp->fullQData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_sdram_cycles),64);
    bufp->fullQData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_other_cycles),64);
    bufp->fullQData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_flash_count),64);
    bufp->fullQData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_sram_count),64);
    bufp->fullQData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_sdram_count),64);
    bufp->fullQData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_other_count),64);
    bufp->fullQData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_flash_count),64);
    bufp->fullQData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_sram_count),64);
    bufp->fullQData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_sdram_count),64);
    bufp->fullQData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_other_count),64);
    bufp->fullQData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_flash_count),64);
    bufp->fullQData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_sram_count),64);
    bufp->fullQData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_sdram_count),64);
    bufp->fullQData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_other_count),64);
    bufp->fullQData(oldp+1096,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_flash_cycles 
                                + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_flash_cycles 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_flash_cycles))),64);
    bufp->fullQData(oldp+1098,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_sram_cycles 
                                + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_sram_cycles 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_sram_cycles))),64);
    bufp->fullQData(oldp+1100,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_sdram_cycles 
                                + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_sdram_cycles 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_sdram_cycles))),64);
    bufp->fullQData(oldp+1102,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_fetch_other_cycles 
                                + (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_read_other_cycles 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_write_other_cycles))),64);
    bufp->fullIData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save),32);
    bufp->fullIData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__rdata_save),32);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__state),2);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__next),2);
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io));
    bufp->fullCData(oldp+1109,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save)),7);
    bufp->fullCData(oldp+1110,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1111,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                >> 0x19U)),7);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__error_save),2);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__instr_valid_save));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__master_validation_error_save));
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__error_save),2);
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__read_complete_save));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__write_complete_save));
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done));
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state),2);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__select_lsu_ar));
    bufp->fullBit(oldp+1124,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                              | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                                  & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid))) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arvalid)))));
    bufp->fullBit(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.arvalid));
    bufp->fullBit(oldp+1126,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arvalid));
    bufp->fullCData(oldp+1127,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.arsize),3);
    bufp->fullIData(oldp+1128,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__auipc) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jal) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_inst__DOT____VdfgTmp_heb8878a9__0)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1129,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__immI 
                                ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1130,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__immI 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1131,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__immI 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1)),32);
    bufp->fullIData(oldp+1132,(VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__immI)),32);
    bufp->fullIData(oldp+1133,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__immI)),32);
    bufp->fullIData(oldp+1134,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                             >> 0x14U)))),32);
    bufp->fullIData(oldp+1135,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                >> (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                             >> 0x14U)))),32);
    bufp->fullIData(oldp+1136,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                              (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__rdata_save 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bresp),2);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rresp),2);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync),2);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync),2);
    bufp->fullBit(oldp+1146,((IData)((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__clk_sync)))));
    bufp->fullBit(oldp+1147,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__dat_sync) 
                                    >> 1U))));
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1149,((0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
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
    bufp->fullCData(oldp+1150,((0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))
                                          ? (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 8U)
                                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                             >> 0x18U)))),8);
    bufp->fullCData(oldp+1151,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1152,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wdata),32);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1157,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__FINAL_COUNT),8);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_i),32);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_sel),4);
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_we));
    bufp->fullCData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullSData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1170,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wr_err_seen));
    bufp->fullCData(oldp+1177,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1178,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT___dq_wire),32);
    bufp->fullSData(oldp+1180,((0xffffU & vlSelf->ysyxSoCFull__DOT___dq_wire)),16);
    bufp->fullSData(oldp+1181,((vlSelf->ysyxSoCFull__DOT___dq_wire 
                                >> 0x10U)),16);
    bufp->fullBit(oldp+1182,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+1185,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1188,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1189,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1195,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullIData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_rst),32);
    bufp->fullIData(oldp+1198,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wdata),32);
    bufp->fullCData(oldp+1199,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.wstrb),4);
    bufp->fullBit(oldp+1200,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.bready));
    bufp->fullIData(oldp+1201,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.araddr),32);
    bufp->fullBit(oldp+1202,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_master.rready));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1227,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1233,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1235,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1237,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1238,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1244,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1247,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1254,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wdata),32);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1),32);
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2),32);
    bufp->fullBit(oldp+1268,((3U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_rst 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+1269,((0xfU == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__add_rst 
                                       >> 0x18U))));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_hit_sdram));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_hit_other));
    bufp->fullIData(oldp+1272,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1273,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted)),32);
    bufp->fullIData(oldp+1274,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted 
                                                   >> 7U)))) 
                                 << 8U) | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1275,((((- (IData)((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted))),32);
    bufp->fullIData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata_shifted),32);
    bufp->fullIData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_inst__DOT__add2),32);
    bufp->fullIData(oldp+1278,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1279,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1280,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1281,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1282,(VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullIData(oldp+1283,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),32);
    bufp->fullCData(oldp+1284,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2)),5);
    bufp->fullIData(oldp+1285,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+1286,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1 
                                >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullIData(oldp+1287,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata1, 
                                              (0x1fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata2))),32);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__next),2);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__next),3);
    bufp->fullBit(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__aw_done_next));
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu__DOT__w_done_next));
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_next_state),2);
    bufp->fullIData(oldp+1293,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1296,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rvalid));
    bufp->fullBit(oldp+1297,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.rready));
    bufp->fullBit(oldp+1298,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rvalid));
    bufp->fullBit(oldp+1299,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_lsu.rready));
    bufp->fullBit(oldp+1300,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                    >> 0x1aU))));
    bufp->fullIData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1302,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullIData(oldp+1303,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1311,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+1312,(((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x10002000U))),32);
    bufp->fullCData(oldp+1313,((0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),4);
    bufp->fullIData(oldp+1314,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+1315,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullSData(oldp+1316,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1317,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0xdU))),13);
    bufp->fullCData(oldp+1318,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 0xbU))),2);
    bufp->fullIData(oldp+1319,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel));
    bufp->fullCData(oldp+1321,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullIData(oldp+1324,((0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                            >> 2U))),19);
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pready));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_in_pslverr));
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next),2);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullBit(oldp+1334,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable))));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullIData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1346,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1347,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__valid_access));
    bufp->fullCData(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__use_mr));
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr),5);
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_stb));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_cyc));
    bufp->fullIData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1377,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullBit(oldp+1378,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1380,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_adr))))));
    bufp->fullCData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1383,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+1384,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__ctrl),4);
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1386,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair0__DOT__u_chip1__DOT__next),3);
    bufp->fullCData(oldp+1387,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip0__DOT__next),3);
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__u_pair1__DOT__u_chip1__DOT__next),3);
    bufp->fullCData(oldp+1389,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__psram__DOT__next),3);
    bufp->fullCData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__psram__DOT__ctrl_done),8);
    bufp->fullBit(oldp+1392,(vlSelf->clock));
    bufp->fullBit(oldp+1393,(vlSelf->reset));
    bufp->fullSData(oldp+1394,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1395,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1396,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1397,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1398,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1399,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1400,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1401,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1402,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1403,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1404,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1405,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1406,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1407,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1408,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1409,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1410,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1411,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1412,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1413,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1414,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1415,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel))));
    bufp->fullBit(oldp+1417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullIData(oldp+1418,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__fb
                                [(0x7ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                              >> 2U))]
                                 : 0U)),32);
    bufp->fullBit(oldp+1419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_penable))));
    bufp->fullBit(oldp+1420,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1421,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_ready))))
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_ack))));
    bufp->fullBit(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullIData(oldp+1423,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_sel)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_dat_o)),32);
    bufp->fullIData(oldp+1424,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1425,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1426,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1429,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel) 
                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)))));
    bufp->fullBit(oldp+1430,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done))));
    bufp->fullCData(oldp+1431,((0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter) 
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
    bufp->fullBit(oldp+1432,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1433,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))
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
    bufp->fullCData(oldp+1434,((0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dat_off8))
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
    bufp->fullSData(oldp+1435,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1437,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+1438,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h7a406c34__0))));
    bufp->fullBit(oldp+1439,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1442,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullBit(oldp+1444,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                     >> 3U) | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd)) 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+1445,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                     >> 3U) | ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                                   >> 0x1aU)) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__broadcast_cmd)))))));
    bufp->fullBit(oldp+1446,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+1447,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__r_current_state)) 
                              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullCData(oldp+1448,(1U),3);
    bufp->fullIData(oldp+1449,(0x64U),32);
    bufp->fullIData(oldp+1450,(0x3e8U),32);
    bufp->fullIData(oldp+1451,(0xaU),32);
    bufp->fullIData(oldp+1452,(0xa0000000U),32);
    bufp->fullIData(oldp+1453,(0xbfffffffU),32);
    bufp->fullCData(oldp+1454,(0U),2);
    bufp->fullCData(oldp+1455,(1U),2);
    bufp->fullCData(oldp+1456,(2U),2);
    bufp->fullBit(oldp+1457,(0U));
    bufp->fullBit(oldp+1458,(1U));
    bufp->fullCData(oldp+1459,(0U),4);
    bufp->fullCData(oldp+1460,(0U),8);
    bufp->fullIData(oldp+1461,(0U),32);
    bufp->fullCData(oldp+1462,(0U),3);
    bufp->fullIData(oldp+1463,(5U),32);
    bufp->fullIData(oldp+1464,(0x20U),32);
    bufp->fullIData(oldp+1465,(6U),32);
    bufp->fullIData(oldp+1466,(0x10002000U),32);
    bufp->fullBit(oldp+1467,(0U));
    bufp->fullBit(oldp+1468,(1U));
    bufp->fullCData(oldp+1469,(4U),3);
    bufp->fullCData(oldp+1470,(0xebU),8);
    bufp->fullCData(oldp+1471,(0x35U),8);
    bufp->fullCData(oldp+1472,(0x38U),8);
    bufp->fullIData(oldp+1473,(0x19U),32);
    bufp->fullIData(oldp+1474,(9U),32);
    bufp->fullIData(oldp+1475,(2U),32);
    bufp->fullIData(oldp+1476,(4U),32);
    bufp->fullIData(oldp+1477,(0xdU),32);
    bufp->fullIData(oldp+1478,(0xbU),32);
    bufp->fullIData(oldp+1479,(0x1aU),32);
    bufp->fullIData(oldp+1480,(0x2000U),32);
    bufp->fullIData(oldp+1481,(0x2710U),32);
    bufp->fullIData(oldp+1482,(0x30cU),32);
    bufp->fullCData(oldp+1483,(7U),4);
    bufp->fullCData(oldp+1484,(3U),4);
    bufp->fullCData(oldp+1485,(5U),4);
    bufp->fullCData(oldp+1486,(4U),4);
    bufp->fullCData(oldp+1487,(6U),4);
    bufp->fullCData(oldp+1488,(2U),4);
    bufp->fullCData(oldp+1489,(1U),4);
    bufp->fullSData(oldp+1490,(0x20U),13);
    bufp->fullCData(oldp+1491,(8U),4);
    bufp->fullCData(oldp+1492,(9U),4);
    bufp->fullIData(oldp+1493,(0x11U),32);
    bufp->fullIData(oldp+1494,(0x30000000U),32);
    bufp->fullIData(oldp+1495,(0x3fffffffU),32);
    bufp->fullIData(oldp+1496,(8U),32);
    bufp->fullCData(oldp+1497,(0U),5);
    bufp->fullCData(oldp+1498,(4U),5);
    bufp->fullCData(oldp+1499,(0x10U),5);
    bufp->fullCData(oldp+1500,(0x14U),5);
    bufp->fullCData(oldp+1501,(0x18U),5);
    bufp->fullIData(oldp+1502,(0x40U),32);
    bufp->fullIData(oldp+1503,(0x100U),32);
    bufp->fullCData(oldp+1504,(0xaU),4);
    bufp->fullIData(oldp+1505,(1U),32);
    bufp->fullIData(oldp+1506,(0x10U),32);
    bufp->fullCData(oldp+1507,(2U),3);
    bufp->fullCData(oldp+1508,(3U),3);
    bufp->fullCData(oldp+1509,(5U),3);
    bufp->fullIData(oldp+1510,(0x13U),32);
    bufp->fullSData(oldp+1511,(0x320U),10);
    bufp->fullSData(oldp+1512,(0x60U),10);
    bufp->fullSData(oldp+1513,(0x90U),10);
    bufp->fullSData(oldp+1514,(0x310U),10);
    bufp->fullSData(oldp+1515,(0x20dU),10);
    bufp->fullSData(oldp+1516,(2U),10);
    bufp->fullSData(oldp+1517,(0x23U),10);
    bufp->fullSData(oldp+1518,(0x203U),10);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),2);
    bufp->fullIData(oldp+1520,(0U),32);
    bufp->fullIData(oldp+1521,(3U),32);
    bufp->fullBit(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.awready));
    bufp->fullBit(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.wready));
    bufp->fullBit(oldp+1524,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.wlast));
    bufp->fullCData(oldp+1525,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bresp),2);
    bufp->fullBit(oldp+1526,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bvalid));
    bufp->fullCData(oldp+1527,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bus_ifu.bid),4);
}
