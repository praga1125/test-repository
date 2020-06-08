#include <stdio.h>
#include<conio.h>
void main(){
  int i,n,sum;
  printf("enter the n term to sum\n");
  scanf("%d",&n);
  sum=0;
  for(i=2;i<=n;i+=2){
    sum+=i;
  }
  printf("the sum of even series = %d",sum);
}