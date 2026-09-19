# SoC 架构与总线

> 本文档基于原始笔记整理，保留原始信息并增强结构与可读性。

ysyxSoC介绍

## ysyxSoc 总线结构
[CPU Core]
    | (AXI4-Master)
[AXI4Xbar] (直通)
    |
[AXI4Fragmenter] (事务分片)
    |
[AXI4UserYanker] (ID暂存管理)
    |
[AXI4Xbar_1] (核心 1-to-3 AXI4路由矩阵)
```text
    +-----> Port 1 ------> [AXI4MROM] (BootROM)
    +-----> Port 2 ------> [AXI4RAM]  (8KB SRAM)
    +-----> Port 0 ------> [AXI4Buffer] (时序隔离)
                               |
```

                           [AXI4ToAPB Bridge] (协议翻译)
                               |
                           [APBDelayer]
                               |
                           [APBFanout] (APB 1-to-7 分流中心)
```text
                               +---> Port 0 ---> [APBSPI]
                               +---> Port 1 ---> [APBUart16550]
                               +---> Port 2 ---> [APBPSRAM]
                               +---> Port 3 ---> [APBGPIO]
                               +---> Port 4 ---> [APBKeyboard]
                               +---> Port 5 ---> [APBVGA]
                               +---> Port 6 ---> [APBSDRAM]
```



## ysyxSoC包含的外围设备和相应的地址空间.

设备	                     地址空间
CLINT	              0x0200_0000~0x0200_ffff
SRAM	              0x0f00_0000~0x0fff_ffff
UART16550	          0x1000_0000~0x1000_0fff
SPI master	          0x1000_1000~0x1000_1fff
GPIO	              0x1000_2000~0x1000_200f
PS2	                  0x1001_1000~0x1001_1007
MROM	              0x2000_0000~0x2000_0fff
VGA	                  0x2100_0000~0x211f_ffff
Flash	              0x3000_0000~0x3fff_ffff
ChipLink MMIO	      0x4000_0000~0x7fff_ffff
PSRAM	              0x8000_0000~0x9fff_ffff
SDRAM	              0xa000_0000~0xbfff_ffff
ChipLink MEM	      0xc000_0000~0xffff_ffff
Reserved	其他
图中除了AXI以外, 还有APB, wishbone和SPI这些总线. 不过这些总线都比AXI简单, 甚至比AXI4-Lite还简单. 你已经了解AXI4-Lite了, 因此学习这些总线协议也并不难, 需要时可查阅相关手册.


## 两部分src.

第一部分是ysyxSoC的总线部分, 我们主要借助开源社区rocket-chip项目的diplomacy框架来实现它, 相关代码在ysyxSoC/src/目录下.
    借助diplomacy, 我们可以很容易地将一个具备总线接口的设备接入ysyxSoC.

第二部分是ysyxSoC的设备部分, 我们收集了一些设备控制器的开源项目, 相关代码在ysyxSoC/perip/目录下.
部分设备通过直接实例化rocket-chip项目中的IP来实现, 这部分设备并不在ysyxSoC/perip/目录下, 具体可以参考ysyxSoC/src/中的相关代码


## 读多长的问题: (写有wstrb, 读没有, 这会成问题)
对于设备来说, 读出1字节和读出4字节, 最终导致的行为可能不同.

    并非所有设备都适合通过AXI4-Lite总线接入.


上述UART就不能通过数据位宽为32位的AXI4-Lite总线接入, 因为UART中设备寄存器的间隔只有1字节
另一款设备寄存器地址空间如下的UART, 则可以通过数据位宽为32位的AXI4-Lite总线接入.

// Register addresses
`define UART_REG_RB `UART_ADDR_WIDTH'd0  // receiver buffer
`define UART_REG_IE `UART_ADDR_WIDTH'd4  // Interrupt enable
`define UART_REG_II `UART_ADDR_WIDTH'd8  // Interrupt identification
`define UART_REG_LC `UART_ADDR_WIDTH'd12 // Line Control

