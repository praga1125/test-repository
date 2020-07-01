#include <stdio.h>
#include <conio.h>
int main(){
  int num,count;
  printf("enter the number to count\n");
  scanf("%d",&num);
  while(num!=0){
    count++;
    num/=10;
  }
  printf("the number of digits = %d",count);
}