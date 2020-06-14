#include <stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,value;
  printf("enter the a , b , c  value\n");
  scanf("%d%d%d",&a,&b,&c);
  value=computation(a,b,c);
  printf("the conputed value of expression is : %d",value);
}
computation(int a,int b,int c){
  int ans;
  ans=a-b/3+c*2-1;
  return ans;
}