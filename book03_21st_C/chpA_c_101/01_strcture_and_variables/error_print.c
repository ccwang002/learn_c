#include <stdio.h>

void error_print(FILE *ef, int error_code, char *msg){
	fprintf(ef, "Error #%i occurred: %s.\n", error_code, msg);
}

int main(void)
{
	FILE *error_file = fopen("example_error_file", "w");
	error_print(error_file, 37, "Out of karma");
	return 0;
}
