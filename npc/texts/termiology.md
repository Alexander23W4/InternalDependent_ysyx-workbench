--> 这个文件用于积累一些文章中的属于, 便于工作开发交流

# MMU (Memory Management Unit)  (TLB PTW)
1. CPU 发出虚拟地址 VA

2.    TLB 查询    (TLB（Translation Lookaside Buffer）：缓存页表转换结果)
缓存最近使用的地址转换结果

3.   TLB 命中        TLB 未命中
直接得到映射结果  硬件页表遍历器查询页表  (Page Table Walker（页表遍历器）)

4. 权限检查 (Page Fault（页故障）) + 生成物理地址 PA

5. 访问 Cache / 总线 / 物理内存

# Rocket-Chip  BOOM(Berkeley Out-of-Order Machine) (开源RISCV处理器)
特性	             Rocket Core	                BOOM

指令执行	        顺序执行（In-Order）	  乱序执行（Out-of-Order）
设计目标	        相对简单、面积和功耗较低	高性能、充分利用指令级并行性
流水线	            经典顺序流水线	          更复杂的取指、重命名、发射、执行、提交流水线
寄存器重命名         通常不需要	                需要
保留站 / 发射队列    不需要完整的乱序调度结构	   需要
ROB（重排序缓冲区）	  不需要	                需要
适用方向	        嵌入式、通用处理器基础设计	 高性能处理器研究与开发


# 缓存一致性 (cache-memory consistency)


# 乱序相关
Issue Queue（发射队列）：判断哪些指令已经具备执行条件，决定谁先执行。[乱发射,多发射]

ROB（Reorder Buffer，重排序缓冲区）：记录指令的执行进度，确保指令按程序顺序提交。

Load/Store Unit（LSU，加载/存储单元）：处理访存指令，并保证乱序访存不会破坏程序语义。


