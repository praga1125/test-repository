#include <stdio.h>
#include<conio.h>
void main(){
  int number,i;
  printf("enter the number of multiplication table\n");
  scanf("%d",&number);
  if(number!=0){
    printf("the multiplication of %d\n",number);
    printf("------------------------\n");
    for(i=1;i<=15;i++){
      printf("%d x %d = %d\n",number,i,number*i);
    }
  }
}