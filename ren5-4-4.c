#include<stdio.h>

int main()
{
  int i;
  int j;

  for(j=12; j>=0; j-=4){
    for(i=j; i<=j+6; i+=2){
      printf("%2d",i);
    }
    printf("\n");
  }
  
  return 0;
}
