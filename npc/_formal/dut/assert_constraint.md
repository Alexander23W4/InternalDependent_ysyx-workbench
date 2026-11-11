
## 先验证pc, 确保程序跳转流没有问题: (但仍有可以出现有关gpr和mem的问题影响pc的跳转)
先比较pc, 
收到new_instr时, 执行dut并比较pc



只在wb阶段检测, (现在wb是顺序写回), 则到wb之后, 检测这是那个instr, ref直接执行到这个isntr, 然后比较一次gpr