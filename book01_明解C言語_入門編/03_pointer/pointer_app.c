#include <stdio.h>

void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("Input two integers");
	printf("Int A: "); 	scanf("%d", &na);
	printf("Int B: "); 	scanf("%d", &nb);

	sum_diff(na, nb, &wa, &sa);
	printf("A + B = %d, |A - B| = %d\n", wa, sa);

	return 0;
}
