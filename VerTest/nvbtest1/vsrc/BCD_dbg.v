module BCD_dbg (
    input [23:0] cpudbgdata,
    input [5:0] en,
    output reg [6:0] HEX0,
    output reg [6:0] HEX1,
    output reg [6:0] HEX2,
    output reg [6:0] HEX3,
    output reg [6:0] HEX4,
    output reg [6:0] HEX5
);
    BCD7Seg seg5(cpudbgdata[23:20],en[5], HEX5);
    BCD7Seg seg4(cpudbgdata[19:16],en[4], HEX4);
    BCD7Seg seg3(cpudbgdata[15:12],en[3], HEX3);
    BCD7Seg seg2(cpudbgdata[11:8],en[2], HEX2);
    BCD7Seg seg1(cpudbgdata[7:4],en[1], HEX1);
    BCD7Seg seg0(cpudbgdata[3:0],en[0], HEX0);

endmodule



