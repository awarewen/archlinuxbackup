/*  
 *  2020-06-23 23:21
 *  @Aware
 *
 *  demand:
 *  编写一个函数，含有三个double参数
 *  将最小放入第一个变量
 *  将中间值放入第二个变量
 *  将最大值放入第三个变量*/
#include <stdio.h>

void sort_num(double *min, double *mid, double *max);

int main (void){

  double min,mid,max;
  min = 2.0;
  mid = 4.0;
  max = 1.5;

  printf("Please enter tree numble(double):");
  //scanf (" %lf %lf %lf", &min, &mid, &max);

  sort_num(&min, &mid, &max);
  printf("min = %.2f mid = %.2lf max = %.2lf\n", min, mid, max);
  return 0;
}

void sort_num (double *min, double *mid, double *max){

  double sort[]= {5.0, 9.0, 8.0, 1.0, 4.0}, temp;
  int len, pos;
  printf("------\n");
  len = sizeof (sort)/sizeof(sort[0]); //获取长度
  for (int i = 0; i < len; i++)printf("%lf ", sort[i]);
  printf("\n");
  /*  
   *  选择排序(小到大)
  for (int i = 0; i < len-1; i++){
    temp = sort[i];
    pos = i;
    for (int j = i+1; j < len; j++){
      if (temp > *(sort+j)){
         temp = sort[j]; 
         pos = j;
      } 
    }
    sort[pos] = sort[i];
    sort[i] = temp;
  }*/

  /*  
   *  冒泡排序(小到大)
  int i , j;
  for (i = 1; i < len; i++){
    for (j = 0; j < len-i; j++){
      if (sort[j]>sort[j+1]){ 
        temp = sort[j];//交换
        sort[j] = sort[j+1];
        sort[j+1] = temp;
      }
    }
  }*/
  

  /*  
   *  交换排序(小j大)
  for (int i = 0; i < len-1; i++){
    for (int j = i+1; j < len && sort[i]>sort[j]; j++){
        temp = sort[j];
        sort[j] = sort[i];
        sort[i] = temp;
    }
  }*/
  
  /*  
   *  直接插入法排序
  for (int i = 0; i < len; i++){
    //  设置一个插入值 
    temp  = sort [i]; //
    pos = i-1;
    while ((pos >= 0) && temp < sort[pos]){//将当前值和上一个值做比较
      sort [pos + 1] = sort [pos];//如果当前值比上一个值小则交换,pos +1 == i
        pos--;
    }
    sort [pos + 1] = temp;
  }*/

  /*  
   *  二分排序 ** 不行
  int left = 0, right = len-1;
  int mid_num = 0.0;
  double mid_sort;
  while (left <= right-1){
    mid_num = left + ((right - left)>>1);
    mid_sort = sort[mid_num];

    if (sort [left] > mid_sort){
      temp = sort[left];
      sort [left] = mid_sort;
      sort [mid_num] = temp;
      left = mid_num;
    }
    if (sort[right] < mid_sort){
      temp = sort[mid_num];
      sort[mid_num] = sort[right];
      sort[right] = temp;
      right = mid_num;
    }
      printf(" %lf %lf %lf %lf %lf\n",sort[0], sort[1], sort[2], sort[3], sort[4]);
  }*/

  /*  
   *  直接插入排序
  int i, j, t;
  for (i =0; i < len; i++){
    t= sort[i];
    for (j = i -1; j >= 0 && t <sort[j]; j--){
      sort [j+1] = sort[j];
    }
    sort[j+1] = t;
  }*/

  /*  
   *  希尔排序，缩小增量排序
{
    int i,j,temp,gap,k;
 for (gap = len / 2; gap > 0; gap /= 2) {  // 步长初始化为数组长度的一半，每次遍历后步长减半,
    	for (i = 0; i < gap; ++i) { // 变量 i 为每次分组的第一个元素下标 
	        for (j = i + gap; j < len; j += gap) { //对步长为gap的元素进行直插排序，当gap为1时，就是直插排序
	            temp = sort[j];  // 备份a[i]的值
	            k = j - gap;  // j初始化为i的前一个元素（与i相差gap长度）
	            while (k >= 0 && sort[k] > temp) {
	                sort[k + gap] = sort[k]; // 将在a[i]前且比tmp的值大的元素向后移动一位
	                k -= gap;
	            }
	            sort[k + gap] = temp; 
	        }
	    }
    }
    *//*希尔2
    for (gap = len>>1; gap > 0; gap>>=1){//步长
      for (i = gap; i < len; i ++){//直插
        temp = sort[i];
        for (j = i -1; j>=0 && temp < sort[j]; j--){
          sort[j+1] = sort[j];
          //sort[j] = temp;
          //
        }
        sort[j+1]=temp;
      }
    } 
}*/

  printf(" %lf %lf %lf %lf %lf\n",sort[0], sort[1], sort[2], sort[3], sort[4]);
  *min = sort[0];
  *mid = sort[1];
  *max = sort[2];
}
