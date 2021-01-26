/* 
 **在遇到EOF之前将所有的输入作为字符流读取
 **打印每个字符对应的ASCLL码
 **空格前的字符为非打印字符，换行符打印\n 制表符打印\t
 * */

#include <stdio.h>

int main (void){

  char ch;

  printf("\t-ASCLL-\n");
  for (int i = 0; ((ch = getchar ()) != EOF); i++){

    if ( i%4 == 0)
      printf("\n");
    if (ch == '\n')
      printf("'\\n'-%d-%0x | ", ch, ch);
    else if (ch == '\t')
      printf("'\\t'-%d-%0x | ", ch, ch);
    else if (ch != '\n')
    printf("%c-%d-%x | ", ch, ch, ch);

  }
  return 0;
}
