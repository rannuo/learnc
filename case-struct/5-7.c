#include <stdio.h>
#include <math.h>

/* 求方程ax*x + b*x +c=0的解 */

int main()
{
  double a,b,c,disc,x1,x2,realpart,imagpart;
  scanf("%lf%lf%lf", &a,&b,&c);
  disc=b*b-4*a*c;
  if(fabs(disc)<=1e-6)
    printf("has two equal roots:%8.4lf\n", -b/2*a);
  else if(disc>1e-6)
    {
      x1=(-b+sqrt(disc))/(2*a);
      x2=(-b-sqrt(disc))/(2*a);
      printf("has distinct real roots:%8.4lf and %8.4lf\n",x1,x2);
    }
  else
    {
      realpart=-b/(2*a);
      imagpart=sqrt(-disc)/(2*a);
      printf("%8.4lf+%8.4lf i \n", realpart,imagpart);
      printf("%8.4lf-%8.4lf i \n", realpart,imagpart);
    }
  return 0;
}