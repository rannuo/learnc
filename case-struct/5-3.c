#include <stdio.h>

int main()
{
  char c;
  c = getchar();
  if('+'==c) printf("plus\n");
  else if('-'==c) printf("minus\n");
  else if('*'==c) printf("multiplication\n");
  else if('/'==c) printf("division\n");
  else printf("Error!\n");
  return 0;
}