#!/usr/bin/env python3
"""把最新一次综合/STA 报告的关键内容按固定格式追加到 syn_history.txt

用法: record.py <版本号> <rpt> <pwr> <synth_stat> <netlist> <instance.pwr> <syn_history>
追加内容 = 时序表 + 功耗表 + 面积/单元统计 + 按模块单元数 + 按模块 internal 功耗
"""
import sys
import re
import collections


def read_lines(path):
    try:
        with open(path, errors="replace") as f:
            return f.read().split("\n")
    except FileNotFoundError:
        sys.exit(f"错误: 找不到 {path}")


if len(sys.argv) != 8:
    sys.exit(__doc__)

ver, rpt_path, pwr_path, stat_path, netlist_path, instpwr_path, out_path = sys.argv[1:8]

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

# 3) 面积/单元统计: 只取 BUF/CLKBUF/CLKGATE/DFF 行 + Chip area + sequential
CELL_ROW = re.compile(r"^\s+\d+\s+[0-9.]+(?:E[+-]?\d+)?\s+[A-Z][A-Z0-9_]*_X\d+\s*$")
KEEP_TYPE = re.compile(r"^\s+\d+\s+[0-9.]+(?:E[+-]?\d+)?\s+(BUF|CLKBUF|CLKGATE|DFF)")
sl = read_lines(stat_path)
sstart = next((i for i, l in enumerate(sl) if CELL_ROW.match(l)), None)
send = next((i for i, l in enumerate(sl) if "of which used for sequential elements" in l), None)
if sstart is None or send is None:
    sys.exit(f"错误: {stat_path} 里没找到统计段")
cells_only = [l for l in sl[sstart:send + 1] if KEEP_TYPE.match(l)]
tail_lines = [l for l in sl[sstart:send + 1] if "Chip area" in l or "of which used" in l]
stats = cells_only + [""] + tail_lines

# 4) 按模块统计单元数/DFF(网表里实例名保留了层次前缀, 如 exu.xxx / icache.xxx)
INST_RE = re.compile(r"\s+([A-Z][A-Z0-9_]*_X\d)\s+\\?([A-Za-z_][\w.\[\]]*)")
tot = 0
by_mod = collections.Counter()
dff_mod = collections.Counter()
for l in read_lines(netlist_path):
    m = INST_RE.match(l)
    if not m:
        continue
    typ, name = m.group(1), m.group(2)
    pref = name.split(".")[0] if "." in name else "(top)"
    tot += 1
    by_mod[pref] += 1
    if typ.startswith("DFF"):
        dff_mod[pref] += 1
area_rows = [f"总单元: {tot}"]
for k, v in by_mod.most_common(10):
    area_rows.append(f"  {k:10s} cells={v:5d} ({100.0*v/tot:5.1f}%)  dff={dff_mod[k]}")

# 5) 按模块统计 internal 功耗(instance.pwr 第 3 列)
pw_rows = []
pagg = collections.Counter()
ptot = 0.0
for l in read_lines(instpwr_path):
    if not l.startswith("|"):
        continue
    c = [x.strip() for x in l.strip("|\n").split("|")]
    if len(c) < 6 or "Instance" in c[0] or not c[0]:
        continue
    try:
        p = float(c[2])          # Internal Power
    except ValueError:
        continue
    pref = c[0].split(".")[0] if "." in c[0] else "(top)"
    pagg[pref] += p
    ptot += p
pw_rows.append(f"internal 合计 = {ptot:.4e} W")
for k, v in pagg.most_common(10):
    pw_rows.append(f"  {k:10s} {v:.4e}  ({100.0*v/ptot if ptot else 0.0:5.2f}%)")

# 每次附加前和上一节之间留 4 个空行
entry = ([""] * 4 + [f"## {ver}", ""] + timing + ["", ""] + power + ["", ""] + stats
         + ["", ""] + area_rows + ["", ""] + pw_rows)

# 如果文件末尾已经有同版本的标题(上次只写了标题), 先把它去掉, 避免重复
try:
    with open(out_path) as f:
        old = f.read().split("\n")
except FileNotFoundError:
    old = []
while old and not old[-1].strip():
    old.pop()
last = [i for i, l in enumerate(old) if l.strip()]
if last and old[last[-1]].strip() == f"## {ver}":
    old = old[:last[-1]]

if out_path == "-":
    print("\n".join(entry))
else:
    with open(out_path, "w") as f:
        f.write("\n".join(old + entry) + "\n")
    print(f"已追加 [## {ver}] 到 {out_path} (含按模块单元数/功耗两张表)")
