#include <stdio.h>

// ���һ����λ��ͬ���ܱ�4��������λ�� 

int main()
{
	int i,j,k;
	for(i=1;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
			{
				if(i==j||j==k||k==i)
					continue;
				if((100*i+10*j+k)%4==0)
				{
					printf("%4d",100*i+10*j+k);
					goto L1;
				}
			}
	L1:;
	return 0;
 } 
