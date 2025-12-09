#include <stdio.h>
#include <string.h>

char *master_pass = "john123";
int is_encrypted = 1;

void unlock_safe() {
	printf("De-encrypting...\n");
	printf("Secret data: Hi my name is John and I am the guy with the most secured data in the world!\n");	
	is_encrypted = 0;
}

void lock_safe_and_encrypt () {
	printf("Re-encrypting...\n");
	printf("The safe is now locked\n");
}

void check_lock() {
	if(is_encrypted == 0)
		lock_safe_and_encrypt();
}

int main(int argc, char *argv[]) {
	printf("John's super secure data safe\n");
	if(argc < 2) {
		printf("The password needs to be passed as an argument\n");
		return 0;
	}
	
	void(*function_ptr)();
	function_ptr = &check_lock;

	char pass_buf[8];

	strcpy(pass_buf, argv[1]);

	if(strncmp(pass_buf, master_pass, sizeof(pass_buf)) == 0)
		unlock_safe();
	else printf("'%s' is invalid, access denied\n", pass_buf);

	function_ptr();

	return 0; 
}
