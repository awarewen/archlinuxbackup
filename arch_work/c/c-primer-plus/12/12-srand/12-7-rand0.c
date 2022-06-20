// 12-7-rand0.c
// ANSL C 可移植伪随机数算法
//
static unsigned long int next = 1;      //unsigned long int 无符号长整型 等同于 unsigned long 无符号长

unsigned int rand0 (void){

/* 生成伪随机数的可移植算法 */

  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65536) % 32768;
}
