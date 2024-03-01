#include <stdio.h>
void dtwice(double *pa);
int main()
{
  double a;
  double *pa;

  a=10.5;
  pa=&a;
  
  printf("%3.2f -> ",a);
  dtwice(&a);
  printf("%3.2f \n",a);
  
  return 0;
}

void dtwice(double *pa)
{
  *pa = *pa * 2;
}
