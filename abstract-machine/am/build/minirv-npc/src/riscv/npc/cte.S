#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"cte.c"
	.option nopic
	.text
	.section	.rodata.__am_irq_handle.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/cte.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.section	.text.__am_irq_handle,"ax",@progbits
	.align	2
	.globl	__am_irq_handle
	.hidden	__am_irq_handle
	.type	__am_irq_handle, @function
__am_irq_handle:
	la a5, .LANCHOR0; lw a5, 0(a5);
	mv	a1,a0
	beq	a5,zero,.L6
	lw	a3,64(a0)
	addi	sp,sp,-44
	sw	ra,40(sp)
	sw	zero,20(sp)
	sw	zero,24(sp)
	sw	zero,28(sp)
	li	a4,11
	beq	a3,a4,.L12
	li	a4,4
	sw	a4,16(sp)
.L4:
	lw	a4,16(sp)
	mv	a0,sp
	sw	a4,0(sp)
	lw	a4,20(sp)
	sw	a4,4(sp)
	lw	a4,24(sp)
	sw	a4,8(sp)
	lw	a4,28(sp)
	sw	a4,12(sp)
	jalr	a5
	beq	a0,zero,.L13
	lw	ra,40(sp)
	addi	sp,sp,44
	jr	ra
.L12:
	lw	a4,72(a0)
	li	a3,1
	sw	a3,16(sp)
	addi	a4,a4,4
	sw	a4,72(a0)
	j	.L4
.L6:
	ret
.L13:
	li	a2,18
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
	.size	__am_irq_handle, .-__am_irq_handle
	.section	.text.cte_init,"ax",@progbits
	.align	2
	.globl	cte_init
	.hidden	cte_init
	.type	cte_init, @function
cte_init:
	mv	a5,a0
	lla	a4,__am_asm_trap
#APP
# 28 "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/cte.c" 1
	csrw mtvec, a4
# 0 "" 2
#NO_APP
	li	a0,1
	la a4, .LANCHOR0; sw a5, 0(a4);
	ret
	.size	cte_init, .-cte_init
	.section	.text.kcontext,"ax",@progbits
	.align	2
	.globl	kcontext
	.hidden	kcontext
	.type	kcontext, @function
kcontext:
	li	a5,8192
	addi	a5,a5,-2048
	addi	a0,a1,-80
	sw	a5,-12(a1)
	addi	sp,sp,-8
	sw	a2,-8(a1)
	addi	a4,a1,-16
	mv	a5,a0
.L16:
	sw	zero,0(a5)
	addi	a5,a5,4
	bne	a5,a4,.L16
	sw	a0,-72(a1)
	sw	a3,-40(a1)
	addi	sp,sp,8
	jr	ra
	.size	kcontext, .-kcontext
	.section	.text.yield,"ax",@progbits
	.align	2
	.globl	yield
	.hidden	yield
	.type	yield, @function
yield:
#APP
# 53 "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/cte.c" 1
	li a5, -1; ecall
# 0 "" 2
#NO_APP
	ret
	.size	yield, .-yield
	.section	.text.ienabled,"ax",@progbits
	.align	2
	.globl	ienabled
	.hidden	ienabled
	.type	ienabled, @function
ienabled:
	li	a0,0
	ret
	.size	ienabled, .-ienabled
	.section	.text.iset,"ax",@progbits
	.align	2
	.globl	iset
	.hidden	iset
	.type	iset, @function
iset:
	ret
	.size	iset, .-iset
	.section	.sbss.user_handler,"aw",@nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	user_handler, @object
	.size	user_handler, 4
user_handler:
	.zero	4
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
