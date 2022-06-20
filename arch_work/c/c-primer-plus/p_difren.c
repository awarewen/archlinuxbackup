//两个指针的差值
//
#include <stdio.h>

int main (void){

  int *p,*p1; //两个指针
  int ar[5] = { 1, 2, 3, 4, 5 }; //
  
  p = &ar[0]; // 将ar数组首元素地址给p指针
  p1 = &ar[4]; // 将ar数组最后一个元素地址给p1

  printf("===ar数组中每一个元素的地址===\n");

  for (int i = 0; i < 5; i++)       //循环打印ar每个元素的地址
    printf("ar[%d]%p\n", i, &ar[i]);

  printf("===int 类型 ：占%zd字节===\n", sizeof (int));
  // 打印我计算机中一个int类型变量的字节
  //

  printf("p 指向的地址：%p\np1 指向的地址：%p\n", p, p1);
  // p 指向首元素，p中的地址和ar[0]相同
  // p1 指向ar[4]
  //


  printf("\np1-p，两个指针的差值为%td\n", p1-p);
  // p 和 p1 之间相差了多少个元素
  // c标准中用%td 来打印两个指针相减的差值
  //

  return 0;
}
