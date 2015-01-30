#include <stdio.h>

void string_size(void);

void string_size()
{
	printf("sizeof(\"123\") = %u\n", 	(unsigned)sizeof("123"));
	printf("sizeof(\"\") = %u\n", 		(unsigned)sizeof(""));
}

void string_array()
{
	char str[4];

	str[0] = 'A';
	str[1] = 'B'; 
	str[2] = 'C';
	str[3] = '\0';

	printf("字串 str 為 %s。\n", str);
}


int main(void)
{
	string_size();
	string_array();
	return 0;
}
