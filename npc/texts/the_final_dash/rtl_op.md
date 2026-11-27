## 对于RTL(HDL)的写法, 需要做哪些规范性提升和可选提升(更好的综合表现, 面积和功耗oriented优化方法)

# Requirement:

1. 命名和module统一
  One module per file. Name the file after the module it contains. For example, if the module name is smul, name the file smul.v.

2. 加烙印
  Add the company header to the top of all of your source files

3. 提前做好 宏/变量 命名规范
  Create a Naming Convention for the design. Document it and use it consistently throughout the design.

4. 变量名都用小写
  Use lowercase letters for all signal names, variable names, and port names.

5. 纯数字量都用宏
  Do not Use Hard Coded Numeric Values. Instead, use parameters to define constants.

6. 低电平有效信号
  For active low signals, end the signal name with an underscore followed by a lowercase character (for example, _n or _b).

# verilog变量命名  加后缀
clk_for_test  clk4test    sig_uart2spi

dut_en    clk_en   rst_n    counter_r   counter_d     

延迟打拍   counter_r2  


# 注释: 头部注释
版权、模块名字、作者、日期、梗概、修改记录
/**********************************************************
// Copyright 1991.06.02-2017.07.14
// Contact with willrious@sina.com
================ runoob.v ======================
>> Author       : willrious
>> Date         : 1995.09.07
>> Description  : Welcome
>> note         : (1)To 
>>              : (2)My
>> V180121      : World.
************************************************************/

# 注释 英文注释
注释尽量用英文书写，以保证不同操作系统、不同编辑器下能够正常显示。

__|__ 

# 使用括号 增强并行

//往往被综合成串行的 3 个加法器
assign F = A + B + C + D ;
//往往被综合成并行的的 2 个加法器和 1 个级联的加法器，时序更加宽松
assign F = (A + B) + (C + D) ;

//不推荐
assign flag = cnt == 4'd2 && mode == 2'b01;
//推荐
assign flag = (cnt == 4'd2) && (mode == 2'b01);  


# 使用并行mux, 避免串行优先级mux(if elseif)