完整的AXI总线协议包含 arsize/awsize信号


## 使用 non-volatile memory 来存放最初的程序, 使用 mask ROM (MROM)

具体来说，平台已经帮您实现并连接好了以下所有部分：
总线互连与分发：
AXI4 交叉开关（AXI4Xbar
 与 AXI4Xbar_1
）：负责主干 AXI4 信号的路由与地址译码。

协议桥接器（AXI4ToAPB
）：自动将 AXI4 事务转换为 APB 事务。

APB 分发器（APBFanout
）：根据地址产生不同的片选信号（psel），分发给低速外设。

各种外设控制器实现：
内置存储器：只读 BootROM（AXI4MROM
）和静态 SRAM（AXI4RAM
）。

慢速 I/O 与通信：UART 16550 串口（APBUart16550
）、SPI Flash 控制器（APBSPI
）、GPIO 控制器（APBGPIO
）。

高带宽/多媒体外设：PSRAM 控制器（APBPSRAM
）、PS/2 键盘（APBKeyboard
）、VGA 显卡控制器（APBVGA
）以及 SDRAM 控制器（APBSDRAM
）。


## 成功 boot ysyxsoc-npc之后:


## 关键点
但在系统启动时, SRAM中并不包含有效的数据, 因此只能把数据段放到MROM中, 才能在系统启动时访问.
为了解决这个问题, 我们可以在程序真正开始执行前, 将数据段从MROM加载到SRAM中,
并让接下来的代码访问加载到SRAM中的数据段, 通过SRAM的可写特性支持全局变量的写入操作.

bootloader: 系统启动时的加载器


得到数据段在MROM中的地址MA(mrom address)和在SRAM中的地址SA(sram address), 以及数据段的长度LEN (均在链接脚本ysyxsoc-linker.ld中确定)

    对于MA, 我们可以在链接脚本的数据段开始前定义一个符号, 即可在运行时刻让bootloader获得该符号的地址;
    而对于LEN, 在链接脚本的数据段结束后定义一个符号, 与上述符号相减即可.
    SA只能在链接阶段确定, 我们需要在链接脚本中定义SA. (使用VMA LMA映射)

将数据段从MA复制到SA        memcpy()

让程序代码通过SA访问数据段


这样程序访问的是位于mrom中的数据段, 但是实际操作的是sram中的数据段拷贝.
注意VMA 和 LMA 在链接脚本中的标注只是映射(重定向), 数据本身还是要通过bootloader进行真正拷贝

## 关键点
 一种是虚拟内存地址(virtual memory address, VMA), 它表示程序运行时对象所在的地址;
 另一种是加载内存地址(load memory address, LMA), 它表示程序运行前对象所在的地址;

 二者都在 链接脚本 中定义, VMA是编译器最终会使用的地址, LMA是bootloader用于复制数据到VMA的源地址

 链接脚本里用 . 定义的符号，值全是 VMA。 所以 MA_start = .（在 .rodata 之后、.data 之前 → . 还在 MROM）碰巧是对的；
 而 MA_end = .（在 .bss > sram 之后）拿到的是 SRAM 地址。
 要拿 MROM 地址必须用 LOADADDR(段名)，或者用官方示例那招：源地址直接取 _etext（因为 .data 的 LMA 紧跟在 .text 后面）。


## flash
为了让大家进一步了解flash存储器, 我们介绍型号为W25Q128JV的flash颗粒的内部结构.
这种型号的flash颗粒有24根地址线, 可以存储16MB的数据, 这足够我们存放绝大部分的测试程序了.

整个flash颗粒的存储阵列划分成256个块(Block), 每个块的大小是64KB;
每个块的内部又划分成16个扇区(Sector), 每个扇区的大小是4KB;
每个扇区的内部又划分成16个页(Page), 每个页的大小是256B.

