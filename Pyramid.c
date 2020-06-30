#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
  int num,x,i,j,y=1;
  printf("enter the number for pyramid\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    for(j=num-1;j>=i;j--){
      printf(" ");
    }
    for(x=y;x>=1;x--){
      printf("%d",abs(x-i));
    }
    y+=2;
    printf("\n");
  }
}