// ST
/*
Memory Modes:

single-port memory
At a certain moment, read-only or write-only

Simple dual-port memory mode
Simple dual-port mode supports simultaneous read and write (one read, one write)

True dual-port memory mode
True dual-port mode supports any combination of dual-port operations: two read ports, two write ports, and one read port and one write port at different clock frequencies.


Simple dual-port memory mode with mixed widths
Read and write using different data widths in simple dual-port mode

True dual-port memory mode with mixed widths
True dual-port mode using different data widths for reading and writing

ROM
Working in ROM mode, the contents of the ROM have been initialized.

FIFO buffer
Can implement single-clock or dual-clock FIFO
*/

module ram1 #(
  parameter RAM_WIDTH = 32,
  parameter RAM_ADDR_WIDTH = 10,
  parameter INIT_FILE = "" 
)(
    input clk,
    input we,      // when write, pull up "we", not suppose to read
    input [RAM_WIDTH-1:0] din,
    input [RAM_ADDR_WIDTH-1:0] inaddr,
    input [RAM_ADDR_WIDTH-1:0] outaddr,
    output [RAM_WIDTH-1:0] dout
);
    initial begin
        if (INIT_FILE != "")
            $readmemh(INIT_FILE, mem);   
    end

  reg [RAM_WIDTH-1:0] ram [(2**RAM_ADDR_WIDTH)-1:0];

  always @(posedge clk)
      if (we)
        ram[inaddr] <= din;

  assign dout = ram[outaddr];

endmodule



