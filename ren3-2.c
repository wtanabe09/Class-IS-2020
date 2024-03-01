#include<stdio.h>

int main()
{
  int a, b;

  a = 56;
  b = 32;

  if(a > b){
    printf("a=%4dとb=%4dでは%4dの方が大きい\n",a,b,a);
  }
  return 0;
}
