#include<stdio.h>

int main()
{
  int score=80;
  
  if (score >= 95){
    printf("AA\n");
  }else if(score >= 90){
    printf("A\n");
  }else if(score >= 80){
    printf("B\n");
  }else if(score >= 60){
    printf("C\n");
  }else{
    printf("F\n");
  }
    
  return 0;
}
