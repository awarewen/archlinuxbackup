//hotel.h
//符号常量和hotel.c中所有的函数原型
//
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "******************************"

//show choice menu
int menu (void);

//back days
int getnights (void);

// price
void showprice (double rate, int nights);


