#include <stdio.h>
#include<conio.h>
int main(){
  int a,b,ans; 
  printf("enter the input a and b\n");
  scanf("%d%d",&a,&b);
  ans= add(a,b);
  printf("the addition of num = %d \n",ans);
  ans= sub(a,b);
  printf("the subraction of num = %d \n",ans);
  ans= mul(a,b);
  printf("the mulitiplication of num = %d \n",ans);
  ans= div(a,b);
  printf("the divison of num = %d \n",ans);
  ans= mod(a,b);
  printf("the reminder of num = %d \n",ans);
  }
int add(int n,int m){
  int ans =n+m;
  return ans;
}
int sub(int n,int m){
  int ans =n-m;
  return ans;
}
int mul(int n,int m){
  int ans =n*m;
  return ans;
}
int div(int n,int m){
  int ans =n/m;
  return ans;
}
int mod(int n,int m){
  int ans =n%m;
  return ans;
}