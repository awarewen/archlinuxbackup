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
#define BACK 'b'
#define SHOW 'S'
#define NEXT 'n'
// unit-price of goods
#define ARTICHOKE_UNITPRICE 2.05
#define BEET_UNITPRICE      1.15
#define CARROT_UNTIPRICE    1.09

/* other cost
 * - freight and paking fee
 *   @ poond_less_5_       : < 5 poond
 *   @ poond_between_5_20_ : 5~20 poond
 *   @ poond_pass_20_      : 超过20 poond 在收取￥14的基础上多出的每榜收费$0.5*/
#define POOND_LESS_5_       6.5
#define POOND_BETWEEN_5_20_ 14
#define POOND_PASS_20_       0.5 /* 每poond累加$0.5 */
#define POOND_MIN 5
#define POOND_MAX 20

/* discount
 * @ discoutn_need : 折扣需要100美元的订单
 * @ discount      : 折扣力度*/
#define DISCOUNT_NEED 100
#define DISCOUNT      0.05

/* goods_list
 * # show the goods and unit-price
 */void Goods_List(void);

/* 输入选择货品,将所有的字符转换为小写形式
 * @ choice : 存放选择
 * > 返回选择
 */char Input_Choice_Goods(char *choice);

/* 输入货品的榜数
 * @ poond: 存放货品的榜数
 * > 返回榜数
 */int Input_Poond(int *poond);


/* 计算货品价格总和
 * # calculation total price of goods
 * @ goods_quantity : 货品数量
 * @ unit_price     : 货品单价
 * > 返回相应的货品总价
 */float Calculation_Total_Price(const int *goods_quantity, float unit_price);

/* calculation the total price after discount
 * @ discount       : 优惠率
 * @ all_goods_price: 所有货品总价
 * > 返回优惠后的所有货品总价
 */float After_Discount(float discount, const float *all_goods_price);

/* 其他费用
 * @ poond      : 榜数
 * @ other_cast : 其他费用(包括: 运输费，包装费)
 */float Add_Other_Cast(const int *poond);

/* 清理输入流
 */void Clear_Line(void);

