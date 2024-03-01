#include<stdio.h>

int main()
{
  int i;
  int j;

  for(j=0; j<=12; j+=4){
    if(j == 8){
      continue;
    }
    for(i=j; i<=j+3; i+=1){
      printf("%2d",i);
    }
    printf("\n");
  }
  
  return 0;
}
