#!/bin/bash
ROOT=/home/wang/InternalDependent_ysyx-workbench
CT=$ROOT/am-kernels/tests/cpu-tests
VTOP=$ROOT/npc/obj_dir/Vtop
TAG="${1:-base}"; ONLY="${2:-}"
cd "$CT" || exit 1
pass=0; fail=0
for f in tests/*.c; do
  t=$(basename "$f" .c)
  if [ -n "$ONLY" ] && ! echo " $ONLY " | grep -q " $t "; then continue; fi
  printf 'NAME = %s\nSRCS = tests/%s.c\ninclude ${AM_HOME}/Makefile\n' "$t" "$t" > "Makefile.$t"
  if make -s -f "Makefile.$t" ARCH=riscv32e-ysyxsoc image >/dev/null 2>&1; then
    out=$("$VTOP" "build/$t-riscv32e-ysyxsoc.bin" -b 2>&1)
    if echo "$out" | grep -q "HIT GOOD TRAP"; then pass=$((pass+1))
    else fail=$((fail+1)); echo "[$TAG][$t] ***FAIL***"; echo "$out" | tail -5 | sed 's/^/      | /'; fi
  else fail=$((fail+1)); echo "[$TAG][$t] ***BUILD FAIL***"; fi
  rm -f "Makefile.$t"
done
echo "[$TAG] ===== PASS=$pass FAIL=$fail ====="