Sector是最小的擦除

① Read
   ↓
把整个 Sector 保存到 RAM

② Erase
   ↓
整个 Sector 被擦除
   ↓
11111111 11111111 ...

③ Modify
   ↓
在 RAM 中修改 D

④ Program
   ↓
把整个 Sector 重新写回 Flash


## 使用SPI协议与flash交互:

由于flash在片外, 为了精简外引脚, 使用SPI总线协议: Serial Peripheral Interface

SPI总线总共只有4种信号:
SCK - master发出的时钟信号, 只有1位
SS - slave select, master发出的选择信号, 用于指定通信对象, 每个slave对应1位
MOSI - master output slave input, master向slave通信的数据线, 只有1位
MISO - master input slave output, slave向master通信的数据线, 只有1位

master通常先通过SS信号选择目标slave, 然后通过SCK信号向slave发出SPI的时钟脉冲, 同时将需要发送的信息转化成串行信号, 逐个比特通过MOSI信号传输给slave;
然后监听MISO信号, 并将通过MISO接收到的串行信号转化成并行信息, 从而获得slave的回复.

slave的工作方式是类似的, 如果slave在SS信号有效的情况下收到SCK时钟脉冲, 则监听MOSI信号, 并将通过MOSI接收到的串行信号转化成并行信息, 从而获得master的传来的命令;
处理完命令后, 将需要回复的信息转化成串行信号, 逐个比特通过MISO信号传输给master.

更细致的SPI协议内容:
 一方面需要考虑发送的尾端(endianness): 是从高位到低位发送, 还是从低位到高位发送;
 另一方面需要考虑发送和采样的时机(时钟相位, clock phase): 是在SCK上升沿时发送/采样, 还是在SCK下降沿时发送/采样.
 有时还会约定时钟空闲时的电平(时钟极性, clock polarity): 是高电平空闲还是低电平空闲.
 在发送和采样的过程中, SCK起到了同步的作用, 双方共同约定发送/采样的尾端和时机, 并在RTL层次正确地实现约定.
 在真实场景中, 不同的slave可能有不同的约定, 这意味着在与不同slave通信的时候, master需要配合slave的约定来进行发送和采样.


 我们将SPI master看成是AXI和SPI之间的一个桥接模块, 用于将AXI请求转换成SPI请求, 从而与SPI的slave进行通信.


 SPI驱动程序在与slave通信之前, 先设置SS寄存器来选择目标slave, 并按照slave的约定配置SPI master的控制寄存器,
 然后再将需要传输的数据写入发送数据寄存器, 最后往某控制寄存器写入表示"开始传输"的命令.
 SPI驱动程序可以轮询SPI master的状态寄存器, 当状态标志为"忙碌"时则等待, 直到状态标志为"空闲"为止, 此时可从接收数据寄存器中读出slave的回复.

              MROM
              │
              │ flash_read()
              ▼
          SPI Master
              │
              ▼
            Flash
              │
              │ char-test
              ▼
             SRAM
              │
              ▼
          执行 char-test


CPU发起一次内存读
       ↓
spi_top_apb发现地址是Flash空间
       ↓
XIP FSM
       ↓
写SPI TX
       ↓
写SPI DIV
       ↓
写SPI SS
       ↓
写SPI CTRL
       ↓
等待SPI完成
       ↓
读RX
       ↓
APB返回数据
       ↓
CPU拿到instruction


        软件版                       硬件版

     flash_read()                  XIP FSM
          │                            │
          │ 操作SPI                    │ 操作SPI
          ▼                            ▼
     SPI Master                   SPI Master
          │                            │
          ▼                            ▼
        Flash                        Flash


APB目标地址是什么？
       │
       ├── SPI寄存器地址
       │      ↓
       │   正常SPI访问
       │
       └── Flash XIP地址
              ↓
           XIP FSM


