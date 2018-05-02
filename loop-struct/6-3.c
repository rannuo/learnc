#include <stdio.h>

/* 求级数前十项之和 */

int main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		sum=sum+i*i;
		i++;
	}
	printf("sum=%d\n", sum);
	return 0;
}
