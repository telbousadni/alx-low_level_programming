#include "main.h"
#include <stdio.h>

/**
 * print_binary - from n to bytes
 *
 * @n: number to be formatted into bytes
 */
void print_binary(unsigned long int n)
{
	int zeros, i, num_bits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	zeros = 1;
	num_bits = sizeof(unsigned long int) * 8;
	for (i = num_bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			zeros = 0;
			_putchar('1');
		}
		else if (!zeros)
		{
			_putchar('0');
		}
	}
}
