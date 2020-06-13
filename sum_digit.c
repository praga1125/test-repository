#include <stdio.h>
#include<conio.h>
void main()
{
  int num,ans=0;
  printf("enter the number\n");
  scanf("%d",&num);
  while(num>0){
  ans+=num%10;
  num =num/10;
  }
  printf("the sum of num = %d",ans);
}