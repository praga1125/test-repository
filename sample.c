#include <stdio.h>
#include<conio.h>
void main(){
  int num,sum,i;
  printf("enter the value\n");
  scanf("%d",&num);
  i=0;
  while(i<=num){
    sum+=i;
    i++;
      }
      printf("the sum is %d",sum);
}