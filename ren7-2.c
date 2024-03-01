#include <stdio.h>
int NMax3(int a,int b,int c);

int main()
{
  int num;
  int a=8,b=4,c=1;
  num=NMax3(a,b,c);
  printf("%d\n",num);
  return 0;
}
int NMax3(int a, int b, int c)
{
  if(a > b && a > c){
    return a;
  } else if(b > c) {
    return b;
  } else {
    return c;
  }
}
