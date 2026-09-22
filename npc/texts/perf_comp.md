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



cache_line_amt: 4  cache_line_bytes: 4  hit_rate: 15.133%  ifu_cpi: 69.281
cache_line_amt: 4  cache_line_bytes: 8  hit_rate: 66.593%  ifu_cpi: 41.184
cache_line_amt: 4  cache_line_bytes: 16  hit_rate: 82.423%  ifu_cpi: 35.307
cache_line_amt: 4  cache_line_bytes: 32  hit_rate: 92.097%  ifu_cpi: 27.451
cache_line_amt: 4  cache_line_bytes: 64  hit_rate: 95.801%  ifu_cpi: 26.785
cache_line_amt: 4  cache_line_bytes: 128  hit_rate: 96.897%  ifu_cpi: 35.937

cache_line_amt: 8  cache_line_bytes: 4  hit_rate: 43.180%  ifu_cpi: 47.376
cache_line_amt: 8  cache_line_bytes: 8  hit_rate: 73.240%  ifu_cpi: 33.587
cache_line_amt: 8  cache_line_bytes: 16  hit_rate: 91.036%  ifu_cpi: 19.476
cache_line_amt: 8  cache_line_bytes: 32  hit_rate: 95.375%  ifu_cpi: 17.311
cache_line_amt: 8  cache_line_bytes: 64  hit_rate: 97.443%  ifu_cpi: 17.482
cache_line_amt: 8  cache_line_bytes: 128  hit_rate: 99.429%  ifu_cpi: 9.065

cache_line_amt: 16  cache_line_bytes: 4  hit_rate: 53.759%  ifu_cpi: 39.114
cache_line_amt: 16  cache_line_bytes: 8  hit_rate: 86.686%  ifu_cpi: 18.218
cache_line_amt: 16  cache_line_bytes: 16  hit_rate: 95.530%  ifu_cpi: 11.215
cache_line_amt: 16  cache_line_bytes: 32  hit_rate: 97.243%  ifu_cpi: 11.531
cache_line_amt: 16  cache_line_bytes: 64  hit_rate: 99.364%  ifu_cpi: 6.601
cache_line_amt: 16  cache_line_bytes: 128  hit_rate: 99.618%  ifu_cpi: 7.057

cache_line_amt: 32  cache_line_bytes: 4  hit_rate: 77.514%  ifu_cpi: 20.561
cache_line_amt: 32  cache_line_bytes: 8  hit_rate: 93.174%  ifu_cpi: 10.802
cache_line_amt: 32  cache_line_bytes: 16  hit_rate: 98.009%  ifu_cpi: 6.659
cache_line_amt: 32  cache_line_bytes: 32  hit_rate: 99.272%  ifu_cpi: 5.253
cache_line_amt: 32  cache_line_bytes: 64  hit_rate: 99.599%  ifu_cpi: 5.270
cache_line_amt: 32  cache_line_bytes: 128  hit_rate: 99.699%  ifu_cpi: 6.191

cache_line_amt: 64  cache_line_bytes: 4  hit_rate: 88.206%  ifu_cpi: 12.211
cache_line_amt: 64  cache_line_bytes: 8  hit_rate: 96.819%  ifu_cpi: 6.636
cache_line_amt: 64  cache_line_bytes: 16  hit_rate: 98.910%  ifu_cpi: 5.004
cache_line_amt: 64  cache_line_bytes: 32  hit_rate: 99.586%  ifu_cpi: 4.282
cache_line_amt: 64  cache_line_bytes: 64  hit_rate: 99.720%  ifu_cpi: 4.586
cache_line_amt: 64  cache_line_bytes: 128  hit_rate: 99.934%  ifu_cpi: 3.701

cache_line_amt: 128  cache_line_bytes: 4  hit_rate: 94.346%  ifu_cpi: 7.416
cache_line_amt: 128  cache_line_bytes: 8  hit_rate: 98.127%  ifu_cpi: 5.141
cache_line_amt: 128  cache_line_bytes: 16  hit_rate: 99.327%  ifu_cpi: 4.236
cache_line_amt: 128  cache_line_bytes: 32  hit_rate: 99.764%  ifu_cpi: 3.730
cache_line_amt: 128  cache_line_bytes: 64  hit_rate: 99.900%  ifu_cpi: 3.568
cache_line_amt: 128  cache_line_bytes: 128  hit_rate: 99.964%  ifu_cpi: 3.378