## DRAM
DRAM(Dynamic Random Access Memory)是一种目前广泛使用的存储器, 和SRAM相比, DRAM具有容量大, 成本低的特点. DRAM的存储单元通过一根晶体管和一个电容来存储1 bit

有一类DRAM颗粒在内部集成了刷新的逻辑, 称为PSRAM(Pseudo Static Random Access Memory)颗粒.
PSRAM控制器无需实现刷新的功能, 也无需关心PSRAM颗粒的内部结构, 因此这种颗粒使用起来与SRAM很类似


## 扩展的SPI指令 命令 地址 数据

为了与基础SPI协议的传输方式区别开来, slave通常会提供不同的命令来让master选择通过何种协议进行传输.
例如, 上文提到的型号为W25Q128JV的flash颗粒提供多种读命令:

```text
提供03h命令, 使用基础SPI协议进行读操作, 其命令, 地址, 数据都按1 bit传输. 通常把这三者的传输位宽用一个三元组(命令传输位宽-地址传输位宽-数据传输位宽)来表示, 例如, 基础SPI协议也记为(1-1-1). 以读出32位数据为例, 03h命令需要执行8 + 24 + 32 = 64个SCK时钟.
提供3Bh命令, 使用Dual SPI协议进行读操作, 其命令和地址按1 bit传输, 但数据按2 bit传输, 记为(1-1-2). 以读出32位数据为例, 3Bh命令需要执行8 + 24 + 32/2 = 48个SCK时钟, 不过无论数据按多少位进行传输, 从flash存储阵列上读出数据总是需要一定的延迟, 因此3Bh命令在传输数据之前还需要额外等待8个SCK时钟, 即3Bh命令需要执行8 + 24 + 8(读延迟) + 32/2 = 56个SCK时钟.
提供BBh命令, 使用Dual SPI协议进行读操作, 其命令按1 bit传输, 但地址和数据按2 bit传输, 记为(1-2-2). 以读出32位数据为例, BBh命令需要执行8 + 24/2 + 4(读延迟) + 32/2 = 40个SCK时钟.
```


进一步地, 还有Quad SPI协议(简称QSPI), 通过添加SIO2和SIO3两位新信号, 可以在一个SCK时钟内单向传输4 bit.
例如, 上文提到的型号为W25Q128JV的flash颗粒还提供另外两种基于QSPI协议的读命令:

```text
提供6Bh命令, 其命令和地址按1 bit传输, 但数据按4 bit传输, 记为(1-1-4). 以读出32位数据为例, 6Bh命令需要执行8 + 24 + 8(读延迟) + 32/4 = 48个SCK时钟.
提供EBh命令, 其命令按1 bit传输, 但地址和数据按4 bit传输, 记为(1-4-4). 以读出32位数据为例, EBh命令需要执行8 + 24/4 + 6(读延迟) + 32/4 = 28个SCK时钟.
```


## 实现PSRAM后

现在就是, 程序事先烧到flash里面, 然后bootloader把 text和rodata转移到 sram, 把 data bss heap stack 都建立到 PSRAM, 使得程序运行时 fetch 和 访存 的效率加快

现在可以对比一下三种存储介质的访问路径和效率:

                         CPU
                          │
              ┌───────────┼────────────┐
              │           │            │
             SRAM        Flash        PSRAM
              │           │            │
             AXI        AXI/APB      AXI/APB
              │           │            │
          SRAM Ctrl    XIP/SPI      PSRAM Ctrl
              │           │            │
             SRAM        SPI          QSPI
                          │            │
                        Flash        PSRAM

SRAM读写延迟只有1周期, 快速, 但是空间小
Flash访问速度慢, 实际一次取指约 150 CPU cycles, 空间大
PSRAM适中

## 程序烧到flash里面, 但是加载到大ram-psram里面, 一级bootloader 和 二级bootloader的实现

