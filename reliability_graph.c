#include <stdio.h>
#include <conio.h>
#include <math.h>
#define lambda 0.001
void main(){
  double t;
  float r;
  int i,R;
  printf("the reliability graph:\n");
  for(i=1;i<=27;++i){
  printf("--");
  }
  printf("\n");
  for(t=0;t<=3000;t+=150){
    r=exp(-lambda*t);
    R=(int)(50*r+0.5);
    printf("|");
    for(i=1;i<=R;++i){
      printf("*");
    }
    printf("#\n");
  }
  for(i=0;i<3;++i){
    printf("|\n");
  }
} 