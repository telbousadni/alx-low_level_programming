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
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);

}
