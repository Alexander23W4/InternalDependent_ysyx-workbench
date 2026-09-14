ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }
/*
PHDRS 是定义两个 segment, text 和 data
*/

/*
"." 代表 location counter，当前位置计数器
我们只需要给各个段分配sram的地址就ok, 这里的链接逻辑是, LDFLAGS 定义 sram 中能够使用的地址 pmem_start + _entry_offset;
然后按照顺序把每个段放到这部分sram里面, 然后程序执行时, 会从ENTRY (这里是_start) 开始执行.

⭐: 对于ysyxSoc, 还是依赖 AM 这一套进行链接, 也就是说, 出elf文件的过程无需特别关注, 
  只需要改一些 linker.ld等配置, 使得能够根据elf文件成功把程序load到sram里面, 并且从正确位置开始运行

  ⭐$$: 我们需要依靠硬件实现, 程序load, load的是bin文件, 代替原来的load_mem()函数

*/

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  }
  .data : {
    *(.data*)
  } : data
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}


/*
* 是通配符，表示所有文件

*(entry)：所有目标文件中的 entry 段
*(.text*)：所有目标文件中以 .text 开头的段
: text：使用前面定义的 text 程序头
*/


