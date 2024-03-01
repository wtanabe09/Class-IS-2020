#include <stdio.h>
int sum(int a,int b);

int main()
{
  int num;
  int a=3,b=4;
  num=sum(a,b);
  printf("%d\n",num);
  return 0;
}
int sum(int a, int b)
{
  int c;
  c=a+b;
  return c;
}
