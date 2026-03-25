module top(
    input clk,
    input rst,

    output [6:0] h1,
    output [6:0] h2,

    output [31:0] display_PC,

    output [31:0] debug0,
    output [31:0] debug1,
    output [31:0] debug2,
    output [31:0] debug3,

    output [31:0] rom_debug0,
    output [31:0] rom_debug1,
    output [31:0] rom_debug2,
    output [31:0] rom_debug3
);

    localparam IMEM_AW = 12;  // 4096 words, enough for the lab stage

    // =========================
    // PC
    // =========================
    reg [31:0] pc;
    wire [31:0] pc_plus4;
    wire [31:0] pc_next;

    assign display_PC = pc;
    assign pc_plus4 = pc + 32'd4;

    always @(posedge clk or posedge rst) begin
        if (rst)
            pc <= 32'b0;
        else
            pc <= pc_next;
    end

    // =========================
    // Instruction fetch
    // =========================
    wire [31:0] instr;
    wire [IMEM_AW-1:0] imem_addr;

    assign imem_addr = pc[IMEM_AW+1:2];

    debug_rom #(32, IMEM_AW, "./rom.hex") rom (
        .addr(imem_addr),
        .out(instr),
        .debug0(rom_debug0),
        .debug1(rom_debug1),
        .debug2(rom_debug2),
        .debug3(rom_debug3)
    );

    // =========================
    // Decode
    // =========================
    wire [6:0] opcode;
    wire [4:0] rd;
    wire [2:0] funct3;
    wire [4:0] rs1;
    wire [4:0] rs2;

    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign funct3 = instr[14:12];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];

    wire [31:0] imm_i;
    assign imm_i = {{20{instr[31]}}, instr[31:20]};

    // =========================
    // Control
    // =========================
    wire is_addi;
    wire is_jalr;

    assign is_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
    assign is_jalr = (opcode == 7'b1100111) && (funct3 == 3'b000);

    // =========================
    // Register file
    // =========================
    wire [31:0] rdata1;
    wire [31:0] rdata2;

    wire [31:0] rs1_val;
    wire [31:0] rs2_val;

    assign rs1_val = (rs1 == 5'd0) ? 32'b0 : rdata1;
    assign rs2_val = (rs2 == 5'd0) ? 32'b0 : rdata2;

    wire rf_we;
    wire [4:0] rf_waddr;
    wire [31:0] rf_wdata;

    assign rf_we    = (is_addi || is_jalr) && (rd != 5'd0);
    assign rf_waddr = rd;

    regfile #(
        .WIDTH(32),
        .ADDR_WIDTH(4)
    ) gpr (
        .clk(clk),
        .we(rf_we),
        .waddr(rf_waddr),
        .wdata(rf_wdata),
        .raddr1(rs1),
        .rdata1(rdata1),
        .raddr2(rs2),
        .rdata2(rdata2),
        .debug0(debug0),
        .debug1(debug1),
        .debug2(debug2),
        .debug3(debug3)
    );

    // =========================
    // Execute / writeback
    // =========================
    wire [31:0] addi_result;
    wire [31:0] jalr_target;

    assign addi_result = rs1_val + imm_i;
    assign jalr_target = (rs1_val + imm_i) & 32'hffff_fffe;

    assign rf_wdata = is_addi ? addi_result :
                      is_jalr ? pc_plus4 :
                      rs2_val;   // unused for current instructions, but keeps datapath clean

    // =========================
    // PC update
    // =========================
    assign pc_next = is_jalr ? jalr_target : pc_plus4;

    // =========================
    // Display (for debug only)
    // =========================
    wire [7:0] display_num;
    assign display_num = pc[7:0];

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


module regfile #(
    parameter WIDTH = 32,
    parameter ADDR_WIDTH = 4
)(
    input clk,

    input we,
    input [ADDR_WIDTH-1:0] waddr,
    input [WIDTH-1:0] wdata,

    input [ADDR_WIDTH-1:0] raddr1,
    output [WIDTH-1:0] rdata1,

    input [ADDR_WIDTH-1:0] raddr2,
    output [WIDTH-1:0] rdata2,

    output [WIDTH-1:0] debug0,
    output [WIDTH-1:0] debug1,
    output [WIDTH-1:0] debug2,
    output [WIDTH-1:0] debug3
);

    localparam REG_NUM = (1 << ADDR_WIDTH);

    reg [WIDTH-1:0] regs [0:REG_NUM-1];
    integer i;

    initial begin
        for (i = 0; i < REG_NUM; i = i + 1)
            regs[i] = {WIDTH{1'b0}};
    end

    always @(posedge clk) begin
        if (we && (waddr != {ADDR_WIDTH{1'b0}}))
            regs[waddr] <= wdata;
    end

    assign rdata1 = (raddr1 == {ADDR_WIDTH{1'b0}}) ? {WIDTH{1'b0}} : regs[raddr1];
    assign rdata2 = (raddr2 == {ADDR_WIDTH{1'b0}}) ? {WIDTH{1'b0}} : regs[raddr2];

    assign debug0 = {WIDTH{1'b0}};  // x0 is hardwired to zero
    assign debug1 = regs[1];
    assign debug2 = regs[2];
    assign debug3 = regs[3];

endmodule