#include <stdio.h>
#include <conio.h>
void main(){
   int i,j,row,space,ans=1;
  printf("enter the number of row \n");
  scanf("%d",&row);
  printf("the pascal triangle :\n");
  printf("---------------------\n\n");
  for(i=0;i<row;i++){
    for(space=1;space<=row-i;space++)
      printf("  ");
      for(j=0;j<=i;j++){
        if(j==0||i==0)
          ans=1;
        else
        ans=ans*(i-j+1)/j;
        printf("%4d",ans);
      }
    printf("\n");
  }
}