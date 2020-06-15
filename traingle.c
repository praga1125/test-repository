#include <stdio.h>
#include<conio.h>
void main(){
    int side1, side2, side3;
    printf("enter three sides of triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1==side2 && side2==side3){
        printf("it is Equilateral triangle");
    }
    else if(side1==side2 || side1==side3 || side2==side3){
        printf("it is Isosceles triangle");
    }
    else{
        printf("it is Scalene triangle");
    }
}