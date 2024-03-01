#include <stdio.h>
int minarray(int *ary, int size);

int main()
{
  int min;
  int array[] = {3, 1, 4, 5};

  min=minarray(array, 4);
  printf("min=%d\n",min);
  return 0;
}

int minarray(int *ary, int size)
{
  int i;
  int min=100;
  for(i=0;i<size;i++){
    if(ary[i] < min){
      min = ary[i];
    }
  }
  return min;
}
