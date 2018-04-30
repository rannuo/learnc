#define PI 3.1415926
#include <stdio.h>

int main()
{
	double r = 18.5, area, length;
	area = PI*r*r;
	length = 2*PI*r;
	printf("area=%6.2f, length=%6.2f", area, length);
	return 0;
}
