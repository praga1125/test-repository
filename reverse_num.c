#include <stdio.h>
#include <conio.h>
int main(){
  int num,reverse;
  printf("enter the number to reverse\n");
  scanf("%d",&num);
  reverse=reverse_num(num);
  printf("the reversed value = %d", reverse);
  }
int reverse_num(int num){
  int last_digit,reversed=0;
  while(num!=0){
    last_digit = num%10;
    reversed =reversed*10+last_digit;
    num=num/10;
  }
  return reversed;
}