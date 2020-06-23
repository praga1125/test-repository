#include <stdio.h>
#include <conio.h>
void main(){
  int row,i,j,num=1;
  printf("enter the number of row\n");
  scanf("%d",&row);
  printf("the floyd's triangle :\n");
  printf("--------------------\n");
  for(i=0;i<=row;i++){
    for(j=0;j<=i;++j){
      printf("%d\t",num);
      ++num;
    }
    printf("\n");
  }
}