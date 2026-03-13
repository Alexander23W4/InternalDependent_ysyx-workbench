// The VGA interface primarily consists of five signal lines: R, G, B, HS, and VS, 
// which correspond to red, green, blue, horizontal synchronization, and vertical synchronization.

// 60 Hz refresh frequency

// *** Machanisim ***
// The horizontal sync signal is a negative pulse. 
// After the horizontal sync signal becomes active, the RGB terminal sends the RGB voltage values for each pixel point in the current line. 
// When a frame is finished displaying, the frame sync signal sends a negative pulse,
// and the next frame begins displaying from the top-left corner of the screen.

// *** Horizontal ***
/*
 Effectively displaying a line of signals on a standard 640 x 480 VGA requires 96+48+640+16=800 pixel display times, 
 where the line synchronization negative pulse width is 96 pixel display times, 
 the line blanking trailing edge requires 48 pixel display times, 
 then 640 pixels are displayed per line, 
 and finally the line blanking leading edge requires 16 pixel display times. 
 Therefore, the time required to display pixels in a line is 640 pixel display times, and the line blanking time is 160 pixel display times.
*/

// *** Veritical ***
/*
 it takes 2+33+480+10=525 line display times to effectively display a frame of images, 
 where the field synchronization negative pulse width is 2 line display times, 
 the field blanking trailing edge requires 33 line display times, 
 then 480 lines are displayed per field, 
 the field blanking leading edge requires 10 line display times, 
 the display time for one frame is 525 line display times, and the blanking time for one frame is 45 line display times.
*/

//  Scanning 60 frames per second requires a total of approximately 25M pixel display time.

/*
This code provides VGA control signals externally. 
By counting the clock, it determines which pixel on which line is currently being scanned and whether to blank the screen. 
The code outputs the three colors red (R), green (G), and blue (B) represented by the 8-bit binary signals vga_r, vga_g, and vga_b, respectively. 
These three sets of 8-bit digital signals are transmitted to the analog-to-digital converter on the development board, 
converted into analog signals, and sent to the display via the VGA interface.
*/
module vga_ctrl(
    input           pclk,     // 25MHz clock
    input           reset,    // set
    input  [23:0]   vga_data, // VGA color data provided by the upper module
    output [9:0]    h_addr,   // current scan pixel coordinates provided to the upper module
    output [9:0]    v_addr,
    output          hsync,    // horizontal sync and vertical sync signals
    output          vsync,
    output          valid,    // blanking signal
    output [7:0]    vga_r,    // RGB color signal
    output [7:0]    vga_g,
    output [7:0]    vga_b
    );

  // VGA parameter settings at 640x480 resolution
  parameter    h_frontporch = 96;
  parameter    h_active = 144;
  parameter    h_backporch = 784;
  parameter    h_total = 800;

  parameter    v_frontporch = 2;
  parameter    v_active = 35;
  parameter    v_backporch = 515;
  parameter    v_total = 525;

  // pixel count value
  reg [9:0]    x_cnt;
  reg [9:0]    y_cnt;
  wire         h_valid;
  wire         v_valid;

  always @(posedge reset or posedge pclk) // horizontal pixel counting
      if (reset == 1'b1)
        x_cnt <= 1;
      else
      begin
        if (x_cnt == h_total)
            x_cnt <= 1;
        else
            x_cnt <= x_cnt + 10'd1;
      end

  always @(posedge pclk)  // vertical pixel counting
      if (reset == 1'b1)
        y_cnt <= 1;
      else
      begin
        if (y_cnt == v_total & x_cnt == h_total)
            y_cnt <= 1;
        else if (x_cnt == h_total)
            y_cnt <= y_cnt + 10'd1;
      end
  // generate synchronization signals
  assign hsync = (x_cnt > h_frontporch);
  assign vsync = (y_cnt > v_frontporch);
  // generate blanking signals
  assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
  assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
  assign valid = h_valid & v_valid;
  // calculate the current effective pixel coordinates
  assign h_addr = h_valid ? (x_cnt - 10'd145) : {10{1'b0}};
  assign v_addr = v_valid ? (y_cnt - 10'd36) : {10{1'b0}};
  // set the output color values
  assign vga_r = vga_data[23:16];
  assign vga_g = vga_data[15:8];
  assign vga_b = vga_data[7:0];
endmodule