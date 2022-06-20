// 1-bucket sort
// 数组实现经典桶排序
//
#include <stdio.h>
#define LEN  11
#define LEN2 5

int main (void){

  int bucket[LEN] = {0};
  int temp;
  int index = 0;
  int count = 0;


  for (index  = 0; index < LEN2; index ++,bucket[temp]++)
    scanf (" %d", &temp);//读取
  for (index = LEN-1; index >= 0; index--)//打印
    for (count = 0; count < bucket[index]; count++)//每个数打印几次
      printf(" %d", index);

  return 0;
}

  /*
   for (count = 0; count < LEN; count++)
     for (index = 0; index < 5; index ++)
       if (count == temp[index])//遍历
         bucket[count] += 1;
         */


