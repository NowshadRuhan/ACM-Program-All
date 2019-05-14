#include <stdio.h>
int main()
{
  char x[100];
  char *a = x; // a points to the storage provided by x on the stack
  scanf("%s",a); // should work fine
  printf("%s",a);
  return 0;
}
