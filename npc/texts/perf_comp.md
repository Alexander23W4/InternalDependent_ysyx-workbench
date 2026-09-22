# icache 性能提升

commit    : d3c4836b+dirty
benchmark : microbench(mainargs=test)
cycles    : 57302420
instrs    : 593507
IPC       : 0.010357
freq      : N/A   (RTL 目前还不能综合, 见 npc/Makefile 里 perf 的注释)
area      : N/A   (同上)

counters  :
    IFU_FETCH_CNT                593507
    LSU_READ_CNT                 72258
    LSU_WRITE_CNT                60100
    ALU_CNT                      326489
    BRANCH_CNT                   111584
    LOAD_CNT                     72258
    STORE_CNT                    60100
    JUMP_CNT                     23075
    CSR_CNT                      0
    SYSTEM_CNT                   1
    ALU_CPI                      81.517
    BRANCH_CPI                   80.399
    LOAD_CPI                     167.215
    STORE_CPI                    129.084
    JUMP_CPI                     81.302
    CSR_CPI                      N/A
    SYSTEM_CPI                   108.000
    IFU_CPI                      78.825
    LSU_CPI                      70.962
    LSU_LOAD_CPI                 85.699
    LSU_STORE_CPI                45.570
    IFU_FETCH_FLASH_CNT          1329
    IFU_FETCH_FLASH_CPI          276.000
    IFU_FETCH_SRAM_CNT           0
    IFU_FETCH_SRAM_CPI           N/A
    IFU_FETCH_SDRAM_CNT          592178
    IFU_FETCH_SDRAM_CPI          78.382
    IFU_FETCH_OTHER_CNT          0
    IFU_FETCH_OTHER_CPI          N/A
    LSU_READ_FLASH_CNT           7939
    LSU_READ_FLASH_CPI           276.000
    LSU_READ_SRAM_CNT            28155
    LSU_READ_SRAM_CPI            4.000
    LSU_READ_SDRAM_CNT           35599
    LSU_READ_SDRAM_CPI           109.143
    LSU_READ_OTHER_CNT           565
    LSU_READ_OTHER_CPI           5.844
    LSU_WRITE_FLASH_CNT          0
    LSU_WRITE_FLASH_CPI          N/A
    LSU_WRITE_SRAM_CNT           22143
    LSU_WRITE_SRAM_CPI           4.000
    LSU_WRITE_SDRAM_CNT          37432
    LSU_WRITE_SDRAM_CPI          70.716
    LSU_WRITE_OTHER_CNT          525
    LSU_WRITE_OTHER_CPI          6.000
    REGION_FLASH_CNT             9268
    REGION_FLASH_CPI             276.000
    REGION_SRAM_CNT              50298
    REGION_SRAM_CPI              4.000
    REGION_SDRAM_CNT             665209
    REGION_SDRAM_CPI             79.597
    REGION_OTHER_CNT             1090
    REGION_OTHER_CPI             5.919



[HIT GOOD TRAP]
[CYCLES] 33381693
[INSTRS] 597793
[CPI] 55.842

Performance Counter:
[IFU_FETCH_CNT] 597793
[LSU_READ_CNT] 74025
[LSU_WRITE_CNT] 60065
[ALU_CNT] 327482
[BRANCH_CNT] 113160
[LOAD_CNT] 74025
[STORE_CNT] 60065
[JUMP_CNT] 23060
[CSR_CNT] 0
[SYSTEM_CNT] 1

[ALU_CPI] 41.786
[BRANCH_CPI] 33.681
[LOAD_CPI] 133.741
[STORE_CPI] 75.117
[JUMP_CPI] 63.927
[CSR_CPI] N/A
[SYSTEM_CPI] 111.000

[IFU_CPI] 39.664 ⭐
[LSU_CPI] 63.655
[LSU_LOAD_CPI] 81.280
[LSU_STORE_CPI] 34.213

