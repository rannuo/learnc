#include <stdio.h>

/* ���100�ڣ�������100������������ż���ĺ�  */

int main()
{
	int i,s1,s2;
	for(s1=s2=0,i=1;i<100;i++)
		if(i%2==0)
			s2+=i;
		else
			s1+=i;
	printf("s1=%d,s2=%d\n",s1,s2);
	return 0; 
}
