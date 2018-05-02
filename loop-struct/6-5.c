#include <stdio.h>

int main()
{
	int i,sum=0;
	i=1;
	do{
		sum=sum+i*i;
		i++;
	}while(i<=10);
	printf("sum=%d", sum);
	return 0;
 } 
