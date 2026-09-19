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
cache块 的 编号:   (addr / 4) % k (direct-mapped), 新块代替旧块


