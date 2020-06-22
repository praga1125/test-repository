#include <stdio.h>
#include <conio.h>
void main(){
  int limit,i=0,j=1,k;
  k=i+j;
  printf("enter the limit\n");
  scanf("%d",&limit);
  printf("the fabinocci series is\n");
  printf("-----------–-----------\n");
 while(k<=limit){
   printf("%d\t",k);
   k=i+j;
   i=j;
   j=k;
 }
}