#include <stdio.h>
#include<conio.h>
#define period 5
void main(){
   float principal,inrate,sum,amount;
   clrscr();
   int year;
  printf("enter the principal amount\n");
  scanf("%f", &principal);
  inrate=0.13;
  amount=principal;
  year=0;
  printf("years \t amounts\n");
  while(year<=period){
    printf("%d \t\t %8.2f\n",year,amount);
   sum=amount+inrate*amount;
   year++;
   amount=sum;
  } 
}