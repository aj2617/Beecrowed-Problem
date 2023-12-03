#include<stdio.h>
int main()
{
 system("color 2F");
 int d,year;
scanf("%d",&year);


 d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

// printf("%d\n",d);
 switch(d)
 {
  case 0:printf("Sunday\n");
  break;
  case 1:printf("Monday\n");
  break;
  case 2:printf("Tuesday\n");
  break;
  case 3:printf("Wednesday\n");
  break;
  case 4:printf("Thursday\n");
  break;
  case 5:printf("Friday\n");
  break;
  case 6:printf("Saturday\n");
  break;

 }
 return 0;
}
