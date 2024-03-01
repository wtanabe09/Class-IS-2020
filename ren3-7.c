#include<stdio.h>

int main()
{
  int a, b, c;

  a = 10;
  b = 15;
  c = 5;
  

  if((a>b)&&(a>c)){
    printf("a%4d\n", a);
  }else if((b>a)&&(b>c)){
    printf("b%4d\n", b);
  }else if((c>a)&&(c>b)){
    printf("c%4d\n", c);
  }
  return 0;
}
