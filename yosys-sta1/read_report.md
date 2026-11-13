## 读综合报告

# .rpt文件
关键时序路径Endpoint   时序终点
Clock Group  该时序路径所属的时钟组
Delay Type

Path Delay      (ns)

Path Required   (ns)   
    数据不能掐着 2.000 ns 到，必须在时钟沿之前 tsu 就稳定, 所以 path required 会比理论值会小一些

    对于普通寄存器到寄存器的 Setup 检查，简化后的要求时间为： T_{required} = T + L_{capture} - L_{launch} - T_{setup}

    L_{capture}：捕获寄存器的时钟到达延迟。   从 时钟源触发 到 时钟变化到达D的时间   两个reg的L差就是 Clock Skew 时钟偏斜
    L_{launch}：发射寄存器的时钟到达延迟。
    T_{setup}：捕获寄存器的 Setup 时间。

    - Capture 时钟越晚到，Setup 越容易满足。
    - Launch 时钟越晚到，Setup 越难满足。

    Hold 检查： T_{required,min} = L_{capture}-L_{launch}+T_{hold}

    - Capture 时钟越晚到，Hold 越难满足。
    - Launch 时钟越晚到，Hold 越容易满足。
     新数据的到达时间，必须晚于捕获时钟边沿至少 T_{hold}