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

6. 地电平有效信号
  For active low signals, end the signal name with an underscore followed by a lowercase character (for example, _n or _b).



