#include <stdio.h>
#include <conio.h>
int main(){
  int n1,n2,ans;
  printf("enter the values for GCD\n");
  scanf("%d %d",&n1,&n2);
 ans = common_divisor(n1,n2);
  printf("the value of greatest common divisor = %d",ans);
}
int common_divisor(int n1,int n2){
  if(n1>n2){
    n1=n1-n2;
  }
  if(n2>n1){
  n2=n2-n1;  
  }
  return n2;
}