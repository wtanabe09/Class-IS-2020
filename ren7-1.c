#include <stdio.h>
int NMax(int a,int b);

int main()
{
  int num;
  int a=3,b=4;
  num=NMax(a,b);
  printf("%d\n",num);
  return 0;
}
int NMax(int a, int b)
{
  if(a > b){
    return a;
  } else {
    return b;
  }
}
