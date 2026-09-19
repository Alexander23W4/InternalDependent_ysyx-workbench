#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
把 NPC 仿真的输出整理成"可记录的 NPC 性能数据"。

由 npc/Makefile 的 `make perf` 调用:
    perf-report.py <仿真日志> <commit> <说明>

日志就是 Vtop 的 stdout(里面混着它自己的调试输出、guest 的串口输出、
以及 final_print() 打的那一堆 [XXX] 计数器), 这里只挑我们需要的。

输出两段:
  1. 给人看的汇总
  2. 一行 TSV, 直接粘到"NPC性能评估结果"工作表里
"""
import re
import sys

ANSI = re.compile(r'\x1b\[[0-9;]*m')
# final_print() 里每一行都是  [名字] 值   的形式
ENTRY = re.compile(r'^\s*\[([A-Z][A-Z0-9_]*)\]\s+(\S+)\s*$')

# 这几项已经在表格的固定列里了, 不再当性能计数器重复输出
SKIP = {'CYCLES', 'INSTRS', 'CPI'}


def parse(path):
    vals = []
    bad_trap = False
    for raw in open(path, errors='ignore'):
        line = ANSI.sub('', raw).rstrip('\n')
        if 'HIT BAD TRAP' in line:
            bad_trap = True
        m = ENTRY.match(line)
        if m:
            name, val = m.group(1), m.group(2)
            for i, (n, _) in enumerate(vals):
                if n == name:
                    vals[i] = (name, val)
                    break
            else:
                vals.append((name, val))
    d = dict(vals)
    # 表格里已经有固定列的那几项, 不作为"性能计数器"重复输出
    counters = [(n, v) for n, v in vals if n not in SKIP]
    return d, counters, bad_trap


def num(s):
    try:
        return int(s)
    except (TypeError, ValueError):
        return None


def main():
    if len(sys.argv) < 4:
        print(__doc__)
        return 2
    path, commit, desc = sys.argv[1], sys.argv[2], sys.argv[3]

    d, vals, bad_trap = parse(path)

    cycles = num(d.get('CYCLES'))
    instrs = num(d.get('INSTRS'))
    ipc = (instrs / cycles) if (cycles and instrs is not None) else None
    # CPI 就是 IPC 的倒数(本来就是同一条信息, 但记录表里习惯两个都留)
    cpi = (cycles / instrs) if (cycles and instrs) else None

    print("=" * 78)
    print("NPC Performance")
    print("=" * 78)
    print(f"commit    : {commit}")
    print(f"benchmark : {desc}")
    print(f"cycles    : {d.get('CYCLES', 'N/A')}")
    print(f"instrs    : {d.get('INSTRS', 'N/A')}")
    print(f"IPC       : {ipc:.6f}" if ipc is not None else "IPC       : N/A")
    print(f"CPI       : {cpi:.3f}" if cpi is not None else "CPI       : N/A")
    print("freq      : N/A   (RTL 目前还不能综合, 见 npc/Makefile 里 perf 的注释)")
    print("area      : N/A   (同上)")
    if bad_trap:
        print()
        print("!" * 78)
        print("!! [HIT BAD TRAP] 这次仿真没有正常结束, 上面的数据**不能**用于记录 !!")
        print("!! 常见原因: benchmark 要 io_read(AM_TIMER_UPTIME), 而 ysyxsoc 的 AM 里   !!")
        print("!! timer 还没实现(ioe.c 里那几行是注释掉的) -> 程序一开始就 panic.        !!")
        print("!" * 78)

    print()
    print("counters  :")
    for name, val in vals:
        print(f"    {name:<28} {val}")

    # ---- 可直接粘贴的一行 ----
    #   如果这次是 [HIT BAD TRAP], 在"说明"栏里直接写上标记, 免得有人把废数据抄进表
    desc_out = ("[BAD TRAP-不可记录] " + desc) if bad_trap else desc
    row = [commit, desc_out, d.get('CYCLES', 'N/A'), d.get('INSTRS', 'N/A'),
           f"{ipc:.6f}" if ipc is not None else 'N/A',
           f"{cpi:.3f}" if cpi is not None else 'N/A',
           'N/A', 'N/A']
    row += [f"{v}" for _, v in vals]
    print()
    print("TSV (commit / 说明 / 仿真周期数 / 指令数 / IPC / CPI / 综合频率 / 综合面积 / 各性能计数器):")
    print("\t".join(row))
    print()
    print("counter 列顺序: " + ", ".join(n for n, _ in vals))

    return 0


if __name__ == '__main__':
    sys.exit(main())