Memory Region Breakdown:
[IFU_FETCH_FLASH_CNT] 1329
[IFU_FETCH_FLASH_CPI] 6.897  ⭐
[IFU_FETCH_SRAM_CNT] 0
[IFU_FETCH_SRAM_CPI] N/A
[IFU_FETCH_SDRAM_CNT] 596464
[IFU_FETCH_SDRAM_CPI] 39.737  ⭐
[IFU_FETCH_OTHER_CNT] 0
[IFU_FETCH_OTHER_CPI] N/A

[LSU_READ_FLASH_CNT] 7939
[LSU_READ_FLASH_CPI] 276.000
[LSU_READ_SRAM_CNT] 28122
[LSU_READ_SRAM_CPI] 4.000
[LSU_READ_SDRAM_CNT] 35599
[LSU_READ_SDRAM_CPI] 103.907
[LSU_READ_OTHER_CNT] 2365
[LSU_READ_OTHER_CPI] 5.963

[LSU_WRITE_FLASH_CNT] 0
[LSU_WRITE_FLASH_CPI] N/A
[LSU_WRITE_SRAM_CNT] 22109
[LSU_WRITE_SRAM_CPI] 4.000
[LSU_WRITE_SDRAM_CNT] 37431
[LSU_WRITE_SDRAM_CPI] 52.454
[LSU_WRITE_OTHER_CNT] 525
[LSU_WRITE_OTHER_CPI] 6.000

[REGION_FLASH_CNT] 9268
[REGION_FLASH_CPI] 237.412
[REGION_SRAM_CNT] 50231
[REGION_SRAM_CPI] 4.000
[REGION_SDRAM_CNT] 669494
[REGION_SDRAM_CPI] 43.860
[REGION_OTHER_CNT] 2890
[REGION_OTHER_CPI] 5.970





MicroBench PASS
Scored time: 35224.067 ms
Total  time: 44723.134 ms
Hit ebreak instr, program end.

[HIT GOOD TRAP]
[CYCLES] 33381693
[INSTRS] 597793
[CPI] 55.842

Performance Counter:
[IFU_FETCH_CNT] 597793
[LSU_READ_CNT] 74025
[LSU_WRITE_CNT] 60065
[ALU_CNT] 327482
[BRANCH_CNT] 113160
[LOAD_CNT] 74025
[STORE_CNT] 60065
[JUMP_CNT] 23060
[CSR_CNT] 0
[SYSTEM_CNT] 1

[ALU_CPI] 41.786
[BRANCH_CPI] 33.681
[LOAD_CPI] 133.741
[STORE_CPI] 75.117
[JUMP_CPI] 63.927
[CSR_CPI] N/A
[SYSTEM_CPI] 111.000

[IFU_CPI] 39.664
[LSU_CPI] 63.655
[LSU_LOAD_CPI] 81.280
[LSU_STORE_CPI] 34.213

Memory Region Breakdown:
[IFU_FETCH_FLASH_CNT] 1329
[IFU_FETCH_FLASH_CPI] 6.897
[IFU_FETCH_SRAM_CNT] 0
[IFU_FETCH_SRAM_CPI] N/A
[IFU_FETCH_SDRAM_CNT] 596464
[IFU_FETCH_SDRAM_CPI] 39.737
[IFU_FETCH_OTHER_CNT] 0
[IFU_FETCH_OTHER_CPI] N/A

[LSU_READ_FLASH_CNT] 7939
[LSU_READ_FLASH_CPI] 276.000
[LSU_READ_SRAM_CNT] 28122
[LSU_READ_SRAM_CPI] 4.000
[LSU_READ_SDRAM_CNT] 35599
[LSU_READ_SDRAM_CPI] 103.907
[LSU_READ_OTHER_CNT] 2365
[LSU_READ_OTHER_CPI] 5.963

