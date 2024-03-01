#include <stdio.h>
int maxarray(int *ary, int size);

int main()
{
  int max;
  int array[] = {3, 1, 4, 5};

  max=maxarray(array, 4);
  printf("max=%d\n",max);
  return 0;
}

int maxarray(int *ary, int size)
{
  int i, max=0;
  for(i=0;i<size;i++){
    if(ary[i] > max){
      max = ary[i];
    }
  }
  return max;
}
