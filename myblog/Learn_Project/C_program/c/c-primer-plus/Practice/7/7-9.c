// 7-9.c
// 编写一个程序接受正整数输入
// 然后显示所有小于或等于该数的素数
//
#include <stdio.h>
#include <math.h>

/* 二分开方 */
double BisectionSqrt(double a){
  double L= 0, R = a, mid, eps = 0.001;
  mid = L+((R-L)/2);
  do {
    if(mid*mid > a) R=mid; //如果mid大于a则将R右界限设mid
    else L=mid;
    mid = (R+L)/2;
  }while ((R-L)>eps);
  return (int)mid;
}

int main (void){

  int input, bo = 0;

  printf("Please enter a number(> 0): \n");
  //scanf (" %d", &input);
  //double b = 100.0;

  for (input = 3; input < 10; input++){
    for (int i = 2; i <= BisectionSqrt(input); i++){ // 2 ~ 根号n
      if (input % i == 0){
        bo++;
        break;
      }
    } 
    if (!bo)  printf("-primer %d | \n\n", input); 
    bo = 0;
  }

   double x,y,i;
    int a,b;
    x = 3.0;
    do{
        i = 2.0;
        do{
            y = x / i;
            a = (int)y;
            if(y != a)//用于判断是否为整数
            {
                if(i == x - 1)//当i==x-1说明2~x之间没有数能被整除
                {
                    b = (int)x;
                    printf("%d\n",b);
                }
            }
            i++;
        }while(y != a);//无法整除
        x++;
    }while(x <= 10.0);//3到10000的素数
  return 0; 
}

