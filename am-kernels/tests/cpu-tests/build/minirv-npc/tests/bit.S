#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"bit.c"
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
	.section	.text.getbit,"ax",@progbits
	.align	2
	.globl	getbit
	.hidden	getbit
	.type	getbit, @function
getbit:
	srai	a5,a1,3
	add	a0,a0,a5
	lbu	a0,0(a0)
	andi	a1,a1,7
	li	a5,1
	sll	a5,a5,a1
	and	a0,a0,a5
	snez	a0,a0
	ret
	.size	getbit, .-getbit
	.section	.text.setbit,"ax",@progbits
	.align	2
	.globl	setbit
	.hidden	setbit
	.type	setbit, @function
setbit:
	srai	a5,a1,3
	addi	sp,sp,-4
	add	a0,a0,a5
	sw	a0,0(sp)
	lw	a5,0(sp)
	andi	a1,a1,7
	li	a4,1
	sll	a4,a4,a1
	bne	a2,zero,.L10
	lbu	a5,0(a5)
	not	a4,a4
	and	a5,a5,a4
	lw	a4,0(sp)
	sb	a5,0(a4)
	addi	sp,sp,4
	jr	ra
.L10:
	lbu	a5,0(a5)
	or	a5,a5,a4
	lw	a4,0(sp)
	andi	a5,a5,0xff
	sb	a5,0(a4)
	addi	sp,sp,4
	jr	ra
	.size	setbit, .-setbit
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-16
	li	a5,170
	li	a1,0
	mv	a0,sp
	sw	ra,12(sp)
	sh	a5,0(sp)
	call	getbit
	xori	a0,a0,1
	andi	a0,a0,0xff
	call	check
	li	a1,1
	mv	a0,sp
	call	getbit
	call	check
	li	a1,2
	mv	a0,sp
	call	getbit
	xori	a0,a0,1
	andi	a0,a0,0xff
	call	check
	li	a1,3
	mv	a0,sp
	call	getbit
	call	check
	li	a1,4
	mv	a0,sp
	call	getbit
	xori	a0,a0,1
	andi	a0,a0,0xff
	call	check
	li	a1,5
	mv	a0,sp
	call	getbit
	call	check
	li	a1,6
	mv	a0,sp
	call	getbit
	xori	a0,a0,1
	andi	a0,a0,0xff
	call	check
	li	a1,7
	mv	a0,sp
	call	getbit
	call	check
	mv	a0,sp
	li	a2,1
	li	a1,8
	call	setbit
	mv	a0,sp
	li	a2,0
	li	a1,9
	call	setbit
	mv	a0,sp
	li	a2,1
	li	a1,10
	call	setbit
	mv	a0,sp
	li	a2,0
	li	a1,11
	call	setbit
	mv	a0,sp
	li	a2,1
	li	a1,12
	call	setbit
	mv	a0,sp
	li	a2,0
	li	a1,13
	call	setbit
	mv	a0,sp
	li	a2,1
	li	a1,14
	call	setbit
	mv	a0,sp
	li	a2,0
	li	a1,15
	call	setbit
	lbu	a0,1(sp)
	addi	a0,a0,-85
	seqz	a0,a0
	call	check
	lw	ra,12(sp)
	li	a0,0
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
