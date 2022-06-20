//统计单词中的字符数量标点数量，空格不计
//
#include <stdio.h>

int count(char *ptr);

enum new{is_char, is_punct}; //枚举

int main (void){

  /*
   * @ ch : 存储字符输入
   * @ cnt_ch : 字母计数
   * @ cnt_pnt: 标点计数*/
  char ch;
  int cnt_ch = 0, cnt_pnt = 0;

  while ((ch = getchar ()) != EOF){

    if (count (&ch) == is_char)
      cnt_ch++;
    else if (count (&ch) == is_punct)
      cnt_pnt++;
    }  

  printf(" char has %d, punct has %d\n", cnt_ch, cnt_pnt); 
  return 0;
}

int count (char *ch){

  if ( (*ch >= 'A' && *ch <= 'Z') || (*ch >= 'a' && *ch <= 'z') )
    return is_char;
  if ( (*ch < '0' || *ch > '9') &&/* 不计入换行和空格 */
       (*ch < 'A' || *ch > 'Z') &&
       (*ch < 'a' || *ch > 'z') && 
       (*ch != '\n' && *ch != ' ') )
    return is_punct;
  else return -1;
}
