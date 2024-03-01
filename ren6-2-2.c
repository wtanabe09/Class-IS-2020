#include <stdio.h>

int main()
{
  int i;
  int max = 0;
  int array[]={5,1,9,4,8,3,7};

  for(i=0; i<7; i++){
    if(max < array[i]){
      max = array[i];
    }
  }
  printf("max=%3d\n",max);
  return 0;
}
