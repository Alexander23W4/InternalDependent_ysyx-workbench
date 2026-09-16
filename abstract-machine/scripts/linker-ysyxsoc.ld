ENTRY(_start)

/*
ysyxSoC 专用链接脚本。

⭐ _pmem_start / _sram_start / _entry_offset 都由 LDFLAGS 的 --defsym 传入,
   见 scripts/platform/ysyxsoc.mk。
*/
MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
  psram : ORIGIN = 0x80000000, LENGTH = 4M
}

/* 给栈"保底"的字节数: 堆最多长到 SRAM 末尾往前这么多, 保证堆撞不到栈。
 * 注意它只是保底而不是上限: 堆没长满时, 剩下的空间栈照样可以用。 */
STACK_RESERVE = 0x800;

SECTIONS {
  /* ==================== 只读镜像区: MROM ==================== */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)          /* AM 的 start.S, 必须排在第一个, 保证 _start == NPC 复位 PC */
    *(.text*)
  } > flash AT> flash
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > flash AT> flash


  /* ==================== 数据段: LMA 在 MROM, VMA 在 SRAM ====================*/
   . = ORIGIN(psram);
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

  .bss : {
    _bss_start = .;       /* .bss 没有初值, 由 bootloader 清零, 不参与搬运, 但是仍然要重定向VMA 到 sram */
    *(.bss*)
    *(.sbss*)
    *(.sbss2*)
    *(.scommon)
    _bss_end = .;
  } > psram AT> flash

  /* bootloader 需要的三个量: MA / SA / LEN */
  _data_lma = LOADADDR(.data);    /* MA : 数据段在 MROM 里的地址(LMA) */
  _data_len = SIZEOF(.data);      /* LEN: 数据段长度 */


  ASSERT(LOADADDR(.data) + SIZEOF(.data) <= ORIGIN(flash) + LENGTH(flash),
         "AM image exceeds FLASH")

/*⭐: 我的方案是给stack预留 STACK_RESERVE 大小的地址, heap 用数据段后面, stack前面的剩余的地址*/

  _heap_start = ALIGN(4);
  _heap_end   = ORIGIN(psram) + LENGTH(psram) - STACK_RESERVE;
  _stack_top  = _heap_end;
  _stack_pointer = ORIGIN(psram) + LENGTH(psram);   /* 栈从这里向下生长 */
  end = _stack_pointer;
  _end = _stack_pointer;

  /* .data/.bss + 堆 + 栈必须都放得下 */
  ASSERT(_heap_start <= _heap_end,
         "SRAM overflow: .data/.bss leaves no room for heap + stack")
}
