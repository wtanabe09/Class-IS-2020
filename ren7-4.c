#include <stdio.h>
int cm2inch(double a);

int main()
{
  int num;
  double a=6;
  num=cm2inch(a);
  printf("%dinch\n",num);
  return 0;
}
int cm2inch(double a)
{
  int inch;
  inch= a / 2.54;
  return inch;
}
