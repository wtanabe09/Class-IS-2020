#include<stdio.h>

int main()
{
  int i;
  int sum;
  i=1;
  sum=0;
  while( i <= 100){
    sum += i; 
    i += 1;
    printf("%5d",sum);
  }
 
  return 0;
}
