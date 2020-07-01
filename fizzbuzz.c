#include <stdio.h>
#include <conio.h>
void main(){
  int i,num;
  printf("enter the number\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    if(i%5==0 && i%3==0){
      printf("fizzbuzz\t");
    }
    else if(i%5==0){
      printf("buzz\t");
  }
    else if(i%3==0){
      printf("fizz\t");
    }
    else{
      printf("%d\t",i);
     }
   }
 }