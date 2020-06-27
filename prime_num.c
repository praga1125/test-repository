#include <stdio.h>
#include <conio.h>
void main(){
  int num,i,n,ans,count=0;
  printf("enter the number of prime values\n");
  scanf("%d",&num);
  for(n=1;n<=num;n++){
    ans=0;
    for(i<2;i<=n/2;i++){
      if(n%2 == 0){
        ans++;
        break;
      }
    }
  if(ans==0 && n!=1){
    count++;
  }
  }
  printf("the count of prime number = %d ",count);
}