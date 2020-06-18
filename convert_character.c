#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main(){ 
  char alphabet;
  printf("enter the character to convert\n");
  alphabet=getchar();
  if(islower(alphabet)){
    printf("the uppercase of the character %c \n",toupper(alphabet));
  }
  else{
    printf("the lowercase of the character %c \n",tolower(alphabet));
  }
}