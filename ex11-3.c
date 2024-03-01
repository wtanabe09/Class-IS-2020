#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
  int num;
  if(argc != 2){
    printf("usage: %s number\n", argv[0]);
    return 0;
  }
  num = atoi(argv[1]);

  switch(num%3){
  case 0:
    printf("%dは３のばいすうです",num);
    break;
  case 1:
    printf("%dを3で割ったあまりは1です",num);
    break;
  case 2:
    printf("%dを3で割ったあまりは2です",num);
    break;
  }

  return 0;
}
