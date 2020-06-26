#include <stdio.h>
#include <conio.h>
void main(){
  int limit,fact,i; 
  fact =1;
  printf("enter the number for factorial\n");
  scanf("%d",&limit);
  for(i=1;i<=limit;i++){
    fact*=i;
  }
  printf("the factorial of number = %d\n",fact);
}