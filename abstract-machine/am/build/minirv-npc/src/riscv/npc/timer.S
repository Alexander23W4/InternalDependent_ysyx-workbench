#include "/home/wang/InternalDependent_ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"timer.c"
	.option nopic
	.text
	.section	.text.__am_timer_init,"ax",@progbits
	.align	2
	.globl	__am_timer_init
	.hidden	__am_timer_init
	.type	__am_timer_init, @function
__am_timer_init:
	ret
	.size	__am_timer_init, .-__am_timer_init
	.section	.text.__am_timer_uptime,"ax",@progbits
	.align	2
	.globl	__am_timer_uptime
	.hidden	__am_timer_uptime
	.type	__am_timer_uptime, @function
__am_timer_uptime:
	li	a5,268435456
	lw	a4,84(a5)
	lw	a5,88(a5)
	sw	a4,0(a0)
	sw	a5,4(a0)
	ret
	.size	__am_timer_uptime, .-__am_timer_uptime
	.section	.text.__am_timer_rtc,"ax",@progbits
	.align	2
	.globl	__am_timer_rtc
	.hidden	__am_timer_rtc
	.type	__am_timer_rtc, @function
__am_timer_rtc:
	li	a5,268435456
	lhu	t1,82(a5)
	lhu	a1,80(a5)
	lhu	a2,78(a5)
	lhu	a3,76(a5)
	lhu	a4,74(a5)
	lhu	a5,72(a5)
	sw	t1,20(a0)
	sw	a1,16(a0)
	sw	a2,12(a0)
	sw	a3,8(a0)
	sw	a4,4(a0)
	sw	a5,0(a0)
	ret
	.size	__am_timer_rtc, .-__am_timer_rtc
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
