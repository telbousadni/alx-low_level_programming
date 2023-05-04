#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts decimal to binary without / or %
 * @n: decimal number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int nshift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, nshift = 0; (temp >>= 1) > 0; nshift++)
		;
	for (; nshift >= 0; nshift--)
	{
		if ((n >> nshifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
