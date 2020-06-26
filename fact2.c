#include <stdio.h>
#include <conio.h>
int main(){
  int limit,fact,i; 
  fact =1;
  printf("enter the number for factorial\n");
  scanf("%d",&limit);
  fact=factorial(limit);
  printf("the factorial of number = %d\n",fact);
}
int factorial(int num){
  if(num==1){
    return 1;
  }
  else{
    return num*factorial(num-1);
  }
}