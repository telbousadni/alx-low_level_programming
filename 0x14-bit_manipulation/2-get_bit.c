#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at given index
 * @n: The number to evaluate.
 * @index: The index of the bit to retrieve, starting from 0.
 *
 * Return: The value of the bit at the specified index
 * or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted_n;

	if (index > 64)
	{
		return (-1);
	}

	shifted_n = n >> index;

	return (shifted_n & 1);
}
