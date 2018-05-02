#include <stdio.h>

/* 求级数1^2 + 2^ ……前10项的和  */

int main()
{
	int i=1,sum=0;
	L:if(i<=10)
	{
		sum=sum+i*i;
		i++;
		goto L;
	}
	printf("sum=%d\n",sum);
	return 0;
}
