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


// -> enable problem
module top (
    input clk,
    input rst
);
    wire [7:0] mem_out;
    reg [3:0] PC;   // PC 
    reg [2:0] en;   // although nominated as register, but actually wire, because it does not exist in sequential always block

    wire finish_add;
    wire finish_li;
    wire finish_bner0;
    wire finish;
    wire update_bner0;
    wire update;

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

    wire [1:0] write_addr_add;
    wire [1:0] write_addr_li;
    wire [1:0] read_addr_add;
    wire [1:0] read_addr_bner0;
    wire [7:0] data_out_add;
    wire [7:0] data_out_li;
    wire [7:0] data_in_add;
    wire [7:0] data_in_bner0;       
    wire we_add;
    wire we_li;  

    assign write_addr = (write_addr_add & {2{en[0]}}) | (write_addr_li & {2{en[1]}});
    assign read_addr = (read_addr_add & {2{en[0]}}) | (read_addr_bner0 & {2{en[2]}});
    assign data_out = (data_out_add & {8{en[0]}}) | (data_out_li  & {8{en[1]}});
    assign we = (we_add & en[0]) | (we_li  & en[1]);

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
        .data_in(data_in_bner0),
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
        .data_in(data_in_add),
        .data_out(data_out_add),
        .read_addr(read_addr_add),
        .write_addr(write_addr_add),
        .we(we_add),
        .finish(finish_add)
    );

    Instr_li li_inst (
        .clk(clk),
        .en(en[1]),
        .rd(mem_out[5:4]),
        .imm(mem_out[3:0]),
        .data_out(data_out_li),
        .write_addr(write_addr_li),
        .we(we_li),
        .finish(finish_li)
    );

// feedback (update pc)     -> finish, update  (Supervisor control)

    assign finish = (finish_add & en[0]) | (finish_li & en[1]) | (finish_bner0 & en[2]);
    assign update = update_bner0 & en[2];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            PC <= 4'b0000;
        end else begin
            if (finish) begin    
                if(update) begin
                    PC <= mem_out[5:2];                  
                end
                else begin
                    PC <= PC + 1;                    
                end
            end        
        end
    end


endmodule







