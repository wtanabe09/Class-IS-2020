#include <stdio.h>
int num; //グローバル変数
void sum(int a,int b);

int main()
{
  int num; //グローバル変数と同じな前の変数
  int a=3,b=4;
  num=11; //どちらが使われる？？
  sum(a,b); //グローバル変数のしよう
  printf("%d\n",num); //どちらが使われる??
  return 0;
}
void sum(int a,int b)
{
  num = a+b; //
  return;
}
    
