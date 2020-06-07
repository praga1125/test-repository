#include <stdio.h>
#include<conio.h>
#include<math.h>
#define pie 3.14
void main(){ 
  int x1,y1,x2,y2; //y1 and y2 are origins of the cirle
  clrscr();
  float area,circum,radius;
  printf("enter the co-ordinates of circle \n");
  scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
  radius=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
  area=pie*radius*radius;
  circum=2*pie*radius;
  printf("the area of the circle = %f\n",area);
  printf("the circumference of the circle = %f",circum);
}