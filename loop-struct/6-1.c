#include <stdio.h>

/* ����1^2 + 2^ ����ǰ10��ĺ�  */

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
