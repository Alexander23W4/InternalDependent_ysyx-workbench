流水线处理器波形debug方法:

## 增加difftest
现在的顺序提交说明可以增加difftest来验证

## wave 用波形debug

1. 如果是卡住了:
    把每一级的 out_valid 和 in_valid 都找出来, 看看流水线是卡在哪一级

2. 如果是difftest出错了:
    设置 wave_start 和 wave_end, 案后怀疑那个就看哪个的波形

## gdb debug

s 进入循环
n 不进入循环
c 下一个断点
finish 执行到当前函数返回(解脱)
bt 查看函数调用栈
u 运行到当前循环结束位置（until）