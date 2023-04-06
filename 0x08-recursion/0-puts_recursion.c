#include "main.h"
/**
 * _puts_recursion - function like puts()
 * @t: input
 * Return: Always 0
 */
void _puts_recursion(char *t)
{
	if (*t)
	{
		_putchar(*t);
		_puts_recursion(t + 1);
	}
	else
		_putchar('\n');
}
