// 4-8_5.c
// 编写一个程序， 提示用户输入以兆每秒位(Mb/s)为单位的下载速度， 
// 和兆字节(MB)的文件大小，计算文件的下载时间
// 
#include <stdio.h>
#define bit 8
#define SPEED (size * bit)/down

int main (void){

  float down, size;

  printf("Please enter download speed and file size: "); 
  scanf (" %f %f", &down, &size);

  printf("AT %.2f megabits per second, a file of %.2f megabytes\n\
      download in %.2f second.", down, size, SPEED);

  return 0;
}
