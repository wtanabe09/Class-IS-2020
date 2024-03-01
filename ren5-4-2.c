#include<stdio.h>

int main()
{
  int i;
  int j;

  for(j=3; j<=15; j+=4){
    for(i=j; i>=j-3; i--){
      printf("%2d",i);
    }
    printf("\n");
  }
  
  return 0;
}
