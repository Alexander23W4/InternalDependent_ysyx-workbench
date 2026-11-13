## 读综合报告
总的来说:  Freq Area Power (PPA)

# .rpt文件   时序报告
1. 关键路径总表:

⭐: 修正方法:
    setup 违例：真正的问题，要改 RTL（打拍、缩短关键路径）或降频
    hold 违例：综合阶段出现很正常（没有时钟树），P&R 阶段靠插 buffer、调时钟树解决，一般不用在 RTL 上管

-> Endpoint   关键时序路径时序终点
-> Clock Group  该时序路径所属的时钟组
-> Delay Type
    core clock   
    clock-gating-default: 这个是综合器对于我的设计自己加的ICG, 把受控制信号约束的reg的时钟也加上对应的控制信号约束减少 dynamic power
        en ───► CLKGATE_X1.E
        clk ──► CLKGATE_X1.CK
                └─► GCK ──► DFF.CK 

-> Path Delay      (ns)    
    这个就是纯组合延迟

-> Path Required   (ns)   

    数据不能掐着 2.000 ns 到，必须在时钟沿之前 tsu 就稳定, 所以 path required 会比理论值会小一些

    对于普通寄存器到寄存器的 Setup 检查，简化后的要求时间为： T_{required} = T + L_{capture} - L_{launch} - T_{setup}

    L_{capture}：捕获寄存器的时钟到达延迟。   从 时钟源触发 到 时钟变化到达D的时间   两个reg的L差就是 Clock Skew 时钟偏斜
    L_{launch}：发射寄存器的时钟到达延迟。
    T_{setup}：捕获寄存器的 Setup 时间。     触发器内部需要一定时间完成数据采样. 在时钟有效边沿到来之前，D 必须提前稳定，让触发器内部的采样节点能够正确建立对应的电压状态

    - Capture 时钟越晚到，Setup 越容易满足。
    - Launch 时钟越晚到，Setup 越难满足。

    Hold 检查： T_{required,min} = L_{capture} - L_{launch} + T_{hold}

    - Capture 时钟越晚到，Hold 越难满足。
    - Launch 时钟越晚到，Hold 越容易满足。
     新数据的到达时间，必须晚于捕获时钟边沿至少 T_{hold}   D 至少再保持 T_{hold}，让 FF 完成可靠采样

    Setup 和 Hold 都是对 Capture Register（捕获寄存器）的要求

    Setup：Capture Register 不能等太久才收到新数据。
    Hold：Capture Register 不能太早收到下一份新数据。

-> CPPR 
    Common Path Pessimism Removal（公共时钟路径悲观量消除）

-> Slack   时钟裕量

-> Freq   (MHz)

    T_{period,min} = T_{path} + T_{setup} + T_{uncertainty} + T_{other}      T-hold不参与频率的计算(最长路径)

    最小的Freq姑且可以当作当前cpu的C, 但是对于实际经过后端和流片的频率, 可以考虑以下项:

    折扣项	     现在的情况	                                         后果
    线延迟	   net delay 全是 0.000（综合阶段没有真实互连）	          布局布线后线延迟会加进来，通常吃掉 5~15%
    理想时钟	clock network delay (ideal)，CPPR = 0	          CTS 后插入延迟/skew/OCV 还会再扣
    clock     uncertainty	SDC 里没设	                         实际板级/片上抖动要留 margin
    门控路径	clock_gating_default 组显示 NA，不参与 Fmax 统计	 它们的 slack 目前也健康（≥0.4），暂时不用管


2. 路径细节表:

列名	              含义	                      具体解释
Point	            路径节点	              当前路径经过的端口、时钟网络、寄存器引脚或组合逻辑单元。例如 mtime_0__reg_p:QN 表示该触发器的 QN 输出引脚。
Fanout	            扇出数量	              当前节点驱动的负载数量。通常表示该网络连接了多少个输入端。Fanout 越大，通常负载越重。
Capacitance	        电容	                  当前节点或网络所承受的负载电容，通常以 pF 为单位。包括输入引脚电容和互连寄生电容等。
Resistance	        电阻	                  当前网络或节点相关的电阻，通常以 Ω 为单位。主要用于描述互连寄生电阻。
Transition	        信号转换时间	`          信号从低电平变高电平，或从高电平变低电平所需要的时间，也叫 ⭐[Slew]。数值越大，边沿越慢。
Delta Delay	        增量延迟	              当前网络或节点相对于前一个节点引入的额外延迟，通常主要反映互连延迟。
Incr	            增量延迟	              当前路径节点引入的延迟增量，通常是单元延迟或网络延迟，具体取决于当前行的类型。
Path	            累积路径延迟	           从路径起点到当前节点为止的累计延迟。


T_{cell} = f(T_{input_transition},C_{load})
T_{net} = f(R_{wire},C_{wire},C_{load})
T_{path} = sum T_{cell} + sum T_{net}



# synth_check.txt & yosys.log 总体综合质量

grep -E "^Warning: Latch inferred|^Latch inferred" yosys.log | wc -l       
grep -i "latch inferred" yosys.log | grep -vc "^No latch"                 
grep -cE "DLATCH|DLH|LATCH" ysyx_26040135.netlist.v                       


# synth_stat.txt  组件使用报告 + 面积

看每一种component使用了多少, 什么东西占面积大了


# .pwr 功耗分析报告

Internal Power：标准单元内部功耗。
Switch Power：信号网络充放电产生的功耗。
Leakage Power：晶体管即使没有发生逻辑切换，也会产生的静态漏电功耗。