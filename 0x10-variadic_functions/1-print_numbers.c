#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers then followed by a new line
 * @separator: The string separating numbers.
 * @n: number of arguments input to the function.
 * @...: numbers to print.
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i;
	va_list pm;

	va_start(pm, n);

	while (i < n)
	{
		printf("%d", va_arg(pm, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(pm);
}
