// 6-16_13.c
// 创建一个包含8个元素的int类型数组
// 使用for分别将数组元素设置为2的前8次幂
//
// 使用do while显示数组元素的值 ×
//
#include <stdio.h>

#define LEN 8

/*
 * power : 求一个数n次幂
 *
 * @ save: 保存结果
 * @ n   : 幂的底数
 * @ m   : 幂的指数
 * @ num : 求幂次数，为0不求幂，为1,求1次
 * - 当只求一次幂将其存放到一个变量中，num为1
 * - 返回求幂最后结果，若是多次求幂则返回所有幂的和
 * */
int power (int *save, int n, int m, int num);
//-

int main (void){

  int ar [LEN] = {1};
  int a;

/*
 * 求2的LEN次幂
 * 将结果保存到ar数组中
 * */
  power (ar, 2, 8, 8);
  power (&a, 2, 8, 1);
  printf(" a = %d\n", a);

  for (int i = 0; i < LEN; i++){
    //打印结果

    printf("%d ", ar[i]);
  }
  
  return 0;
}

int power (int *save, int m, int n, int num){

  int sum = 0;
  int pwr = 1, j;

  for (int i = 0; i < num; i++){//求num次幂

    for (j = 0, pwr = 1; j < (num > 1? i:n); j++){//n为指数
     pwr *=m; //m的n次方幂
    }

    save[i] = pwr;
    sum += pwr; //幂和
  }

  return sum;
}
