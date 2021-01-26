/*  
 *  2020-07-16
 *  @Aware
 *
 *  Demand:
 *  */
#include <stdio.h>

void num (int i , int b);//声明一个函数

/* 在所有的块外面声明一个全局变量 */
int count = 0;//声明一个全局变量

int main (void){ //main块开始
  /* main块中同名变量num*/
  int num = 10; //局部变量num

  /* 块和复合语句 */
  { //块1开始
    int num = 0;//嵌套局部变量num

    for (int i = 0; i < 5; i++){
      printf("num = %d\n", num++);

      count ++;//递增全局变量
      printf("%d ", count);
    }
  }
  printf("============\n");
  printf("main num %d\n", num);
  printf("Count %d\n", count);

  return 0;
}

void num (int c, int d){

  c = 1, d =2;
}
