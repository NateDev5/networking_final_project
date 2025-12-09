#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	if(argc < 2) {
		printf("Please provide an argument");
		return 0;
	}
	char buff[256];
	strcpy(buff, argv[1]);
	printf("Input is: %s", buff);
	return 0;
}
