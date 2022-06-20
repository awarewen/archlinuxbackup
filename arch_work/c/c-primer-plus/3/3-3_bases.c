// bases.c-- 以十进制，八进制，十六进制 分别打印十进制数100

#include <stdio.h>

int main(void){


	int num = 100;


	printf("dec = %d, octal = %o, hex = %x | %d", num, num, num, num);
	printf("\ndec = %#d, octal = %#o, hex = %#x | %#d", num, num, num, num);


	return 0;
}
