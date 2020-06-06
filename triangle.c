#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  int a,b,c;
  float area,sp;
  printf("enter the sides of triangle\n");
  scanf("%d %d %d",&a,&b,&c);
  sp=(a+b+c)/2;
  area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
  printf("the area of the triangle is %.6f",area);
}