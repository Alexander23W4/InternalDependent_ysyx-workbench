# Cache

## 存储介质
access time     /\        capacity    price
               /  \
   ~1ns       / reg\        ~1KB     $$$$$$
             +------+
   ~10ns    /  DRAM  \      ~10GB     $$$$
           +----------+
   ~10ms  /    disk    \    ~1TB       $$
         +--------------+
   ~10s /      tape      \  >10TB       $
       +------------------+


## 访存特征(局部性原理)
时间局部性 - 访问一个存储单元后, 短时间内可能再次访问它
空间局部性 - 访问一个存储单元后, 短时间内可能访问它的相邻存储单元

## cache的层级逻辑
从快到慢的访问
cache hit
cache miss

数据块  cache块(cache line)

## icache
数据块 的 tag:   addr / 4
cache块 的 编号(块索引)index:   (addr / 4) % k (direct-mapped), 新块代替旧块

块大小是b字节, 共k个cache块, 直接映射: 
tag = addr / b
index = (addr / b) % k

通常取b和k为2的幂, 假设b = 2^m, k = 2^n. 
假设addr为32位, 则有tag = addr / 2^m = addr[31:m], index = (addr / 2^m) % 2^n = addr[m+n-1:m]
记录tag时只需要记录addr[31:m+n]即可

>> 一个访存地址可以划分成以下3部分: tag, index, offset. 
1. tag部分作为数据块在cache中的唯一编号(有多少tag, 就有多少个数据块共用一个cache块)
2. index部分作为数据块在cache中的索引
3. offset部分属于块内偏移, 指示需要访问数据块中的哪部分数据.

 31    m+n m+n-1   m m-1    0
+---------+---------+--------+
|   tag   |  index  | offset |
+---------+---------+--------+

>> valid, tag  metadata
为了标识一个cache块是否有效, 需要为每个cache块添加一个有效位(valid). valid和tag统称为cache块的元数据(metadata), 其含义是用于管理数据的数据, 此处被管理的数据就是cache块.

>> icache工作流程

IFU向icache发送取指请求
icache获得取指请求的地址后, 根据index部分索引出一个cache块, 判断其tag与请求地址的tag是否相同, 并检查该cache块是否有效. 若同时满足上述条件, 则命中, 跳转到第5步
通过总线在DRAM中读出请求所在的数据块
将该数据块填入相应cache块中, 更新元数据
向IFU返回取出的指令



## ⭐$$: 加一个工具, final_print 的输出输出到一个文件里面, 对比前后的性能差异


## 形式化验证 (在单元测试中使用)
>> 等价类归一:
软件测试理论中的等价类测试方法可以把本质行为相似的测试进行归类, 从等价类中选择一个测试来代表整个等价类的测试, 从而降低测试集的大小.

>> SMT 求解器

>> 模型检测, 模型检测器
模型检测器将设计作为约束条件, 将输入作为变量, 将"至少一个验证条件不成立"作为求解目标, 把这些内容用一阶逻辑语言表达出来, 
并转换成求解器识别的语言, 然后尝试让求解器寻找是否存在可行解.

solver就是用来给我们的 DUT 设计找反例, 先翻译DUT -> 等价一阶逻辑语言 -> 求解器找反例   
            (⭐: 这样debug有针对性, 非常高效, 解决海量testbench仍然不充分的问题)


>> 动态形式化验证
无界模型检测(Unbounded Model Checking)
有界模型检测(Bounded Model Checking, BMC)   BMC通常需要一个参数k, 它只验证某条件在经过最多时间k的情况下是否成立, 这个参数称为BMC的界(bound).

>> UVM 测试的覆盖率, 覆盖率 (覆盖率是不充分的验证指标)
执行到某行代码(行覆盖率), 某信号发生翻转(翻转覆盖率), 某状态机的状态发生转移(状态机覆盖率), 自定义条件被满足(功能覆盖率)

>>> 基于Yosys的形式化验证流程, SymbiYosys

形式化验证一般在单元测试中使用


## 优化icache
>> 优化 hit rate  **
>> 优化 miss_penalty  **
>> 优化 access_time

Compulsory miss, 强制缺失, 定义为在一个容量无限大的cache中所发生的缺失, 表现为在第一次访问一个数据块时所发生的缺失
Capacity miss, 容量缺失, 定义为不扩大cache容量就无法消除的缺失, 表现为因cache无法容纳所有所需访问的数据而发生的缺失  (权衡面积(cache的访问时间) 和 hit_rate)
Conflict miss, 冲突缺失, 定义为除上述两种原因外引起的缺失, 表现为因多个cache块之间相互替换而发生的缺失   (采用 全相联,组相联 等cache-DRAM 映射方式)

