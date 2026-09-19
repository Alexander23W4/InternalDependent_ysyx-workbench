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










