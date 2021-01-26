#include <stdio.h>

int main (void){

  int nums [] = { 1, 2, 9, 5, 3, 4 };

  int * max = nums;
  int * next = nums;

  for (int i = 0; 
      i < (int)(sizeof nums / sizeof (int) ); i++ ){ //sizeof 求出nums 有多少个元素
    // for 遍历

    if ( next [i] > *max ) //比较
      max = & next [i];   //max 指向最大
  }
  
  printf(" max = %d, nums = %d | %zdB\n", *max, (int) (sizeof nums/ sizeof (int) ), sizeof nums);
  
  return 0;
}
