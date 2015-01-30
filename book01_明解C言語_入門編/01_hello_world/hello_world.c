#include <stdio.h>


void op_left(void){

	int my_int = 9527;
	printf("%d >> 1 = %d", my_int, my_int >> 1);
}

int main(void)
{
	puts("Hello World");

	puts("============");
	puts("Test operator: >>");

	op_left();
	
	return 0;
}
