#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"div.c"
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
	.globl	__mulsi3
	.globl	__divsi3
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-20
	lla	a5,.LANCHOR0
	sw	a5,4(sp)
	mv	a4,a5
	sw	ra,16(sp)
	sw	s0,12(sp)
	sw	s1,8(sp)
	li	a5,0
	li	a3,10
.L9:
	sw	a5,0(a4)
	addi	a5,a5,1
	addi	a4,a4,4
	bne	a5,a3,.L9
	lla	a5,.LANCHOR0
	sw	a5,0(sp)
	li	s0,11
.L12:
	lw	a5,0(sp)
	li	s1,1
	lw	a0,0(a5)
.L11:
	mv	a1,s1
	addi	s1,s1,1
	call	__mulsi3
	bne	s1,s0,.L11
	lw	a5,0(sp)
	lla	a4,.LANCHOR0+40
	sw	a0,0(a5)
	addi	a5,a5,4
	sw	a5,0(sp)
	bne	a5,a4,.L12
	lla	a5,.LANCHOR0
	sw	a5,0(sp)
	li	s0,11
.L13:
	lw	a5,0(sp)
	li	s1,1
	lw	a0,0(a5)
.L14:
	mv	a1,s1
	addi	s1,s1,1
	call	__divsi3
	bne	s1,s0,.L14
	lw	a5,0(sp)
	lla	a4,.LANCHOR0+40
	sw	a0,0(a5)
	addi	a5,a5,4
	sw	a5,0(sp)
	bne	a5,a4,.L13
	li	s1,0
	li	s0,10
.L15:
	lw	a5,4(sp)
	lw	a0,0(a5)
	addi	a5,a5,4
	sw	a5,4(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	addi	s1,s1,1
	call	check
	bne	s1,s0,.L15
	lw	ra,16(sp)
	lw	s0,12(sp)
	lw	s1,8(sp)
	li	a0,0
	addi	sp,sp,20
	jr	ra
	.size	main, .-main
	.hidden	a
	.globl	a
	.section	.bss.a,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	a, @object
	.size	a, 40
a:
	.zero	40
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
