#include <stdio.h>
int g_num;
void sum(int a,int b);

int main()
{
  int a=3,b=4;
  sum(a,b);
  printf("%d\n",g_num);
  return 0;
}
void sum(int a,int b)
{
  g_num = a+b;
  return;
}
    
