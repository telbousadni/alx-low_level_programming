#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string we'll be measuring.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length +  _strlen_recursion(s + 1);
	}

	return (length);
}

