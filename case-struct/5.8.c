#include <stdio.h>

/* ÿ���ж����� */ 

int main()
{
  int year,month,days=0;
  printf("Please input year and month:\n");
  scanf("%d,%d", &year,&month);
  switch(month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: days=31; break;
    case 4:
    case 6:
    case 9:
    case 11: days=30; break;
    case 2:
      if(year%4==0 && year%100!=0 || year%400==0)
        days=28;
      else
        days=29;
      break;
    default:
      printf("Data error!");
  }
  printf("%d��%d����%d��\n", year,month,days);
  return 0;
}
