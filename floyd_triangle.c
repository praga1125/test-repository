#include <stdio.h>
#include <conio.h>
void main(){
  int row,i,j,p,q;
  printf("enter the number of row\n");
  scanf("%d",&row);
  printf("the Floyd triangle:\n");
  printf("--------------------\n");
  for(i=1;i<=row;i++){
     if(i%2==0){ 
       p=1;
       q=0;
     }
     else{
        p=0;
        q=1;
     }
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    printf("%d",p);
	 else
	    printf("%d",q);
      printf("\n");
     
   }
}