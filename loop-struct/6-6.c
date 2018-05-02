#include <stdio.h>
#include <math.h> 

/* 用迭代法求一个数的平方根 */

int main()
{
	float a,x0,x1;
	scanf("%f",&a);
	x1=a/2;
	do{
		x0=x1;
		x1=(x0+a/x0)/2;
	}while(fabs(x1-x0)>1e-5);
	printf("a=%f,squart(a)=%f\n",a,x1);
	return 0;
}
