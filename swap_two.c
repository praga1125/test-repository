#include <stdio.h>
#include <conio.h>
void main(){
  int n1, n2,temp;
  printf("enter the variable n1  and  n2 \n");
  scanf("%d %d",&n1,&n2);
  temp=n1;   //method one
  n1=n2;
  n2=temp;
  printf("the values are swamped n1=%d , n2=%d\n",n1,n2);
  n1 = n1*n2;     //method two
  n2 = n1/n2;
  n1 = n1/n2;
  printf("the values are swamped n1=%d ,n2 =%d",n1,n2);
}