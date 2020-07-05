#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
  int i,j,len,temp;
  char str[15];
  char reverse[15];
  printf("enter the string\n");
  scanf("%s",str);
  len=strlen(str);
  for(i=len-1,j=0;i>=0;i--,j++){
    reverse[j]=str[i];
  }
  reverse[j]='\0';
  temp=strcmp(str, reverse);
   if(temp == 0){
    printf("the %s  is palindrome string", reverse);
    }
    else{
      printf("the %s  is not a palindrome string", str);
    }
}