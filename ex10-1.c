#include <stdio.h>

int main()
{
  int num;
  double dnum;

  printf("input integer:");
  scanf("%d", &num);
  printf("input number:");
  scanf("%lf", &dnum);
  printf("\nint:%d,num:%f,\n",num,dnum);

  return 0;
}
