#include<stdio.h>

int main()
{
  int i;
  i=1;
  while( i <= 50 ){
    if (i % 5 == 0){
      printf("%5d\n", i);
    } else {
       printf("%5d", i);
    }
      
    i = i+1;
  }
  return 0;
}