一级bootloader:
    程序运行时:
    从 flash 里面 fetch bootloader, bootloader 搬运 到 psram 和 SRAM, bootloader 的最后一条指令是pc跳转到 PSRAM
    剩余的程序均在 PSRAM 中 fetch

二级bootloader:
    只有一级bootloader 放到 flash里面, 先把二级bootloader 搬到 psram里面, 然后跳转到 psram 执行 二级 bootloader

    FSBL  SSBL

    也就是说, 分两段填psram, 第一段fetch 初始 pc 在 flash, 执行 fsbl, 把ssbl 放到 psram, 跳到 psram
    psram 执行 ssbl, 把剩下的程序放到 psram.


## SDRAM

如果想要进一步提升访问DRAM颗粒的效率, 就要考虑将控制器和颗粒之间的串行总线改成并行总线了.
例如, 型号为MT48LC16M16A2的DRAM颗粒内部结构如下图所示. 该颗粒的引脚有39位, 分别包括:

CLK, CKE - 时钟信号和时钟使能信号
CS#, WE#, CAS#, #RAS - 命令信号
BA[1:0] - 存储体地址
A[12:0] - 地址
DQ[15:0] - 数据
DQM[1:0] - 数据掩码, 下图中的命名采用DQML和DQMH

与SPI协议中采用分频输出的SCK不同, 这里的时钟信号CLK通常由DRAM控制器的时钟直接驱动,
这类DRAM称为同步DRAM, 即SDRAM(Synchronous Dynamic Random Access Memory).


SDR SDRAM(Single Date Rate SDRAM)
DDR SDRAM(Double Data Rate SDRAM)  它可以分别在时钟的上升沿和下降沿传输数据 此后依次出现了DDR2, DDR3, DDR4, DDR5, 它们均通过不同技术进一步提升数据传输带宽


矩阵(存储体)  行地址  列地址  矩阵元素  存储单元
读出放大器(sence amplifier)(行缓冲)

sence amplifier 是在选中一行之后, 读取微小的电压差, 然后放大到VDD 和 0, 然后外部再读取 sence amplifier
读完, precharge, 把sence amplifier 的电平恢复到 VDD/2


CS#	RAS#	CAS#	WE#	    命令名称	               命令含义
1	X	    X	    X	    COMMAND INHIBIT	           无命令
0	1	    1	    1	    NO OPERATION	           NOP
0	0	    1	    1	    ACTIVE	                激活目标存储体的一行
0	1	    0	    1	    READ	                读出目标存储体的一列
0	1	    0	    0	    WRITE	                写入目标存储体的一列
0	1	    1	    0	    BURST TERMINATE	        停止当前的突发传输
0	0	    1	    0	    PRECHARGE	关          闭存储体中已激活的行(预充电)
0	0	    0	    1	    AUTO REFRESH	        刷新
0	0	    0	    0	    LOAD MODE REGISTER	    设置Mode寄存器


从DRAM颗粒接收到READ命令, 到读出存储阵列中的数据并传送到DQ总线上, 一般需要花费若干周期, 这个延迟称为CAS latency(有的教材翻译成CAS潜伏期).

## 突发传输  burst transfer      transaction   beat
使用突发传输, 只需要发送一个READ指令, 就可以多个2n个字节
// normal
  1   1   1   1   1   1   1   1   1   1   1   1
```text
|---|---|---|---|---|---|---|---|---|---|---|---|
  ^       |   ^       |   ^       |   ^       |
  |       v   |       v   |       v   |       v
```

 READ   data READ   data READ   data READ   data

// burst
  1   1   1   1   1   1
```text
|---|---|---|---|---|---|
  ^       |   |   |   |
  |       v   v   v   v
```

 READ    1st 2nd 3rd 4th

 WRITE命令也支持突发传输, 也即, 若要写入8字节, 可以在发出WRITE命令后紧接着的3个周期内连续传输需要写入的数据.
 至于一次突发传输的事务包含多少个节拍, 可以通过Mode寄存器来设置. Mode寄存器还可以设置CAS latency等参数.


