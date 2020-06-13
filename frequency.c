#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  float l, frequency, r, c;       //c for capacitance...
  clrscr();
  printf("enter the inductance :\n");
  scanf("%f",&l);
  printf("enter the resistance :\n");
  scanf("%f",&r);
  for(c=0.01;c<=0.1;c+=0.01){
  frequency =sqrt((1/(l*c))-((r*r)/(4*c*c)));    //formula for frequency
  printf("the frequency is %f\n",frequency);
  }
}