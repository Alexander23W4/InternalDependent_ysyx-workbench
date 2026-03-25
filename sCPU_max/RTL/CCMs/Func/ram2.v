// ST

module ram2 (clk, we, inaddr, outaddr, din, dout0,dout1,dout2);
  input clk;
  input we;
  input [2:0] inaddr;
  input [2:0] outaddr;
  input [7:0] din;
  output reg [7:0] dout0,dout1,dout2;

  reg [7:0] ram [7:0];

  always @(posedge clk)
  begin
      if (we)
          ram[inaddr] <= din;
      else
          dout0 <= ram[outaddr];
  end
  always @(negedge clk)
  begin
      if (!we)
          dout1 <= ram[outaddr];
  end
  assign  dout2 = ram[outaddr];
endmodule

