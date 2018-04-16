#include <stdio.h>

int main()
{
	float x = 12.345f;
	double y = 2.3456;
	printf("x1=%f,x2=%6.2f,x3=%-6.2f,x4=%.2f\n",x,x,x,x);
	printf("x5=%e,x6=%10.2e,x7=%-10.2e,x8=%.2e\n",x,x,x,x);
	printf("y1=%f,y2=%6.2f,y3=%-6.2f,y4=%.2f\n",y,y,y,y);
	printf("y1=%f,y2=%6.2f,y3=%-6.2f,y4=%.2f\n",y,y,y,y);
	printf("s1=%05.2s,s2=%-5.2s,s3=%.2s,s4=%3s,s5=%s\n","abcd","abcd","abcd","abcd","abcd");
	return 0;
}
