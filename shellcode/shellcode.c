#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	char buff[256];
	
	if(argc < 2) {
		printf("Please provide an argument");
		return 0;
	}
	
	strcpy(buff, argv[1]);

	printf("Input is: %s", buff);
	return 0;
}
