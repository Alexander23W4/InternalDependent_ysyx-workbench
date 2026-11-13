#!/usr/bin/env python3
import re
import sys
from pathlib import Path


def parse_vector_decl(text: str):
    widths = {}
    for line in text.splitlines():
        s = line.strip()
        if not s or s.startswith('//'):
            continue
        m = re.match(r"^(?:input|output|wire|logic)\s*(\[[^\]]+\])?\s*(.*?);$", s)
        if not m:
            continue
        range_part, names_part = m.groups()
        bit_width = 1
        if range_part:
            m2 = re.match(r"\[(\d+):(\d+)\]", range_part)
            if m2:
                msb, lsb = m2.groups()
                bit_width = abs(int(msb) - int(lsb)) + 1
        names = [n for n in re.findall(r"[A-Za-z0-9_$.]+", names_part or "") if n not in {"input", "output", "wire", "logic"}]
        for name in names:
            widths[name] = bit_width
    return widths


def split_concat(expr: str):
    items = []
    curr = []
    depth = 0
    for ch in expr:
        if ch == '{':
            depth += 1
            if depth == 1:
                continue
        elif ch == '}':
            depth -= 1
            if depth == 1:
                continue
        if ch == ',' and depth == 0:
            items.append(''.join(curr).strip())
            curr = []
        else:
            curr.append(ch)
    if curr:
        items.append(''.join(curr).strip())
    return [item for item in items if item]


def parse_assign(line: str):
    m = re.match(r"^\s*assign\s+(?P<lhs>[^=]+?)\s*=\s*(?P<rhs>.+?)\s*;\s*(?://.*)?$", line)
    if not m:
        return None
    lhs = m.group('lhs').strip()
    rhs = m.group('rhs').strip()
    return lhs, rhs


def normalize_signal(expr: str):
    expr = expr.strip()
    if expr.startswith('{') and expr.endswith('}'):
        return split_concat(expr[1:-1])
    if expr.startswith("\""):
        return expr
    return [expr]


def resolve_bit(expr: str):
    expr = expr.strip()
    if expr in {"1'b0", "1'b1", "1'bx", "1'bX", "1'bz", "1'bZ"}:
        return None, expr
    return expr, None


def emit_for_target(target: str, rhs: str, widths: dict):
    target_name = target
    bit_index = None
    m = re.match(r"([A-Za-z0-9_$.]+)\[(\d+)\]$", target)
    if m:
        target_name, bit_index = m.groups()
        bit_index = int(bit_index)

    width = widths.get(target_name, 1)
    if bit_index is not None:
        if rhs in {"1'b0", "1'b1", "1'bx", "1'bX", "1'bz", "1'bZ"}:
            const = "LOGIC0_X1" if rhs in {"1'b0", "1'bx", "1'bX", "1'bz", "1'bZ"} else "LOGIC1_X1"
            return [f"  {const} _assign_{abs(hash(target))} ( .Z({target}) );"]
        return [f"  BUF_X1 _assign_{abs(hash(target))} ( .A({rhs}), .Z({target}) );"]

    if width == 1:
        if rhs in {"1'b0", "1'b1", "1'bx", "1'bX", "1'bz", "1'bZ"}:
            const = "LOGIC0_X1" if rhs in {"1'b0", "1'bx", "1'bX", "1'bz", "1'bZ"} else "LOGIC1_X1"
            return [f"  {const} _assign_{abs(hash(target))} ( .Z({target}) );"]
        return [f"  BUF_X1 _assign_{abs(hash(target))} ( .A({rhs}), .Z({target}) );"]

    exprs = normalize_signal(rhs)
    out = []
    if rhs in {"1'b0", "1'b1", "1'bx", "1'bX", "1'bz", "1'bZ"}:
        const = "LOGIC0_X1" if rhs in {"1'b0", "1'bx", "1'bX", "1'bz", "1'bZ"} else "LOGIC1_X1"
        for idx in range(width):
            tgt = f"{target_name}[{idx}]"
            out.append(f"  {const} _assign_{abs(hash(f'{target}-{idx}'))} ( .Z({tgt}) );")
        return out

    if len(exprs) == 1 and exprs[0] != rhs:
        single = exprs[0]
        for idx in range(width):
            tgt = f"{target_name}[{idx}]"
            out.append(f"  BUF_X1 _assign_{abs(hash(f'{target}-{idx}'))} ( .A({single}), .Z({tgt}) );")
        return out

    for idx, expr in enumerate(exprs):
        tgt = f"{target_name}[{idx}]"
        out.append(f"  BUF_X1 _assign_{abs(hash(f'{target}-{idx}'))} ( .A({expr}), .Z({tgt}) );")
    if len(exprs) < width:
        single = exprs[0]
        for idx in range(len(exprs), width):
            tgt = f"{target_name}[{idx}]"
            out.append(f"  BUF_X1 _assign_{abs(hash(f'{target}-{idx}'))} ( .A({single}), .Z({tgt}) );")
    return out


def sanitize_netlist(src_path: Path, dst_path: Path | None = None):
    original = src_path.read_text()
    widths = parse_vector_decl(original)
    new_lines = []
    for line in original.splitlines():
        m = re.match(r"^\s*assign\s+(.+?)\s*=\s*(.+?)\s*;\s*$", line)
        if not m:
            new_lines.append(line)
            continue
        lhs, rhs = m.groups()
        lhs = lhs.strip()
        rhs = rhs.strip()
        if not rhs:
            new_lines.append(line)
            continue
        replacement_lines = emit_for_target(lhs, rhs, widths)
        if replacement_lines:
            new_lines.extend(replacement_lines)
        else:
            new_lines.append(line)
    output_path = dst_path if dst_path is not None else src_path
    output_path.write_text("\n".join(new_lines) + "\n")


if __name__ == "__main__":
    if len(sys.argv) not in (2, 3):
        print("Usage: sanitize_netlist.py <input.v> [output.v]", file=sys.stderr)
        sys.exit(1)
    src = Path(sys.argv[1])
    dst = Path(sys.argv[2]) if len(sys.argv) == 3 else None
    sanitize_netlist(src, dst)
