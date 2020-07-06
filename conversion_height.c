#include <stdio.h>
#include <conio.h>
void main(){
  float n,feet,inch;
  printf("enter the type of conversion in height\n");
  printf("1.feet to inch\n");
  printf("2.inch to feet\n");
  printf("----------------\n");
  scanf("%f",&n);
  if(n == 1){
    printf("enter the height in feet\n");
    scanf("%f",&feet);
    inch=feet*12;
    printf("the height in inch = %6.2f ",inch);
  }
  else if(n == 2){
    printf("enter the height in inch\n");
    scanf("%f",&inch);
    feet=inch*12;
    printf("the height in feet = %6.2f ",feet);
  }
  else{
    printf("check the choice \n");
  }
}