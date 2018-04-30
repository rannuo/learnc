#include <stdio.h>

int main()
{
	char c;
	int i,j;
	float x,y;
	printf("Input c,i,j,x,y\n");
	scanf("%c,%d,%d,%f,%f", &c,&i,&j,&x,&y);
	printf("ch=\'%c\', ASCII =%d\n",c,c);
	printf("i=%-3dj=%d\n",i,j);
	printf("x=%-8.2fy=%.2f\n",x,y);
	return 0;
 } 
