#include <stdio.h>

int main(void)
{
	int 	nx;
	double 	dx;
	int 	vc[3];

	printf("Address of nx: %p\n", &nx);
	printf("Address of dx: %p\n", &dx);
	printf("Address of vc: %p\n", &vc);
	printf("Address of vc[0]: %p\n", &vc[0]);
	printf("Address of vc[1]: %p\n", &vc[1]);
	printf("Address of vc[2]: %p\n", &vc[2]);


	printf("Size of int: %u\n", (unsigned int)sizeof(nx));
	printf("Size of double: %u\n", (unsigned int)sizeof(dx));
	return 0;
}
