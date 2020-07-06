#include <stdio.h>
#include <conio.h>
void main(){
   int num,i;
  printf("enter the number :\n");
  scanf("%d",&num);
  printf("the factors of the number\n");
  for(i=1;i<=num;i++){
    if(num%i == 0){
      printf("%d\t ",i);
    }
  }
}