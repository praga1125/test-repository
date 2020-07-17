#include <stdio.h>
#include <conio.h>
int main(){
  int a,b,operator,ans;
  printf("enter two numbers for operation\n");
  scanf("%d %d",&a,&b);
  printf("enter the choice \n");
  printf("1.addition\n");
  printf("2.subraction\n");
  printf("3.multiplication\n");
  printf("4.division\n");
  scanf("%d",&operator);
  switch(operator) {
    case 1:
      ans=addition(a,b);
      printf("the sum of numbers: %d",ans);
      break;
    case 2:
      ans=subraction(a,b);
      printf("the difference of numbers: %d",ans);
      break;
    case 3:
      ans=multiplication(a,b);
      printf("the product of numbers: %d",ans);
      break;
    case 4:
      ans=division(a,b);
      printf("the division of numbers: %d",ans);
      break;
  }
}
int addition(int a,int b){
  int sum;
  sum=a+b;
  return sum;
}
int subraction(int a,int b){
  int diff;
  diff=a-b;
  return diff;
}
int multiplication(int a,int b){
  int product;
  product=a*b;
  return product;
}
int division(int a,int b){
  int value;
  value=a+b;
  return value;
}