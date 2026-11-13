#!/usr/bin/env python3
"""把最新一次综合/STA 报告的关键内容按固定格式追加到 syn_history.txt

用法: record.py <版本号> <rpt> <pwr> <synth_stat> <syn_history>
追加内容 = 时序表 + 功耗表 + 面积/单元统计，与手写格式一致。
"""
import sys


def read_lines(path):
    try:
        with open(path, errors="replace") as f:
            return f.read().split("\n")
    except FileNotFoundError:
        sys.exit(f"错误: 找不到 {path}")


if len(sys.argv) != 6:
    sys.exit(__doc__)

ver, rpt_path, pwr_path, stat_path, out_path = sys.argv[1:6]

# 1) 时序表: rpt 里第一张表(以 '+' 开头的分隔线, 到第三个 '+' 行结束)
rl = read_lines(rpt_path)
plus = [i for i, l in enumerate(rl) if l.startswith("+")]
if len(plus) < 3:
    sys.exit(f"错误: {rpt_path} 里没找到时序表")
timing = rl[plus[0]:plus[2] + 1]

# 2) 功耗表: 第一张表开头 -> Total Power 行
pl = read_lines(pwr_path)
pstart = next((i for i, l in enumerate(pl) if l.startswith("+")), None)
pend = next((i for i, l in enumerate(pl) if l.startswith("Total Power")), None)
if pstart is None or pend is None:
    sys.exit(f"错误: {pwr_path} 里没找到功耗表")
power = pl[pstart:pend + 1]

# 3) 面积/单元统计: 只取单元行(BUF_X1 / DFFR_X1 ...) 到 "of which used for sequential elements"
#    (跳过 34. Printing statistics. / === 模块名 === / wires / ports / "cells" 合计行)
import re
CELL_ROW = re.compile(r"^\s+\d+\s+[0-9.]+(?:E[+-]?\d+)?\s+[A-Z][A-Z0-9_]*_X\d+\s*$")
sl = read_lines(stat_path)
sstart = next((i for i, l in enumerate(sl) if CELL_ROW.match(l)), None)
send = next((i for i, l in enumerate(sl) if "of which used for sequential elements" in l), None)
if sstart is None or send is None:
    sys.exit(f"错误: {stat_path} 里没找到统计段")
# 只保留 BUF / CLKBUF / CLKGATE / DFF 这几类单元行 + Chip area + sequential
KEEP_TYPE = re.compile(r"^\s+\d+\s+[0-9.]+(?:E[+-]?\d+)?\s+(BUF|CLKBUF|CLKGATE|DFF)")
cells_only = [l for l in sl[sstart:send + 1] if KEEP_TYPE.match(l)]
tail_lines = [l for l in sl[sstart:send + 1] if "Chip area" in l or "of which used" in l]
stats = cells_only + [""] + tail_lines

entry = [f"## {ver}", ""] + timing + ["", ""] + power + ["", ""] + stats + ["", ""]

# 如果文件末尾已经有同版本的标题(上次只写了标题), 先把它去掉, 避免重复
try:
    with open(out_path) as f:
        old = f.read().split("\n")
except FileNotFoundError:
    old = []
last = [i for i, l in enumerate(old) if l.strip()]
if last and old[last[-1]].strip() == f"## {ver}":
    old = old[:last[-1]]
    while old and not old[-1].strip():
        old.pop()
    old.append("")

if out_path == "-":
    print("\n".join(entry))
else:
    with open(out_path, "w") as f:
        f.write("\n".join(old + entry) + "\n")
    print(f"已追加 [## {ver}] 到 {out_path}")
