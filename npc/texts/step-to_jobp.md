# Step-to-JobP

> 本文档基于原始笔记整理，保留原始信息并增强结构与可读性。

## 商用 ARM 核架构
Core
├── Front-End
│   ├── Branch Predictor (TAGE + BTB + RAS)
│   ├── I-Cache (L1I)
│   ├── L1I TLB
│   ├── Instruction Fetch
│   ├── Pre-Decode
│   ├── Instruction Queue
│   ├── Decode
│   ├── μop Cache
│   └── Loop Buffer
├── Rename & Schedule
│   ├── RAT
│   ├── Physical Register File
│   ├── Free List
│   ├── ROB
│   ├── RS / Issue Queue
│   └── LSQ / MOB
├── Execution
│   ├── ALU × N
│   ├── Shift
│   ├── Mul / Div
│   ├── Branch Unit
│   ├── AGU × N
│   ├── FPU / FMA
│   ├── SIMD / Vector
│   ├── Crypto
│   └── AI/Matrix
├── Memory
│   ├── L1 D-Cache
│   ├── L1 D-TLB
│   ├── L2 Cache
│   ├── L2 TLB
│   ├── Prefetcher
│   ├── Store Buffer
│   └── MMU / Page Table Walker
├── System
│   ├── CSR
│   ├── Exception / Interrupt
│   ├── Timer
│   ├── Debug
│   ├── PMU
│   ├── Trace
│   └── Power Management
└── Multi-Core
    ├── L3 Cache Slice
    ├── Coherence Manager
    ├── Ring/Mesh Interconnect
    └── IOMMU
