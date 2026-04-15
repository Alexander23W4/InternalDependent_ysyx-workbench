#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"multi3.c"
	.option nopic
	.text
	.section	.text.__muldi3,"ax",@progbits
	.align	2
	.globl	__muldi3
	.type	__muldi3, @function
__muldi3:
	addi	sp,sp,-24
	mv	a5,a0
	sw	a0,8(sp)
	sw	a1,0(sp)
	sw	a3,4(sp)
	sw	ra,20(sp)
	mv	a3,a5
	sw	s0,16(sp)
	sw	s1,12(sp)
	mv	a0,a2
	mv	a4,a2
	li	a5,0
	li	a1,0
	li	t1,0
.L3:
	add	a2,a3,t1
	andi	t2,a4,1
	add	s0,a1,a5
	srli	t0,a3,31
	srli	a4,a4,1
	sgtu	s1,t1,a2
	slli	a5,a5,1
	beq	t2,zero,.L2
	add	a1,s1,s0
	mv	t1,a2
.L2:
	slli	a3,a3,1
	or	a5,a5,t0
	bne	a4,zero,.L3
	lw	a4,0(sp)
	mv	a5,a1
	beq	a4,zero,.L4
	mv	a1,a4
#APP
# 80 "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/libgcc/multi3.c" 1
	call __mulsi3
# 0 "" 2
#NO_APP
	add	a5,a5,a0
.L4:
	lw	a4,4(sp)
	beq	a4,zero,.L5
	lw	a0,8(sp)
	mv	a1,a4
#APP
# 83 "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/am/src/riscv/npc/libgcc/multi3.c" 1
	call __mulsi3
# 0 "" 2
#NO_APP
	add	a5,a0,a5
.L5:
	lw	ra,20(sp)
	lw	s0,16(sp)
	lw	s1,12(sp)
	mv	a0,t1
	mv	a1,a5
	addi	sp,sp,24
	jr	ra
	.size	__muldi3, .-__muldi3
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
