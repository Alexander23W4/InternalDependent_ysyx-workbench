module top(
    input clk,
    // input clken,
    input           rst,    // set
    input  [23:0]   vga_data, // VGA color data provided by the upper module

    output [9:0]    h_addr,   // current scan pixel coordinates provided to the upper module
    output [9:0]    v_addr,

    output          hsync,    // 
    output          vsync,    // 

    output          valid,    // blanking signal, when scan back, set to 0, indicating non-showing

    output [7:0]    vga_r,    // RGB color signal
    output [7:0]    vga_g,
    output [7:0]    vga_b
);
    // wire pclk;

    vga_ctrl vgactrl(
        .pclk(clk),
        .reset(rst),    // set
        .vga_data(vga_data), // VGA color data provided by the upper module

        .h_addr(h_addr),   // current scan pixel coordinates provided to the upper module
        .v_addr(v_addr),

        .hsync(hsync),    // 
        .vsync(vsync),    // 

        .valid(valid),    // blanking signal, when scan back, set to 0, indicating non-showing

        .vga_r(vga_r),    // RGB color signal
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    // vga_clkgen vgaclkgen(
    //     .clkout(pclk),
    //     .clkin(clk),
    //     .rst(rst),
    //     .clken(clken)
    // );


endmodule

