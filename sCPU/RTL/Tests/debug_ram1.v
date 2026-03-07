// VA
module debug_ram1 #(
  parameter RAM_WIDTH = 32,
  parameter RAM_ADDR_WIDTH = 10,
  parameter INIT_FILE = "" 
)(
    input clk,
    input we,      // when write, pull up "we", not suppose to read
    input [RAM_WIDTH-1:0] din,
    input [RAM_ADDR_WIDTH-1:0] inaddr,
    input [RAM_ADDR_WIDTH-1:0] outaddr,
    output [RAM_WIDTH-1:0] dout,
    // debug interface
    output [RAM_WIDTH-1:0] debug0,
    output [RAM_WIDTH-1:0] debug1,
    output [RAM_WIDTH-1:0] debug2,
    output [RAM_WIDTH-1:0] debug3
);
    initial begin
        if (INIT_FILE != "")
            $readmemh(INIT_FILE, ram);   
    end

    reg [RAM_WIDTH-1:0] ram [(2**RAM_ADDR_WIDTH)-1:0];

    assign debug0 = ram[0];
    assign debug1 = ram[1];
    assign debug2 = ram[2];
    assign debug3 = ram[3];

    always @(posedge clk)
        if (we)
            ram[inaddr] <= din;

    assign dout = ram[outaddr];

endmodule

