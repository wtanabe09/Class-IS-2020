#include <stdio.h>

int main()
{
  int country_code[2];
  int area_code[3];
  int city_code[2];
  int directory_number[4];
  
  printf("Input your telephone number:");
  scanf("%d%d%d%d\n",country_code,area_code,city_code,directory_number);
  int num[32];
  num += country_code;
  num += area_code;
  num += city_code;
  num += directory_number;
  printf("OUT:%s\n",num);
  return 0;
}


//むりでしたー
