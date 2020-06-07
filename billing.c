#include <stdio.h>
#include<conio.h>
void main(){
 float ricePrice=35.75,sugarPrice=50.15,oilPrice=90.15;
 float a,b,c,total;
 printf("enter the quantity of items\n");
 printf("1.rice kg = ");
 scanf("%f",&a);
 printf("2.sugar kg = ");
 scanf("%f",&b);
 printf("3.oil lt = ");
 scanf("%f",&c);
 printf("*****LIST OF ITEMS*****\n");
 printf("Item\t   qty\t    Price\n");
 printf("rice\t  %6.3f\t  Rs. %6.3f\n",a,ricePrice*a);
 printf("sugar\t %6.3f\t  Rs. %6.3f\n",b,sugarPrice*b);
 printf("oil\t   %6.3f\t  Rs. %6.3f\n",c,oilPrice*c);
 total=ricePrice*a+sugarPrice*b+oilPrice*c;
 printf("----------------------------\n");
 printf("            total = %6.3f",total);
 }