cache_line_amt: 4  cache_line_bytes: 4  hit_rate: 15.693%  ifu_cpi: 68.844
cache_line_amt: 4  cache_line_bytes: 8  hit_rate: 68.593%  ifu_cpi: 38.899
cache_line_amt: 4  cache_line_bytes: 16  hit_rate: 84.674%  ifu_cpi: 31.169
cache_line_amt: 4  cache_line_bytes: 32  hit_rate: 94.156%  ifu_cpi: 21.083
cache_line_amt: 4  cache_line_bytes: 64  hit_rate: 95.486%  ifu_cpi: 28.567
cache_line_amt: 4  cache_line_bytes: 128  hit_rate: 96.706%  ifu_cpi: 37.967

cache_line_amt: 8  cache_line_bytes: 4  hit_rate: 43.908%  ifu_cpi: 46.808
cache_line_amt: 8  cache_line_bytes: 8  hit_rate: 74.042%  ifu_cpi: 32.670
cache_line_amt: 8  cache_line_bytes: 16  hit_rate: 92.502%  ifu_cpi: 16.782
cache_line_amt: 8  cache_line_bytes: 32  hit_rate: 96.921%  ifu_cpi: 12.526
cache_line_amt: 8  cache_line_bytes: 64  hit_rate: 96.771%  ifu_cpi: 21.287
cache_line_amt: 8  cache_line_bytes: 128  hit_rate: 99.486%  ifu_cpi: 8.461

cache_line_amt: 16  cache_line_bytes: 4  hit_rate: 52.873%  ifu_cpi: 39.806
cache_line_amt: 16  cache_line_bytes: 8  hit_rate: 87.612%  ifu_cpi: 17.160
cache_line_amt: 16  cache_line_bytes: 16  hit_rate: 95.987%  ifu_cpi: 10.376
cache_line_amt: 16  cache_line_bytes: 32  hit_rate: 98.412%  ifu_cpi: 7.915
cache_line_amt: 16  cache_line_bytes: 64  hit_rate: 99.628%  ifu_cpi: 5.109
cache_line_amt: 16  cache_line_bytes: 128  hit_rate: 99.623%  ifu_cpi: 6.998

cache_line_amt: 32  cache_line_bytes: 4  hit_rate: 78.594%  ifu_cpi: 19.718
cache_line_amt: 32  cache_line_bytes: 8  hit_rate: 93.144%  ifu_cpi: 10.837
cache_line_amt: 32  cache_line_bytes: 16  hit_rate: 98.203%  ifu_cpi: 6.304
cache_line_amt: 32  cache_line_bytes: 32  hit_rate: 99.508%  ifu_cpi: 4.522
cache_line_amt: 32  cache_line_bytes: 64  hit_rate: 99.756%  ifu_cpi: 4.381
cache_line_amt: 32  cache_line_bytes: 128  hit_rate: 99.880%  ifu_cpi: 4.276

cache_line_amt: 64  cache_line_bytes: 4  hit_rate: 88.290%  ifu_cpi: 12.146
cache_line_amt: 64  cache_line_bytes: 8  hit_rate: 97.009%  ifu_cpi: 6.418
cache_line_amt: 64  cache_line_bytes: 16  hit_rate: 99.189%  ifu_cpi: 4.490
cache_line_amt: 64  cache_line_bytes: 32  hit_rate: 99.644%  ifu_cpi: 4.101
cache_line_amt: 64  cache_line_bytes: 64  hit_rate: 99.836%  ifu_cpi: 3.926
cache_line_amt: 64  cache_line_bytes: 128  hit_rate: 99.936%  ifu_cpi: 3.678

cache_line_amt: 128  cache_line_bytes: 4  hit_rate: 94.645%  ifu_cpi: 7.183
cache_line_amt: 128  cache_line_bytes: 8  hit_rate: 98.553%  ifu_cpi: 4.654
cache_line_amt: 128  cache_line_bytes: 16  hit_rate: 99.396%  ifu_cpi: 4.110
cache_line_amt: 128  cache_line_bytes: 32  hit_rate: 99.744%  ifu_cpi: 3.791
cache_line_amt: 128  cache_line_bytes: 64  hit_rate: 99.896%  ifu_cpi: 3.589
cache_line_amt: 128  cache_line_bytes: 128  hit_rate: 99.963%  ifu_cpi: 3.393