[LSU_WRITE_FLASH_CNT] 0
[LSU_WRITE_FLASH_CPI] N/A
[LSU_WRITE_SRAM_CNT] 22109
[LSU_WRITE_SRAM_CPI] 4.000
[LSU_WRITE_SDRAM_CNT] 37431
[LSU_WRITE_SDRAM_CPI] 52.454
[LSU_WRITE_OTHER_CNT] 525
[LSU_WRITE_OTHER_CPI] 6.000

[REGION_FLASH_CNT] 9268
[REGION_FLASH_CPI] 237.412
[REGION_SRAM_CNT] 50231
[REGION_SRAM_CPI] 4.000
[REGION_SDRAM_CNT] 669494
[REGION_SDRAM_CPI] 43.860
[REGION_OTHER_CNT] 2890
[REGION_OTHER_CPI] 5.970

ICache:
[ICACHE_HIT_CNT] 323794
[ICACHE_HIT_CPI] 3.000
[ICACHE_MISS_CNT] 273999
[ICACHE_MISS_CPI] 80.809
[ICACHE_HIT_RATE] 54.165%






[HIT GOOD TRAP]
[CYCLES] 24258974
[INSTRS] 597442
[CPI] 40.605

Performance Counter:
[IFU_FETCH_CNT] 597442
[LSU_READ_CNT] 74016
[LSU_WRITE_CNT] 60056
[ALU_CNT] 327210
[BRANCH_CNT] 113099
[LOAD_CNT] 74016
[STORE_CNT] 60056
[JUMP_CNT] 23060
[CSR_CNT] 0
[SYSTEM_CNT] 1

[ALU_CPI] 27.806
[BRANCH_CPI] 19.572
[LOAD_CPI] 116.966
[STORE_CPI] 57.360
[JUMP_CPI] 36.628
[CSR_CPI] N/A
[SYSTEM_CPI] 181.000

[IFU_CPI] 24.647
[LSU_CPI] 62.648
[LSU_LOAD_CPI] 79.796
[LSU_STORE_CPI] 33.798

Memory Region Breakdown:
[IFU_FETCH_FLASH_CNT] 1329
[IFU_FETCH_FLASH_CPI] 6.892
[IFU_FETCH_SRAM_CNT] 0
[IFU_FETCH_SRAM_CPI] N/A
[IFU_FETCH_SDRAM_CNT] 596113
[IFU_FETCH_SDRAM_CPI] 24.686
[IFU_FETCH_OTHER_CNT] 0
[IFU_FETCH_OTHER_CPI] N/A

[LSU_READ_FLASH_CNT] 7939
[LSU_READ_FLASH_CPI] 276.000
[LSU_READ_SRAM_CNT] 28113
[LSU_READ_SRAM_CPI] 4.000
[LSU_READ_SDRAM_CNT] 35599
[LSU_READ_SDRAM_CPI] 100.802
[LSU_READ_OTHER_CNT] 2365
[LSU_READ_OTHER_CPI] 5.963

[LSU_WRITE_FLASH_CNT] 0
[LSU_WRITE_FLASH_CPI] N/A
[LSU_WRITE_SRAM_CNT] 22100
[LSU_WRITE_SRAM_CPI] 4.000
[LSU_WRITE_SDRAM_CNT] 37431
[LSU_WRITE_SDRAM_CPI] 51.781
[LSU_WRITE_OTHER_CNT] 525
[LSU_WRITE_OTHER_CPI] 6.000

[REGION_FLASH_CNT] 9268
[REGION_FLASH_CPI] 237.411
[REGION_SRAM_CNT] 50213
[REGION_SRAM_CPI] 4.000
[REGION_SDRAM_CNT] 669143
[REGION_SDRAM_CPI] 30.251
[REGION_OTHER_CNT] 2890
[REGION_OTHER_CPI] 5.970

ICache:
[ICACHE_HIT_CNT] 518706
[ICACHE_HIT_CPI] 3.000
[ICACHE_MISS_CNT] 78736
[ICACHE_MISS_CPI] 159.664
[ICACHE_HIT_RATE] 86.821%
[PC_ITRACE] 597442 条 PC -> /home/wang/InternalDependent_ysyx-workbench/npc/pc_itrace.txt





