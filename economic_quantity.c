#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
  float demand_rate,setup_cost,hold_cost,EOQ,TOB;
  printf("enter the demand rate :\n");
  scanf("%f",&demand_rate);
  printf("enter the setup cost  :\n");
  scanf("%f",&setup_cost);
  printf("enter the hold cost  :\n");
  scanf("%f",&hold_cost);
  EOQ=sqrt((2*demand_rate*setup_cost)/hold_cost);
  TOB=sqrt((2*setup_cost)/(demand_rate*hold_cost));
  printf(" the economic order quantity is = %6.2f\n",EOQ);
  printf(" the time between orders is =%6.2f\n",TOB);
}