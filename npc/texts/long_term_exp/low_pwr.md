
## 这里主要积累低功耗设计经验, 以及怎么更好的用RTL(verilog)体现出来

# 功耗
1. 开关功耗   1/2 * Vdd^2 * C * f


2. 短路功耗   Vdd * C * f  (Q为一次翻转过程中从电源流到地的电荷量)

在输入信号进行翻转时，PMOS 和 NMOS 总有一段时间是同时导通的，那么从电源 VDD 到地 VSS 之间就有了通路，形成短路电流，产生短路功耗


3. 静态功耗 (漏电流)   Vdd * I_leak

漏电流的组成主要为：PN 结反向电流 I1、源极和漏极之间的亚阈值漏电流 I2、栅极漏电流（包括栅极和漏极之间的感应漏电流 I3）、栅极和衬底之间的隧道漏电流 I4。

一般情况下，漏电流主要是指栅极泄漏电流和亚阈值电流。对于超深亚微米工艺，隧道漏电流成为主要电流之一。

1、在 PN 结两端加反向电压时，P 区空穴和 N 区电子的运动相反，没有电流通过，二极管处于截止状态，部分能量较大的空穴和电子会挣脱反向电场的束缚而形成微弱的漂移电流。
2、栅极泄漏功耗：在栅极加上信号后（即栅压），栅级到衬底之间会存在电容，因此在栅衬之间就会存在有电流，由此就会存在功耗。
3、亚阈值电流：栅极电压低于导通阈值，仍会产生从漏极到源极的泄漏电流。此电流称为亚阈值泄漏电流。
    在较狭窄的晶体管中，漏极和源极距离较近的情况下会产生亚阈值泄漏电流。晶体管越窄，泄漏电流越大。
    要降低亚阈值电流，可以使用高阈值的器件，还可以通过衬底偏置增加阈值电压，这些也属于低功耗设计的考虑范畴。
4、隧道漏电流：属于量子力学范畴


# 优化功耗的方面
下表显示了在数字设计的各个层次上可减少功耗的百分比。RTL 级之后，功耗的减少量已经非常有限。

设计层次	改善程度
系统级	   50% ~ 90%
RTL 级	   20% ~ 50%
门级	   10% ~ 15%
晶体管级	5% ~ 10%
版图级	< 5%

# 系统级低功耗设计

1. 多电压

2. 多频率   可调频率   可调模式

模式	说明
Normal	主时钟使用较高频率的锁相环时钟，送入到设计电路中
Slow	主时钟使用较低的本地时钟
Low-Power	总线时钟关闭，只保留一些外设的工作时钟
Sleep	时钟全部关闭，全设计进入睡眠状态

3. 多IP

LVT（Low Voltage Threshold），阈值电压低，饱和电流小，所以此类单元库具有更高的速度和更大的泄漏电流。
HVT（High Voltage Threshold）单元漏电流小，但速度较慢。
SVT/RVT(Standard/Regular Voltage Threshold) 的性能介于 LVT 与 HVT 之间。

所以选用标准单元库的时候，需要综合速度和功耗两个方面来考虑。
例如，可以在关键路径使用 LVT 单元，在非关键路径使用 HVT 单元。


# RTL级 (这一级的优化主要就是 减少翻转 或 减少电路, 因为在RTL里面降低V, C, f都是不现实或不符合优化目标的)

1. 资源共享 
    always @(*) begin
        case (mode) :
            3'b000:         result  = 1'b1 ;
            3'b001:         result  = 1'b0 ;
            3'b010:         result  = value1 == value2 ;
            3'b011:         result  = value1 != value2 ;
            3'b100:         result  = value1 > value2 ;
            3'b101:         result  = value1 < value2 ;
            3'b110:         result  = value1 >= value2 ;
            3'b111:         result  = value1 <= value2 ;
        endcase
    end
对上述代码进行优化，描述如下：
    wire equal_con       = value1 == value2 ;
    wire great_con       = value1 > value2 ;
    always @(*) begin
        case (mode) :
            3'b000:         result  = 1'b1 ;
            3'b001:         result  = 1'b0 ;
            3'b010:         result  = equal_con ;
            3'b011:         result  = equal_con ;
            3'b100:         result  = great_con ;
            3'b101:         result  = !great_con && !equal_con ;
            3'b110:         result  = great_con && equal_con ;
            3'b111:         result  = !great_con ;
        endcase
    end

2. 状态编码
可以把FSM状态变成Grey Code


3. 寄存器翻转
