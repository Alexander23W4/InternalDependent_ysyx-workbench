/* verilator lint_off PINMISSING */
`timescale 1ns / 1ps

module keyboard_sim;

    /* parameter */
    parameter [31:0] clock_period = 10;

    /* PS/2 interface signals */
    reg clk, clrn;
    wire [7:0] data;
    wire ready;
    wire kbd_clk, kbd_data;
    wire [7:0] ascii;
    wire nextdata_n;

    /* PS/2 Keyboard model */
    ps2_keyboard_model model(
        .ps2_clk(kbd_clk),
        .ps2_data(kbd_data)
    );

    /* PS/2 Keyboard protocol handler */
    ps2_keyboard ps2_kbd_inst(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(kbd_clk),
        .ps2_data(kbd_data),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n)
    );

    /* PS/2 Receiver for ASCII conversion */
    ps2_receiver receiver_inst(
        .clk(clk),
        .rst(~clrn),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n),
        .ascii(ascii)
    );

    /* Clock generation */
    initial begin
        clk = 0;
        forever #(clock_period/2) clk = ~clk;
    end

    /* Reset and test sequence */
initial begin
    clrn = 1'b0;  #20;
    clrn = 1'b1;  #20;

    $display("\n=== 1");
    model.kbd_sendcode(8'h1C);  // A
    #300;
    model.kbd_sendcode(8'h16);  // 1  
    #300;
    model.kbd_sendcode(8'h1B);  // S
    #300;
    model.kbd_sendcode(8'h29);  // Space
    #300;
    model.kbd_sendcode(8'h7C);  // *

    $display("\n=== 2");
    #400;
    repeat(5) begin 
        model.kbd_sendcode(8'h1A);  // Z
        #150;
    end

    $display("\n=== 3");
    #400;
    model.kbd_sendcode(8'h1C);  
    #500;  
    model.kbd_sendcode(8'h1B);  


    $display("\n=== 4 ===");
    #400;
    model.kbd_sendcode(8'h12);  // Left Shift 
    #100;
    model.kbd_sendcode(8'h1C);  //
    #300;


    $display("\n=== 5===");
    model.kbd_sendcode(8'hF0);  // Break
    #20 model.kbd_sendcode(8'h12);  // Shift 
    #50;
    model.kbd_sendcode(8'hF0);  // Break  
    #20 model.kbd_sendcode(8'h1C);  // A 
    #300;


    $display("\n=== 6===");
    model.kbd_sendcode(8'h45);  // 0
    #300;
    model.kbd_sendcode(8'h3D);  // 7
    #300;
    model.kbd_sendcode(8'h4E);  // -
    #300;
    model.kbd_sendcode(8'h35);  // Y
    #500;

    $display("\n=== Test complete! ===");
    #1000;  
    $stop;
end


    /* Monitor ASCII output */
    always @(posedge clk) begin
        if (!nextdata_n && ready) begin
            $display("Time %0t ns: ASCII output = %h (%c)", $time, ascii, ascii);
        end
    end

endmodule

/* verilator lint_off PINMISSING */
