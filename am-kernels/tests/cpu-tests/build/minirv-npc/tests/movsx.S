#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"movsx.c"
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
	addi	sp,sp,-12
	sw	ra,8(sp)
	lla	a5,.LANCHOR0
	li	a4,97
	sb	a4,0(a5)
	lbu	a0,0(a5)
	slli	a0,a0,24
	srai	a0,a0,24
	addi	a0,a0,-97
	seqz	a0,a0
	call	check
	lw	ra,8(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	A
	.globl	A
	.section	.sbss.A,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	A, @object
	.size	A, 1
A:
	.zero	1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
