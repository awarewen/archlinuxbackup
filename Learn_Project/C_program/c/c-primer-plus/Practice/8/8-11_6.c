/*  
 * 返回读取的第一个字符*/

#include <stdio.h>

char Get_First(void);

int main (void){

  char first_ch;

  first_ch = Get_First();

  printf("first char is %c \n", first_ch);

  return 0;
}

char Get_First(void){
  char ch;
  ch = getchar (); 
  while ( (ch = getchar ()) == ' ' || ch == '\n')continue;
  while ( getchar () != '\n')continue;
  return ch;
}

