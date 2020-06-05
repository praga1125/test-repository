#include <stdio.h>
void main(){
  int count,n,i,num,sum=0;
  clrscr();
  printf("enter the number max limit to sum\n ");
  scanf("%d",&n);
  for(num=2;num<=n;num++){
    count=0;
    for(i=2;i<=num/2;i++){
      if(num%i==0){
        count++;
        break;
      }
    }
    if(count==0 && num!=1){
      sum+=num;
    }
  }
   printf("the sum of prime = %d",sum);
 }