#include <stdio.h>
#include <conio.h>
void main(){
  int i,j,k,num;
  printf("enter the number of row\n");
  scanf("%d",&num);
  printf("the pattern is :\n");
  printf("-------------\n");
    for(i=num;i>=1;i--){
    for(j=num;j>=1;j--){
      printf(" ");
    }
    for(k=1;k<=i;k++){
      printf("*\t");
    }
    printf("\n");
  }
} 