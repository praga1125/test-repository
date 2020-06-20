#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
  float amount;
  int choice;
  printf("choose the currency to convert in indian currency\n");
  printf("1.Euro\n");
  printf("2.dollers\n");
  printf("3.yuan\n");
  printf ("4.dinar\n");
  scanf("%d",&choice);
  printf("enter the Amount to convert\n");
  scanf("%f",&amount);
       switch(choice){
         case 1:
      printf("the amonut of %6.2f in INR",amount*56.19);
        break;
        case 2:
      printf("the amonut of %6.2f in INR",amount*76.25);
         break;
        case 3:
      printf("the amonut of %6.2f in INR",amount*10.78);
         break;
        case 4:
      printf("the amonut of %6.2f in INR",amount*246.96);
         break;
        default:
      printf("check the currency");
        break;
      }
   }
    