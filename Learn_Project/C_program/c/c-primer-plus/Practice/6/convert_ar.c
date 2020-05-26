// 有一个100个元素的数组，随机生成数组元素值在0～99之间,
// 以m为中点交换 将m 后面的n个元素和m-1元素做交换(包括m元素)
// 要求 m随机生成 n用户输入表示m后面需要交换的元素数量
// m n不超出数组范围, m 和 n大于等于0
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 100个元素
#define N 100

/**
 * set - 随机生成0～99的整数
 * @ m - int* 指针类型
 * @ num - 要生成几个随机值,0就不生成
 * @ range - 随机值生成的范围,0～range-1
 * 返回一个int类型
 * */
int sed(int *restrict m, const int num, const int range);
//-

/**
*swap - 交换数组元素
*@ ar - 需要交换的值
*@ start  - 开始交换点
*@ end  - 交换结尾点
* 返回交换了几个数据
*/
int swap(int *restrict ar, int start, int end);
//-

/**
 *show - 打印输出ar
 *@ ar - 需要打印的值
 *@ num - 需要打印的数量
 * 无返回值
 */
void show(int *restrict ar, const int num);
//-

int main (void){

/*  
 *@ m - 定位交换开始的点
 *@ n - 由用户输入m到n交换范围
 *@ temp - 临时存储
 *@ ar[N] - N 默认为100
*/
  int m, n;
  int ar[N];
  //-

/*
 * 1. 输入n的值，确定交换的范围
 *    n+m <= 100
 *    */
  printf("Please enter n : ");
  scanf (" %d", &n);

/*
 * 2. 调用sed函数
 *    随机生成m的值，和ar数组每个元素的值
 * @  三个参数
 *    1.存储地址
 *    2.随机数生成的个数
 *    3.随机数生成的范围
 * -  返回一个int类型,为生成的随机数个数
 *    */
  sed (&m, 1, 100-n);  //生成1个在0～99之间的随机定位点
                      //将m最大值设置为100-n这样就不会数组越界超出范围
  printf("随机生成的m为:");
  show (&m, 1);    //打印m值
  sed (ar, N, N); //生成100个在0~99范围的随机值
  printf("随机生成的数组为:\n");
  show (ar, N);  //打印ar的值

/*
 * 3. 进行交换
 *    */
  swap (ar, m, n);

/*
 * 4. 打印交换后的数组
 * */
  printf("交换后的数组为:\n");
  show (ar, N);
  printf("Done!\n");

  return 0;
}

int sed (int *restrict m, const int num, const int range){

  int i;

  srand(time(0));//利用time函数作为种子生成伪随机数

  for (i = 0; i < num; i++){//生成多少个随机数

    int prev = 0;

    prev = rand()%range;
    m[i] = rand()%range;

    while (prev == m[i]){

      m[i] = rand()%range;//取0～99范围的随机数
    }
  }

  return i;
}

int swap (int *restrict ar, int start, int end){

  int temp, count = 0;
  while (start > end){

    temp = ar[count];
    ar[count] = ar[start+1];
    ar[start+1] = temp;

    start--;
    count++;//计数并偏移到下一个需要交换的位置
  }

  return count;
}

void show (int *restrict ar, const int num){

  for (int i = 0; i < num; i++){

    if ((i % 10) == 0)
      printf("\n");
    printf("%d ", ar[i]);
  }

  printf("\n");
}
