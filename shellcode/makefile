gcc = gcc

out_file = shellcode
c_file = shellcode.c

GCC_FLAGS = -fno-stack-protector -O0 -z execstack -ggdb -no-pie

.PHONY: out

out: $(bin_folder)
	$(gcc) $(GCC_FLAGS) $(c_file) -o $(out_file)
