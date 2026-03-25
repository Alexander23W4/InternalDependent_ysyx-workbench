#!/bin/bash

# Check arguments
if [ $# -eq 0 ]; then
    echo "Warning: No Verilog file specified"
    echo "Usage: $0 <top.v> [dep1.v] [dep2.v] ..."
    echo "Example: $0 BarrelShifter.v ../../CCMs/Func/Mux.v"
    exit 1
fi

TOP_FILE="$1"           # 第一个参数作为top文件
TOP_MODULE=$(basename "$TOP_FILE" .v)

echo "Top module: $TOP_MODULE"
echo "Dependencies: ${@:2}"  # 从第2个参数开始

# 构建read_verilog命令：依赖文件在前，top文件在后
read_cmd="read_verilog"
for dep in "${@:2}"; do  # 所有依赖文件
    read_cmd="$read_cmd $dep"
done
read_cmd="$read_cmd $TOP_FILE"  # 最后加top文件

yosys -p "
  $read_cmd;
  hierarchy -check -top $TOP_MODULE;
  synth -top $TOP_MODULE;
  stat;
  select -module $TOP_MODULE; show;
"
