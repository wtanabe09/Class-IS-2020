#include<stdio.h>

int main()
{
  int i;
  int sum;

  for(i=1;i<=100;i++){
    sum += i;
  }
  printf("%5d",sum);
  return 0;
}
