#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{ 
  char n;
  char str[] ="hel lo";
  printf("enter the character ");
  scanf("%c",&n);
  if(isalpha(n) > 0){
    printf("the character is letter\n");
    printf("%s%s", isupper(n) ? "this is a " : "this is not a ", "uppercase letter\n");
    printf("%s%s", islower(n) ? "this is a " : "this is not a ", "lowercase letter\n");
    printf("%s%s", isspace(str) ? "this is contain " : "this is not contain ", "white space");
    }
    else if(isdigit(n)>0){
      printf("the character is a digit\n ");
    }  
}