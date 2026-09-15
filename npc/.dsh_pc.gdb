set pagination off
break error_handler
run
set $b = (int*)malloc(256)
call top->debug_read_all($b, $b+32, $b+33, $b+34, $b+35, $b+36, (long long*)($b+40), $b+42)
printf ">>> fault pc = %#x   mcycle = %lld   instr = %#x\n", $b[32], *(long long*)($b+40), $b[42]
printf ">>> sp = %#x  ra = %#x  a0 = %#x\n", $b[2], $b[1], $b[10]
