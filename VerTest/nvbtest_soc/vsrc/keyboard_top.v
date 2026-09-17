/* verilator lint_off PINMISSING */
module keyboard_top(
    input        clk,
    input        rst, 
    input        ps2_clk,
    input        ps2_data,
    output [7:0] ascii,
    output       ready   
);

    wire [7:0] data;
    wire nextdata_n;

    wire clrn = ~rst;
    ps2_keyboard ps2_kbd_inst(
        .clk(clk),
        .clrn(clrn),
        .ps2_clk(ps2_clk),
        .ps2_data(ps2_data),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n)
    );

    ps2_receiver receiver_inst(
        .clk(clk),
        .rst(rst),
        .data(data),
        .ready(ready),
        .nextdata_n(nextdata_n),
        .ascii(ascii)
    );

endmodule
/* verilator lint_off PINMISSING */