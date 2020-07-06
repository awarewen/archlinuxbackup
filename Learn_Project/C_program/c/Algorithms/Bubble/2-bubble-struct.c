// 2-bubble-struct.c
// 冒泡排序
// 在1-bubble的基础上增加了结构
//
#include <stdio.h>

#define MAX 100
#define NAMELEN 20
struct sort {
  char name[NAMELEN];
  int num;
};

int main (void){

  int index, count, need_sort;
  struct sort sort_core[MAX], temp;

  printf("Enter the MAX sort(MAX 100): ");
  scanf (" %d", &need_sort);

  for (count = 0; count < need_sort; count++){
    scanf (" %s %d", sort_core[count].name, &sort_core[count].num);
  }

  for (count = 0; count < need_sort; count++){
    for (index = 0; index < need_sort; index++){
      if (sort_core[count].num < sort_core[index].num){
        temp = sort_core[count];
        sort_core[count] = sort_core[index]; 
        sort_core[index] = temp;
      }
    }
  }
  printf(" 结果：\n");

  for (count = 0; count < need_sort; count++)
    printf("%s %d \n", sort_core[count].name, sort_core[count].num);
}
