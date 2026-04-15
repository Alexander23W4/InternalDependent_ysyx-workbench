#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"ashldi3.c"
	.option nopic
	.text
	.section	.text.__ashldi3,"ax",@progbits
	.align	2
	.globl	__ashldi3
	.type	__ashldi3, @function
__ashldi3:
	beq	a2,zero,.L2
	li	a5,32
	sub	a5,a5,a2
	ble	a5,zero,.L7
	srl	a5,a0,a5
	sll	a1,a1,a2
	sll	a0,a0,a2
	or	a1,a1,a5
.L2:
	ret
.L7:
	addi	a2,a2,-32
	sll	a1,a0,a2
	li	a0,0
	ret
	.size	__ashldi3, .-__ashldi3
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
