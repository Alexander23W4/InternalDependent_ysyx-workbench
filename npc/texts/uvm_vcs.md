# UVM

## 
| UVM组件       |         你需要写吗？ | 作用                              |
| ----------- | -------------: | ------------------------------- |
| Sequence    |       **通常需要** | 告诉 TB 生成什么测试                    |
| Sequencer   | 通常直接使用 UVM 提供的 | 管理 sequence → transaction       |
| Driver      |         **需要** | 把 transaction 转成 DUT 信号         |
| Monitor     |         **需要** | 从 DUT 信号采集 transaction          |
| Scoreboard  |         **需要** | DUT 结果和 REF 结果比较                |
| Coverage    |       **需要定义** | 定义你到底想统计什么                      |
| Agent       |         通常自己组装 | 把 driver/sequencer/monitor 组织起来 |
| Environment |         通常自己组装 | 把整个 TB 组织起来                     |
| Test        |         **需要** | 决定跑哪些 sequence                  |


RTL DUT
  ↓
Verilator
  ↓
C++ testbench
  ├── 驱动 DUT
  ├── 读取 DUT
  ├── 调 REF
  └── difftest


RTL DUT
  ↓
VCS
  ↓
SystemVerilog / UVM testbench
  ├── UVM Driver
  ├── UVM Monitor
  ├── UVM Scoreboard
  └── REF

你现在                         Synopsys 商业世界

Verilator       ───────────→   VCS
UVM             ───────────→   UVM
Waveform        ───────────→   Verdi
SVA             ───────────→   VCS / VC Formal
自己做 BMC       ───────────→   VC Formal
Yosys           ───────────→   Design Compiler
yosys-sta       ───────────→   PrimeTime
P&R             ───────────→   ICC2
RTL lint        ───────────→   VC SpyGlass
Formal equival  ───────────→   Formality











