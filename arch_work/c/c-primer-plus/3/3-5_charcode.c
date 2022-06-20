//charcode.c --显示字符的代码编码

#include <stdio.h>

int main(void){


	char ch;

	printf("enter a character.\n");

	scanf("%c", &ch);

	printf("the %c code is %d .", ch, ch);

	return 0;
	

}
