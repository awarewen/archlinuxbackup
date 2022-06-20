//11-19_join_chk.c
//拼接两个字符串,并检查第一个数组大小
//
#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

char * s_gets (char *, int);

int main (void){

  char flower [SIZE];
  char addon [] = "s smell like old shoes.";
  char bug [BUGSIZE];
  int available;

  puts ("What is your faborite flower?");
  s_gets (flower, SIZE);
  if ((strlen (addon) + strlen (flower) + 1 <= SIZE))
    strcat (flower, addon);
  puts (flower);
  puts ("What is your favorite bug?");

  s_gets (bug, BUGSIZE);
  available = BUGSIZE - strlen (bug) - 1;
  strncat (bug, addon, available);
  puts (bug);

  return 0;
}

char * s_gets (char * st, int n){

  char * ret_val;
  int i = 0;

  ret_val = fgets (st, n, stdin);

  if (ret_val){

    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st [i] = '\0';
    else
      while (getchar () != '\n')
        continue;
  }

  return ret_val;
}
