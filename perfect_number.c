#include <stdio.h>
#include <conio.h>
int main(){
  int num,ans;
  printf("enter the number to check\n");
  scanf("%d",&num);
  ans=check_num(num);
  if(ans == 1){
    printf("this is perfect number\n");
  }
  else{
    printf("this is not a perfect number");
  }
}
int check_num(int num){
  int i,sum=0;
  for(i=1;i<=num/2;i++){
    if(num%i==0){
      sum+=i;
      }
    }
    if(sum == num){
      return 1;
    }
    else{
      return 0;
    }
}