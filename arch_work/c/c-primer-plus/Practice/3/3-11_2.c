// 提示输入一个ASCLL码值（66）,然后打印相应的字符
//
#include <stdio.h>

int main (void){



	int i_input = 0;

	printf("Pleas enter a number:_______\b\b\b\b\b\b");

	scanf("%d", &i_input);

	printf("\nThe char of %d is %c\n", i_input, i_input);

	return 0;

	
}
