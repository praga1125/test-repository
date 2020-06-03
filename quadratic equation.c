#include <stdio.h>
#include<conio.h>
#include<math.h>
void main(){
  int a,b,c,d;
  float ans1,ans2;
  printf("enter the input a , b , c\n");
  scanf("%d %d %d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d==0){
     printf("the roots are same\n");
     ans1=-b/(2.0*a);
     ans2=ans1;
     printf("First  Root Root1= %f\n",ans1);
     printf("Second Root Root2= %f\n",ans2);
   }
   else if(d>0){
	   printf("Both roots are real and different\n");
	   ans1=(-b+sqrt(d))/(2*a);
	   ans2=(-b-sqrt(d))/(2*a);
	   printf("First  Root Root1= %f\n",ans1);
	   printf("Second Root root2= %f\n",ans2);
	}
	else
	    printf("Root are imaginary\n");

  }