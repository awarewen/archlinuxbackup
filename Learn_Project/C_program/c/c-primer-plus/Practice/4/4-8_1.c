//4-8-1.c
//编写一个程序，提示用户输入名和姓，然后以:"名，姓"的格式打印出来
//
#include <stdio.h>
int main (void){


  char FristName[10];
  char LastName[10];

  printf("Please enter your Frist name: ");
  scanf(" %s", FristName);
  printf("than Enter your last name: ");
  scanf(" %s", LastName);

  printf("Hello %s,%s!\n", FristName, LastName);
  
  return 0;
}
