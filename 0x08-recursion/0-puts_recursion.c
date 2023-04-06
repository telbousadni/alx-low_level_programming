#include "main.h"
/**
 * the function _puts_recursion that prints a string
 * @t: input
 * Return: Always 0
 */
void _puts_recursion(char *t)
{
	if (*t != '\0')
	{
		_putchar(*t);
		_puts_recursion(t + 1);
	}
	else
		_putchar('\n');
}