[HIT GOOD TRAP]
[CYCLES] 22556484
[INSTRS] 597636
[CPI] 37.743

Performance Counter:
[IFU_FETCH_CNT] 597636
[LSU_READ_CNT] 74027
[LSU_WRITE_CNT] 60069
[ALU_CNT] 327271
[BRANCH_CNT] 113193
[LOAD_CNT] 74027
[STORE_CNT] 60069
[JUMP_CNT] 23075
[CSR_CNT] 0
[SYSTEM_CNT] 1

[ALU_CPI] 23.221
[BRANCH_CPI] 20.075
[LOAD_CPI] 115.397
[STORE_CPI] 55.624
[JUMP_CPI] 34.698
[CSR_CPI] N/A
[SYSTEM_CPI] 111.000

[IFU_CPI] 21.751
[LSU_CPI] 62.805
[LSU_LOAD_CPI] 79.855
[LSU_STORE_CPI] 34.076

Memory Region Breakdown:
[IFU_FETCH_FLASH_CNT] 1329
[IFU_FETCH_FLASH_CPI] 6.897
[IFU_FETCH_SRAM_CNT] 0
[IFU_FETCH_SRAM_CPI] N/A
[IFU_FETCH_SDRAM_CNT] 596307
[IFU_FETCH_SDRAM_CPI] 21.785
[IFU_FETCH_OTHER_CNT] 0
[IFU_FETCH_OTHER_CPI] N/A

[LSU_READ_FLASH_CNT] 7939
[LSU_READ_FLASH_CPI] 276.000
[LSU_READ_SRAM_CNT] 28124
[LSU_READ_SRAM_CPI] 4.000
[LSU_READ_SDRAM_CNT] 35599
[LSU_READ_SDRAM_CPI] 100.948
[LSU_READ_OTHER_CNT] 2365
[LSU_READ_OTHER_CPI] 5.963

[LSU_WRITE_FLASH_CNT] 0
[LSU_WRITE_FLASH_CPI] N/A
[LSU_WRITE_SRAM_CNT] 22112
[LSU_WRITE_SRAM_CPI] 4.000
[LSU_WRITE_SDRAM_CNT] 37432
[LSU_WRITE_SDRAM_CPI] 52.236
[LSU_WRITE_OTHER_CNT] 525
[LSU_WRITE_OTHER_CPI] 6.000

[REGION_FLASH_CNT] 9268
[REGION_FLASH_CPI] 237.412
[REGION_SRAM_CNT] 50236
[REGION_SRAM_CPI] 4.000
[REGION_SDRAM_CNT] 669338
[REGION_SDRAM_CPI] 27.698
[REGION_OTHER_CNT] 2890
[REGION_OTHER_CPI] 5.970

ICache:
[ICACHE_HIT_CNT] 464559
[ICACHE_HIT_CPI] 3.000
[ICACHE_MISS_CNT] 133077
[ICACHE_MISS_CPI] 82.720
[ICACHE_HIT_RATE] 77.733%
[PC_ITRACE] 597636 条 PC -> /home/wang/InternalDependent_ysyx-workbench/npc/pc_itrace.txt



