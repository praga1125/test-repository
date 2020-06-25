#include <stdio.h>
#include <conio.h>
void main(){
  int mark[5],i,j;
  char name[5][10];
  printf("enter five students name and mark \n");
  for(i=0;i<5;i++){
    scanf("%s %d",&name[i],&mark[i]);
  }
  for(j=0;j<5;j++){
    if(mark[j]>80){
      printf("%s is the obtained %d marks passed in first clas\n",name[j],mark[j]);
    }
    else if(mark[j]>60){
      printf("%s is the obtained %d marks passed in second class\n",name[j],mark[j]);
    }
    else if(mark[j]>40){
      printf("%s is the obtained %d marks passed in third class\n",name[j],mark[j]);
    }
    else if(mark[j]<40){
      printf("%s is the obtained %d marks in failed\n",name[j],mark[j]);
    }
    else {
      printf("check the value\n");
    }
  }
}