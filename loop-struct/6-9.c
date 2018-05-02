#include <stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5-i;j++)
			printf(" ");
		for(k=i;k>=1;k--)
			printf("#");
		printf("\n");
	}
	return 0;
 } 
