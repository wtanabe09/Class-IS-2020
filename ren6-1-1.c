#include <stdio.h>

int main()
{
  int i;
  int arA[10];

  for(i=0; i<10; i++){
    arA[i] = i*2+1;
  }
  for(i=0; i<10; i++){
    printf("arA[%d]=%2d\n",i,arA[i]);
  }
  return 0;
}
