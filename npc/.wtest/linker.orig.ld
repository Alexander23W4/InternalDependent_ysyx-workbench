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
  sdram : ORIGIN = 0xa0000000, LENGTH = 32M
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
    _rodata_end = .;
  } > sdram AT> flash

  _text_lma   = LOADADDR(.text);
  _rodata_lma = LOADADDR(.rodata);



  .data : {
    _data_start = .;     
    *(.data*)
    *(.sdata*)            
    *(.sdata2*)
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
    _bss_end = .;
  } > sdram




  _heap_start = ALIGN(4);
  _heap_end   = ORIGIN(sdram) + LENGTH(sdram);




  _stack_pointer = ORIGIN(sram) + LENGTH(sram);
  _stack_top     = _stack_pointer;
  end = _stack_pointer;
  _end = _stack_pointer;

}

