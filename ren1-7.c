#include <stdio.h>
int main()
{
  int a,b;
  a = 1;
  b = 2;
  int c = a + b;
  int d = b + c;
  int e = c + d;
  int f = d + e;
  int g = e + f;
  int h = f + g;
  int i = g + h;
  int j = h + i;

  printf("%d\n%c\n",j,j);
  
  return 0;
}
