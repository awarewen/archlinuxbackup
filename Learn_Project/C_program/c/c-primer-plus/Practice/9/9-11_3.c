/*
 * 2020-06-19 23:39
 * @Aware
 *
 * Demand:
 * 编写一个接受三个参数的函数
 * 第一个参数接受一个字符
 * 第二个参数为整数类型，指定一行中打印多少个字符
 * 第三个参数为整数类型，指定打印多少行*/
#include <stdio.h>

/*
 * Print_Ch : 指定打印print_num个字符共打印row行
 */void Print_Ch (char *ch, int *print_num, int *row);

int main (void){

  char ch;
  int print_num, row;

  printf("Please enter a cahracte: ");
  scanf (" %c", &ch);
  printf("Enter row and how many char in one row: ");
  scanf (" %d %d", &row, &print_num);

  Print_Ch(&ch, &print_num, &row);
  return 0;
}

void Print_Ch(char *ch, int *print_num, int *row){

  for (int i = 0; i < *row; i++){
    for (int j = 0; j < *print_num; j++)
      putchar (*ch);
    putchar ('\n');
  }
}

