#include<stdio.h>

int main()
{
  int i;
  int sum1;
  int sum2;

  for(i=1;i<=100;i++){
    if(i%2==0){
      sum1 += i;
    }else{
      sum2 += i;
    }
  }
  printf("偶数の和：%2d\n",sum1);
  printf("奇数の和：%2d\n",sum2);
  
  return 0;
}
