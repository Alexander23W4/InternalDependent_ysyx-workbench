#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdlib.c"
	.option nopic
	.text
	.section	.text.rand,"ax",@progbits
	.align	2
	.globl	rand
	.hidden	rand
	.type	rand, @function
rand:
	lla	a3,.LANCHOR0
	lw	a2,0(a3)
	slli	a4,a2,8
	sub	a4,a4,a2
	slli	a4,a4,3
	add	a4,a4,a2
	slli	a4,a4,7
	add	a4,a4,a2
	slli	a4,a4,3
	sub	a4,a4,a2
	slli	a5,a4,5
	add	a5,a4,a5
	slli	a5,a5,2
	sub	a5,a5,a2
	slli	a5,a5,2
	li	a4,12288
	add	a5,a5,a2
	addi	a4,a4,57
	add	a5,a5,a4
	slli	a0,a5,1
	sw	a5,0(a3)
	srli	a0,a0,17
	ret
	.size	rand, .-rand
	.section	.text.srand,"ax",@progbits
	.align	2
	.globl	srand
	.hidden	srand
	.type	srand, @function
srand:
	la a5, .LANCHOR0; sw a0, 0(a5);
	ret
	.size	srand, .-srand
	.section	.text.abs,"ax",@progbits
	.align	2
	.globl	abs
	.hidden	abs
	.type	abs, @function
abs:
	srai	a5,a0,31
	xor	a0,a5,a0
	sub	a0,a0,a5
	ret
	.size	abs, .-abs
	.section	.text.atoi,"ax",@progbits
	.align	2
	.globl	atoi
	.hidden	atoi
	.type	atoi, @function
atoi:
	lbu	a3,0(a0)
	li	a5,32
	mv	a4,a0
	bne	a3,a5,.L6
.L7:
	lbu	a3,1(a4)
	addi	a4,a4,1
	beq	a3,a5,.L7
.L6:
	addi	a5,a3,-48
	andi	a5,a5,0xff
	li	a2,9
	li	a0,0
	bgtu	a5,a2,.L10
.L9:
	slli	a5,a0,2
	add	a5,a5,a0
	slli	a5,a5,1
	addi	a4,a4,1
	add	a5,a5,a3
	lbu	a3,0(a4)
	addi	a0,a5,-48
	addi	a5,a3,-48
	andi	a5,a5,0xff
	bleu	a5,a2,.L9
	ret
.L10:
	ret
	.size	atoi, .-atoi
	.section	.text.malloc,"ax",@progbits
	.align	2
	.globl	malloc
	.hidden	malloc
	.type	malloc, @function
malloc:
	lla	a4,.LANCHOR1
	lw	a3,0(a4)
	mv	a5,a0
	beq	a3,zero,.L18
.L14:
	li	a0,0
	beq	a5,zero,.L13
	lw	a0,4(a4)
	add	a5,a0,a5
	sw	a5,4(a4)
.L13:
	ret
.L18:
	la a3, heap; lw a3, 0(a3);
	sw	a3,4(a4)
	sw	a3,0(a4)
	j	.L14
	.size	malloc, .-malloc
	.section	.text.free,"ax",@progbits
	.align	2
	.globl	free
	.hidden	free
	.type	free, @function
free:
	ret
	.size	free, .-free
	.section	.sbss.heap_avail,"aw",@nobits
	.align	2
	.set	.LANCHOR1,. + 0
	.type	heap_avail, @object
	.size	heap_avail, 8
heap_avail:
	.zero	8
	.section	.sdata.next,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	next, @object
	.size	next, 4
next:
	.word	1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
