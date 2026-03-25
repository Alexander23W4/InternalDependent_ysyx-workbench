module rom #(parameter WORD_WIDTH = 32, parameter ADDR_WIDTH = 8, parameter INIT_FILE = "" ) (
    input [ADDR_WIDTH - 1: 0] addr,
    output [WORD_WIDTH - 1: 0] out
);
    reg [WORD_WIDTH - 1: 0] mem [2**ADDR_WIDTH - 1: 0];

    initial begin
        if (INIT_FILE != "")
            $readmemh(INIT_FILE, mem);   
    end
    
    assign out = mem[addr];

endmodule

