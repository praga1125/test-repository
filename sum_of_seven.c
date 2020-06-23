#include <stdio.h>
#include <conio.h>
void main(){
  int sum,i;
  sum=0;
  for(i=100;i<200;i++){
    if(i%7 == 0){
      sum+=i;
    }
  }
  printf("the sum of seven between 100 to 200 = %d",sum);
}