#include <stdio.h>
int main()
{
  int a, b;
  int *pa, *pb;

  a=10; b=20;
  pa=&b; pb=&a;
  *pa=100; *pb=75;
  printf("a's addr:%p, b's addr: %p\n",&a,&b);
  printf("a's value:%13d, b's vlue: %13d\n",a,b);
  printf("pa's addr:%p, pb's addr: %p\n",&a,&b);
  printf("pa's value:%p, pb's vlue: %pd\n",pa,pb);
  return 0;
}
