/*
 * 猜测用户的数字
 * 询问用户猜大了还是小了或是猜对了*/
#include <stdio.h>
#include <stdlib.h>

/*
 * 范围100*/
#define MAX 100
#define NEED 4

int main (void){


  int left, right;
  int mid;

  int ok;

  left = 0;
  right = MAX;

  while (left<=right){

    mid = left + ((right - left)  >> 1);
    printf("is %d\n", mid);
    scanf (" %d", &ok);

    if (ok == 1){ //小于
      left = mid + 1;
      printf("小 %d\n", left);
    }else if (ok == 2){ //大于
      right = mid - 1;
      printf("大 %d\n", right);
    }else break;
  }

  printf("Find! is %d", mid);
  return 0;
}
