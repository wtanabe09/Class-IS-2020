#include<stdio.h>

int main()
{
  int i;

  i=100;
  while( i >= 1){
    printf("%5d", i);
    i -= 1;
  }
  return 0;
}
