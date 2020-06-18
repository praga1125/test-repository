#include <stdio.h>
#include <conio.h>
void main(){
  int i,j;
  printf("the pattern of *\n");
  printf("\n");
  for(i=1;i<=4;i++){
    for(j=1;j<=i;j++){
       printf("*\t");
      }
      printf("\n");
   }
}