#include<stdio.h>

int main()
{
  int i;

  i=1;
  for(i=1;i<=50;i++){
    if(i % 5 == 0){
      printf("%5d\n",i);
    } else {
       printf("%5d",i);
    }
  }
  
  return 0;
}
