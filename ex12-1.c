#include <stdio.h>
int main(int argc, char *argv[])
{
  int i;
  for(i=0; i<argc; i++){
    printf("%2d:%s(%p)\n", i, argv[i], argv[i]);
  }
  return 0;
}
      
