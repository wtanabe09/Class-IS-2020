#include <stdio.h>
#include <string.h>

struct healthTag{
  int ID;
  char sei[64];
  char mei[64];
  char gen[64];
  int len;
  int wei;
  char blo[64];
};

void print_health(struct healthTag health);

int main()
{
  struct healthTag health;

  health.ID = 1;
  strcpy(health.sei, "Taro");
  strcpy(health.mei, "Kochi");
  strcpy(health.gen, "m");
  health.len = 180;
  health.wei = 70;
  strcpy(health.blo, "A");

  printf("*** health1 ***\n");
  print_health(health);

  return 0;
}

void print_health(struct healthTag health)
{
  printf("身長・体重 :%d・%d\n", health.len,health.wei);
  printf("性別 :%s\n", health.gen );
  printf("血液型 :%s\n", health.blo);
}
