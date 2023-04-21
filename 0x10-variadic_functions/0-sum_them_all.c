#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @...: a variable number of parameters.
 * @n: the number of passed parameters in the function sum_them_all
 * pm : all parameters in which we'll calculate the sum of.
 *
 * Return: 0 if n == 0, the sum if else than 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pm;
	unsigned int i, sum;

	sum = 0;

	va_start(pm, n);

	while (i < n)
	{
		sum = sum + va_arg(pm, int);
		i++;
	}
	va_end(pm);

	return (sum);
}
