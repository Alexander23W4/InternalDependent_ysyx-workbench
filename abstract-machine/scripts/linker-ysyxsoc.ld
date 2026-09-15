ENTRY(_start)

/*
ysyxSoC 专用链接脚本。

⭐ 为什么不能直接用 scripts/linker.ld:
   ysyxSoC 上有两块属性完全不同的存储器, 必须分开摆:
     MROM  0x2000_0000 ~ 0x2000_0fff  4KB  只读/可执行/非易失  -> 放整个程序镜像
     SRAM  0x0f00_0000 ~ 0x0f001fff  8KB  可读可写             -> 只放栈和堆
   而共用的 linker.ld 只有一段 (_pmem_start + 0x9000 处跟着放栈), 会
   把栈摆到 MROM 里(只读)或者摆到 SRAM 外面去。

⭐ 为什么 .data/.bss 也留在 MROM:
   .bin 是"从最低段地址铺到最高段地址"的连续镜像, 第 0 字节对应 _pmem_start。
   如果把 .text 放 MROM 而把 .data 放 SRAM, objcopy 会生成一个 200 多 MB 的
   全 0 .bin; 而且 SRAM 上电没有内容, 没有任何东西能给 .data 预置初值。
   所以这一步的做法是: 镜像整体连续地放在 MROM 里,
   代价是程序里不能写全局变量(会打到只读的 MROM 上)。
   等后面的 flash + bootloader 阶段, 再把数据段加载到可写的 PSRAM。

⭐ _pmem_start / _sram_start / _entry_offset 都由 LDFLAGS 的 --defsym 传入,
   见 scripts/platform/ysyxsoc.mk。
*/
MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
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
  } > mrom AT> mrom
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > mrom AT> mrom


  /* =========================================================

   . = ORIGIN(sram);
  .data : {
    _data_start = .;      /* SA: bootloader 搬完之后, 程序从这里访问数据段(VMA) */
    *(.data*)
    _data_end = .;
  } > sram AT> mrom
  edata = .;
  _data = .;

  .bss : {
    _bss_start = .;       /* .bss 没有初值, 由 bootloader 清零, 不参与搬运 */
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram AT> mrom

  /* bootloader 需要的三个量: MA / SA / LEN */
  _data_lma = LOADADDR(.data);    /* MA : 数据段在 MROM 里的地址(LMA) */
  _data_len = SIZEOF(.data);      /* LEN: 数据段长度 */


  ASSERT(LOADADDR(.data) + SIZEOF(.data) <= ORIGIN(mrom) + LENGTH(mrom),
         "AM image exceeds 4KB MROM")

/*
 让heap紧跟 .data和.bss
*/
  . = ALIGN(4);
  _heap_start = .;
  . = ORIGIN(sram) + LENGTH(sram) - STACK_RESERVE;
  _heap_end = .;
  _stack_top = .;
  _stack_pointer = ORIGIN(sram) + LENGTH(sram);   /* 栈从这里向下生长 */
  end = .;
  _end = .;

  /* .data/.bss + 堆 + 栈必须都放得下 */
  ASSERT(_heap_start <= _heap_end,
         "SRAM overflow: .data/.bss leaves no room for heap + stack")
}
