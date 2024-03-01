#include <stdio.h>
double DMin(double a, double b);

int main()
{
  double num;
  double a=1.5,b=1.8;
  num=DMin(a,b);
  printf("%.1f\n",num);
  return 0;
}
double DMin(double a,double b)
{
  if(a < b){
    return a;
  } else {
    return b;
  }
}
