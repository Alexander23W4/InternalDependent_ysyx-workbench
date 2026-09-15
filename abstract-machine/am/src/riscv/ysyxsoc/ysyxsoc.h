/*
The file npc.h is self created
*/

/*
SRAM	              0x0f00_0000~0x0fff_ffff     0x0f000000~0x0f001fff (8KB)
MROM	              0x2000_0000~0x2000_0fff
UART16550	          0x1000_0000~0x1000_0fff
Flash	              0x3000_0000~0x3fff_ffff     0x3000_0000 ~ 0x30ff_ffff (16MB)

⭐
CLINT	              0x0200_0000~0x0200_ffff
SPI master	          0x1000_1000~0x1000_1fff
GPIO	              0x1000_2000~0x1000_200f
PS2	                  0x1001_1000~0x1001_1007
VGA	                  0x2100_0000~0x211f_ffff
ChipLink MMIO	      0x4000_0000~0x7fff_ffff
PSRAM	              0x8000_0000~0x9fff_ffff
SDRAM	              0xa000_0000~0xbfff_ffff
ChipLink MEM	      0xc000_0000~0xffff_ffff

*/

#ifndef __YSYXSOC_H
#define __YSYXSOC_H

#define YSYXSOC_SERIAL_ADDR 0x10000000
#define YSYXSOC_FLASH_ADDR  0x30000000

#endif