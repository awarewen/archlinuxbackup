/*  
 *  2020-06-30 23:17
 *  @Aware
 *
 *  Demand:
 *  编写一个进制转换的函数
 *  函数有两个参数
 *  第一个为需要转换的数值
 *  第二个为转换为什么进制(2~10)*/
#include <stdio.h>

enum OCT{
  BASE_MIN = 2,
  BASE_MAX = 16,

};

/* 
 * 将输入的数转换为指定进制
 */void Base_Conver(const int *input, const int *base);

/*
 * 清除缓冲
 */void Clear(void);

int main (void){

  int input, base;

  printf("Enter (base:2~10, q to quit): ");

  while ( scanf (" %d %d", &input, &base) == 2){
    Clear();
    if (base < BASE_MIN || base > BASE_MAX){
      fprintf(stderr,"Base err! (base:2~10): \n");
      continue;
    }
    Base_Conver(&input, &base);

    fprintf(stdout, "\nenter next: ");
  }

  return 0;
}

void Base_Conver(const int *input, const int *base){

  int temp = *input;
  if (temp == 0)return;
  else {
    temp = *input / *base;
    Base_Conver(&temp, base);
  }
  if (*base == 16){
    fputc("0123456789ABCDEF"[*input%*base], stdout);
  }else{
    fprintf(stdout, "%d", *input % *base);
  }
}

void Clear(void){
  char ch;
  while ((ch = getchar ())!='\n' && ch !=EOF)continue;
}
