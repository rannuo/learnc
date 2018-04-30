#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,area;
	printf("Input a, b:\n");
	scanf("%lf%lf", &a, &b);
	printf("a=%-7.2f,b=%-7.2f", a, b);
	c=sqrt(a*a + b*b);
	area=1./2*a*b;
	printf("c=%-7.2f",c);
	printf("area=%-7.2f\n", area);
	return 0;
}
