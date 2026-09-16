
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

/*
⭐ 和控制器对的时钟相位(从 EF_PSRAM_CTRL.v 的 PSRAM_READER/PSRAM_WRITER 反推出来的):

    controller 的 counter 在 sck 下降沿加 1, dout 是 counter 的组合逻辑,
    所以 "第 m 个 SCK 上升沿" 对应的就是 controller 的 counter == m:
        - 上升沿采 din:  counter 20..27  -> 4 个字节, 每拍 4bit, 每字节先高 nibble 后低 nibble
        - 上升沿变 dout: 控制器自己在下降沿换, PSRAM 在自己这边上升沿换, 正好能被它在下个下降沿采到

    因此模型自己的 counter 必须"从第一个上升沿开始就每拍 +1", 并且 m 拍时 counter 要等于 m:
        IDLE 第一个沿 -> counter 0 -> 命令 bit7
        counter 1..7  -> 命令 bit6..bit0
        counter 8..13 -> 地址 24bit, 每拍 4bit, 先高 nibble
        counter 14..19 (EBh) -> 6 拍 dummy
        counter 20..27 (EBh) -> 4 字节读数据
        counter 14..21 (38h) -> 4 字节写数据
    所以下面 ce_n 拉高时用异步复位把 counter 清 0, 而不是"进 IDLE 那一拍清 0"
    (那样第一个上升沿会被白白吃掉, 整条时序晚一拍)。
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
  reg [7:0] counter;    // 0-28
  reg [3:0] dout;
  reg [3:0] wr_hi;      // 写数据凑字节用: 暂存先到的高 nibble
  wire douten;

  wire [1:0] write_byte;
  wire read_index;
  wire[1:0] read_byte;

  // ⭐ 不能直接写 (counter-14)[2:1] —— Verilog 不允许对表达式做位选,
  //    必须先把差值存成一个 wire 再选位
  wire [7:0] wcnt = counter - 8'd14;
  wire [7:0] rcnt = counter - 8'd20;

  assign write_byte = wcnt[2:1];
  assign read_index = rcnt[0];
  assign read_byte = rcnt[2:1];

  // 4MB 的颗粒, 只认低 22 位地址(高位回绕); 用位宽限制住, 顺带避免数组越界
  wire [21:0] rd_index = addr[21:0] + {20'b0, read_byte};
  wire [21:0] wr_index = addr[21:0] + {20'b0, write_byte};

  // 只有"读数据阶段"才由 PSRAM 驱动 dio, 其余时刻必须放开:
  // 命令/地址/写数据那几个阶段是控制器在驱动, 同时驱动会打架
  assign douten = (state == READ);
  assign dio = douten ? dout : 4'bz;

  // 命令最后一位(counter==7)是在同一拍写进 ctrl 的, 而 next 是组合逻辑、
  // 用的是还没更新的 ctrl, 所以判断要用"这一拍采完之后 ctrl 会变成什么"
  wire [7:0] ctrl_done = {ctrl[7:1], dio[0]};

  always @(posedge sck or posedge ce_n) begin
    if (ce_n) begin            // 片选拉高 = 一笔传输结束, 异步复位
      state   <= IDLE;
      counter <= 8'h00;
      ctrl    <= 8'h00;
      dout    <= 4'h0;
    end else begin
      state   <= next;
      counter <= counter + 8'h01;

      // 命令: 每拍 1 bit, 从 dio[0] 进, 先高位。第一个沿(state 还是 IDLE)也不能漏
      if ((state == IDLE || state == CTRL) && counter <= 8'h07) begin
        ctrl[7-counter] <= dio[0];
      end
      // 地址: 每拍 4 bit, 先高 nibble
      if (state == ADDR) begin
        addr[(13-counter)*4 +: 4] <= dio;
      end
      // 写数据: 每拍 4 bit, 先高 nibble, 每 2 拍拼成 1 字节
      // ⭐ 必须"两个 nibble 收齐了才写存储体". 因为窄写(字节/半字)时控制器会提前
      //    结束传输, 如果第一个 nibble 就写下去, 下一个字节会被写进半个字节的垃圾
      //    (比如只写 1 字节却把后一个字节的高 nibble 也改了)
      if (state == WRITE) begin
        if (wcnt[0] == 1'b0) begin
          wr_hi <= dio;                          // 先到的是高 nibble, 先存着
        end else begin
          memory[wr_index] <= {wr_hi, dio};      // 低 nibble 到齐, 这时才落盘
        end
      end
      // 读数据: 每拍 4 bit, 先高 nibble
      if (state == READ) begin
        dout <= read_index ? memory[rd_index][3:0] : memory[rd_index][7:4];
      end
    end
  end

  // 仿真开始时没有任何 ce_n 边沿, 这里给个确定初值(不要依赖 verilator 的默认 0)
  initial begin
    state   = IDLE;
    counter = 8'h00;
    ctrl    = 8'h00;
    addr    = 24'h0;
    dout    = 4'h0;
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
            if(ctrl_done == 8'heb || ctrl_done == 8'h38) begin   // ⭐$$: 这里如果命令不是这两个, 就暂时先让状态机卡死, 不报错
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
          // ⭐ 比最后一个 nibble 再晚一拍才回 IDLE:
          //    模型在自己的上升沿变 dout, 而控制器是在 sck 下降沿才采 din,
          //    所以 counter==27 那一拍 dout 刚摆好, 要等控制器采完(下一拍)才能放开片选
          if(counter == 8'h1c) begin
            next = IDLE;
          end
        end
        default: begin
          next = IDLE;
        end
      endcase
    end
  end


endmodule
