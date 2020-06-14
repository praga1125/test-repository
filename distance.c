#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
   int i, interval, sec;
   float distance, u, a;
   clrscr();
   printf("Enter the number of intervals\n");
   scanf("%d", &interval);
   for(i = 1; i <= interval; i++){
      printf("interval: %d \n", i);
      printf("Enter the time in seconds \n");
      scanf("%d",&sec);
      printf("Enter the velocity \n");
      scanf("%f", &u);
      printf("Enter the acceleration \n");
      scanf("%f", &a);
      distance= distance + (u * sec + (a * (pow(sec, 2))) / 2);
   }
   printf("Total distance travelled is  %.2f", distance);
}