#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"shuixianhua.c"
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
	.section	.text.cube,"ax",@progbits
	.align	2
	.globl	cube
	.hidden	cube
	.type	cube, @function
cube:
	addi	sp,sp,-12
	mv	a1,a0
	sw	ra,8(sp)
	sw	s0,4(sp)
	mv	s0,a0
	call	__mulsi3
	mv	a1,s0
	call	__mulsi3
	lw	ra,8(sp)
	lw	s0,4(sp)
	addi	sp,sp,12
	jr	ra
	.size	cube, .-cube
	.globl	__udivsi3
	.globl	__divsi3
	.globl	__umodsi3
	.globl	__modsi3
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-24
	sw	s1,12(sp)
	sw	ra,20(sp)
	sw	s0,16(sp)
	li	s1,100
	sw	zero,8(sp)
.L11:
	addi	s1,s1,1
	li	a5,500
	li	a1,100
	mv	a0,s1
	beq	s1,a5,.L15
.L13:
	call	__divsi3
	mv	a2,a0
	li	a1,10
	mv	a0,s1
	sw	a2,4(sp)
	call	__divsi3
	li	a1,10
	call	__modsi3
	mv	a5,a0
	li	a1,10
	mv	a0,s1
	sw	a5,0(sp)
	call	__modsi3
	lw	a5,0(sp)
	mv	s0,a0
	mv	a1,a5
	mv	a0,a5
	call	__mulsi3
	lw	a5,0(sp)
	mv	a1,a5
	call	__mulsi3
	lw	a2,4(sp)
	mv	a5,a0
	sw	a5,0(sp)
	mv	a1,a2
	mv	a0,a2
	call	__mulsi3
	lw	a2,4(sp)
	mv	a1,a2
	call	__mulsi3
	lw	a5,0(sp)
	mv	a2,a0
	mv	a1,s0
	add	a5,a5,a2
	mv	a0,s0
	sw	a5,0(sp)
	call	__mulsi3
	mv	a1,s0
	call	__mulsi3
	lw	a5,0(sp)
	add	a5,a5,a0
	bne	a5,s1,.L11
	lw	a4,8(sp)
	lla	a3,.LANCHOR0
	slli	a5,a4,2
	add	a5,a3,a5
	lw	a0,0(a5)
	addi	a5,a4,1
	sw	a5,8(sp)
	sub	a0,a0,s1
	seqz	a0,a0
	call	check
	addi	s1,s1,1
	li	a5,500
	li	a1,100
	mv	a0,s1
	bne	s1,a5,.L13
.L15:
	lw	a5,8(sp)
	addi	a0,a5,-4
	seqz	a0,a0
	call	check
	lw	ra,20(sp)
	lw	s0,16(sp)
	lw	s1,12(sp)
	li	a0,0
	addi	sp,sp,24
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	ans, @object
	.size	ans, 16
ans:
	.word	153
	.word	370
	.word	371
	.word	407
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
