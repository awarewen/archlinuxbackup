// 6-16-3.c
//使用嵌套循环，按正三角打印每行以F开头的序列共6行
//

#include <stdio.h>

//the frist char
#define STA_CHAR 'F'
#define STA_CHAR_OPN 
#define STA_CHAR_NUM 5
//row STATUS
#define STA_ROW 0
#define STA_ROW_NUM 5
#define STA_ROW_RLN >=
#define STA_ROW_OPN --
//column STATUS
#define STA_CLM_RLN >=
#define STA_CLM_OPN --

int main (void){

  char row,column;

  //首先正三角序列，使用2个for嵌套循环,并且每行的字母以F开头的值开始递减1
  // row = 'F'; row < 'F' + 6; row --
  for (row = STA_CHAR; row STA_ROW_RLN STA_CHAR - STA_CHAR_NUM; row STA_ROW_OPN){
    //column = 'F'; column >= 'F' + 6; column --
    for (column = STA_CHAR; column STA_CLM_RLN row; column STA_CLM_OPN)
      printf("%c", column);
    printf("\n");
  }

  return 0;
}
