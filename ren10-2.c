#include <stdio.h>

int main()
{
  double a;
  double b;
  double div;

  printf("input integer:");
  scanf("%lf", &a);
  printf("input number:");
  scanf("%lf", &b);
  div = a / b;
  printf("%.1f / %.1f = %.1f\n",a,b,div);

  return 0;
}
