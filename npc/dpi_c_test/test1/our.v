import "DPI-C" function int add (input int a, input int b);
// import
// drive cpp function to verilog, for simulation

module our;
    initial begin
    $display("%x + %x = %x", 1, 2, add(1,2));
    end
endmodule


