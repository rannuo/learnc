#include <stdio.h>

/* 输入一批数，直到一个0 */

int main()
{
	int i,sum=0;
	while(scanf("%d", &i),i!=0)
		sum=sum+i;
	printf("sum=%d\n", sum);
	return 0;
 } 
