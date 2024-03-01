#include<stdio.h>

int main()
{
  int a;
  int b;
  a=3;
  b=2;
  if(a > b){
    printf("a=%4dとb=%4dでは、aの方が大きい\n", a, b);
  } else {
    printf("a=%4dとb=%4dでは、bの方が大きいか等しい\n", a, b);
  }
  return 0;
}
