// 1-Bubble-sort
// 冒泡排序
// 比较相邻的两个数值，直到遍历所有数据
// 顺序大到小
#include <stdio.h>

#define MAX 100
// 这个算法最多处理100条数据

int main (void){

  int count, index, need_sort;
  int bubble[MAX], temp;

  printf("Enter, how many number need sort(max 100): ");
  scanf (" %d", &need_sort);

  for (count = 0; count < need_sort; count ++){
    scanf (" %d", &bubble[count]);
  }

  for (count = 0; count < need_sort; count++){
    for (index = 0; index < need_sort; index++){
      if (bubble[count] < bubble[index]){
        temp = bubble[count];
        bubble[count]=bubble[index];
        bubble[index]=temp;
      }
    }
  }

/* 
  for (count = 0; count < need_sort; count++)
    printf(" %d", bubble[count]);//小到大
  */
  for (count = need_sort-1; count >= 0; count--)
    printf(" %d", bubble[count]);//大到小

  return 0;
}
