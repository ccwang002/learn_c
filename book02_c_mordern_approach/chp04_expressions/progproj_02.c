#include <stdio.h>

int main(void)
{
    int input_n;
    printf("Enter a three-digit number: ");
    scanf("%d", &input_n);

    printf("The reverseal is: %d%d%d\n",
            input_n % 10, (input_n / 10) % 10, input_n / 100);
}
