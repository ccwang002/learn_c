#include <stdio.h>

int main()
{
	printf("Enter numerical grade: ");
	int grade;
	scanf("%d", &grade);

	int tens_digit = grade / 10;
	printf("Letter grade: ");
	switch (tens_digit) {
		case 10:
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("F\n");
	}
	return 0;
}
