#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"unalign.c"
	.option nopic
	.text
	.section	.text.check,"ax",@progbits
	.align	2
	.globl	check
	.hidden	check
	.type	check, @function
check:
	beq	a0,zero,.L7
	ret
.L7:
	addi	sp,sp,-12
	li	a0,1
	sw	ra,8(sp)
	call	halt
	.size	check, .-check
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	li	a5,1430532096
	addi	sp,sp,-20
	addi	a5,a5,803
	sw	s0,12(sp)
	sw	s1,8(sp)
	sw	ra,16(sp)
	li	a3,4
	lla	s0,.LANCHOR0
	lla	s1,.LANCHOR1
	sw	a5,4(sp)
.L9:
	lbu	a5,3(s0)
	addi	a3,a3,-1
	li	a5,-35
	sb	a5,3(s0)
	lbu	a5,4(s0)
	sw	a3,0(sp)
	li	a5,-52
	sb	a5,4(s0)
	lbu	a5,5(s0)
	li	a5,-69
	sb	a5,5(s0)
	lbu	a5,6(s0)
	li	a5,-86
	sb	a5,6(s0)
	lbu	a0,3(s0)
	lbu	a1,4(s0)
	lbu	a4,5(s0)
	lbu	a5,6(s0)
	slli	a1,a1,8
	or	a1,a1,a0
	slli	a4,a4,16
	or	a4,a4,a1
	slli	a5,a5,24
	or	a5,a5,a4
	sw	a5,0(s1)
	lw	a0,0(s1)
	lw	a5,4(sp)
	add	a0,a0,a5
	seqz	a0,a0
	call	check
	lw	a3,0(sp)
	la a5, .LANCHOR0+1; sb zero, 0(a5);
	la a5, .LANCHOR0; sb zero, 0(a5);
	bne	a3,zero,.L9
	lw	ra,16(sp)
	lw	s0,12(sp)
	lw	s1,8(sp)
	li	a0,0
	addi	sp,sp,20
	jr	ra
	.size	main, .-main
	.hidden	buf
	.globl	buf
	.hidden	x
	.globl	x
	.section	.bss.buf,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	buf, @object
	.size	buf, 16
buf:
	.zero	16
	.section	.sdata.x,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	x, @object
	.size	x, 4
x:
	.word	-1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
