module top(
    input clk,
    input rst,

    output [6:0] h1,
    output [6:0] h2,
    output [3:0] display_PC,

    output [7:0] debug0,
    output [7:0] debug1,
    output [7:0] debug2,
    output [7:0] debug3,

    output [7:0] rom_debug0,
    output [7:0] rom_debug1,
    output [7:0] rom_debug2,
    output [7:0] rom_debug3
);

    // =========================
    // PC
    // =========================
    reg [3:0] pc;
    assign display_PC = pc;

    // =========================
    // ROM (instruction memory)
    // =========================
    wire [7:0] instr;

    debug_rom #(8,4,"./rom.hex") rom (
        .addr(pc),
        .out(instr),
        .debug0(rom_debug0),
        .debug1(rom_debug1),
        .debug2(rom_debug2),
        .debug3(rom_debug3)
    );

    // =========================
    // decode
    // =========================
    wire [1:0] opcode = instr[7:6];
    wire [1:0] rd     = instr[5:4];
    wire [1:0] rs1    = instr[3:2];
    wire [1:0] rs2    = instr[1:0];
    wire [3:0] imm    = instr[3:0];
    wire [3:0] addr   = instr[5:2];

    // =========================
    // instruction decode → control signals
    // =========================
    wire is_add   = (opcode == 2'b00);
    wire is_out   = (opcode == 2'b01);
    wire is_li    = (opcode == 2'b10);
    wire is_bner0 = (opcode == 2'b11);

    // =========================
    // regfile (2 read port)
    // =========================
    wire [7:0] rdata1, rdata2;

    wire [1:0] raddr1 = is_bner0 ? 2'b00 : rs1; // bner0 needs R0
    wire [1:0] raddr2 = rs2;

    wire we;
    wire [1:0] waddr;
    wire [7:0] wdata;

    regfile #(8,2) gpr (
        .clk(clk),
        .we(we),
        .waddr(waddr),
        .wdata(wdata),
        .raddr1(raddr1),
        .rdata1(rdata1),
        .raddr2(raddr2),
        .rdata2(rdata2),
        .debug0(debug0),
        .debug1(debug1),
        .debug2(debug2),
        .debug3(debug3)
    );

    // =========================
    // ALU
    // =========================
    wire [7:0] alu_out = rdata1 + rdata2;

    // =========================
    // write back mux
    // =========================
    assign wdata = is_add ? alu_out :
                   is_li  ? {4'b0, imm} :
                   8'b0;

    assign waddr = rd;
    assign we = is_add | is_li;

    // =========================
    // branch decision
    // =========================
    wire branch_taken = is_bner0 && (rdata1 != rdata2);

    // =========================
    // PC update
    // =========================
    wire [3:0] pc_next = branch_taken ? addr : (pc + 1);

    always @(posedge clk or posedge rst) begin
        if (rst)
            pc <= 0;
        else
            pc <= pc_next;
    end

    // =========================
    // display
    // =========================
    reg [7:0] display_num;

    always @(posedge clk) begin
        if (is_out)
            display_num <= rdata2;
    end

    BCD7Seg seg1(
        .b(display_num[3:0]),
        .en(1'b1),
        .h(h1)
    );

    BCD7Seg seg2(
        .b(display_num[7:4]),
        .en(1'b1),
        .h(h2)
    );

endmodule