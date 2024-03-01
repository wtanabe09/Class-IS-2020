#include<stdio.h>

int main()
{
  int a, b, c;

  a = 78;
  b = 78;
  c = 78;

  if((a=b)&&(a=c)){
    printf("すべて等しい\n");
  }
  return 0;
}
