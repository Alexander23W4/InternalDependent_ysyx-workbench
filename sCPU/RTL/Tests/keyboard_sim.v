`timescale 1ns / 1ps

module keyboard_sim;

    /* parameter */
    parameter [31:0] clock_period = 10;

    /* PS/2 interface signals */
    reg clk, clrn;
    wire [7:0] data;
    wire ready, overflow;
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
        .nextdata_n(nextdata_n),
        .overflow(overflow)
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

        // Press 'A' (scan code 0x1C)
        model.kbd_sendcode(8'h1C);
        #100;

        // Release 'A' (break code F0 1C)
        model.kbd_sendcode(8'hF0);
        #20 model.kbd_sendcode(8'h1C);
        #100;

        // Press 'S' (scan code 0x1B)
        model.kbd_sendcode(8'h1B);
        #100;

        // Keep pressing 'S' multiple times
        model.kbd_sendcode(8'h1B);
        #50 model.kbd_sendcode(8'h1B);
        #50;

        // Release 'S' (break code F0 1B)
        model.kbd_sendcode(8'hF0);
        #20 model.kbd_sendcode(8'h1B);
        #100;

        $stop;
    end

    /* Monitor ASCII output */
    always @(posedge clk) begin
        if (!nextdata_n && ready) begin
            $display("Time %0t ns: ASCII output = %h (%c)", $time, ascii, ascii);
        end
    end

endmodule