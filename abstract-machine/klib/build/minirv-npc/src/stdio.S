#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdio.c"
	.option nopic
	.text
	.section	.rodata.printf.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implemented"
	.align	2
.LC2:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:25  \n"
	.section	.text.printf,"ax",@progbits
	.align	2
	.globl	printf
	.hidden	printf
	.type	printf, @function
printf:
	addi	sp,sp,-32
	sw	s0,4(sp)
	sw	ra,8(sp)
	sw	a1,12(sp)
	sw	a2,16(sp)
	sw	a3,20(sp)
	sw	a4,24(sp)
	sw	a5,28(sp)
	lla	s0,.LC0
	li	a0,65
.L2:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L2
	lla	s0,.LC1
	li	a0,78
.L3:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L3
	lla	s0,.LC2
	li	a0,32
.L4:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L4
	li	a0,1
	call	halt
	.size	printf, .-printf
	.section	.rodata.vsprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:29  \n"
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
.L11:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L11
	lla	s0,.LC1
	li	a0,78
.L12:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L12
	lla	s0,.LC3
	li	a0,32
.L13:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L13
	li	a0,1
	call	halt
	.size	vsprintf, .-vsprintf
	.globl	__umodsi3
	.globl	__udivsi3
	.section	.text.sprintf,"ax",@progbits
	.align	2
	.globl	sprintf
	.hidden	sprintf
	.type	sprintf, @function
sprintf:
	addi	sp,sp,-136
	sw	s0,112(sp)
	sw	ra,116(sp)
	sw	s1,108(sp)
	mv	s0,a1
	lbu	a1,0(a1)
	sw	a5,132(sp)
	addi	a5,sp,120
	sw	a5,28(sp)
	sw	a2,120(sp)
	sw	a3,124(sp)
	sw	a4,128(sp)
	mv	t2,a0
	mv	a5,a0
	beq	a1,zero,.L36
	li	a4,37
	lla	a3,.LANCHOR0
	addi	s1,sp,32
.L35:
	beq	a1,a4,.L49
	sb	a1,0(a5)
	addi	s0,s0,1
	addi	a5,a5,1
.L22:
	lbu	a1,0(s0)
	bne	a1,zero,.L35
	sb	zero,0(a5)
	lw	ra,116(sp)
	lw	s0,112(sp)
	lw	s1,108(sp)
	sub	a0,a5,t2
	addi	sp,sp,136
	jr	ra
.L49:
	lbu	a2,1(s0)
	beq	a2,a4,.L50
	lbu	a1,0(a3)
	beq	a1,a2,.L37
	lbu	a1,8(a3)
	beq	a1,a2,.L51
.L24:
	addi	s0,s0,2
	j	.L22
.L50:
	sb	a4,0(a5)
	addi	s0,s0,2
	addi	a5,a5,1
	j	.L22
.L51:
	li	a2,1
.L23:
	slli	a2,a2,3
	add	a2,a3,a2
	lw	a2,4(a2)
	beq	a2,zero,.L25
	li	a1,1
	bne	a2,a1,.L47
	lw	a2,28(sp)
	lw	a1,0(a2)
	addi	a2,a2,4
	sw	a2,28(sp)
	lbu	a2,0(a1)
.L48:
	beq	a2,zero,.L24
.L34:
	sb	a2,0(a5)
	addi	a1,a1,1
	addi	a5,a5,1
	lbu	a2,0(a1)
	j	.L48
.L36:
	sb	zero,0(a5)
	lw	ra,116(sp)
	lw	s0,112(sp)
	lw	s1,108(sp)
	li	a0,0
	addi	sp,sp,136
	jr	ra
.L37:
	li	a2,0
	j	.L23
.L25:
	lw	a2,28(sp)
	lw	t1,0(a2)
	addi	a2,a2,4
	sw	a2,28(sp)
	beq	t1,zero,.L52
	addi	a2,sp,44
	sw	a2,12(sp)
	bge	t1,zero,.L30
	li	a2,45
	sb	a2,44(sp)
	addi	a2,sp,45
	neg	t1,t1
	sw	a2,12(sp)
.L30:
	li	a2,0
	sw	s0,24(sp)
	sw	a5,16(sp)
	sw	t2,20(sp)
	mv	s0,a2
.L31:
	li	a1,10
	mv	a0,t1
	sw	t1,0(sp)
	call	__umodsi3
	lw	t1,0(sp)
	addi	a2,a0,48
	addi	s0,s0,1
	andi	a2,a2,0xff
	add	t0,s1,s0
	sb	a2,-1(t0)
	mv	a0,t1
	li	a1,10
	sw	a2,8(sp)
	sw	t0,4(sp)
	call	__udivsi3
	lw	a5,0(sp)
	li	a1,9
	lw	t0,4(sp)
	lw	a2,8(sp)
	mv	t1,a0
	li	a4,37
	lla	a3,.LANCHOR0
	bgtu	a5,a1,.L31
	mv	t1,s0
	lw	a5,16(sp)
	lw	t2,20(sp)
	lw	s0,24(sp)
	lw	a0,12(sp)
	mv	a1,t0
	j	.L33
.L53:
	lbu	a2,-1(a1)
.L33:
	sb	a2,0(a0)
	addi	a1,a1,-1
	addi	a0,a0,1
	bne	s1,a1,.L53
	lw	a2,12(sp)
	add	a2,a2,t1
	sb	zero,0(a2)
.L47:
	lbu	a2,44(sp)
	addi	a1,sp,44
	j	.L48
.L52:
	li	a2,48
	sh	a2,44(sp)
	addi	a1,sp,44
	j	.L34
	.size	sprintf, .-sprintf
	.section	.rodata.snprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:140  \n"
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
.L55:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L55
	lla	s0,.LC1
	li	a0,78
.L56:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L56
	lla	s0,.LC4
	li	a0,32
.L57:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L57
	li	a0,1
	call	halt
	.size	snprintf, .-snprintf
	.section	.rodata.vsnprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC5:
	.string	" @ /home/wang/InternalDependent_ysyx-workbench/abstract-machine/klib/src/stdio.c:144  \n"
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
.L63:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L63
	lla	s0,.LC1
	li	a0,78
.L64:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L64
	lla	s0,.LC5
	li	a0,32
.L65:
	addi	s0,s0,1
	call	putch
	lbu	a0,0(s0)
	bne	a0,zero,.L65
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
