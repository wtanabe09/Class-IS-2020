#include <stdio.h>

int main()
{
  int i;
  int arA[10];
  
  for(i=0; i<10; i++){
    arA[0] = 1;
    arA[i] = arA[i-1]*2;
  }
  for(i=0; i<10; i++){
    printf("arA[%d]=%2d\n",i,arA[i]);
  }
  return 0;
}
