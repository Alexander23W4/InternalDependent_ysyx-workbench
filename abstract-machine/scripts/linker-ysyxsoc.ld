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

SECTIONS {
  /* ==================== 只读镜像区: MROM ==================== */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)          /* AM 的 start.S, 必须排在第一个, 保证 _start == NPC 复位 PC */
    *(.text*)
  }
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  }

  .data : {
    *(.data*)         /* ★ 落在只读的 MROM 里: 只能读, 不能写 */
  }
  edata = .;
  _data = .;

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  . = ALIGN(4);
  _image_end = .;
  /* 镜像必须装得下 4KB 的 MROM, 装不下就让链接直接报错 */
  ASSERT(_image_end <= _pmem_start + 0x1000, "AM image exceeds 4KB MROM")

  /* ==================== 可写区: SRAM ==================== */
  /*
  ⭐:
    _stack_point 是在_Start函数里面使用, 直接把sp一开始就指到栈顶;
    _heap_start  是在trm.c正是划定 heap 的范围, 然后 malloc 和 free 函数使用 Area heap;
  */
  . = _sram_start;
  _heap_start = .;
  . = _sram_start + 0x1000;   /* 低 4KB 给堆区 */
  _heap_end = .;
  . = _sram_start + 0x2000;   /* SRAM 末尾 */
  _stack_pointer = .;         /* 栈从这里向下生长 */
  end = .;
  _end = .;
}
