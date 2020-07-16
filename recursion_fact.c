#include <stdio.h>
#include <conio.h>
int main(){
  int num ,ans;
  printf("enter the limit number of factorial\n"); 
  scanf("%d",&num);
  ans=factorial(num);
  printf("the factorial of %d = %d \n",num,ans);
  }
  factorial(int num){
    int sum;
    if(num<=1){
     return 1;
    }
    sum = num * factorial(num-1);
    return sum;   
  }