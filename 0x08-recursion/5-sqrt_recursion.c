#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion_calculator(n, 1, n));
}
/**
 * _sqrt_recursion_helper - Helper function for _sqrt_recursion.
 * @n: The number to calculate the square root of.
 * @i: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
	int _sqrt_recursion_calculator(int n, int i, int end)
{
	int mid = (i + end) / 2;

	if (i > end)
		return (-1);

	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return (_sqrt_recursion_calculator(n, i, mid - 1));
	else
		return (_sqrt_recursion_calculator(n, mid + 1, end));
}

