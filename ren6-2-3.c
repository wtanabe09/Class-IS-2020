#include <stdio.h>

int main()
{
  int i;
  int min = 999;
  int array[]={5,1,9,4,8,3,7};

  for(i=0; i<7; i++){
    if(min > array[i]){
      min = array[i];
    }
  }
  printf("min=%3d\n",min);
  return 0;
}
