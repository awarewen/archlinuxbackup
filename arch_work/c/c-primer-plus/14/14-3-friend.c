// 14-3-friend.c
// 嵌套结构体
//
#include <stdio.h>

#define LEN 20

char *msgs[5] = {

  "   Thank you for the wonderful evening, ",
  "You certainly prove that a ",
  "is a special kind of guy. We must get together",
  "over have a few laughs"
};

struct names {

  char first[LEN];
  char last[LEN];
};

struct guy {

  struct names handle;
  char favfood[LEN];
  char job[LEN];
  float income;
};

int main(void){

  struct guy fellow = {

    {"Ewen", "Villard"},
    "grilled salmon",
    "personality coach",
    68112.00
  };

  printf("Dear %s, \n\n", fellow.handle.first);
  printf("%s%s.\n", msgs[0], fellow.handle.first);
  printf("%s%s\n", msgs[1], fellow.job);
  printf("%s\n", msgs[2]);
  printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
  if (fellow.income > 150000.0)
    puts ("!!");
  else if (fellow.income > 75000.0)
    puts ("!");
  else
    puts (".");

  printf("\n%40s%s\n", " ", "see you soon");
  printf("%40s%s\n", " ", "Shalala");

  return 0;
}
