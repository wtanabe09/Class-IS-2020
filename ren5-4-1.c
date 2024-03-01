#include<stdio.h>

int main()
{
  int i;
  int j;

  for(j=0; j<=12; j+=4){
    for(i=0; i<=3; i++){
      printf("%2d",i+j);
    }
    printf("\n");
  }
  
  return 0;
}
