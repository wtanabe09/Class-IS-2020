#include<stdio.h>

int main()
{
  int i;

  i=1;
  do{
    printf("%5d", i);
    i = i+1;
  }while( i <= 50 );
  return 0;
}
