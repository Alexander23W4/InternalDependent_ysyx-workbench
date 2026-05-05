#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdio.c"
	.option nopic
	.text
	.globl	__umodsi3
	.globl	__udivsi3
	.section	.text.number_to_str.part.0,"ax",@progbits
	.align	2
	.type	number_to_str.part.0, @function
number_to_str.part.0:
	addi	sp,sp,-40
	sw	ra,36(sp)
	sw	s0,32(sp)
	sw	s1,28(sp)
	sw	a0,12(sp)
	mv	a4,a1
	bge	a1,zero,.L2
	li	a5,45
	sb	a5,0(a0)
	addi	a5,a0,1
	neg	a4,a1
	sw	a5,12(sp)
.L2:
	li	s0,0
	addi	s1,sp,16
.L3:
	li	a1,10
	mv	a0,a4
	sw	a4,0(sp)
	call	__umodsi3
	lw	a4,0(sp)
	addi	a5,a0,48
	addi	s0,s0,1
	andi	a5,a5,0xff
	add	a3,s1,s0
	sb	a5,-1(a3)
	mv	a0,a4
	li	a1,10
	sw	a5,8(sp)
	sw	a3,4(sp)
	call	__udivsi3
	lw	a2,0(sp)
	li	a1,9
	lw	a3,4(sp)
	lw	a5,8(sp)
	mv	a4,a0
	bgtu	a2,a1,.L3
	lw	a2,12(sp)
	mv	a4,a3
	j	.L5
.L9:
	lbu	a5,-1(a4)
.L5:
	sb	a5,0(a2)
	addi	a4,a4,-1
	addi	a2,a2,1
	bne	s1,a4,.L9
	lw	a5,12(sp)
	add	a5,a5,s0
	sb	zero,0(a5)
	lw	ra,36(sp)
	lw	s0,32(sp)
	lw	s1,28(sp)
	addi	sp,sp,40
	jr	ra
	.size	number_to_str.part.0, .-number_to_str.part.0
	.section	.text.printf,"ax",@progbits
	.align	2
	.globl	printf
	.hidden	printf
	.type	printf, @function
printf:
	addi	sp,sp,-1132
	sw	s0,1104(sp)
	sw	ra,1108(sp)
	sw	s1,1100(sp)
	mv	s0,a0
	lbu	a0,0(a0)
	sw	a5,1128(sp)
	addi	a5,sp,1112
	sw	a5,8(sp)
	sw	a1,1112(sp)
	sw	a2,1116(sp)
	sw	a3,1120(sp)
	sw	a4,1124(sp)
	addi	a5,sp,76
	beq	a0,zero,.L25
	mv	a4,a5
	lla	s1,.LANCHOR0
	j	.L22
.L12:
	sb	a0,0(a4)
	addi	s0,s0,1
	addi	a4,a4,1
.L14:
	lbu	a0,0(s0)
	beq	a0,zero,.L40
.L22:
	li	a3,37
	lbu	a2,1(s0)
	bne	a0,a3,.L12
	beq	a2,a0,.L41
	lbu	a3,0(s1)
	beq	a3,a2,.L26
	lbu	a3,8(s1)
	beq	a3,a2,.L42
.L16:
	addi	s0,s0,2
.L45:
	lbu	a0,0(s0)
	bne	a0,zero,.L22
.L40:
	sub	s1,a4,a5
.L11:
	sb	zero,0(a4)
	lbu	a0,76(sp)
	mv	s0,a5
	beq	a0,zero,.L10
.L23:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L23
.L10:
	lw	ra,1108(sp)
	lw	s0,1104(sp)
	mv	a0,s1
	lw	s1,1100(sp)
	addi	sp,sp,1132
	jr	ra
.L41:
	sb	a0,0(a4)
	addi	s0,s0,2
	addi	a4,a4,1
	j	.L14
.L42:
	li	a3,1
.L15:
	slli	a3,a3,3
	add	a3,s1,a3
	lw	a3,4(a3)
	beq	a3,zero,.L17
	li	a2,1
	bne	a3,a2,.L43
	lw	a2,8(sp)
	lw	a3,0(a2)
	addi	a2,a2,4
	sw	a2,8(sp)
.L19:
	lbu	a1,0(a3)
	beq	a1,zero,.L16
	lbu	a2,1(a3)
	j	.L21
.L44:
	mv	a1,a2
	lbu	a2,1(a3)
.L21:
	sb	a1,0(a4)
	addi	a3,a3,1
	addi	a4,a4,1
	bne	a2,zero,.L44
	addi	s0,s0,2
	j	.L45
.L25:
	li	s1,0
	mv	a4,a5
	j	.L11
.L26:
	li	a3,0
	j	.L15
.L43:
	addi	a3,sp,12
	j	.L19
.L17:
	lw	a3,8(sp)
	lw	a1,0(a3)
	addi	a3,a3,4
	sw	a3,8(sp)
	beq	a1,zero,.L46
	addi	a0,sp,12
	sw	a5,4(sp)
	sw	a4,0(sp)
	call	number_to_str.part.0
	lw	a4,0(sp)
	lw	a5,4(sp)
	addi	a3,sp,12
	j	.L19
.L46:
	li	a3,48
	addi	a4,a4,1
	sh	a3,12(sp)
	addi	s0,s0,2
	sb	a3,-1(a4)
	j	.L45
	.size	printf, .-printf
	.section	.rodata.vsprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implemented"
	.align	2
