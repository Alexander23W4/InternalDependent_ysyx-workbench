ENTRY(_start)

/*
ysyxSoC 专用链接脚本。

⭐ 内存分工(按讲义"通过 bootloader 将程序加载到 PSRAM 中执行"):
      flash 0x3000_0000  16MB   LMA: 整个镜像"烧"在这里, 复位后也从这里取第一条指令
      psram 0x8000_0000   4MB   VMA: 程序本体(text/rodata/data/bss) + 堆
      sram  0x0f00_0000   8KB   栈

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
}

SECTIONS {
  /* ================================================================
   * 1. bootloader: 复位 PC 指向 flash 里的第一条指令, VMA == LMA == flash
   *    只有它从 flash 执行(而且只执行一次)。它不能用 pc 相对的方式去访问
   *    还没搬过去的 PSRAM 代码 —— ⭐搬完之后必须用绝对跳转跳过去。
   * ================================================================ */
  . = _pmem_start + _entry_offset;   /* flash: 复位 PC 指的就在这里 */
  .boot : {
    _boot_start = .;
    *(entry)          
    _boot_end = .;
  } > flash AT> flash

  /* bootloader 用 lw 按字搬, 所以 .text 的 LMA 必须 4 字节对齐 */
  . = ALIGN(4);

  /* ================================================================
   * 2. 程序本体: LMA 在 flash(bootloader 从这里搬), VMA 在 PSRAM(在这里执行)
   * ================================================================ */
  . = ORIGIN(psram);

  .text : {
    _text_start = .;
    *(.text*)
    _text_end = .;
  } > psram AT> flash

  .rodata : {
    _rodata_start = .;
    *(.rodata*)
    _rodata_end = .;
  } > psram AT> flash

  /* bootloader 要用到的 LMA */
  _text_lma   = LOADADDR(.text);
  _rodata_lma = LOADADDR(.rodata);

  .data : {
    _data_start = .;      /* SA: bootloader 搬完之后, 程序从这里访问数据段(VMA) */
    *(.data*)
    *(.sdata*)            /* ⭐ 小数据段: -fdata-sections 加上 GCC 的默认
                           *    -msmall-data-limit=8 会把 <=8 字节的全局变量塞进
                           *    .sdata/.sbss。漏掉它们 -> 变成 orphan section ->
                           *    ld 自己摆位置, 但 bootloader 只搬 _data_start..
                           *    _data_end, 于是这些全局变量根本不会被搬过去 */
    *(.sdata2*)
    _data_end = .;
  } > psram AT> flash
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
  } > psram

  /* ================================================================
   * 3. 堆: PSRAM 里 .bss 之后, 一直长到 PSRAM 末尾
   *    (栈已经挪到 SRAM 了, 所以这里不用再给它留位置)
   * ================================================================ */
  _heap_start = ALIGN(4);
  _heap_end   = ORIGIN(psram) + LENGTH(psram);

  /* ================================================================
   * 4. 栈: SRAM, 从 SRAM 末尾向下生长
   * ================================================================ */
  _stack_pointer = ORIGIN(sram) + LENGTH(sram);
  _stack_top     = _stack_pointer;
  end = _stack_pointer;
  _end = _stack_pointer;



  ASSERT(_text_start == ORIGIN(psram), "text should start at PSRAM base")
  ASSERT(LOADADDR(.data) + SIZEOF(.data) <= ORIGIN(flash) + LENGTH(flash),
         "AM image exceeds FLASH")
  ASSERT(_heap_start <= _heap_end,
         "PSRAM overflow: .text/.rodata/.data/.bss leaves no room for heap")
}