### 全相联(fully-associative)
需要根据过去每个cache块的访问情况, 预测出一个将来最不可能被访问的cache块. 常见的替换算法有如下几种:
FIFO, 先进先出, 替换最旧读入的cache块
LRU, 最近最少用, 替换在最近一段时间内访问次数最少的cache块
random, 随机替换

⭐: 全相联的代价 cost
>> 需要在存储阵列中花费更多的存储开销来存储cache块的tag部分 [原来只是前TAG位不一样,现在是前TAG+INDEX位都不一样,icache都需要记录]
>> 判断命中时, 需要与所有cache块检查其tag是否匹配, 这需要使用很多比较器, 从而增加面积开销. 由于这些代价, 全相联组织方式一般只在cache块数量较少的场景下使用.  (减少cache块)

### 组相联(set-associative)
给所有cache块分组, 在组间通过直接映射方式选出一个组, 然后在组内通过全相联方式选出一个cache块 [组间映射,组内随机]

tag % 组数
每个组中有w个cache块, 则称为w路组相联(w-way set-associative).   [现代CPU通常采用8或16路组相联]
INDEX_LEN = n = log2(cache块总数/w)


### cache块 的 大小
>> 增强 空间局部性
>> 增加 cache-miss cost


## icache 的具体优化方法 (cachesim)
>>>> 对于缺失次数 / hit rate 的统计:
>> 获得程序运行的itrace, 将其输入到icache中, 就可以模拟icache工作的过程
>> itrace已经包含了完整的指令流, 因此在统计TMT时, 我们只需要指令流的PC值, 而不需要指令本身.
>> icache的数据部分也不需要, 只需要保留元数据部分即可.

cachesim 接收指令流的PC序列(简化版的itrace), 通过维护元数据来统计这一PC序列的缺失次数. 
至于指令流的PC序列, 我们可以通过NEMU来快速生成.

>>>> 缺失代价 miss-cache cost
这个姑且就直接跑ysyxsoc整体来记录了


## 完整的 cachesim (包含 hit-rate & miss-cost)

>> 统计 miss-cost: 统计/建模

cache_line_amt = 16, cache_line_len = n (4-128)
4: 81.1
8: 117.3
16: 186.8
32: 312.4
64: 569.4
128: 1064.6


## 优化内存布局  (提升cache的整块空间利用率)

将循环的第一个指令的地址对齐4的倍数, 最好是cache_line_bytes的倍数

>> __attribute__((aligned(n)))    __attribute__((noinline))[避免被内联]
>> -falign-loops=N
>> -falign-functions=N
>> linker script + section

编译器链接器对齐是填充了 NOP: addi x0, x0, 0   (a00000fc:    00000013    nop)


## 学会设计模拟器 各种 类似cacchesim, 提升体系结构设计速度

## 缓存一致性 (类比一切 原副本不一致问题)

icache也会存在 缓存一致性 问题:   e.g. 自修改代码

允许系统中的副本在某些时刻不一致, 但在程序访问这个数据块之前, 需要执行一条特殊的指令, 指示硬件对过时的副本进行处理. 
RISC-V中有一条fence.i指令, 其语义是让在其之后的取指操作都能看到在其之前的store指令修改的数据. 

RISC-V只在指令集层次定义了fence.i的语义, 但具体如何在微结构层次中实现fence.i的功能, 则有多种不同的方案:


### fence.i 的三种实现方案

| 方案 | 执行 store 指令时     | 执行 fence.i 时 | 访问 icache 时 
| (1) | 更新 icache 中的相应块 | nop            | 命中          
| (2) | 无效 icache 中的相应块 | nop            | 缺失，访问内存  
| (3) | 冲刷整个 icache       | 缺失            | 访问内存      

>> 由于fence.i和自修改代码 是非常罕见的情况, 所以 2, 3 都比较轻量
> 如果要写自修改代码, 那么要在其中内联汇编嵌入fence.i

对于操作系统中的加载器, 操作系统可能先将程序A加载到某个内存位置, 然后跳转到程序A并执行; 
程序A执行结束后, 操作系统决定将程序B加载到相同的内存位置. 
如果不添加fence.i指令, 在执行程序B的过程中, 就可能会错误地取到程序A的指令.
