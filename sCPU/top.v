/*
The opcode : add li bner0 
 7  6 5  4 3   2 1   0
+----+----+-----+-----+
| 00 | rd | rs1 | rs2 | R[rd]=R[rs1]+R[rs2]            ADD instruction for register addition
+----+----+-----+-----+
| 10 | rd |    imm    | R[rd]=imm                      LI instruction (Load Immediate with zero-extension)
+----+----+-----+-----+
| 11 |   addr   | rs2 | if (R[0]!=R[rs2]) PC=addr      BNER0 instruction (Branch if Not Equal to Register 0)
+----+----------+-----+

*/

/*
Fill Momery with 
0: li r0, 10   # This is decimal 10.
1: li r1, 0
2: li r2, 0
3: li r3, 1
4: add r1, r1, r3
5: add r2, r2, r1
6: out xx, xx, r2
7: bner0 4, r1
8: bner0 7, r3
*/

// ROM  8x16

// -> when get "finish" flag, en should be 3'b000
// -> enable problem
module top (
    input clk,
    input rst
)
    reg [7:0] mem_out;
    reg [3:0] PC;   // PC
    reg [2:0] en;


// mem & fetch
    rom #(8, 4, "rom.hex") mem (
        .addr(PC),
        .out(mem_out)
    );

// decode 
    always @(*) begin
        case(mem_out[7:6])
            2'b00: en = 3'b001;
            2'b10: en = 3'b010;
            2'b11: en = 3'b100;
            default: en = 3'b000;
        endcase
    end 


// GPR:
    wire we;
    wire [7:0] data_in;
    wire [7:0] data_out;
    wire [1:0] read_addr;
    wire [1:0] write_addr;
    wire finish;
    wire update;

    ram1 #(8, 2) gpr (
        .clk(clk),
        .we(we),
        .inaddr(write_addr),
        .outaddr(read_addr),
        .din(data_out),
        .dout(data_in)
    );

    Instr_bner0 ins_bner0(
        .clk(clk),
        .en(en[2]),
        .rst(rst),
        .rs2(mem_out[1:0]),
        .data_in(data_in),
        .read_addr(read_addr),
        .finish(finish),
        .update(update)
    );

    Instr_add ins_add(
        .clk(clk), 
        .en(en[0]),
        .rst(rst),
        .rs1(mem_out[3:2]),
        .rs2(mem_out[1:0]),
        .rd(mem_out[5:4]),
        .data_in(data_in),
        .data_out(data_out),
        .read_addr(read_addr),
        .write_addr(write_addr),
        .we(we),
        .finish(finish)
    );

    Instr_li li_inst (
        .clk(clk),
        .en(en[1]),
        .rd(mem_out[5:4]),
        .imm(mem_out[3:0]),
        .data_out(data_out),
        .write_addr(write_addr),
        .we(we),
        .finish(finish)
    );

// feedback (update pc)     -> finish, update

    reg finish_dly;   // finish 的寄存器版本
    reg update_dly;
    reg [3:0] update_addr;
    

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            PC <= 4'b0000;
            en <= 3'b000;
            finish_dly <= 1'b0;
            update_dly <= 1'b0;
            update_addr <= mem_out[5:2];
        end else begin
            finish_dly <= finish;    
            update_dly <= update;
            if (finish_dly)            // 如果上个周期 finish=1
                en <= 3'b000;       // 拉低 enable
                if(update_dly)
                    PC <= update_addr;
                else
                    PC <= PC + 1;
            else
                en <= en;     // 或者保持原来的值
            
        end
    end


endmodule







