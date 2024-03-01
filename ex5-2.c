#include<stdio.h>

int main()
{
  int i;
  int j;

  for(j=0;j<=4;j++){
    printf("j=%d\n",j);
    for(i=0;i<3;i++){
      printf("i=%d,j=%d\n",i,j);
    }
  }
  return 0;
}
