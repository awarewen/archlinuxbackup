// 6-16_6.c
// 打印一个表格
// 每行表格打印一个整数，该数的平方，该数的立方
// 要求用户输入表格的上下限
// 只使用一个循环
#include <stdio.h>
#define SEPARATOR "----------"

int main (void){

  int upper_limit, lower_limit;

  //提示输入
  printf("Please enter the upper limit and lower limit: ");
  scanf (" %d %d", &upper_limit, &lower_limit);
  //
  //打印表头
  printf("| %-8s | %-8s | %8s |\n", "integer", "square", "cube");
  printf("|%10s+%10s+%10s|\n",
        SEPARATOR, SEPARATOR, SEPARATOR);

  //打印从下限到上限的所有数的平方和立方
  for (int i = lower_limit; i <= upper_limit; i++){

    printf("| %5d    | %5d    | %5d    |\n",
        i,  //-整数
        i*i, //-平方
        i*i*i //-立方
            );

    printf("|%10s+%10s+%10s|\n",
        SEPARATOR, SEPARATOR, SEPARATOR);
  }
  printf("\nDONE!\n");

  return 0;
}
