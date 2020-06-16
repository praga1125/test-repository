#include <stdio.h>
#include<conio.h>
#define base_salary 1500.00
#define Comission  0.02
#define bonus_rate 200.00
void main(){ 
  float price, gross_salary, bonus, commission, quantity;
  printf("enter the number of sold and price\n");
  scanf("%f%f",&quantity,&price);
  bonus=bonus_rate*quantity;
  commission=Comission*quantity*price;
  gross_salary=base_salary+bonus+commission;
  printf("the bonus  = %6.2f\n",bonus);
  printf("the commission  = %6.2f\n", commission);
  printf("the gross salary  = %6.2f\n",gross_salary);
}