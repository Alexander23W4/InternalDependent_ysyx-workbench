#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"to-lower-case.c"
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
	.section	.text.to_lower_case,"ax",@progbits
	.align	2
	.globl	to_lower_case
	.hidden	to_lower_case
	.type	to_lower_case, @function
to_lower_case:
	addi	a5,a0,-65
	andi	a5,a5,0xff
	li	a4,25
	bgtu	a5,a4,.L9
	addi	a0,a0,32
	andi	a0,a0,0xff
.L9:
	ret
	.size	to_lower_case, .-to_lower_case
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.hidden	main
	.type	main, @function
main:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	s1,0(sp)
	sw	ra,8(sp)
	li	s0,0
	li	a4,0
	lla	s1,.LANCHOR0
.L11:
	add	a3,s1,s0
	lbu	a0,0(a3)
	addi	s0,s0,1
	sub	a0,a0,a4
	seqz	a0,a0
	call	check
	andi	a4,s0,0xff
	addi	a3,a4,-65
	li	a5,128
	andi	a3,a3,0xff
	li	a2,25
	addi	a1,a4,32
	beq	s0,a5,.L15
	bgtu	a3,a2,.L11
	andi	a4,a1,0xff
	j	.L11
.L15:
	lw	ra,8(sp)
	lw	s0,4(sp)
	lw	s1,0(sp)
	li	a0,0
	addi	sp,sp,12
	jr	ra
	.size	main, .-main
	.hidden	ans
	.globl	ans
	.section	.data.ans,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	ans, @object
	.size	ans, 128
ans:
	.string	""
	.ascii	"\001\002\003\004\005\006\007\b\t\n\013\f\r\016\017\020\021\022"
	.ascii	"\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&"
	.ascii	"'()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[\\]^_`a"
	.ascii	"bcdefghijklmnopqrstuvwxyz{|}~\177"
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