int main (void){

  /*
   * @ choice : 选择哪种货品
   * */
  char choice = '\0';


  while (choice != QUIT){

    /* 放在循环内部的用处是用户选择继续进行输入时，将之前的数据清0
     * @ poond  : 存储货品的榜数
     * @ price  : 存储单个货品的总价
     * @ all_goods_price : 所有选择的货品总价 
     * @ after_discount  : 存储折扣后的总价
     * @ other_cast      : 存储其他的费用
     * @ all_price_add_other_cast : 添加其他费用后的总价*/
    int poond_artichoke = 0, /* poond */
        poond_beet   = 0,
        poond_carrot = 0,
        all_poond    = 0;
    float artichoke_total_price = 0.0, /* price */
        beet_total_price   = 0.0,
        carrot_total_price = 0.0,//
        all_goods_price    = 0.0,
        after_discount     = 0.0,
        other_cast         = 0.0,
        all_price_add_other_cast = 0.0;


    system("clear");
    Goods_List(); /* 显示菜单#menu */

   /* 输入选择 */
  while (Input_Choice_Goods(&choice)!= QUIT && choice != NEXT){
    //rewind(stdin);
    system("clear"); /* 清屏 */

    switch(choice){

      case 'a':/* artichoke */
        printf("input artichoke poond($%.2f b to get back): ", ARTICHOKE_UNITPRICE);
        while (Input_Poond(&poond_artichoke) != BACK){
          artichoke_total_price += Calculation_Total_Price(&poond_artichoke, ARTICHOKE_UNITPRICE);
          printf("%d poond input \n", poond_artichoke);
        }
        break;

      case 'b':/* beet */
        printf("input beet poond($%.2f b to get back): ", BEET_UNITPRICE);
        while (Input_Poond(&poond_beet) != BACK){
          beet_total_price += Calculation_Total_Price(&poond_beet, BEET_UNITPRICE);
        }
        break;

      case 'c':/* carrot */
        printf("input carrot poond($%.2f): ", CARROT_UNTIPRICE);
        while(Input_Poond(&poond_carrot) != BACK){
          carrot_total_price += Calculation_Total_Price(&poond_carrot, CARROT_UNTIPRICE);
        }
        carrot_total_price = Calculation_Total_Price(&poond_carrot, CARROT_UNTIPRICE);
        break;

      case 's':/* show */

        /* 计算总价 */
        all_goods_price = artichoke_total_price + beet_total_price + carrot_total_price;
        /* 计算总榜数 */
        all_poond = poond_artichoke + poond_beet + poond_carrot;
        /* 如果总价大于等于100计算优惠后的总价 */
        if(all_goods_price >= DISCOUNT_NEED)
        after_discount = After_Discount(DISCOUNT, &all_goods_price);
        /* 加上包装费 */
        other_cast = Add_Other_Cast(&all_poond);
        all_price_add_other_cast = all_goods_price + other_cast;
        /* 显示订单信息 */
        system("clear");
        printf("\t-Goods list-\n");
        printf("1) 购买的蔬菜种类信息: \n");
        if (poond_artichoke != 0){ printf("artichoke %d poond, total price %.2f\n", poond_artichoke, artichoke_total_price); }
        if (poond_beet != 0){      printf("beet      %d poond, total price %.2f\n", poond_beet, beet_total_price);      }
        if (poond_carrot != 0){    printf("carrot    %d poond, total price %.2f\n", poond_carrot, carrot_total_price);    }
        printf("2) 一共是: %d poond, $%.2f\n", all_poond, all_goods_price);
        printf("3) 优惠  : %.1f%%, 优惠了 $%.2f\n", DISCOUNT*100, after_discount);
        printf("4) 包装费: %.2f\n", other_cast);
        printf("你总共需要支付 $%.2f , ", all_price_add_other_cast); 
        printf("输入任意字符继续\n");
        Clear_Line();
        break;

      default:
        Goods_List();
        printf("Don't know %c! Please Reenter! : ", choice);
        Clear_Line();
        continue;
    }

    system("clear");
    Goods_List();
  }
}

  return 0;
}

/*
 * 打印菜单*/
void Goods_List(void){
  printf("\t   Goods list: \n"
         "a) artichke\t$2.05\n"
         "b) beet    \t$1.15\n"
         "c) carrot  \t$1.09\n"
         "s) \tshow the list\n"
         "n) \tnext input\n"
         "q) \t    quit\n"
         "如果总价等于或超过$100将会有优惠\n"
         "\t---choice (q to quit)---\n");
}

/*
 * 输入选择货品*/
char Input_Choice_Goods(char *choice){

  return *choice = tolower(*choice = getchar () ); /* 将所有输入转换为小写形式 */
}

/*
 * 输入需要的榜数*/
int Input_Poond(int *poond){

  int in;
  char ch;
  if( scanf (" %d", &in) == 1){
  return *poond += in;
  }
  else if ( (ch = getchar ()) == 'b' ) return ch;
  else{

    Clear_Line(); 
    return 0;
  } 
}

/*
 *  计算货品总和*/
float Calculation_Total_Price(const int *goods_quantity, float unit_price){

  return *goods_quantity * unit_price;
}

/*
 *  计算优惠后的货品总价*/
float After_Discount(float discount, const float * all_goods_price){

  return discount * *all_goods_price;
}

/*
 *  计算货品的运输费 & 包装费*/
float Add_Other_Cast(const int *poond){

  if (*poond < POOND_MIN)/* 小于5榜收取￥6.5的费用 */
    return POOND_LESS_5_;
  else if (*poond >= POOND_MIN && *poond <= POOND_MAX)/* 在5poond 和 20poond 之间 收取￥14 */
    return POOND_BETWEEN_5_20_;
  else {/* 超过20榜在14的基础上每榜收取0.5的费用 */
    return POOND_BETWEEN_5_20_ + (*poond - POOND_MAX) * POOND_PASS_20_;
  }
}

void Clear_Line (void){

  while ( getchar () != '\n') continue;
}
