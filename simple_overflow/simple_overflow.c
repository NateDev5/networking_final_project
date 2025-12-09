#include <stdio.h>
#include <string.h>

char pass[] = "abc_admin_abc123";

int main() {
  int is_admin = 0;
  char pass_buf[16];

  printf("Enter password to login as admin: ");
  scanf("%s", pass_buf);

  if (strcmp(pass_buf, pass) == 0)
    is_admin = 1;

  if (is_admin)
    printf("You are now logged in as admin");
  else
    printf("Access denied");

  return 0;
}
