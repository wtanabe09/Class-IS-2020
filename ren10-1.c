#include <stdio.h>

int main()
{
  int a;
  int b;
  int sum;

  printf("input integer:");
  scanf("%d", &a);
  printf("input number:");
  scanf("%d", &b);
  sum = a + b;
  printf("%d + %d = %d\n",a,b,sum);

  return 0;
}
