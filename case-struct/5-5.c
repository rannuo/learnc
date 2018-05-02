#include <stdio.h>

/* 求两个整数中的较小者 */

int main()
{
  int a,b,min;
  scanf("%d%d", &a,&b);
  min=(a<b)?a:b;
  printf("min=%d\n", min);
  return 0;
}