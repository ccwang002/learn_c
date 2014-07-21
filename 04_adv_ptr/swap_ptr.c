#include <stdio.h>


void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}


int main(void)
{
	int a = 10, b = 5;
	swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return 0;
}
