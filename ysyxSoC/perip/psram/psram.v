
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

0x8000_0000~0x9fff_ffff  PSRAM 地址   4MB
需要把 VME  bootloader 全部改成 PSRAM 的地址
*/

module psram(
  input sck,
  input ce_n,   // 低电平有效
  inout [3:0] dio    // 配合输出使能, 实现三态逻辑, 参考ysyxSoC/perip/psram/psram_top_apb.v 中 qspi_dio
                      // 控制, 地址, 数据的 input output 全部通过 dio
);

  reg [7:0] memory [0:32'h3F_FFFF];   // 4MB

  assign dio = 4'bz;

  



endmodule
