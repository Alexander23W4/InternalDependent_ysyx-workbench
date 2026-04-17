#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"select-sort.c"
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
	.section	.text.select_sort,"ax",@progbits
	.align	2
	.globl	select_sort
	.hidden	select_sort
	.type	select_sort, @function
select_sort:
	addi	sp,sp,-8
	sw	s0,4(sp)
	sw	s1,0(sp)
	lla	t0,.LANCHOR0+4
	li	t1,0
	lla	s1,.LANCHOR0
	li	a0,20
	li	s0,19
.L11:
	lw	t2,-4(t0)
	mv	a1,t1
	addi	t1,t1,1
	mv	a4,t0
	mv	a2,t2
	mv	a5,t1
.L10:
	lw	a3,0(a4)
	addi	a4,a4,4
	bge	a3,a2,.L9
	mv	a1,a5
	mv	a2,a3
.L9:
	addi	a5,a5,1
	bne	a5,a0,.L10
	slli	a1,a1,2
	sw	a2,-4(t0)
	add	a1,s1,a1
	sw	t2,0(a1)
	addi	t0,t0,4
	bne	t1,s0,.L11
	lw	s0,4(sp)
	lw	s1,0(sp)
	addi	sp,sp,8
	jr	ra
	.size	select_sort, .-select_sort
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
	call	select_sort
	mv	a4,s0
	li	s1,0
.L17:
	lw	a0,0(a4)
	addi	a4,a4,4
	sw	a4,0(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,20
	lw	a4,0(sp)
	bne	s1,a5,.L17
	li	a0,1
	call	check
	li	s1,0
	call	select_sort
.L18:
	lw	a0,0(s0)
	addi	s0,s0,4
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,20
	bne	s1,a5,.L18
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
