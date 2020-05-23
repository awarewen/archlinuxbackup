// 
// 理解函数的使用规则,函数原型和函数定义的联系
//
// 浮点数运算
// 显示的强制转换为整型时的舍入问题
// 和隐式转换时小数舍入的区别
//
// printf 和scanf的返回值
////////////////////////

#include <stdio.h>

//
/////////////////
#define V1 1.54 // 预处理
#define V2 2.46 // 在程序编译时将除了字符串以外的V1,V2替换成1.0,2.2
/////////////////

//--------------------------//
int fun (float , float n); //int 代表函数的返回值的类型, 要跟函数定义一样
  // 这里是函数原型
 // 函数原型的形参声明可以省略变量名不会影响其他代码
// 但是参数的数量和类型要跟函数定义的函数头匹配

 //
//========================================================================
int main (void){ // int main (int argc, char *argv[]) 两种符合标准的main
                //  void main () 现在的标准也支持但是迟早会淘汰 

    //-c99开始变量可以在函数块中 和 变量使用的前面 的任意位置
   //--将value2放在第14行声明
  ////////////////////////
  float value1;//定义和赋值分开了
  value1 = V1;  //define 替换V1为1.0

  int scanf_b = 0; //存储printf和scanf的返回值
  int print_b = 0;// 变量声明并初始化
  //////////////

 //
//------打印预设的value1和value2的值
  printf("1.打印value1,value2 预设值(观察四舍五入)\n");
  printf("%7s %7s\n", "value1", "vlaue2"); // %s 读取后面的字符串,右对齐
 
//>>> value2 变量声明
  float value2 = V2;//宏替换
  //---
  printf("%6.2f + %-6.2f\n", value1, value2);//-value2使用前声明
  printf("\n打印经过强制转换的值,注意转换值和转换和的区别\n");//这里对两个变量转换和对值转换的差别
  printf("(int)%d + (int)%d = %d\n\n", (int)value1, (int)value2,(int)value1 + (int)value2);//-value2使用前声明
  printf("%6.2f + %-6.2f = (int)%d\n", value1, value2, (int)(value1 + value2));

  printf("\n2.打印未经过强制转换的value1和value2的和,保留两位小数部分\n");
  printf("%6.2f + %-6.2f = %.2f\n", value1, value2, value1 + value2);
//=======

   //
  // 获取scanf和printf的返回值
  printf("\n3.输入两个浮点数分别都要有一个小数以上\n");
  scanf_b = scanf (" %f %f", &value1, &value2);//-普通变量要记得加上&取址符
  printf("\n4.注意这里只打印一位小数，和你输入的区别，浮点数会四舍五入\n");
  print_b = printf("value1");//printf的返回值不会将\n和\0计算在内
  printf(" = %.1f, value2 = %.1f\n",
                    value1, value2);//--此处换行要在逗号后面
  // 打印返回值
  printf("\n5.打印scanf和printf两个函数的返回值\n");
  printf("scanf 输入了 %d项, printf输出了 %d个字符\n", scanf_b, print_b);
  printf("\n6.现在打印经过强制转换后的结果\n");
//=======

  // 调用函数 求value1+value2
  int fun_back;//-存储fun函数返回值
  fun_back = fun (value1, value2); //fun返回一个int类型的值
                                  //调用函数传参的参数类型
                                 // 需要和函数原型中参数列表中的类型一样
  printf("(int)%2d + (int)%2d = %d\n", (int)value1, (int)value2, fun_back);//fun_back 为调用函数的返回值
  printf("%6.2f + %6.2f = (int)%d\n", value1, value2, (int)(value1+value2) ); //这里只对结果进行强制转换

  printf("Done!\n");

  return 0;
}
//=========================================================================

 //--函数定义
/*//////////////////////////////////
- 函数头和函数原型
除了参数列表的变量名其他包括参数的数量都要相同
*/
int fun (float vl1, float vl2){//-花括号左边是函数头
////////-函数定义中的参数声明必须完整，类型名 变量名(不可省略)
     //-区分函数原型参数中的变量声明
  
  int temp;//属于fun函数的私有变量
  //////////

     //temp为int类型
    // vl1和vl2为float类型
   //  我们需要结果为整型数
  temp = (int) vl1 + (int) vl2;
  //- 浮点数转整型会丢失小数部分
  //- vl1 = 1.0 变为 1 
  //- vl2 = 2.2 变为 2

  return temp;//返回值和函数返回类型相匹配
}
