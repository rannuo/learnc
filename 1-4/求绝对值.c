#include <stdio.h>

int main()
{
	int a, a1;
	scanf("%d",&a);
	a1 = a;
	if (a<0) a = -a;
	printf("|%d|=%d", a1,a);
	return 0;
}