.LC2:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:123  \n"
	.section	.text.vsprintf,"ax",@progbits
	.align	2
	.globl	vsprintf
	.hidden	vsprintf
	.type	vsprintf, @function
vsprintf:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	lla	s0,.LC0
	li	a0,65
.L48:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L48
	lla	s0,.LC1
	li	a0,78
.L49:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L49
	lla	s0,.LC2
	li	a0,32
.L50:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L50
	li	a0,1
	call	halt
	.size	vsprintf, .-vsprintf
	.section	.text.sprintf,"ax",@progbits
	.align	2
	.globl	sprintf
	.hidden	sprintf
	.type	sprintf, @function
sprintf:
	addi	sp,sp,-100
	sw	ra,80(sp)
	sw	s0,76(sp)
	sw	s1,72(sp)
	lbu	t1,0(a1)
	sw	a5,96(sp)
	addi	a5,sp,84
	sw	a4,92(sp)
	sw	a2,84(sp)
	sw	a3,88(sp)
	sw	a5,4(sp)
	mv	a4,a0
	beq	t1,zero,.L69
	mv	s0,a1
	mv	s1,a0
	lla	a3,.LANCHOR0
	j	.L68
.L57:
	sb	t1,0(s1)
	addi	s0,s0,1
	addi	s1,s1,1
.L59:
	lbu	t1,0(s0)
	beq	t1,zero,.L78
.L68:
	li	a5,37
	bne	t1,a5,.L57
	lbu	a5,1(s0)
	beq	a5,t1,.L79
	lbu	a2,0(a3)
	beq	a2,a5,.L70
	lbu	a2,8(a3)
	beq	a2,a5,.L80
.L61:
	addi	s0,s0,2
.L82:
	lbu	t1,0(s0)
	bne	t1,zero,.L68
.L78:
	sb	zero,0(s1)
	lw	ra,80(sp)
	lw	s0,76(sp)
	sub	a0,s1,a4
	lw	s1,72(sp)
	addi	sp,sp,100
	jr	ra
.L79:
	sb	t1,0(s1)
	addi	s0,s0,2
	addi	s1,s1,1
	j	.L59
.L80:
	li	a5,1
.L60:
	slli	a5,a5,3
	add	a5,a3,a5
	lw	a5,4(a5)
	beq	a5,zero,.L62
	li	a2,1
	bne	a5,a2,.L81
	lw	a2,4(sp)
	lw	a5,0(a2)
	addi	a2,a2,4
	sw	a2,4(sp)
.L64:
	lbu	a2,0(a5)
	beq	a2,zero,.L61
.L67:
	sb	a2,0(s1)
	lbu	a2,1(a5)
	addi	a5,a5,1
	addi	s1,s1,1
	bne	a2,zero,.L67
	addi	s0,s0,2
	j	.L82
.L69:
	mv	s1,a0
	sb	zero,0(s1)
	lw	ra,80(sp)
	lw	s0,76(sp)
	lw	s1,72(sp)
	li	a0,0
	addi	sp,sp,100
	jr	ra
.L70:
	li	a5,0
	j	.L60
.L81:
	addi	a5,sp,8
	j	.L64
.L62:
	lw	a5,4(sp)
	lw	a1,0(a5)
	addi	a5,a5,4
	sw	a5,4(sp)
	beq	a1,zero,.L83
	addi	a0,sp,8
	sw	a4,0(sp)
	call	number_to_str.part.0
	lw	a4,0(sp)
	addi	a5,sp,8
	lla	a3,.LANCHOR0
	j	.L64
.L83:
	li	a5,48
	sh	a5,8(sp)
	li	a2,48
	addi	a5,sp,8
	j	.L67
	.size	sprintf, .-sprintf
	.section	.rodata.snprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:203  \n"
	.section	.text.snprintf,"ax",@progbits
	.align	2
	.globl	snprintf
	.hidden	snprintf
	.type	snprintf, @function
snprintf:
	addi	sp,sp,-24
	sw	s0,4(sp)
	sw	ra,8(sp)
	sw	a3,12(sp)
	sw	a4,16(sp)
	sw	a5,20(sp)
	lla	s0,.LC0
	li	a0,65
.L85:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L85
	lla	s0,.LC1
	li	a0,78
.L86:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L86
	lla	s0,.LC3
	li	a0,32
.L87:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L87
	li	a0,1
	call	halt
	.size	snprintf, .-snprintf
	.section	.rodata.vsnprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:207  \n"
	.section	.text.vsnprintf,"ax",@progbits
	.align	2
	.globl	vsnprintf
	.hidden	vsnprintf
	.type	vsnprintf, @function
vsnprintf:
	addi	sp,sp,-12
	sw	s0,4(sp)
	sw	ra,8(sp)
	lla	s0,.LC0
	li	a0,65
.L93:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L93
	lla	s0,.LC1
	li	a0,78
.L94:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L94
	lla	s0,.LC4
	li	a0,32
.L95:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L95
	li	a0,1
	call	halt
	.size	vsnprintf, .-vsnprintf
	.hidden	types
	.globl	types
	.section	.data.types,"aw"
	.align	2
	.set	.LANCHOR0,. + 0
	.type	types, @object
	.size	types, 16
types:
	.byte	100
	.zero	3
	.word	0
	.byte	115
	.zero	3
	.word	1
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
