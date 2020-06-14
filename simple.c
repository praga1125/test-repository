#include <stdio.h>
#include<conio.h>
void main()
{
 int num[]={8,0,5,6,7,5};
 int sum,i,j,size, average,high,low;
 size=sizeof(num)/sizeof(int);
 sum=0;
 high=num[0];
 low=num[0];
 for(i=0;i<size;i++){
   sum+=num[i];
   if(high<num[i]){
     high=num[i];
   }
   if(num[i]<low){
     low=num[i];
   }
 }
 average=sum/size;
 printf(" the sum of numbers = %d\n",sum);
 printf(" the average of sum numbers = %d\n",average);
 printf(" the largest of numbers = %d\n",high);
 printf(" the smallest of numbers = %d\n",low);
}