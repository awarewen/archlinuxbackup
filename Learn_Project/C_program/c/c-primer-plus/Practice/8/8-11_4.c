/*  
 * ! 在遇到EOF之前，将输入流作为字符流读取
 *
 * &1 : 程序报告平均每个单词的字母数
 * ! 不要把空白字符统计为单词的字母，标点符号也忽略*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void){

  /*  
   * @ ch : 存储读取的字符
   * @ total_word   : 字母数量累加器
   * @ total_letter : 单词数量累加器
   * @ in_word      : bool变量， 如果ch是一个字母，
   *                  将in_word设为真，然后字母计数，
   *                  如果ch不是单词则设in_word为假， 然后将单词计数加一*/
  char ch;
  int total_word, total_letter;
  bool in_word = false;
  
  total_letter = 0;
  total_word = 0;

  while ( (ch = getchar ()) != EOF){

    if (isalpha(ch)){ // 如果ch是字母则将在单词设置为真

      in_word = true;
      if (in_word == true){/* 如果在单词中 则字符计数 */
      total_letter++;
      }
    }else{ //如果ch不是单词则 

      if (in_word == true){
        total_word++;
      }
      in_word = false;
    } 

  }

    printf("%d words has %d letters!\n", total_word, total_letter);
  return 0;
}
