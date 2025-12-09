gcc = gcc

out_file = simple_overflow
c_file = simple_overflow.c

GCC_FLAGS = -fno-stack-protector -O0 -no-pie -ggdb

.PHONY: out

out: $(bin_folder)
	$(gcc) $(GCC_FLAGS) $(c_file) -o $(out_file)