## 加上SDRAM之后的存储:
程序烧录到flash
fsbl fetch flash (load ssbl to SDRAM)
ssbl fetch SDRAM (load rest of the text rodata data bss.. to SDRAM)
run-time fetch SDRAM
cache use SRAM

## RTFSC
一般来说, 对于实现协议的代码, RTFSC的时候, 应当先理解 外部控制信号和反馈信号, 内部控制信号 的意义
然后看这些信号(主要是内部控制信号)的控制逻辑
最后再去看状态机

还有一种思路是直接看状态机, 画出状态机, 遇到一个控制信号, 再去看他的控制逻辑


## SDRAM的扩展 (位扩展(word) 和 字扩展(addr))

一个维度是让一个地址存储更多位的信息, 称为位扩展; 另一个维度是增加地址的范围, 称为字扩展.
如果颗粒的字长(即DQ信号的位宽)小于总线的数据位宽, 位扩展能够明显提升数据传输的效率.
例如, 对于64位的CPU, 总线的数据位宽通常不低于64位, 用4个字长是16位的MT48LC16M16A2颗粒, 可以在一个CAS latency之后就读出64位, 效率比突发传输还高

## GPIO
对GPIO控制器来说, 这些设备寄存器的功能非常简单, 只需要用电路上的寄存器来存放相应引脚的状态即可.

$$ 完成GPIO控制器

GPIO	              0x1000_2000~0x1000_200f

地址	  作用
0x0	    16位数据, 分别驱动16个LED灯          0-1
0x4	    16位数据, 分别获得16个拨码开关的状态   4-5
0x8	    32位数据, 其中每4位驱动1个7段数码管    8-b
0xc	     保留

## UART

之前串口的发送端仅仅是通过UART16550控制器代码中的$write系统任务来输出, 并没有涉及将字符进行编码并通过线缆串行传输到接收端的过程.
NVBoard集成了一个串口终端, 有了NVBoard, 我们就可以来体会这个过程了

[NVBoard 串口终端]
串口传输:
只支持8N1的串口传输配置.

波特率:
用除数的方式来描述, 也即, 传输数据时一个比特需要维持多少个周期.

在nvboard/src/uart.cpp的UART构造函数中进行修改, 具体有两种方式:  修改divisor成员的初值   调用set_divisor()函数来设置


串口的一些细节:
UART 是低位先发送（LSB first）

二进制表示：
D7 D6 D5 D4 D3 D2 D1 D0
 0  1  0  0  0  0  0  1

实际发送：
D0 D1 D2 D3 D4 D5 D6 D7
 1  0  0  0  0  0  1  0

1  0  1 0 0 0 0 0 1 0 1  1
↑  ↑  └──────┬──────┘ ↑  ↑
空闲 起始   8 bit数据  停止 空闲

串口控制器已经接入ysyxSoC了

baud = f_clk / (16 × dl)   16是 uart16550 定义的, nvboard 里面的 divisor = 16 * dl
divisor 表示多少个时钟周期读取一个bit

ysyxsoc 中 将串口输出即通过 $(write)发送到CML, 也发送到顶层的 TX 引脚上

## ChipLink (片间总线    外层协议, 内层协议)

如果对端芯片是个FPGA, 我们还能获得灵活的扩展能力: 只需要将设备控制器烧录到FPGA中, 芯片就可以通过片间总线协议访问这些设备.

如果想通过更少的引脚将AXI请求发送到片外, 就只能对引脚进行分时复用了
例如, 如果只用32个引脚, 那么我们可以约定, 在T0时刻先传输32位的写地址, 在T1时刻传输32位的写数据, 在T2时刻传输其他控制信号.

我们将片间的总线协议称为外层协议, 将被分解传输的总线协议称为内层协议. 例如, 上述场景中AXI就是片间传输过程中的内层协议.
