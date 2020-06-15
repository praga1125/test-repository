#include <stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,ans;
  printf("enter the value of a,b,c,d \n");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  ans=(a+b)*(c/d);
  printf("the answer of the expression = %d\n",ans);
  ans=(a+b)*c/d;
  printf("the answer of the expression = %d\n",ans);
  ans=a+(b*c)/d;
  printf("the answer of the expression = %d\n",ans);
 
  }