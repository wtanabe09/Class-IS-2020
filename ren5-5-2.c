#include<stdio.h>

int main()
{
  int i;
  int j;

  for(j=0; j<=12; j+=4){
    for(i=j; i<=j+3; i+=1){
      if(i == 6){
	break;
      }
      printf("%2d",i);
    }
    printf("\n");
  }
  
  return 0;
}
