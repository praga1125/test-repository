#include <stdio.h>
#include<conio.h>
void main(){
  int days, months;
  printf("enter the days\n");
  scanf("%d",&days);
  months= days/30;
  days=days%30;
  printf("months = %d days = %d",months,days);
}