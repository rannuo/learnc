#include <stdio.h>

/* 给三个整数排序 */

int main()
{
  int a,b,c,t;
  printf("Please input 3 integers:\n");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b)
    { t=a;a=b;b=t; }
  if(a>c)
    { t=a;a=c;c=t; }
  if(b>c)
    { t=b;b=c;c=t; }
  printf("The sorted number is: %d %d %d\n", a,b,c);
  return 0;
}