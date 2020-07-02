#include <stdio.h>
#include <conio.h>
void main(){
  int final_day,final_month,final_year; 
  int birth_day=11;
  int birth_month=4;
  int birth_year=2002;
  int current_day=2;
  int current_month=7;
  int current_year=2020;
  int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
  if(birth_day>current_day){
    current_day+=month[birth_month-1];
    current_month-=1;
  }
  if(birth_month>current_month){
    current_year-=1;
    current_month+=12;
  }
  final_day=current_day-birth_day;
  final_month=current_month-birth_month;
  final_year=current_year-birth_year;
  printf("the age is %d years , %d months , %d days",final_year,final_month,final_day);
}