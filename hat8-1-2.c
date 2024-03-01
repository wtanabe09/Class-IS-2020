#include <stdio.h>
void encrypt2(char *pc);
int main()
{
  char c;
  char *pc;

  c="a";
  pc=&c;
  
  printf("%c -> ",c);
  dtwice(&c);
  printf("%c \n",c);
  
  return 0;
}

void encript2(char *pc)
{
  *pc = *pc + 2;
}
