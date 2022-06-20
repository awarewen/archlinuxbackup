//14-4-friends.c
//指向结构体的指针
//
#include <stdio.h>

#define LEN 20

struct names {

  char first[LEN];
  char last [LEN];
};

struct guy {

  struct names handle; //嵌套在guy中的names结构handle
  char favfood[LEN];
  char job[LEN];
  float income;
};

int main (void){

  struct guy fellow[2] = {

    {
     {"Ewen", "Villard"},
     "grilled salmin", 
     "personality coach",
     68122.00
    },{

     {"Rodney", "Swillbelly"},
     "tripe",
     "tabloid editor",
     432400.00
    }
};

struct guy * him; 

printf("address #1: %p  #2: %p\n", &fellow[0], &fellow[1]);

him = &fellow[0]; //== him = fellow;
printf("pointer #1: %p #2: %p\n", him, him+1);  // +1指向下一个结构
printf("him-income is :$%.2f, (*him).income.lasr is :$%.2f\n",/*fellow[0].income*/ him->income, (*him).income);
him++; //指向下一个guy结构元素felllow[1]
printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);

  return 0;
}

