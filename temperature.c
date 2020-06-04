#include <stdio.h>
#include<conio.h>
void main()
{
    float celsius, fahrenheit;
    int n;
    printf("enter the number to select the temperature to convert\n");
    printf("1.celsius\n");
    printf("2.fahrenheit\n");
    scanf("%d",&n);
    if(n==1){
    printf("Enter temperature in Celsius \n ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    }
    else if(n==2){
    printf("Enter temperature in Fahrenheit \n ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    }
    else{
      printf("check the number");
    }
}