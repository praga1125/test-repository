#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x1,x2,y1,y2;
 float distance;
 printf("enter four co-ordinates for the distance equation\n");
 scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
 distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 printf("the distance between two points = %f",distance);
 ;
}