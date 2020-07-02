#include <stdio.h>
#include <conio.h>
void main(){
  int i,j,num;
  printf("enter the limit of number\n");
  scanf("%d",&num);
  printf("the pattern program is:\n");
  printf("----------------------\n");
  for(i=1;i<=num;i++){
    for(j=1;j<=i;j++){
      printf("%d",i);
    }
    printf("\n");
  }
}