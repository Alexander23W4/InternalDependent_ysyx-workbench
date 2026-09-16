
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
⭐ QPI 模式

颗粒上电时处于基础 SPI 模式(命令也按 1 bit 走 SIO0)。控制器发 35h 之后,
颗粒切到 QPI 模式, 之后**命令也按 4 bit 传输**, 控制器 2 拍就能发完一个命令。

两种模式的相位(数字是 SCK 第几拍, 也就是模型里的 counter):

             命令          地址          dummy        数据(4 字节)
  SPI (1-4-4) 0..7 (1bit)  8..13 (4bit)  14..19 (6)   读 20..27 / 写 14..21
  QPI (4-4-4) 0..1 (4bit)  2..7  (4bit)   8..13 (6)   读 14..21 / 写  8..15
                                             │
                  只有 EBh(读) 有 6 拍 dummy ─┘   38h(写) 没有 dummy

⭐ 相位和控制器对齐的要点: 控制器在 **sck 下降沿** 换 counter(于是换 dout), 颗粒在
   **sck 上升沿** 采样/输出。所以"第 m 个上升沿"对应的就是 counter==m, 模型自己的
   counter 必须从第一个上升沿起每拍 +1, 第 m 拍时 counter 正好等于 m。
*/


module psram(
  input sck,
  input ce_n,   // 低电平有效, 认为完整传输结束前不会变成无效
  inout [3:0] dio    // 配合输出使能, 实现三态逻辑, 参考ysyxSoC/perip/psram/psram_top_apb.v 中 qspi_dio
                      // 控制, 地址, 数据的 input output 全部通过 dio
);

  reg [7:0] memory [0:32'h3F_FFFF];   // 4MB

  localparam IDLE = 3'd0, CTRL = 3'd1, ADDR = 3'd2, ARRG = 3'd3, READ = 3'd4, WRITE = 3'd5;

  localparam [7:0] CMD_READ  = 8'heb;   // Quad IO Read
  localparam [7:0] CMD_WRITE = 8'h38;   // Quad IO Write
  localparam [7:0] CMD_QPI   = 8'h35;   // Enter QPI

  reg [2:0] state, next;
  reg [7:0] ctrl;
  reg [23:0] addr;
  reg [7:0] counter;    // 0..28
  reg [3:0] dout;
  reg [3:0] wr_hi;      // 写数据凑字节用: 暂存先到的高 nibble
  reg       qpi;        // 已经切到 QPI 模式(35h 之后置 1, 不会被 ce_n 复位)
  wire douten;

  // ---------- 相位边界(由 qpi 决定) ----------
  wire [7:0] CMD_LAST   = qpi ? 8'd1  : 8'd7;
  wire [7:0] ADDR_FIRST = qpi ? 8'd2  : 8'd8;
  wire [7:0] ADDR_LAST  = qpi ? 8'd7  : 8'd13;
  wire [7:0] DUMMY_LAST = qpi ? 8'd13 : 8'd19;
  wire [7:0] RD_FIRST   = qpi ? 8'd14 : 8'd20;
  wire [7:0] RD_LAST    = qpi ? 8'd21 : 8'd27;
  wire [7:0] WR_FIRST   = qpi ? 8'd8  : 8'd14;
  wire [7:0] WR_LAST    = qpi ? 8'd15 : 8'd21;

  // ⭐ 不能直接写 (counter-14)[2:1] —— Verilog 不允许对表达式做位选,
  //    必须先把差值存成一个 wire 再选位
  wire [7:0] rd_off = counter - RD_FIRST;
  wire [7:0] wr_off = counter - WR_FIRST;

  wire [1:0] read_byte  = rd_off[2:1];
  wire       read_index = rd_off[0];
  wire [1:0] write_byte = wr_off[2:1];

  // 4MB 的颗粒, 只认低 22 位地址(高位回绕); 用位宽限制住, 顺带避免数组越界
  wire [21:0] rd_idx = addr[21:0] + {20'b0, read_byte};
  wire [21:0] wr_idx = addr[21:0] + {20'b0, write_byte};

  // 只有"读数据阶段"才由 PSRAM 驱动 dio, 其余时刻必须放开:
  // 命令/地址/写数据那几个阶段是控制器在驱动, 同时驱动会打架
  assign douten = (state == READ);
  assign dio = douten ? dout : 4'bz;

  // 命令最后一个 nibble/bit 是在同一拍写进 ctrl 的, 而 next 是组合逻辑、
  // 用的是还没更新的 ctrl, 所以判断要用"这一拍采完之后 ctrl 会变成什么"
  wire [7:0] ctrl_done = qpi ? {ctrl[7:4], dio} : {ctrl[7:1], dio[0]};

  always @(posedge sck or posedge ce_n) begin
    if (ce_n) begin            // 片选拉高 = 一笔传输结束, 异步复位(注意 qpi 不能清)
      state   <= IDLE;
      counter <= 8'h00;
      ctrl    <= 8'h00;
      dout    <= 4'h0;
    end else begin
      state   <= next;
      counter <= counter + 8'h01;

      // 命令: SPI 每拍 1 bit(只走 dio[0]) / QPI 每拍 4 bit, 都是先高位
      if ((state == IDLE || state == CTRL) && counter <= CMD_LAST) begin
        if (qpi) ctrl[7 - 4*counter -: 4] <= dio;
        else     ctrl[7 - counter]        <= dio[0];
      end
      // 地址: 每拍 4 bit, 先高 nibble
      if (state == ADDR && counter >= ADDR_FIRST && counter <= ADDR_LAST) begin
        addr[(23 - 4*(counter - ADDR_FIRST)) -: 4] <= dio;
      end
      // 写数据: 每拍 4 bit, 先高 nibble, 每 2 拍拼成 1 字节
      // ⭐ 必须"两个 nibble 收齐了才写存储体". 因为窄写(字节/半字)时控制器会提前
      //    结束传输, 如果第一个 nibble 就写下去, 下一个字节会被写进半个字节的垃圾
      //    (比如只写 1 字节却把后一个字节的高 nibble 也改了)
      if (state == WRITE && counter >= WR_FIRST && counter <= WR_LAST) begin
        if (wr_off[0] == 1'b0) begin
          wr_hi <= dio;                          // 先到的是高 nibble, 先存着
        end else begin
          memory[wr_idx] <= {wr_hi, dio};        // 低 nibble 到齐, 这时才落盘
        end
      end
      // 读数据: 每拍 4 bit, 先高 nibble
      if (state == READ && counter >= RD_FIRST && counter <= RD_LAST) begin
        dout <= read_index ? memory[rd_idx][3:0] : memory[rd_idx][7:4];
      end
      // 收到 35h -> 切到 QPI 模式(这一笔就到此为止, 控制器随后会放开片选)
      if (state == CTRL && counter == CMD_LAST && !qpi && ctrl_done == CMD_QPI) begin
        qpi <= 1'b1;
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
    wr_hi   = 4'h0;
    qpi     = 1'b0;
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
          if(counter == CMD_LAST) begin
            if(!qpi && ctrl_done == CMD_QPI) begin
              next = IDLE;                       // 35h: 只切模式, 没有地址和数据
            end
            else if(ctrl_done == CMD_READ || ctrl_done == CMD_WRITE) begin
              next = ADDR;
            end
            // ⭐$$: 命令不是这几个就暂时先让状态机卡死, 不报错
          end
        end
        ADDR: begin
          if(counter == ADDR_LAST) begin
            if(ctrl == CMD_WRITE) begin
              next = WRITE;
            end
            else if(ctrl == CMD_READ) begin
              next = ARRG;
            end
          end
        end
        ARRG: begin
          if(counter == DUMMY_LAST) begin
            next = READ;
          end
        end
        READ: begin
          // ⭐ 比最后一个 nibble 再晚一拍才回 IDLE:
          //    模型在自己的上升沿变 dout, 而控制器是在 sck 下降沿才采 din,
          //    所以最后一拍 dout 刚摆好, 要等控制器采完才能放开片选
          if(counter == RD_LAST + 8'd1) begin
            next = IDLE;
          end
        end
        WRITE: begin
          if(counter == WR_LAST) begin
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
