//
//
#include <stdio.h>

int main (void){

  int a = 1;
  float b = 2;
  int * pa;
  float * pb;

  pa = &a;
  pb = &b;

  printf("int 和 float 在内存中所占的字节数\n");
  printf("size int %zd, size float %zd\n", sizeof (int), sizeof (float));

  printf("a 和 b 中的值和所在的地址\n");
  printf("a = %d &%10p, b = %f &%10p\n\n", a, &a, b, &b);

  printf("pa pb 中储存的地址\n");
  printf("pa = %10p, pb = %10p\n\n", pa, pb);

  printf("pa 和 pb 两个指针自身的地址\n");
  printf("&pa = %10p, &pb = %10p\n\n", &pa, &pb);
  
  printf("解引用地址中的值\n");
  printf("*pa = %d, *pb = %f\n\n", *pa, *pb);

  printf("pa pb 中的地址＋１\n");
  printf("pa + 1 = %10p, pb + 1 = %10p\n\n", pa + 1, pb + 1);

  printf("pa pb 中的值＋１\n");
  printf("*pa + 1 = %d, *pb + 1 = %f\n\n", *pa + 1, *pb + 1);

  return 0;
}
