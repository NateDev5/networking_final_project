#!/bin/sh
sudo sysctl -w kernel.randomize_va_space=0 > /dev/null 2>&1

addr=$(gdb -q ./shellcode -ex "set confirm off" -ex "b main" -ex "run" -ex "print &buff" -ex "quit" | grep "0x" | sed -E 's/.*(0x[0-9a-fA-F]+).*/\1/' | tail -n 1)

addr_hex=$(printf "%016x" "$addr" | sed 's/../& /g' | awk '{for(i=NF;i>0;i--) printf "\\x"$i} END {print ""}')

addr_cleaned=$(echo "$addr_hex" | sed 's/\\x00\\x00$//')

printf "%s" "$addr_cleaned"
