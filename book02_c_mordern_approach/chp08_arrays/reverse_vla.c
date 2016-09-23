#include <stdio.h>

int main(void)
{
	printf("How many numbers do you want to reverse? ");
	int n;
	scanf("%d", &n);

	int a[n];  // C99 only, initiate a array of variable length

	printf("Enter %d numbers: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("In reverse order:");
	for (int i = n - 1; i >= 0; i--) {
		printf(" %d", a[i]);
	}
	printf("\n");

	return 0;
}
