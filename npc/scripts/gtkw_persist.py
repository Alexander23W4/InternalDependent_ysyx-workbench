#!/usr/bin/env python3
"""make trace 打开 gtkwave 之前的小整理

只做两件事:
  1. 如果 wave.gtkw 不存在, 生成一个最小的(带正确的 [dumpfile]/[savefile]);
  2. 删掉 gtkw 里过期的 [dumpfile_mtime]/[dumpfile_size] —— 否则重新生成
     wave.vcd 之后, gtkwave 会认为 save 文件和当前波形对不上, 不加载信号列表。

⭐ 信号列表以 wave.gtkw 为唯一来源:
   gtkwave 里 Ctrl-S / 退出时保存什么, 文件里就是什么; 这里绝不凭空补回任何
   信号, 所以手动删掉的信号删了就是删了, 下次不会再冒出来。

用法: gtkw_persist.py <wave.vcd> <wave.gtkw>
"""
import sys
import os

STALE = ('[dumpfile_mtime]', '[dumpfile_size]')


def read_lines(path):
    try:
        with open(path, errors='replace') as f:
            return f.read().split('\n')
    except FileNotFoundError:
        return []


def main(vcd, gtkw):
    lines = [l for l in read_lines(gtkw) if l.strip()]

    if not lines:
        lines = ['[*]', '[*] GTKWave Analyzer', '[*]',
                 '[dumpfile] "%s"' % os.path.abspath(vcd),
                 '[savefile] "%s"' % os.path.abspath(gtkw)]

    kept = [l for l in lines if not l.startswith(STALE)]

    if kept != lines:
        try:
            with open(gtkw, 'w') as f:
                f.write('\n'.join(kept) + '\n')
        except OSError:
            pass        # 只读/权限问题就算了, 不能因为这个小整理让 make trace 失败


if __name__ == '__main__':
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    main(sys.argv[1], sys.argv[2])
