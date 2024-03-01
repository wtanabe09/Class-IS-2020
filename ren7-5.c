
#include <stdio.h>
int getn(){int x;fflush(stdout);scanf("%d",&x);return x;}

int factorial(int a,int b)
{
  if(a > b){
    return (a * factorial(a-1));
  } else {
    return 1;
  }
}
int main()
{
  int n, a, b;
  printf("a = ");
  a = getn();
  printf("b = ");
  b = getn();
  n = factorial(a,b);
  printf("a^b= %d\n",n);
  return 0;
}
