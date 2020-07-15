#include <stdio.h>
#include <conio.h>
int main(){
  int n, i = 0, c;
  printf("enter the limit to fibonacci series \n");
  scanf("%d", &n);
  printf("fibonacci series terms are: \n");
  for (c = 1; c <= n; c++)
 {
    printf("%d\n", fabi(i));
    i++;
  }
  return 0;
}

int fabi(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fabi(n-1) + fabi(n-2));
}
