#include <stdio.h>
#include<conio.h>
int factorial(int num){
  int i,fact;
  fact=1;
  for(i=num;i>=1;i--)
    fact*=i;
  return(fact);
}
int main()
{
  int i,sum,num;
  sum=0;
  printf("enter the n term to sum\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    if(i%2!=0){
      sum+=factorial(i);
    }
    else{
      sum+=i;
    }
  }
  printf("the sum of odd factorial series = %d",sum);
}