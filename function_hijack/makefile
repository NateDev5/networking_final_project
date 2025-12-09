gcc = gcc

out_file = function_hijack
c_file = function_hijack.c

GCC_FLAGS = -fno-stack-protector -ggdb -O0 -no-pie -z execstack

.PHONY: out

out: $(bin_folder)
	$(gcc) $(GCC_FLAGS) $(c_file) -o $(out_file)
