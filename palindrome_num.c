#include <stdio.h>
#include <conio.h>
void main(){
  int num,ans;
  printf("enter the number:\n");
  scanf("%d",&num);
  ans=palindrome(num);
  if(num==ans){
    printf("this number is palindrome\n");
  }
  else{
    printf("this is not a palindrome\n");
  }
}
int palindrome(int num){
  int last_digits,temp=0;
  while(num!=0){
  last_digits=num%10;
  temp=temp*10+last_digits;
  num=num/10;
  }
  return temp;
}