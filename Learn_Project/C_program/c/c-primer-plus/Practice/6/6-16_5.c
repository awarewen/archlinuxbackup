// 6-16-5.c
// 编写一个程序，以正三角打印字母
//
#include <stdio.h>

int main(void){
//用户输入行数

  char ch;
  char row, column, clm_ch, spa;
  //提示用户输入
  printf("Please enter an char:");
  scanf(" %c", &ch);

  for (row = 'A'; row <= ch; row ++){   //行控制，一共打印多少行
    for (spa = ch-1; spa >= row; spa --)  //打印空格
      printf(" ");
    for (column = 'A'; column <= row; column ++)  //打印包括第一行的左半三角
      printf("%c", column);
    for (clm_ch = row - 1; clm_ch >= 'A'; clm_ch --) //打印除第一行外的右半三角
      printf("%c", clm_ch);
  printf("\n");
  }
  return 0;
}
//解决的时候我分为了几个步骤
//先是打印空格，打印左半,打印右半，最后换行
//用了4个for循环 一层嵌套
//用参数之间的关系来控制三角形的形状和大小
//右半边和左半边的三角其实是一样的，只是我们不需要右半边的第一行所以row -1 
//然后将A到E 变成E-1到A,将结束定位clm_ch >= A,然后从row - 1 倒序打印右半边三角
//

