#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"fact.c"
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
	.section	.text.fact,"ax",@progbits
	.align	2
	.globl	fact
	.hidden	fact
	.type	fact, @function
fact:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	mv	s0,a0
	sw	s1,0(sp)
	li	a0,1
	bleu	s0,a0,.L8
	li	s1,1
.L9:
	mv	a1,s0
	addi	s0,s0,-1
	call	__mulsi3
	bne	s0,s1,.L9
.L8:
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	addi	sp,sp,12
	jr	ra
	.size	fact, .-fact
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-20
	lla	a5,.LANCHOR0
	sw	ra,16(sp)
	sw	s0,12(sp)
	sw	s1,8(sp)
	sw	a5,4(sp)
	sw	zero,0(sp)
	li	a0,1
.L15:
	lw	a4,0(sp)
	lla	a3,.LANCHOR1
	slli	a5,a4,2
	add	a5,a3,a5
	lw	a5,0(a5)
	addi	s0,a4,1
	lw	a4,4(sp)
	sw	s0,0(sp)
	sw	a0,0(a4)
	sub	a0,a5,a0
	seqz	a0,a0
	call	check
	li	a5,13
	beq	s0,a5,.L23
	lw	s1,0(sp)
	li	a5,1
	li	a0,1
	beq	s1,a5,.L18
	li	s0,1
.L19:
	mv	a1,s1
	addi	s1,s1,-1
	call	__mulsi3
	bne	s1,s0,.L19
.L18:
	lw	a5,4(sp)
	addi	a5,a5,4
	sw	a5,4(sp)
	j	.L15
.L23:
	lw	ra,16(sp)
	lw	s0,12(sp)
	lw	s1,8(sp)
	li	a0,0
	addi	sp,sp,20
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.hidden	f
	.globl	f
	.section	.bss.f,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	f, @object
	.size	f, 60
f:
	.zero	60
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	ans, @object
	.size	ans, 52
ans:
	.word	1
	.word	1
	.word	2
	.word	6
	.word	24
	.word	120
	.word	720
	.word	5040
	.word	40320
	.word	362880
	.word	3628800
	.word	39916800
	.word	479001600
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
