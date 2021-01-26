// 12-14-dyn_arr.c
// 动态分配数组
//
#include <stdio.h>
#include <stdlib.h>

int main (void){

  double * ptd;
  int max;
  int number;
  int i = 0;

  puts ("What is the maximum number of type double entries?");
  //输入最大存储

  if (scanf (" %d", &max) != 1){  //输入错误处理

    puts ("Number not correctly entered -- bye.");
    exit (EXIT_FAILURE);   //程序异常退出
  }

  ptd = (double *) malloc (max * sizeof (double));

  if (ptd == NULL){    // malloc 内存分配处理

    puts ("Memory allocation failed. Goodbye.");
    exit (EXIT_FAILURE); //异常退出
  }

  puts ("Enter the values (q to quit) :");

  while (i < max && scanf (" %lf", &ptd[i]) == 1)
    ++i;          //进行读取max次,i++
  printf("Here are your %d entries:\n", number = i); //将 i 的值给 number 为了复用i
  for (i = 0; i < number; i++){

    printf("%7.2f ", ptd[i]);
    if (i % 7 == 6){ //控制格式 一行超过7个换行
      putchar ('\n');
    }
  }

  if (i % 7 != 0)    //最后一行不满7个换行
    putchar ('\n');
  
  puts ("Done.");
  free (ptd);

  return 0;
}
