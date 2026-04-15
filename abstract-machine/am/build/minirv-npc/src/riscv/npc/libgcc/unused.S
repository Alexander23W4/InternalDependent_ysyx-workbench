#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"unused.c"
	.option nopic
	.text
	.section	.rodata.__muldf3.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implement"
	.align	2
.LC2:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/libgcc/unused.c:4  \n"
	.section	.text.__muldf3,"ax",@progbits
	.align	2
	.globl	__muldf3
	.hidden	__muldf3
	.type	__muldf3, @function
__muldf3:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	lla	s0,.LC0
	li	a0,65
.L2:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L2
	lla	s0,.LC1
	li	a0,78
.L3:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L3
	lla	s0,.LC2
	li	a0,32
.L4:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L4
	li	a0,1
	call	halt
	.size	__muldf3, .-__muldf3
	.section	.rodata.__fixdfdi.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/libgcc/unused.c:5  \n"
	.section	.text.__fixdfdi,"ax",@progbits
	.align	2
	.globl	__fixdfdi
	.hidden	__fixdfdi
	.type	__fixdfdi, @function
__fixdfdi:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	lla	s0,.LC0
	li	a0,65
.L11:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L11
	lla	s0,.LC1
	li	a0,78
.L12:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L12
	lla	s0,.LC3
	li	a0,32
.L13:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L13
	li	a0,1
	call	halt
	.size	__fixdfdi, .-__fixdfdi
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
