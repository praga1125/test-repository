#include <stdio.h>
#include<conio.h>
void main(){
 int num[]={5,6,7,8};
 int i,j,size;
 size=sizeof(num)/sizeof(int);
 printf("the pattern is\n");
 for(i=0;i<size;i++){
   for(j=i;j<size;j++){
     printf("%d",num[j]);
   }
   printf("\n");
 }
}