cache_line_amt: 4  cache_line_bytes: 4  hit_rate: 15.9%  ifu_cpi: 68.677
cache_line_amt: 4  cache_line_bytes: 8  hit_rate: 66.9%  ifu_cpi: 40.841
cache_line_amt: 4  cache_line_bytes: 16  hit_rate: 82.6%  ifu_cpi: 35.013
cache_line_amt: 4  cache_line_bytes: 32  hit_rate: 92.2%  ifu_cpi: 27.206
cache_line_amt: 4  cache_line_bytes: 64  hit_rate: 95.8%  ifu_cpi: 26.525
cache_line_amt: 4  cache_line_bytes: 128  hit_rate: 96.9%  ifu_cpi: 35.557
cache_line_amt: 8  cache_line_bytes: 4  hit_rate: 43.7%  ifu_cpi: 46.981
cache_line_amt: 8  cache_line_bytes: 8  hit_rate: 73.5%  ifu_cpi: 33.314
cache_line_amt: 8  cache_line_bytes: 16  hit_rate: 91.1%  ifu_cpi: 19.294
cache_line_amt: 8  cache_line_bytes: 32  hit_rate: 95.4%  ifu_cpi: 17.155
cache_line_amt: 8  cache_line_bytes: 64  hit_rate: 97.5%  ifu_cpi: 17.316
cache_line_amt: 8  cache_line_bytes: 128  hit_rate: 99.4%  ifu_cpi: 8.978
cache_line_amt: 16  cache_line_bytes: 4  hit_rate: 54.2%  ifu_cpi: 38.793
cache_line_amt: 16  cache_line_bytes: 8  hit_rate: 86.8%  ifu_cpi: 18.049
cache_line_amt: 16  cache_line_bytes: 16  hit_rate: 95.6%  ifu_cpi: 11.123
cache_line_amt: 16  cache_line_bytes: 32  hit_rate: 97.3%  ifu_cpi: 11.437
cache_line_amt: 16  cache_line_bytes: 64  hit_rate: 99.4%  ifu_cpi: 6.552
cache_line_amt: 16  cache_line_bytes: 128  hit_rate: 99.6%  ifu_cpi: 7.019
cache_line_amt: 32  cache_line_bytes: 4  hit_rate: 77.8%  ifu_cpi: 20.362
cache_line_amt: 32  cache_line_bytes: 8  hit_rate: 93.3%  ifu_cpi: 10.714
cache_line_amt: 32  cache_line_bytes: 16  hit_rate: 98.0%  ifu_cpi: 6.617
cache_line_amt: 32  cache_line_bytes: 32  hit_rate: 99.3%  ifu_cpi: 5.221
cache_line_amt: 32  cache_line_bytes: 64  hit_rate: 99.6%  ifu_cpi: 5.248
cache_line_amt: 32  cache_line_bytes: 128  hit_rate: 99.7%  ifu_cpi: 6.160
cache_line_amt: 64  cache_line_bytes: 4  hit_rate: 88.3%  ifu_cpi: 12.107
cache_line_amt: 64  cache_line_bytes: 8  hit_rate: 96.9%  ifu_cpi: 6.594
cache_line_amt: 64  cache_line_bytes: 16  hit_rate: 98.9%  ifu_cpi: 4.977
cache_line_amt: 64  cache_line_bytes: 32  hit_rate: 99.6%  ifu_cpi: 4.270
cache_line_amt: 64  cache_line_bytes: 64  hit_rate: 99.7%  ifu_cpi: 4.571
cache_line_amt: 64  cache_line_bytes: 128  hit_rate: 99.9%  ifu_cpi: 3.695
cache_line_amt: 128  cache_line_bytes: 4  hit_rate: 94.4%  ifu_cpi: 7.366
cache_line_amt: 128  cache_line_bytes: 8  hit_rate: 98.2%  ifu_cpi: 5.113
cache_line_amt: 128  cache_line_bytes: 16  hit_rate: 99.3%  ifu_cpi: 4.224
cache_line_amt: 128  cache_line_bytes: 32  hit_rate: 99.8%  ifu_cpi: 3.723
cache_line_amt: 128  cache_line_bytes: 64  hit_rate: 99.9%  ifu_cpi: 3.563
cache_line_amt: 128  cache_line_bytes: 128  hit_rate: 100.0%  ifu_cpi: 3.375



