
/*

你需要实现IS66WVS4M8ALL颗粒的仿真行为模型. 
你只需要实现SPI Mode的Quad IO Read和Quad IO Write两种命令即可, 
它们的命令编码分别为EBh和38h, PSRAM控制器也只会向PSRAM颗粒发送这两种命令.

*/

/*
存储阵列只需要实现成一个字长为8 bit的二维数组
关于尾端和时钟相位等细节, 可RTFM参考相关手册, 或RTFSC参考PSRAM控制器的代码

IDLE
 │
 │ ce_n = 0
 ↓
RECEIVE_COMMAND
 │
 │ 收到 EB / 38
 ├───────────────┐
 ↓               ↓
READ             WRITE
 │               │
 ↓               ↓
RECEIVE_ADDR   RECEIVE_ADDR
 │               │
 ↓               ↓
WAIT_DUMMY      RECEIVE_DATA
 │               │
 ↓               ↓
OUTPUT_DATA       WRITE_MEMORY
 │               │
 └───────┬───────┘
         ↓
        IDLE

0x8000_0000~0x9fff_ffff  PSRAM 地址   4MB     PSRAM 使用 24bits 地址线, 最多16MB
需要把 VME  bootloader 全部改成 PSRAM 的地址

*/

module psram(
  input sck,
  input ce_n,   // 低电平有效, 认为完整传输结束前不会变成无效
  inout [3:0] dio    // 配合输出使能, 实现三态逻辑, 参考ysyxSoC/perip/psram/psram_top_apb.v 中 qspi_dio
                      // 控制, 地址, 数据的 input output 全部通过 dio
);

  reg [7:0] memory [0:32'h3F_FFFF];   // 4MB

  localparam IDLE = 3'd0, CTRL = 3'd1, ADDR = 3'd2, ARRG = 3'd3, READ = 3'd4, WRITE = 3'd5;

  reg [2:0] state, next;
  reg [7:0] ctrl;
  reg [23:0] addr;
  reg [7:0] counter;    // 0-27
  wire [31:0] data;
  wire [1:0] write_byte;
  wire read_index;
  wire[1:0] read_byte;

  assign data[31:24] = memory[addr + 3];
  assign data[23:16] = memory[addr + 2];
  assign data[15:8]  = memory[addr + 1];
  assign data[7:0]   = memory[addr];
  
  assign write_byte = (counter-14)[2:1];
  assign read_index = (counter-20)[0];
  assign read_byte = (counter-20)[2:1];

  always @(posedge sck) begin
    state <= next;
    if(state == IDLE) begin
      counter <= 8'h00;
    end else begin
      counter <= counter + 8'h01;
    end

    if(state == CTRL) begin
      ctrl[7-counter] <= dio[0];
    end
    if(state == ADDR) begin
      addr[(13-counter)*4+3:(13-counter)*4] <= dio;
    end
    if(state == WRITE) begin
      memory[addr + write_byte] <= {memory[addr + write_byte][3:0], dio};
    end
    if(state == READ) begin
      dio <= read_index ? memory[addr + read_byte][3:0] : memory[addr + read_byte][7:4];
    end
  end

  always @(*) begin
    next = state;
    if(ce_n) begin
      next = IDLE;
    end else begin
      case (state)
        IDLE: begin
          next = CTRL;
        end
        CTRL: begin
          if(counter == 8'h07) begin
            if(ctrl == 8'heb || ctrl == 8'h38) begin
              next = ADDR;   
            end
          end
        end
        ADDR: begin
          if(counter == 8'h0d) begin
            if(ctrl == 8'h38) begin
              next = WRITE;
            end 
            else if(ctrl == 8'heb) begin
              next = ARRG;
            end
          end
        end
        ARRG: begin
          if(counter == 8'h13) begin
            if(ctrl == 8'heb) begin
              next = READ;
            end
          end
        end
        WRITE: begin
          if(counter == 8'h15) begin
            next = IDLE;
          end
        end
        READ: begin
          if(counter == 8'h0b) begin
            next = IDLE;
          end
        end
      endcase
    end
  end


endmodule
