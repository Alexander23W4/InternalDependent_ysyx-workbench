ENTRY(_fsbl)

/*
ysyxSoC 专用链接脚本。

⭐ 内存分工(按讲义"通过 bootloader 将程序加载到 PSRAM 中执行"):
      flash 0x3000_0000  16MB   LMA: 整个镜像"烧"在这里, 复位后也从这里取第一条指令
      psram 0x8000_0000   4MB   VMA: 程序本体(text/rodata/data/bss) + 堆
      sram  0x0f00_0000   8KB   栈
      sdram 0xa000_0000~0xbfff_ffff    仿真扩展后暂时有128MB

   为什么这么分: flash 只能 XIP 取指, 每取一条指令都要走一次 QSPI 事务, 很慢;
   搬到 PSRAM 之后指令从 PSRAM 取, 快很多(讲义里 microbench 的性能提升就来自这里)。
   所以复位后先在 flash 里跑一小段 bootloader, 把程序搬到 PSRAM, 再跳过去执行。
   栈单独放 SRAM: SRAM 是真正的片上存储器, 函数调用/局部变量都走它, 比 PSRAM 快。

⭐ _pmem_start / _sram_start / _entry_offset 由 LDFLAGS 的 --defsym 传入,
   见 scripts/platform/ysyxsoc.mk。
*/
MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  sram  : ORIGIN = 0x0f000000, LENGTH = 8K
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sdram : ORIGIN = 0xa0000000, LENGTH = 128M
}

SECTIONS {
/* ⭐: FSBL  */
  . = _pmem_start + _entry_offset;   /* flash: 复位 PC 指的就在这里 */
  .fsbl : {
    _boot_start = .;
    KEEP(*(fsbl))      /* ⭐ 入口段必须 KEEP, 否则 --gc-sections 会把它当垃圾删掉 */
    _boot_end = .;
  } > flash AT> flash

  . = ALIGN(4);



/* ⭐: SSBL  */
  . = ORIGIN(sdram);
  .ssbl : {
    _ssbl_start = .;
    *(ssbl)
    _ssbl_end = .;
  } > sdram AT > flash
  _ssbl_lma = LOADADDR(.ssbl);



  .text : {
    _text_start = .;
    *(.text*)
    _text_end = .;
  } > sdram AT> flash

  .rodata : {
    _rodata_start = .;
    *(.rodata*)
    *(.srodata*)               /* 把srodata加进来 */
    _rodata_end = .;
  } > sdram AT> flash

  _text_lma   = LOADADDR(.text);
  _rodata_lma = LOADADDR(.rodata);



  /* ⭐ 这里除了标准 C 的 .data/.sdata, 还额外收了 rt-thread-am 的几条输入段
        (FSymTab / VSymTab / .rti_fn* / UtestTcTab / __am_apps.data*)。
        它们在 rt-thread-am 的 extra.ld 里本来是靠 "INSERT 插队" 塞进来的, 但 ysyxSoC 是
        "VMA 在 SDRAM / LMA 在 flash, 靠 start.S 搬" 的方案, INSERT 插进来的段拿不到
        AT> flash(于是 LMA 落在 SDRAM, objcopy 出来的 .bin 会几个 GB), 而且 INSERT 不推进
        位置计数器, 会把 _data_end/_bss_end/_heap_start 全留在这些段前面。所以直接在这里
        收编, 让 VMA/LMA 两边同步推进、_data_end 自然盖住它们。
        编译普通 AM 程序时这些名字一个都匹配不到, 等于没写(不会有空段, 地址也不变)。

        另外 _data_start.._data_end 必须与 _data_lma 起的一段 flash 严格逐字节对应,
        且起始地址 4 字节对齐, 否则 start.S 里的 lw 搬运会非对齐陷入。 */
  .data : {
    _data_start = .;     
    *(.data*)
    *(.sdata*)            
    *(.sdata2*)

    /* section information for finsh shell */
    __fsymtab_start = .;
    KEEP(*(FSymTab))
    __fsymtab_end = .;
    . = ALIGN(8);
    __vsymtab_start = .;
    KEEP(*(VSymTab))
    __vsymtab_end = .;
    . = ALIGN(8);

    /* rt-thread 的自动初始化表(INIT_EXPORT), 按 .rti_fn.* 的字典序排, 所以用 SORT */
    . = ALIGN(8);
    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;
    . = ALIGN(8);

    __rt_utest_tc_tab_start = .;
    KEEP(*(UtestTcTab))
    __rt_utest_tc_tab_end = .;

    . = ALIGN(8);
    __am_apps_data_start = .;
    *(__am_apps.data*)
    *(__am_apps.sdata*)
    __am_apps_data_end = .;
    . = ALIGN(8);

    _data_end = .;
  } > sdram AT> flash

  edata = .;
  _data = .;

  _data_lma = LOADADDR(.data);




  .bss : {
    _bss_start = .;       /* .bss 没有初值, 由 bootloader 清零, 不参与搬运 */
    *(.bss*)
    *(.sbss*)
    *(.sbss2*)
    *(.scommon)

    /* ⭐ 同上, rt-thread-am 的 __am_apps.bss* 也直接收编进 .bss,
          这样 _bss_end 和 _heap_start 天然在它们后面(堆不会和 __am_apps.bss 重叠)。 */
    . = ALIGN(8);
    __am_apps_bss_start = .;
    *(__am_apps.bss*)
    *(__am_apps.sbss*)
    *(__am_apps.scommon*)
    __am_apps_bss_end = .;
    _bss_end = .;
  } > sdram




  _heap_start = ALIGN(4);
  _heap_end   = ORIGIN(sdram) + LENGTH(sdram);




  _stack_pointer = ORIGIN(sram) + LENGTH(sram);
  _stack_top     = ORIGIN(sram);
  end = _stack_pointer;
  _end = _stack_pointer;

}

