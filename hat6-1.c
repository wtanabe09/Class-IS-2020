#include <stdio.h>

int main()
{
  int i;
  int max = 0;
  int s_max = 0;
  int array[]={5,1,9,4,8,3,7};

  for(i=0; i<7; i++){
    if(max < array[i]){
      max = array[i];
    }
    if(s_max < max && s_max > array[i]){
      s_max = array[i];
    }
  }
  printf("s_max=%3d\n",s_max);
  return 0;
}
