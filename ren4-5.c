#include<stdio.h>

int main()
{
  int i;
  int sum = 0;
  i=1;
  while( i <= 100 ){
    sum += i; 
    printf("%5d", sum);
    i = i+1;
  }
  return 0;
}
