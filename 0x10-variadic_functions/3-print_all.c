#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: a list of types of arguments that can be passed to a function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int fl;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	while (format != NULL && format[i] != '\0')
	{
	switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
	sep = ", ";
	i++;
	}

	printf("\n");
	va_end(list);
}
