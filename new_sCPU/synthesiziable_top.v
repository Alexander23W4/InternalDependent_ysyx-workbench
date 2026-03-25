module synthesiziable_top (
    input clk,
    input rst,
    output [6:0] h1,
    output [6:0] h2
);
    // PC & enable
    reg [3:0] PC;
    reg [3:0] en;

    wire [7:0] mem_out;
    wire finish_add, finish_li, finish_bner0, finish_out;
    wire finish, update_bner0, update;

    // ----------------------
    // ROM & Fetch
    // ----------------------
    reg [7:0] rom_mem [0:15];
    initial begin
        rom_mem[0] = 8'b00000001;
        rom_mem[1] = 8'b00101010;
        rom_mem[2] = 8'b11000011;
        rom_mem[3] = 8'b01010101;
        rom_mem[4] = 8'b10101010;
        rom_mem[5] = 8'b11110000;
        rom_mem[6] = 8'b00001111;
        rom_mem[7] = 8'b01010101;
        rom_mem[8] = 8'b10101010;
        rom_mem[9] = 8'b11001100;
        rom_mem[10]= 8'b00110011;
        rom_mem[11]= 8'b11111111;
        rom_mem[12]= 8'b00000000;
        rom_mem[13]= 8'b10011001;
        rom_mem[14]= 8'b01100110;
        rom_mem[15]= 8'b01010101;
    end

    assign mem_out = rom_mem[PC];

    // ----------------------
    // Decode
    // ----------------------
    always @(*) begin
        case(mem_out[7:6])
            2'b00: en = 4'b0001;
            2'b10: en = 4'b0010;
            2'b11: en = 4'b0100;
            2'b01: en = 4'b1000;
            default: en = 4'b0000;
        endcase
    end

    // ----------------------
    // GPR (RAM)
    // ----------------------
    wire [1:0] read_addr, write_addr;
    wire [7:0] data_in, data_out;
    wire [1:0] write_addr_add, write_addr_li;
    wire [1:0] read_addr_add, read_addr_bner0, read_addr_out;
    wire [7:0] data_out_add, data_out_li;
    wire we_add, we_li;
    wire we;

    assign write_addr = (write_addr_add & {2{en[0]}}) | (write_addr_li & {2{en[1]}});
    assign read_addr = (read_addr_add & {2{en[0]}}) | (read_addr_bner0 & {2{en[2]}}) | (read_addr_out & {2{en[3]}});
    assign data_out = (data_out_add & {8{en[0]}}) | (data_out_li & {8{en[1]}});
    assign we = (we_add & en[0]) | (we_li & en[1]);

    reg [7:0] gpr_mem [0:3];
    assign data_in = gpr_mem[read_addr];
    always @(posedge clk) begin
        if (we)
            gpr_mem[write_addr] <= data_out;
    end

    // ----------------------
    // Instruction Modules
    // ----------------------
    Instr_out ins_out(
        .clk(clk),
        .rst(rst),
        .en(en[3]),
        .rs2(mem_out[1:0]),
        .data_in(data_in),
        .read_addr(read_addr_out),
        .finish(finish_out),
        .h1(h1),
        .h2(h2)
    );

    Instr_bner0 ins_bner0(
        .clk(clk),
        .en(en[2]),
        .rst(rst),
        .rs2(mem_out[1:0]),
        .data_in(data_in),
        .read_addr(read_addr_bner0),
        .finish(finish_bner0),
        .update(update_bner0)
    );

    Instr_add ins_add(
        .clk(clk), 
        .en(en[0]),
        .rst(rst),
        .rs1(mem_out[3:2]),
        .rs2(mem_out[1:0]),
        .rd(mem_out[5:4]),
        .data_in(data_in),
        .data_out(data_out_add),
        .read_addr(read_addr_add),
        .write_addr(write_addr_add),
        .we(we_add),
        .finish(finish_add)
    );

    Instr_li li_inst (
        .rd(mem_out[5:4]),
        .imm(mem_out[3:0]),
        .data_out(data_out_li),
        .write_addr(write_addr_li),
        .we(we_li),
        .finish(finish_li)
    );

    // ----------------------
    // Feedback PC
    // ----------------------
    assign finish = (finish_add & en[0]) | (finish_li & en[1]) | (finish_bner0 & en[2]) | (finish_out & en[3]);
    assign update = update_bner0 & en[2];

    always @(posedge clk or posedge rst) begin
        if (rst) PC <= 4'b0000;
        else if (finish) begin
            if(update)
                PC <= mem_out[5:2];
            else
                PC <= PC + 1;
        end
    end

endmodule