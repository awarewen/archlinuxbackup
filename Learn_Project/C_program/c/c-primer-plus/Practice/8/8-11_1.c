//count file character number
//
#include <stdio.h>
#include <ctype.h>

int main (void){

  /*  
   * @ ch : 存储输入的字符
   * @ count : 累加器，计算程序总共输入了多少字符*/
  char ch ;
  int count = 0;

  while ((ch = getchar ()) != EOF){

    if (isgraph(ch))/* 判断输入是否为可打印字符, 如果是则累加 */
    count ++;
  }

  printf("\n you are enter %d characters \n", count);
  return 0;
}
