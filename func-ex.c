#include <stdio.h>
int sum(int a, int b);

int main()
{
  int num;
  int x=3,y=4;

  num = sum(x,y);
  printf("In main'x=%d(%p),y=(%p)\n",x,&x,y,&y,num,&num);

  return 0;
}

int sum(int a, int b)
{
  int c;
  c = a + b;
  printf("In sum :a=%d(%p),b=(%p),c=%d(%p)\n", a,&a,b,&b,c,&c);
  return c;
}
