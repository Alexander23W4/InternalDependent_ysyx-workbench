## 读综合报告

# .rpt文件
1. 时序报告:

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