#include <stdio.h>
#include<conio.h>
void main(){
  int i,sum,num;
  printf("enter the n term to sum\n");
  scanf("%d",&num);
  sum=0;
  for(i=1;i<=num;i++){
    if(i%2!=0)
      sum+=i*i;
  }
  printf("the sum of odd square series = %d",sum);
}