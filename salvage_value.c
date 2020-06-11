#include <stdio.h>
#include<conio.h>
void main()
{
  float slv,dep,pv;
  int years;
  printf("enter the purchase value\n");
  scanf("%f",&pv);
  printf("enter the depreciation\n");
  scanf("%f",&dep);
  printf("enter the year of service\n");
  scanf("%d",&years);
  slv=pv-(years*dep);
  printf("the salvage value is =%6.3f\n",slv);
}