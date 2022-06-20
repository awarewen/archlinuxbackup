//11-16_put_put.c
//创建两个自定义的输出函数
//
#include <stdio.h>

void put1 (const char *);
int put2 (const char *);

int main (void){

  put1 ("If I'd as mich money");
  put1 (" as I could spend,\n");
  printf("I count %d characters.\n",
      put2 ("I never would cry old chairs to mend.")); //put2返回输出的字符数

  return 0;
}

void put1 (const char * string){ //输出字符串，但不会自动添加\n

  while (*string)
    putchar(* string++);
}

int put2 (const char * string){    //函数返回输出字符串的数量 并自动添加换行符\n

  int count = 0;
  while (*string){
    putchar (* string++);
      count++;
  }
  putchar('\n');
  return count;
}
