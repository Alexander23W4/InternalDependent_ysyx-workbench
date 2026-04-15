#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"string.c"
	.option nopic
	.text
	.section	.text.strlen,"ax",@progbits
	.align	2
	.globl	strlen
	.hidden	strlen
	.type	strlen, @function
strlen:
	lbu	a5,0(a0)
	mv	a4,a0
	li	a0,0
	beq	a5,zero,.L4
.L3:
	addi	a0,a0,1
	add	a5,a4,a0
	lbu	a5,0(a5)
	bne	a5,zero,.L3
	ret
.L4:
	ret
	.size	strlen, .-strlen
	.section	.text.strcpy,"ax",@progbits
	.align	2
	.globl	strcpy
	.hidden	strcpy
	.type	strcpy, @function
strcpy:
	lbu	a5,0(a1)
	mv	a4,a0
	beq	a5,zero,.L8
.L9:
	sb	a5,0(a4)
	lbu	a5,1(a1)
	addi	a4,a4,1
	addi	a1,a1,1
	bne	a5,zero,.L9
.L8:
	sb	zero,0(a4)
	ret
	.size	strcpy, .-strcpy
	.section	.text.strncpy,"ax",@progbits
	.align	2
	.globl	strncpy
	.hidden	strncpy
	.type	strncpy, @function
strncpy:
	li	a5,0
	bne	a2,zero,.L13
	j	.L20
.L15:
	sb	a4,0(a3)
	addi	a5,a5,1
	beq	a2,a5,.L14
.L13:
	add	a4,a1,a5
	lbu	a4,0(a4)
	add	a3,a0,a5
	bne	a4,zero,.L15
	bleu	a2,a5,.L14
	mv	a5,a3
	add	a2,a0,a2
.L16:
	sb	zero,0(a5)
	addi	a5,a5,1
	bne	a5,a2,.L16
.L14:
	ret
.L20:
	ret
	.size	strncpy, .-strncpy
	.section	.text.strcat,"ax",@progbits
	.align	2
	.globl	strcat
	.hidden	strcat
	.type	strcat, @function
strcat:
	lbu	a5,0(a0)
	beq	a5,zero,.L26
	li	a4,0
.L23:
	addi	a4,a4,1
	add	a5,a0,a4
	lbu	a3,0(a5)
	bne	a3,zero,.L23
.L22:
	lbu	a4,0(a1)
	beq	a4,zero,.L24
.L25:
	sb	a4,0(a5)
	lbu	a4,1(a1)
	addi	a5,a5,1
	addi	a1,a1,1
	bne	a4,zero,.L25
.L24:
	sb	zero,0(a5)
	ret
.L26:
	mv	a5,a0
	j	.L22
	.size	strcat, .-strcat
	.section	.text.strcmp,"ax",@progbits
	.align	2
	.globl	strcmp
	.hidden	strcmp
	.type	strcmp, @function
strcmp:
	j	.L43
.L44:
	lbu	a4,0(a1)
	addi	a0,a0,1
	addi	a1,a1,1
	beq	a4,zero,.L37
	bltu	a4,a5,.L37
	bgtu	a4,a5,.L38
.L43:
	lbu	a5,0(a0)
	bne	a5,zero,.L44
	lbu	a0,0(a1)
	snez	a0,a0
	neg	a0,a0
	ret
.L37:
	li	a0,1
	ret
.L38:
	li	a0,-1
	ret
	.size	strcmp, .-strcmp
	.section	.text.strncmp,"ax",@progbits
	.align	2
	.globl	strncmp
	.hidden	strncmp
	.type	strncmp, @function
strncmp:
	beq	a2,zero,.L53
	lbu	t0,0(a0)
	li	a5,0
	mv	a4,t0
	j	.L47
.L58:
	lbu	t1,0(a1)
	beq	t1,zero,.L48
	lbu	a3,0(a3)
	addi	a5,a5,1
	add	t1,a0,a5
	bltu	a3,a4,.L51
	bgtu	a3,a4,.L52
	beq	a2,a5,.L53
	lbu	a4,0(t1)
.L47:
	add	a3,a1,a5
	bne	t0,zero,.L58
.L48:
	li	a0,1
	bne	a4,zero,.L45
	add	a1,a1,a5
	lbu	a0,0(a1)
	snez	a0,a0
	neg	a0,a0
	ret
.L53:
	li	a0,0
.L45:
	ret
.L51:
	li	a0,1
	ret
.L52:
	li	a0,-1
	ret
	.size	strncmp, .-strncmp
	.section	.text.memset,"ax",@progbits
	.align	2
	.globl	memset
	.hidden	memset
	.type	memset, @function
memset:
	andi	a1,a1,0xff
	mv	a5,a0
	add	a4,a2,a0
	beq	a2,zero,.L65
.L61:
	sb	a1,0(a5)
	addi	a5,a5,1
	bne	a5,a4,.L61
.L65:
	ret
	.size	memset, .-memset
	.section	.text.memmove,"ax",@progbits
	.align	2
	.globl	memmove
	.hidden	memmove
	.type	memmove, @function
memmove:
	beq	a2,zero,.L67
	beq	a0,a1,.L67
	bleu	a0,a1,.L68
	addi	a4,a2,-1
	add	a5,a1,a4
	add	a4,a0,a4
	add	a1,a1,a2
.L69:
	lbu	t1,0(a5)
	addi	a5,a5,-1
	sub	a3,a1,a5
	sb	t1,0(a4)
	addi	a4,a4,-1
	bgeu	a2,a3,.L69
	ret
.L68:
	mv	a5,a0
	add	a2,a1,a2
.L70:
	lbu	a4,0(a1)
	addi	a1,a1,1
	addi	a5,a5,1
	sb	a4,-1(a5)
	bne	a1,a2,.L70
.L67:
	ret
	.size	memmove, .-memmove
	.section	.text.memcpy,"ax",@progbits
	.align	2
	.globl	memcpy
	.hidden	memcpy
	.type	memcpy, @function
memcpy:
	beq	a2,zero,.L77
	mv	a5,a0
	add	a2,a1,a2
.L78:
	lbu	a4,0(a1)
	addi	a1,a1,1
	addi	a5,a5,1
	sb	a4,-1(a5)
	bne	a1,a2,.L78
.L77:
	ret
	.size	memcpy, .-memcpy
	.section	.text.memcmp,"ax",@progbits
	.align	2
	.globl	memcmp
	.hidden	memcmp
	.type	memcmp, @function
memcmp:
	beq	a2,zero,.L86
	add	a2,a0,a2
	j	.L85
.L90:
	bgtu	a4,a5,.L88
	beq	a0,a2,.L86
.L85:
	lbu	a4,0(a0)
	lbu	a5,0(a1)
	addi	a0,a0,1
	addi	a1,a1,1
	bgeu	a4,a5,.L90
	li	a0,-1
	ret
.L86:
	li	a0,0
	ret
.L88:
	li	a0,1
	ret
	.size	memcmp, .-memcmp
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
