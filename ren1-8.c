#include <stdio.h>
int main()
{
  int a,b;
  a = 3;
  b = 5;
  
  int x;
  x = a;
  a = b;
  b = x;
  
  printf("a=%d,b=%d\n",a,b);
  
  return 0;
}
