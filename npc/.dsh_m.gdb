set pagination off
break mrom_read if $rdi >= 0x20000000 && $rdi < 0x20000100
commands
  silent
  printf "MROM read addr=%#x  ra=%p\n", $rdi, *(void**)$rsp
  continue
end
run
