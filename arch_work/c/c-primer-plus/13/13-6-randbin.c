// 13-6-randbin.c
// i/o随机访问
//
#include <stdio.h>
#include <stdlib.h>

#define ARSIZE 1000 // MAX size

int main(void){
  
  double numbers [ARSIZE];
  double value;
  const char * file = "numbers.dat"; // file name
  int i;
  long pos;
  FILE * iofile;

  // 创建一组double 类型的值
  for (i = 0; i < ARSIZE; i++) {
    numbers [i] = 100.0 * i + 1.0 / (i + 1);
  }

  // 二进制新建numbers.dat 文件
  if ((iofile = fopen(file, "wb")) == NULL){  
    fprintf(stderr, "Could not open %s for output.\n", file);
    exit (EXIT_FAILURE);
  }

  // 以二进制模式把数组写入文件,操作完文件将其关闭
  fwrite(numbers, sizeof(double), ARSIZE, iofile); fclose (iofile);
  
  //以只读模式打开
  if ((iofile = fopen (file, "rb")) == NULL){

    fprintf(stderr, "Could not open %s for random access.\n", file);
    exit (EXIT_FAILURE);
  }
  
  printf("Enter an index in the range 0-%d.\n", ARSIZE-1);

  while (scanf ("%d" ,&i) == 1 && i >= 0 && i < ARSIZE){
    //定位
    pos = (long) i * sizeof (double);
    fseek (iofile, pos, SEEK_SET);    // 从文件开始处将文件指针指向pos偏移量的位置
    fread (&value, sizeof (double), 1, iofile);
    printf("The value there is %f.\n", value);
    printf("Next index (out of range to quit) :\n");
  }

  fclose (iofile);
  puts ("Bye!");

  return 0;
}