cache_line_amt: 4  cache_line_bytes: 4  hit_rate: 15.7%  ifu_cpi: 68.844
cache_line_amt: 4  cache_line_bytes: 8  hit_rate: 68.6%  ifu_cpi: 38.899
cache_line_amt: 4  cache_line_bytes: 16  hit_rate: 84.7%  ifu_cpi: 31.169
cache_line_amt: 4  cache_line_bytes: 32  hit_rate: 94.2%  ifu_cpi: 21.083
cache_line_amt: 4  cache_line_bytes: 64  hit_rate: 95.5%  ifu_cpi: 28.567
cache_line_amt: 4  cache_line_bytes: 128  hit_rate: 96.7%  ifu_cpi: 37.967
cache_line_amt: 8  cache_line_bytes: 4  hit_rate: 43.9%  ifu_cpi: 46.808
cache_line_amt: 8  cache_line_bytes: 8  hit_rate: 74.0%  ifu_cpi: 32.670
cache_line_amt: 8  cache_line_bytes: 16  hit_rate: 92.5%  ifu_cpi: 16.782
cache_line_amt: 8  cache_line_bytes: 32  hit_rate: 96.9%  ifu_cpi: 12.526
cache_line_amt: 8  cache_line_bytes: 64  hit_rate: 96.8%  ifu_cpi: 21.287
cache_line_amt: 8  cache_line_bytes: 128  hit_rate: 99.5%  ifu_cpi: 8.461
cache_line_amt: 16  cache_line_bytes: 4  hit_rate: 52.9%  ifu_cpi: 39.806
cache_line_amt: 16  cache_line_bytes: 8  hit_rate: 87.6%  ifu_cpi: 17.160
cache_line_amt: 16  cache_line_bytes: 16  hit_rate: 96.0%  ifu_cpi: 10.376
cache_line_amt: 16  cache_line_bytes: 32  hit_rate: 98.4%  ifu_cpi: 7.915
cache_line_amt: 16  cache_line_bytes: 64  hit_rate: 99.6%  ifu_cpi: 5.109
cache_line_amt: 16  cache_line_bytes: 128  hit_rate: 99.6%  ifu_cpi: 6.998
cache_line_amt: 32  cache_line_bytes: 4  hit_rate: 78.6%  ifu_cpi: 19.718
cache_line_amt: 32  cache_line_bytes: 8  hit_rate: 93.1%  ifu_cpi: 10.837
cache_line_amt: 32  cache_line_bytes: 16  hit_rate: 98.2%  ifu_cpi: 6.304
cache_line_amt: 32  cache_line_bytes: 32  hit_rate: 99.5%  ifu_cpi: 4.522
cache_line_amt: 32  cache_line_bytes: 64  hit_rate: 99.8%  ifu_cpi: 4.381
cache_line_amt: 32  cache_line_bytes: 128  hit_rate: 99.9%  ifu_cpi: 4.276
cache_line_amt: 64  cache_line_bytes: 4  hit_rate: 88.3%  ifu_cpi: 12.146
cache_line_amt: 64  cache_line_bytes: 8  hit_rate: 97.0%  ifu_cpi: 6.418
cache_line_amt: 64  cache_line_bytes: 16  hit_rate: 99.2%  ifu_cpi: 4.490
cache_line_amt: 64  cache_line_bytes: 32  hit_rate: 99.6%  ifu_cpi: 4.101
cache_line_amt: 64  cache_line_bytes: 64  hit_rate: 99.8%  ifu_cpi: 3.926
cache_line_amt: 64  cache_line_bytes: 128  hit_rate: 99.9%  ifu_cpi: 3.678
cache_line_amt: 128  cache_line_bytes: 4  hit_rate: 94.6%  ifu_cpi: 7.183
cache_line_amt: 128  cache_line_bytes: 8  hit_rate: 98.6%  ifu_cpi: 4.654
cache_line_amt: 128  cache_line_bytes: 16  hit_rate: 99.4%  ifu_cpi: 4.110
cache_line_amt: 128  cache_line_bytes: 32  hit_rate: 99.7%  ifu_cpi: 3.791
cache_line_amt: 128  cache_line_bytes: 64  hit_rate: 99.9%  ifu_cpi: 3.589
cache_line_amt: 128  cache_line_bytes: 128  hit_rate: 100.0%  ifu_cpi: 3.393

