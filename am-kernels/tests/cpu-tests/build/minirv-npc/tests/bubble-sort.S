#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"bubble-sort.c"
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
	.section	.text.bubble_sort,"ax",@progbits
	.align	2
	.globl	bubble_sort
	.hidden	bubble_sort
	.type	bubble_sort, @function
bubble_sort:
	lla	a0,.LANCHOR0
	lla	a2,.LANCHOR0+76
	li	a1,19
.L9:
	mv	a5,a0
	ble	a1,zero,.L13
.L11:
	lw	a4,0(a5)
	lw	a3,4(a5)
	ble	a4,a3,.L10
	sw	a3,0(a5)
	sw	a4,4(a5)
.L10:
	addi	a5,a5,4
	bne	a5,a2,.L11
.L13:
	addi	a1,a1,-1
	addi	a5,a2,-4
	beq	a2,a0,.L8
	mv	a2,a5
	j	.L9
.L8:
	ret
	.size	bubble_sort, .-bubble_sort
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-16
	sw	s0,8(sp)
	sw	s1,4(sp)
	sw	ra,12(sp)
	lla	s0,.LANCHOR0
	call	bubble_sort
	mv	a4,s0
	li	s1,0
.L18:
	lw	a0,0(a4)
	addi	a4,a4,4
	sw	a4,0(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,20
	lw	a4,0(sp)
	bne	s1,a5,.L18
	li	a0,1
	call	check
	li	s1,0
	call	bubble_sort
.L19:
	lw	a0,0(s0)
	addi	s0,s0,4
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,20
	bne	s1,a5,.L19
	li	a0,1
	call	check
	lw	ra,12(sp)
	lw	s0,8(sp)
	lw	s1,4(sp)
	li	a0,0
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.hidden	a
	.globl	a
	.section	.data.a,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	a, @object
	.size	a, 80
a:
	.word	2
	.word	12
	.word	14
	.word	6
	.word	13
	.word	15
	.word	16
	.word	10
	.word	0
	.word	18
	.word	11
	.word	19
	.word	9
	.word	1
	.word	7
	.word	5
	.word	4
	.word	3
	.word	8
	.word	17
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
