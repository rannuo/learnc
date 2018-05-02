#include <stdio.h>

/* 求两个整数的最大公约数 */

int main()
{
	int m,n,c;
	printf("Please input two numbers:\n");
	scanf("%d%d", &m,&n);
	L1:if(m=n)
		goto L2;
	if(m<n)
	{
		c=m;
		m=n;
		n=c;
	}
	m=m-n;
	goto L1;
	L2: printf("The GCD of this two numbers is %d\n", m);
	return 0;
} 
