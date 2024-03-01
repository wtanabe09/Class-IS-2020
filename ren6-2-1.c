#include <stdio.h>

int main()
{
  int i;
  int sum = 0;
  int avg = 0;
  int array[]={5,1,9,4,8,3,7};

  for(i=0; i<7; i++){
    sum += array[i];
  }
  avg = sum / 7;
  printf("avg=%3d\n",avg);
  return 0;
}
