#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"load-store.c"
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
	addi	sp,sp,-20
	sw	s1,8(sp)
	lla	s1,.LANCHOR0
	sw	s0,12(sp)
	sw	ra,16(sp)
	lla	a3,.LANCHOR1
	mv	s0,s1
	mv	a4,s1
.L9:
	lh	a0,0(a4)
	lw	a2,0(a3)
	addi	a4,a4,2
	addi	a3,a3,4
	sub	a0,a0,a2
	seqz	a0,a0
	sw	a4,4(sp)
	sw	a3,0(sp)
	call	check
	lw	a4,4(sp)
	lla	a5,.LANCHOR0+16
	lw	a3,0(sp)
	bne	a4,a5,.L9
	lla	a4,.LANCHOR2
.L10:
	lw	a3,0(a4)
	lhu	a0,0(s1)
	addi	a4,a4,4
	sw	a4,0(sp)
	sub	a0,a0,a3
	seqz	a0,a0
	call	check
	addi	s1,s1,2
	lla	a5,.LANCHOR0+16
	lw	a4,0(sp)
	bne	s1,a5,.L10
	lbu	a3,2(s0)
	lbu	a2,1(s0)
	lbu	a4,3(s0)
	lbu	a5,4(s0)
	lla	s1,.LANCHOR3
	slli	a3,a3,8
	or	a3,a3,a2
	lw	a0,0(s1)
	slli	a4,a4,16
	or	a4,a4,a3
	slli	a5,a5,24
	or	a5,a5,a4
	sub	a0,a0,a5
	seqz	a0,a0
	call	check
	lbu	a3,6(s0)
	lbu	a2,5(s0)
	lbu	a4,7(s0)
	lbu	a5,8(s0)
	slli	a3,a3,8
	or	a3,a3,a2
	lw	a0,4(s1)
	slli	a4,a4,16
	or	a4,a4,a3
	slli	a5,a5,24
	or	a5,a5,a4
	sub	a0,a0,a5
	seqz	a0,a0
	call	check
	lbu	a3,10(s0)
	lbu	a2,9(s0)
	lbu	a4,11(s0)
	lbu	a5,12(s0)
	slli	a3,a3,8
	or	a3,a3,a2
	lw	a0,8(s1)
	slli	a4,a4,16
	or	a4,a4,a3
	slli	a5,a5,24
	or	a5,a5,a4
	sub	a0,a0,a5
	seqz	a0,a0
	call	check
	lla	a3,.LANCHOR4
	li	s1,1
.L11:
	li	a5,1
	sll	a5,a5,s1
	lw	a0,0(a3)
	not	a5,a5
	slli	a5,a5,16
	srli	a5,a5,16
	sub	a0,a0,a5
	add	a2,s0,s1
	sh	a5,-1(a2)
	seqz	a0,a0
	sw	a3,0(sp)
	call	check
	lw	a3,0(sp)
	addi	s1,s1,2
	li	a5,17
	addi	a3,a3,4
	bne	s1,a5,.L11
	lw	ra,16(sp)
	lw	s0,12(sp)
	lw	s1,8(sp)
	li	a0,0
	addi	sp,sp,20
	jr	ra
	.size	main, .-main
	.hidden	lwlr_ans
	.globl	lwlr_ans
	.hidden	sh_ans
	.globl	sh_ans
	.hidden	lhu_ans
	.globl	lhu_ans
	.hidden	lh_ans
	.globl	lh_ans
	.hidden	mem
	.globl	mem
	.section	.data.lh_ans,"aw"
	.align	2
	.set	.LANCHOR1,. + 0
	.type	lh_ans, @object
	.size	lh_ans, 32
lh_ans:
	.word	0
	.word	600
	.word	19132
	.word	32767
	.word	-32768
	.word	-32512
	.word	-21555
	.word	-1
	.section	.data.lhu_ans,"aw"
	.align	2
	.set	.LANCHOR2,. + 0
	.type	lhu_ans, @object
	.size	lhu_ans, 32
lhu_ans:
	.word	0
	.word	600
	.word	19132
	.word	32767
	.word	32768
	.word	33024
	.word	43981
	.word	65535
	.section	.data.lwlr_ans,"aw"
	.align	2
	.set	.LANCHOR3,. + 0
	.type	lwlr_ans, @object
	.size	lwlr_ans, 16
lwlr_ans:
	.word	-1140697088
	.word	8388426
	.word	-847183744
	.word	16777131
	.section	.data.mem,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	mem, @object
	.size	mem, 16
mem:
	.half	0
	.half	600
	.half	19132
	.half	32767
	.half	-32768
	.half	-32512
	.half	-21555
	.half	-1
	.section	.data.sh_ans,"aw"
	.align	2
	.set	.LANCHOR4,. + 0
	.type	sh_ans, @object
	.size	sh_ans, 32
sh_ans:
	.word	65533
	.word	65527
	.word	65503
	.word	65407
	.word	65023
	.word	63487
	.word	57343
	.word	32767
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
