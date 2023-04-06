#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @t: the string to be printed
 */
void _print_rev_recursion(char *t)
{
	while (*t != '\n')
	{
		_print_rev_recursion(t + 1);
		_putchar(*t);
	}
}
