// 7-5.c
// 使用switch 重写7-4
//
#include <stdio.h>

#define STOP '#'

int main (void){

  char ch;

  while ( (ch = getchar ()) != STOP){

    switch (ch){

      case '.':
        ch = '!';
      case '!':
        printf("!");
        break;
    }
    printf("%c", ch);
  }

  return 0;
}
