// 7-11.c
//
// - goods unit-price:
// 洋薊artichoke $2.05,
// 甜菜beet $1.15, 
// 胡萝卜carrot $1.09
//
// 在添加运费之前，$100 的订单享有5%的优惠
// 少于5榜(poond)的订单收取$6.5的运费和包装费
// 5～20榜收取$14的运费和包装费
// >20 poond 每poond 增加$0.5
// 
// 要求 requriement：
// cumulative weight
// a :poond of artichoke
// b :poond of beet
// c :poond of carrot
// q :quit
//
//calculation: total price of goods, discount(如果有),freight, packing fee 
//display：goods unti-price, poond, goods price, all goods price, after discount, freight, packing fee, final price 
//
#include <stdio.h>
#include <stdlib.h>/* system("clear"); */
#include <string.h>
#include <ctype.h>

#define QUIT 'q'
// unit-price of goods
#define ARTICHOKE_UNITPRICE 2.05
#define BEET_UNITPRICE      1.15
#define CARROT_UNTIPRICE    1.09

/* other cost
 * - freight and paking fee
 *   @ poond_less_5_       : < 5 poond
 *   @ poond_between_5_20_ : 5~20 poond
 *   @ poond_pass_20_      : 超过20 poond 每榜收费$0.5*/
#define POOND_LESS_5_       6.5
#define POOND_BETWEEN_5_20_ 14
#define POOND_PASS_20       0.5 /* 每poond累加$0.5 */

/* discount
 * @ discoutn_need : 折扣需要100美元的订单
 * @ discount      : 折扣力度*/
#define DISCOUNT_NEED 100
#define DISCOUNT      0.05

/* goods_list
 * # show the goods and unit-price
 */void goods_list(void);

/* 输入选择货品,将所有的字符转换为小写形式
 * @ choice : 存放选择
 * > 返回选择
 */char input_choice_goods(char *choice);

/* 输入货品的榜数
 * @ poond: 存放货品的榜数
 * > 返回榜数
 */int input_poond(int *poond);


/* 计算货品价格总和 
 * # calculation total price of goods
 * @ goods_quantity : 货品数量
 * @ unit_price     : 货品单价
 * > 返回相应的货品总价
 */float calculetion_total_price(const int *goods_quantity, const float* unit_price);

/* calculation the total price after discount
 * @ discount       : 优惠率
 * @ all_goods_price: 所有货品总价
 * > 返回优惠后的所有货品总价
 */float after_discount(const float *discount, const float *all_goods_price);

/* 其他费用
 * @ poond      : 榜数
 * @ other_cast : 其他费用(包括: 运输费，包装费)
 */float add_other_cast(const int *poond, const int *other_cast);

int main (void){
  
  /*
   * @ choice : 选择哪种货品
   * @ poond  : 存储货品的榜数
   * @ : */
  char choice;
  int poond_artichoke, poond_beet, poond_carrot;

  goods_list(); /* 显示菜单#menu */

  /* 输入选择 */
  while (input_choice_goods(&choice) != QUIT){

    system("clear"); /* 清屏 */
    if (choice == 'a')
      printf("input artichoke poond($%.2f): ", ARTICHOKE_UNITPRICE);
    else if (choice == 'b')
      printf("input beet poond($%.2f): ", BEET_UNITPRICE);
    else if (choice == 'c')
      printf("input carrot poond($%.2f): ", CARROT_UNTIPRICE);
    else { printf("Don't know %c! Please Reenter! \n", choice); goods_list(); rewind(stdin); continue; } /*  如果输入不在范围内清空输入流，进入下一次输入 */
    input_poond(&poond);

  }

  return 0;
}

/*
 * 打印菜单*/
void goods_list(void){
  printf("\tGoods list: \n"
         "a) artichke\t$2.05\n"
         "b) beet    \t$1.15\n"
         "c) carrot  \t$1.09\n"
         "q) \tquit\n"
         "---choice goods(q to quit)---\n");
}

/*
 * 输入选择货品*/
char input_choice_goods(char *choice){

  return *choice = tolower(*choice = getchar () ); /* 将所有输入转换为小写形式 */
}

/* 
 * 输入需要的榜数*/
int input_poond(int *poond){
  scanf (" %d", poond);
  return *poond;
}

/*  
 *  计算货品总和*/
float calculation_total_price(const int *goods_quantity, const float *unit_price){

  return *goods_quantity * *unit_price;
}

/*  
 *  计算优惠后的货品总价*/
float after_discount(const float *discount, const float * all_goods_price){

  return *discount * *all_goods_price;
}

/*  
 *  计算货品的运输费 & 包装费*/
float add_other_cast(const int *poond, const int *other_cast){

  return *poond * *other_cast;
}
