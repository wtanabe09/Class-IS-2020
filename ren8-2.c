#include <stdio.h>
void ntwice(int *pa);
int main()
{
  int a;
  int *pa;

  a=10;
  pa=&a;
  
  printf("%d -> ",a);
  ntwice(&a);
  printf("%d \n",a);
  
  return 0;
}

void ntwice(int *pa)
{
  *pa = *pa * 2;
  return;
}


//  pa == &a
// *pa ==  a


