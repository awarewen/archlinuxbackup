/* datetime: 2020-06-19
 * @Aware
 * @: balctonewascrazy@Gmail.com
 *
 * Demand:
 * 设计一个函数,chline(ch,i,j) 打印指定的字符i行j列
 * */

#include <stdio.h>

/*
 * Ch_Line: 打印指定的字符i行j列
 * @ i : 行
 * @ j : 列
 */void Ch_Line (const char *ch, const int *i, const int *j);

void Clear(void);

int main (void){

  /*
   * @ ch : 指定的字符
   * @ i  : 指定打印多少行
   * @ j  : 指定打印多少列*/
  char ch;
  int i,j;

  printf("Please enter a characte: ");
  ch = getchar ();
  Clear();

  printf("Please enter row and column: ");
  scanf (" %d %d", &i, &j);

  Ch_Line(&ch, &i, &j);

  return 0;
}

void Clear (void){

  char ch;
  while ( (ch = getchar ()) != '\n' && ch != EOF)continue;
}

void Ch_Line(const char *ch, const int *i, const int *j){

  for (int row = 0; row < *i; row++){
    for (int cln = 0; cln < *j; cln++)
      putchar(*ch);
    putchar ('\n');
  }
}
