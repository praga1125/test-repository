#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
  char str[10];
  int vow=0,cons=0,i=0;
  printf("enter the string\n");
  gets(str);
  while(str[i]!='\0'){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
       str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
       vow++;
      else
      cons++;
      
      i++;
  }
  printf("number of vowels : %d\n",vow);
  printf("number of consonants : %d",cons);
}